// Crash reporter (see lcs_crash.hpp). Every line it prints starts with "[lcs-crash]", so a player's log can be
// searched for it. Stacks are unwound from the faulting context with the OS unwinder, then named through DbgHelp.

#include "lcs_crash.hpp"

#if defined(_WIN32)
#include "lcs_host_symbols.hpp"
#endif

#include <algorithm>
#include <atomic>
#include <chrono>
#include <csignal>
#include <cstdarg>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <exception>
#include <mutex>
#include <typeinfo>

namespace lcs {
namespace {

constexpr char kTag[] = "[lcs-crash] ";
constexpr unsigned kExitCode = 3;
constexpr unsigned kFirstChanceFaultCap = 8;
constexpr unsigned kFirstChanceThrowCap = 64;
constexpr int kFatalFrames = 64;
constexpr int kFirstChanceFrames = 24;

thread_local int t_fatal_depth = 0;
thread_local bool t_in_first_chance = false;
std::atomic<bool> g_trace_throws{false};
std::atomic<unsigned> g_first_chance_reports{0};

// One tagged line on stderr, written with a single call so lines from different threads don't interleave.
void say(const char *format, ...) noexcept {
    char line[1536];
    std::size_t used = sizeof kTag - 1;
    std::memcpy(line, kTag, used);
    va_list args;
    va_start(args, format);
    const int written = std::vsnprintf(line + used, sizeof line - used - 1, format, args);
    va_end(args);
    if (written < 0) return;
    used += std::min<std::size_t>(static_cast<std::size_t>(written), sizeof line - used - 2);
    line[used++] = '\n';
    line[used] = '\0';
    std::fputs(line, stderr);
}

// Serialises whole reports between threads. A report goes ahead anyway if the lock is stuck.
std::recursive_timed_mutex &report_mutex() {
    static std::recursive_timed_mutex mutex;
    return mutex;
}

class ReportLock {
public:
    ReportLock() : locked_(report_mutex().try_lock_for(std::chrono::seconds(3))) {}
    ~ReportLock() {
        if (locked_) report_mutex().unlock();
    }
    ReportLock(const ReportLock &) = delete;
    ReportLock &operator=(const ReportLock &) = delete;

private:
    bool locked_;
};

bool env_flag(const char *name) {
    const char *value = std::getenv(name);
    return value != nullptr && value[0] != '\0' && !(value[0] == '0' && value[1] == '\0');
}

[[noreturn]] void end_process(unsigned code) noexcept {
    std::fflush(stdout);
    std::fflush(stderr);
#if defined(_WIN32)
    TerminateProcess(GetCurrentProcess(), code);
#endif
    std::_Exit(static_cast<int>(code));
}

// False when this thread is already inside a fatal report (the reporter itself crashed).
bool enter_fatal(const char *what) noexcept {
    if (++t_fatal_depth > 1) {
        say("%s while a crash report was being written; stopping here", what);
        return false;
    }
    return true;
}

[[noreturn]] void finish_fatal(unsigned code) noexcept {
    say("======== end of crash report ========");
    end_process(code);
}

#if defined(_WIN32)

constexpr DWORD kMsvcCppException = 0xE06D7363u;     // thrown by the MSVC C++ runtime
constexpr DWORD kItaniumCppException = 0x20474343u;  // thrown by libunwind / libgcc on Windows ("GCC ")

struct StackRange {
    std::uintptr_t low = 0;
    std::uintptr_t high = 0;
};

StackRange current_stack_range() noexcept {
    ULONG_PTR low = 0;
    ULONG_PTR high = 0;
    GetCurrentThreadStackLimits(&low, &high);
    return {low, high};
}

// Walks the stack described by `start` with the OS unwind tables. Reads stay inside `stack`, the faulting thread's
// stack, so a damaged stack ends the walk instead of faulting again.
int unwind_context(const CONTEXT &start, StackRange stack, std::uintptr_t *out, int capacity) noexcept {
    int count = 0;
    CONTEXT context = start;
#if defined(_M_X64) || defined(__x86_64__)
    while (count < capacity) {
        const DWORD64 ip = context.Rip;
        if (ip == 0) break;
        out[count++] = static_cast<std::uintptr_t>(ip);
        const DWORD64 sp = context.Rsp;
        if (sp < stack.low || sp + 8 > stack.high) break;
        DWORD64 image_base = 0;
        PRUNTIME_FUNCTION function = RtlLookupFunctionEntry(ip, &image_base, nullptr);
        if (function == nullptr) {
            // A leaf function: the return address is on top of the stack.
            context.Rip = *reinterpret_cast<const DWORD64 *>(static_cast<std::uintptr_t>(sp));
            context.Rsp = sp + 8;
        } else {
            PVOID handler_data = nullptr;
            DWORD64 establisher_frame = 0;
            RtlVirtualUnwind(UNW_FLAG_NHANDLER, image_base, ip, function, &context, &handler_data, &establisher_frame,
                             nullptr);
        }
        if (context.Rsp < sp || (context.Rip == ip && context.Rsp == sp)) break;
    }
#elif defined(_M_ARM64) || defined(__aarch64__)
    while (count < capacity) {
        const DWORD64 ip = context.Pc;
        if (ip == 0) break;
        out[count++] = static_cast<std::uintptr_t>(ip);
        const DWORD64 sp = context.Sp;
        if (sp < stack.low || sp >= stack.high) break;
        DWORD64 image_base = 0;
        PRUNTIME_FUNCTION function = RtlLookupFunctionEntry(ip, &image_base, nullptr);
        if (function == nullptr) {
            context.Pc = context.Lr;
        } else {
            PVOID handler_data = nullptr;
            DWORD64 establisher_frame = 0;
            RtlVirtualUnwind(UNW_FLAG_NHANDLER, image_base, ip, function, &context, &handler_data, &establisher_frame,
                             nullptr);
        }
        if (context.Sp < sp || (context.Pc == ip && context.Sp == sp)) break;
    }
#else
    (void)stack;
    if (capacity > 0 && context.Eip != 0) out[count++] = context.Eip;
#endif
    return count;
}

int capture_current_stack(int skip, std::uintptr_t *out, int capacity) noexcept {
    void *frames[kFatalFrames] = {};
    const int wanted = std::min(capacity, kFatalFrames);
    const int count =
        RtlCaptureStackBackTrace(static_cast<DWORD>(skip + 1), static_cast<DWORD>(wanted), frames, nullptr);
    for (int i = 0; i < count; ++i) out[i] = reinterpret_cast<std::uintptr_t>(frames[i]);
    return count;
}

// "module!function+0x1c  [folder\file.cpp:120]", or "module+0x1234" without symbols, or the bare address.
void print_frame(int index, std::uint64_t address, const symbols::Location &where) noexcept {
    const char *module = where.module[0] != '\0' ? where.module : "?";
    if (where.function[0] != '\0') {
        const auto offset = static_cast<unsigned long long>(address - where.symbol_address);
        if (where.line != 0)
            say("  #%02d %s!%s+0x%llx  [%s:%u]", index, module, where.function, offset, where.file, where.line);
        else
            say("  #%02d %s!%s+0x%llx", index, module, where.function, offset);
    } else if (where.module_base != 0) {
        say("  #%02d %s+0x%llx", index, module, static_cast<unsigned long long>(address - where.module_base));
    } else {
        say("  #%02d 0x%016llx", index, static_cast<unsigned long long>(address));
    }
}

// `first_exact`: frame 0 is the faulting instruction itself. Other frames are return addresses, so their symbol and
// line come from the byte before (the call), which keeps the line on the call rather than the next statement.
void print_stack(const std::uintptr_t *frames, int count, bool first_exact) noexcept {
    symbols::Guard guard(std::chrono::milliseconds(2000));
    symbols::refresh_modules();
    if (count == 0) {
        say("stack: (could not be walked)");
        return;
    }
    say("stack:");
    for (int i = 0; i < count; ++i) {
        const std::uint64_t address = frames[i];
        const std::uint64_t probe = ((i == 0 && first_exact) || address == 0) ? address : address - 1;
        symbols::Location where;
        symbols::locate(probe, where, true);
        print_frame(i, address, where);
    }
}

void say_thread(DWORD thread_id, const char *name) noexcept {
    if (name != nullptr && name[0] != '\0')
        say("thread: %lu \"%s\"", static_cast<unsigned long>(thread_id), name);
    else
        say("thread: %lu (no description)", static_cast<unsigned long>(thread_id));
}

void say_current_thread() noexcept {
    char name[128];
    symbols::thread_description(GetCurrentThread(), name, sizeof name);
    say_thread(GetCurrentThreadId(), name);
}

void print_current_stack(int skip) noexcept {
    std::uintptr_t frames[kFatalFrames];
    const int count = capture_current_stack(skip + 1, frames, kFatalFrames);
    print_stack(frames, count, false);
}

const char *exception_name(DWORD code) noexcept {
    switch (code) {
    case EXCEPTION_ACCESS_VIOLATION: return "access violation";
    case EXCEPTION_ARRAY_BOUNDS_EXCEEDED: return "array bounds exceeded";
    case EXCEPTION_DATATYPE_MISALIGNMENT: return "misaligned data access";
    case EXCEPTION_FLT_DENORMAL_OPERAND: return "floating-point denormal operand";
    case EXCEPTION_FLT_DIVIDE_BY_ZERO: return "floating-point divide by zero";
    case EXCEPTION_FLT_INEXACT_RESULT: return "floating-point inexact result";
    case EXCEPTION_FLT_INVALID_OPERATION: return "floating-point invalid operation";
    case EXCEPTION_FLT_OVERFLOW: return "floating-point overflow";
    case EXCEPTION_FLT_STACK_CHECK: return "floating-point stack check";
    case EXCEPTION_FLT_UNDERFLOW: return "floating-point underflow";
    case EXCEPTION_ILLEGAL_INSTRUCTION: return "illegal instruction";
    case EXCEPTION_IN_PAGE_ERROR: return "in-page error";
    case EXCEPTION_INT_DIVIDE_BY_ZERO: return "integer divide by zero";
    case EXCEPTION_INT_OVERFLOW: return "integer overflow";
    case EXCEPTION_PRIV_INSTRUCTION: return "privileged instruction";
    case EXCEPTION_STACK_OVERFLOW: return "stack overflow";
    case EXCEPTION_BREAKPOINT: return "breakpoint";
    case EXCEPTION_NONCONTINUABLE_EXCEPTION: return "non-continuable exception";
    case 0xC0000374u: return "heap corruption";
    case 0xC0000409u: return "stack buffer overrun";
    case kMsvcCppException: return "C++ exception";
    case kItaniumCppException: return "C++ exception";
    default: return "exception";
    }
}

bool is_hardware_fault(DWORD code) noexcept {
    switch (code) {
    case EXCEPTION_ACCESS_VIOLATION:
    case EXCEPTION_ARRAY_BOUNDS_EXCEEDED:
    case EXCEPTION_DATATYPE_MISALIGNMENT:
    case EXCEPTION_FLT_DENORMAL_OPERAND:
    case EXCEPTION_FLT_DIVIDE_BY_ZERO:
    case EXCEPTION_FLT_INEXACT_RESULT:
    case EXCEPTION_FLT_INVALID_OPERATION:
    case EXCEPTION_FLT_OVERFLOW:
    case EXCEPTION_FLT_STACK_CHECK:
    case EXCEPTION_FLT_UNDERFLOW:
    case EXCEPTION_ILLEGAL_INSTRUCTION:
    case EXCEPTION_IN_PAGE_ERROR:
    case EXCEPTION_INT_DIVIDE_BY_ZERO:
    case EXCEPTION_INT_OVERFLOW:
    case EXCEPTION_PRIV_INSTRUCTION:
    case EXCEPTION_STACK_OVERFLOW:
        return true;
    default:
        return false;
    }
}

bool is_cpp_throw(DWORD code) noexcept {
    return code == kMsvcCppException || code == kItaniumCppException;
}

void describe_exception(const EXCEPTION_RECORD &record) noexcept {
    const DWORD code = record.ExceptionCode;
    say("cause: %s (code 0x%08lX)", exception_name(code), static_cast<unsigned long>(code));
    if ((code == EXCEPTION_ACCESS_VIOLATION || code == EXCEPTION_IN_PAGE_ERROR) && record.NumberParameters >= 2) {
        const ULONG_PTR kind = record.ExceptionInformation[0];
        const char *verb = kind == 0 ? "reading" : kind == 1 ? "writing" : kind == 8 ? "executing" : "touching";
        say("detail: %s address 0x%016llx", verb, static_cast<unsigned long long>(record.ExceptionInformation[1]));
    }
}

struct ExceptionJob {
    EXCEPTION_POINTERS *pointers = nullptr;
    DWORD thread_id = 0;
    StackRange stack;
    int max_frames = kFatalFrames;
    char thread_name[128] = {};
};

void write_exception_report(const ExceptionJob &job) noexcept {
    describe_exception(*job.pointers->ExceptionRecord);
    say_thread(job.thread_id, job.thread_name);
    std::uintptr_t frames[kFatalFrames];
    const int count = unwind_context(*job.pointers->ContextRecord, job.stack, frames,
                                     std::min(job.max_frames, kFatalFrames));
    print_stack(frames, count, true);
}

DWORD WINAPI exception_report_thread(LPVOID parameter) {
    auto &job = *static_cast<ExceptionJob *>(parameter);
    if (HANDLE faulting = OpenThread(THREAD_QUERY_LIMITED_INFORMATION, FALSE, job.thread_id)) {
        symbols::thread_description(faulting, job.thread_name, sizeof job.thread_name);
        CloseHandle(faulting);
    }
    write_exception_report(job);
    return 0;
}

// After a stack overflow the faulting thread has little stack left, so the report is written from a fresh thread
// while the faulting one waits.
void report_exception(EXCEPTION_POINTERS *pointers, int max_frames) noexcept {
    ExceptionJob job;
    job.pointers = pointers;
    job.thread_id = GetCurrentThreadId();
    job.stack = current_stack_range();
    job.max_frames = max_frames;
    if (pointers->ExceptionRecord->ExceptionCode == EXCEPTION_STACK_OVERFLOW) {
        if (HANDLE helper = CreateThread(nullptr, 1u << 20, exception_report_thread, &job, 0, nullptr)) {
            WaitForSingleObject(helper, 30000);
            CloseHandle(helper);
            return;
        }
    }
    symbols::thread_description(GetCurrentThread(), job.thread_name, sizeof job.thread_name);
    write_exception_report(job);
}

LPTOP_LEVEL_EXCEPTION_FILTER g_previous_filter = nullptr;

LONG WINAPI on_unhandled_exception(EXCEPTION_POINTERS *pointers) {
    const DWORD code = pointers->ExceptionRecord->ExceptionCode;
    // The MSVC runtime's own filter turns an uncaught C++ exception into std::terminate, which reports it with the
    // exception's message.
    if (code == kMsvcCppException && g_previous_filter != nullptr) return g_previous_filter(pointers);
    if (!enter_fatal("unhandled exception")) return EXCEPTION_CONTINUE_SEARCH;
    {
        ReportLock lock;
        say("======== crash: unhandled exception ========");
        report_exception(pointers, kFatalFrames);
        say("======== end of crash report ========");
        std::fflush(stderr);
    }
    if (g_previous_filter != nullptr) return g_previous_filter(pointers);
    return EXCEPTION_CONTINUE_SEARCH;
}

// Sees every exception before any handler. Reports faults (and, when asked, C++ throws) and never handles them.
LONG CALLBACK on_first_chance(EXCEPTION_POINTERS *pointers) {
    const DWORD code = pointers->ExceptionRecord->ExceptionCode;
    const bool trace_throws = g_trace_throws.load(std::memory_order_relaxed);
    if (!is_hardware_fault(code) && !(trace_throws && is_cpp_throw(code))) return EXCEPTION_CONTINUE_SEARCH;
    if (t_in_first_chance || t_fatal_depth > 0) return EXCEPTION_CONTINUE_SEARCH;
    const unsigned cap = trace_throws ? kFirstChanceThrowCap : kFirstChanceFaultCap;
    const unsigned number = g_first_chance_reports.fetch_add(1, std::memory_order_relaxed) + 1;
    if (number > cap) return EXCEPTION_CONTINUE_SEARCH;
    t_in_first_chance = true;
    {
        ReportLock lock;
        say("-------- first-chance %u of %u (raised, not yet handled) --------", number, cap);
        report_exception(pointers, kFirstChanceFrames);
        if (number == cap) say("first-chance limit reached; later ones are not reported");
        say("-------- end of first-chance report --------");
        std::fflush(stderr);
    }
    t_in_first_chance = false;
    return EXCEPTION_CONTINUE_SEARCH;
}

void on_invalid_parameter(const wchar_t *expression, const wchar_t *function, const wchar_t *file, unsigned int line,
                          std::uintptr_t) {
    if (!enter_fatal("CRT invalid parameter")) end_process(0xC0000417u);
    ReportLock lock;
    say("======== crash: CRT invalid parameter ========");
    // The CRT fills these in only in debug builds.
    if (expression != nullptr) {
        char text[512];
        symbols::wide_to_utf8(expression, text, sizeof text);
        say("expression: %s", text);
    }
    if (function != nullptr && file != nullptr) {
        char function_text[256];
        char file_text[256];
        symbols::wide_to_utf8(function, function_text, sizeof function_text);
        symbols::wide_to_utf8(file, file_text, sizeof file_text);
        say("in %s  [%s:%u]", function_text, file_text, line);
    }
    say_current_thread();
    print_current_stack(1);
    finish_fatal(0xC0000417u);
}

#endif  // _WIN32

void say_type_name(const std::type_info &type, const char *message) noexcept {
#if defined(_WIN32)
    char name[256];
    symbols::readable_name(type.name(), name, sizeof name, true);
    say("uncaught %s: %s", name, message);
#else
    say("uncaught %s: %s", type.name(), message);
#endif
}

[[noreturn]] void on_terminate() noexcept {
    if (!enter_fatal("std::terminate")) end_process(kExitCode);
    ReportLock lock;
    say("======== crash: std::terminate ========");
    if (std::exception_ptr current = std::current_exception()) {
        try {
            std::rethrow_exception(current);
        } catch (const std::exception &error) {
            say_type_name(typeid(error), error.what());
        } catch (...) {
            say("uncaught exception of a type not derived from std::exception");
        }
    } else {
        say("no exception in flight (terminate was called directly, or a noexcept function or thread failed)");
    }
#if defined(_WIN32)
    say_current_thread();
    print_current_stack(1);
#endif
    finish_fatal(kExitCode);
}

void on_abort_signal(int) {
    if (!enter_fatal("abort()")) end_process(kExitCode);
    ReportLock lock;
    say("======== crash: abort() ========");
#if defined(_WIN32)
    say_current_thread();
    print_current_stack(1);
#endif
    finish_fatal(kExitCode);
}

}  // namespace

void install_crash_handlers() {
    static bool installed = false;
    if (installed) return;
    installed = true;

    report_mutex();  // construct now rather than mid-crash
    std::set_terminate(on_terminate);
    std::signal(SIGABRT, on_abort_signal);

#if defined(_WIN32)
#if defined(_MSC_VER)
    _set_abort_behavior(0, _WRITE_ABORT_MSG | _CALL_REPORTFAULT);
#endif
    _set_invalid_parameter_handler(on_invalid_parameter);
    g_previous_filter = SetUnhandledExceptionFilter(on_unhandled_exception);

    // Leaves room on this thread's stack for a report after an overflow.
    ULONG guarantee = 64 * 1024;
    SetThreadStackGuarantee(&guarantee);

    {
        // Read the module list while the process is still healthy.
        symbols::Guard guard(std::chrono::milliseconds(5000));
        if (guard.locked()) symbols::ready();
    }

    if (env_flag("LCS_CRASH_FIRST_CHANCE")) {
        g_trace_throws.store(env_flag("LCS_TRACE_THROWS"), std::memory_order_relaxed);
        AddVectoredExceptionHandler(1, on_first_chance);
        say("first-chance reporting on: hardware faults%s, first %u only",
            g_trace_throws.load(std::memory_order_relaxed) ? " and C++ throws" : "",
            g_trace_throws.load(std::memory_order_relaxed) ? kFirstChanceThrowCap : kFirstChanceFaultCap);
    }
#endif
}

}  // namespace lcs
