// Crash reporter (see lcs_crash.hpp). Every line it prints starts with "[lcs-crash]", so a player's log can be
// searched for it. Windows unwinds with the OS unwinder and names frames through DbgHelp. Linux and the BSDs unwind
// with backtrace(), name frames from the executable's symbol table, and, on Linux, read DWARF through libdw when
// it is linked.

#include "lcs_crash.hpp"

#if defined(_WIN32)
#include "lcs_host_symbols.hpp"
#else
#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include <cxxabi.h>
#include <dlfcn.h>
#include <execinfo.h>
#include <fcntl.h>
#include <link.h>
#include <sys/types.h>
#include <unistd.h>
#if defined(__linux__)
#include <elf.h>
#elif defined(__FreeBSD__) || defined(__DragonFly__)
#include <sys/elf_common.h>
#include <sys/elf64.h>
#else
#include <sys/exec_elf.h>
#endif
#ifndef ELF64_ST_TYPE
#define ELF64_ST_TYPE(info) ((info) & 0xf)
#endif
#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
#include <sys/sysctl.h>
#endif
#if defined(__linux__) && defined(LCS_HAVE_LIBDW)
#include <elfutils/libdwfl.h>
#endif
#endif

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cstddef>
#include <csignal>
#include <cstdarg>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <exception>
#include <mutex>
#include <typeinfo>
#include <vector>

#if !defined(_WIN32)
// The main executable is reported first. dlpi_addr is the ELF load bias on Linux and the BSDs.
extern "C" __attribute__((visibility("hidden"))) int lcs_crash_load_bias(struct dl_phdr_info *info, std::size_t,
                                                                       void *data) {
    if (info == nullptr || data == nullptr) return 0;
    *static_cast<std::uint64_t *>(data) = static_cast<std::uint64_t>(info->dlpi_addr);
    return 1;
}
#endif

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
thread_local bool t_in_signal = false;
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
#if defined(_WIN32)
    std::fputs(line, stderr);
#else
    // write() does not take the stdio lock. A crash inside fprintf must still be able to report.
    if (write(STDERR_FILENO, line, used) < 0) {}
#endif
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
#if defined(_WIN32)
    std::fflush(stdout);
    std::fflush(stderr);
    TerminateProcess(GetCurrentProcess(), code);
#else
    // fflush takes the stdio lock. Skip it from a signal handler; say() already used write().
    if (!t_in_signal) {
        std::fflush(stdout);
        std::fflush(stderr);
    }
#endif
    std::_Exit(static_cast<int>(code));
}

// Prints the stack captured for the report in progress, if it has not been printed yet. Empty on Windows.
void print_pending_stack() noexcept;

// False when this thread is already inside a fatal report (the reporter itself crashed).
bool enter_fatal(const char *what) noexcept {
    if (++t_fatal_depth > 1) {
        say("%s while a crash report was being written; stopping here", what);
        print_pending_stack();
        return false;
    }
    return true;
}

[[noreturn]] void finish_fatal(unsigned code) noexcept {
    say("======== end of crash report ========");
    end_process(code);
}

#if defined(_WIN32)

void print_pending_stack() noexcept {}

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

#if !defined(_WIN32)

struct FuncSym {
    std::uint64_t value = 0;
    std::uint64_t size = 0;
    std::uint32_t name = 0;
};

std::vector<FuncSym> g_funcs;
std::vector<char> g_strtab;
std::uint64_t g_load_bias = 0;
std::uint64_t g_exe_low = 0;
std::uint64_t g_exe_high = 0;
constexpr unsigned kEnrichSeconds = 5;

bool executable_path(char *out, std::size_t capacity) noexcept {
    if (capacity == 0) return false;
    out[0] = '\0';
#if defined(__linux__)
    const ssize_t linked = ::readlink("/proc/self/exe", out, capacity - 1);
    if (linked > 0) {
        out[linked] = '\0';
        return true;
    }
#endif
#if defined(__FreeBSD__) || defined(__DragonFly__)
    int name[4] = {CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1};
    std::size_t length = capacity;
    if (::sysctl(name, 4, out, &length, nullptr, 0) == 0 && length > 1) {
        if (length >= capacity) out[capacity - 1] = '\0';
        else if (out[length - 1] != '\0') out[length] = '\0';
        return out[0] != '\0';
    }
#elif defined(__NetBSD__)
    // NetBSD is kern.proc_args.-1.pathname, not the FreeBSD kern.proc.pathname.-1 order.
    int name[4] = {CTL_KERN, KERN_PROC_ARGS, -1, KERN_PROC_PATHNAME};
    std::size_t length = capacity;
    if (::sysctl(name, 4, out, &length, nullptr, 0) == 0 && length > 1) {
        if (length >= capacity) out[capacity - 1] = '\0';
        else if (out[length - 1] != '\0') out[length] = '\0';
        return out[0] != '\0';
    }
#endif
    Dl_info loaded{};
    if (::dladdr(reinterpret_cast<void *>(&executable_path), &loaded) != 0 && loaded.dli_fname != nullptr &&
        loaded.dli_fname[0] != '\0') {
        std::strncpy(out, loaded.dli_fname, capacity - 1);
        out[capacity - 1] = '\0';
        return true;
    }
    const ssize_t linked_bsd = ::readlink("/proc/curproc/file", out, capacity - 1);
    if (linked_bsd > 0) {
        out[linked_bsd] = '\0';
        return true;
    }
    return false;
}

// Loaded once while the process is healthy. Crash-time lookup then needs no heap and no locks.
void load_function_symbols() noexcept {
    char path[4096];
    if (!executable_path(path, sizeof path)) return;
    ::dl_iterate_phdr(lcs_crash_load_bias, &g_load_bias);
    int fd = ::open(path, O_RDONLY | O_CLOEXEC);
    if (fd < 0) return;
    Elf64_Ehdr header{};
    if (::pread(fd, &header, sizeof header, 0) != static_cast<ssize_t>(sizeof header) ||
        std::memcmp(header.e_ident, ELFMAG, SELFMAG) != 0 || header.e_ident[EI_CLASS] != ELFCLASS64 ||
        header.e_shnum == 0 || header.e_shnum > 10000 || header.e_shentsize != sizeof(Elf64_Shdr)) {
        ::close(fd);
        return;
    }
    try {
        std::vector<Elf64_Shdr> sections(header.e_shnum);
        const off_t section_bytes = static_cast<off_t>(sections.size() * sizeof(Elf64_Shdr));
        if (::pread(fd, sections.data(), static_cast<std::size_t>(section_bytes),
                    static_cast<off_t>(header.e_shoff)) != section_bytes) {
            ::close(fd);
            return;
        }
        const Elf64_Shdr *symbols = nullptr;
        for (const Elf64_Shdr &section : sections) {
            if (section.sh_type == SHT_SYMTAB && section.sh_link < sections.size() &&
                section.sh_entsize == sizeof(Elf64_Sym)) {
                symbols = &section;
                break;
            }
        }
        if (symbols == nullptr || symbols->sh_size > (256ull << 20)) {
            ::close(fd);
            return;
        }
        std::vector<Elf64_Sym> table(symbols->sh_size / sizeof(Elf64_Sym));
        if (::pread(fd, table.data(), static_cast<std::size_t>(symbols->sh_size),
                    static_cast<off_t>(symbols->sh_offset)) != static_cast<ssize_t>(symbols->sh_size)) {
            ::close(fd);
            return;
        }
        const Elf64_Shdr &strings = sections[symbols->sh_link];
        if (strings.sh_size > (64ull << 20)) {
            ::close(fd);
            return;
        }
        g_strtab.resize(static_cast<std::size_t>(strings.sh_size) + 1);
        if (::pread(fd, g_strtab.data(), static_cast<std::size_t>(strings.sh_size),
                    static_cast<off_t>(strings.sh_offset)) != static_cast<ssize_t>(strings.sh_size)) {
            g_strtab.clear();
            ::close(fd);
            return;
        }
        std::uint64_t low = ~std::uint64_t{0};
        std::uint64_t high = 0;
        for (int i = 0; i < header.e_phnum && i < 64; ++i) {
            Elf64_Phdr program{};
            const off_t at = static_cast<off_t>(header.e_phoff + static_cast<Elf64_Off>(i) * header.e_phentsize);
            if (::pread(fd, &program, sizeof program, at) != static_cast<ssize_t>(sizeof program)) break;
            if (program.p_type != PT_LOAD) continue;
            const std::uint64_t start = program.p_vaddr + g_load_bias;
            const std::uint64_t end = start + program.p_memsz;
            if (start < low) low = start;
            if (end > high) high = end;
        }
        g_exe_low = low;
        g_exe_high = high;
        ::close(fd);
        fd = -1;
        g_funcs.reserve(table.size());
        for (const Elf64_Sym &symbol : table) {
            if (ELF64_ST_TYPE(symbol.st_info) != STT_FUNC || symbol.st_shndx == SHN_UNDEF || symbol.st_value == 0)
                continue;
            if (symbol.st_name >= g_strtab.size()) continue;
            g_funcs.push_back(FuncSym{symbol.st_value, symbol.st_size, symbol.st_name});
        }
        std::sort(g_funcs.begin(), g_funcs.end(), [](const FuncSym &a, const FuncSym &b) { return a.value < b.value; });
    } catch (...) {
        g_funcs.clear();
        g_strtab.clear();
        if (fd >= 0) ::close(fd);
    }
}

const FuncSym *find_func(std::uint64_t vma) noexcept {
    if (g_funcs.empty()) return nullptr;
    const auto it = std::lower_bound(g_funcs.begin(), g_funcs.end(), vma,
                                      [](const FuncSym &elem, std::uint64_t value) { return elem.value < value; });
    auto found = g_funcs.end();
    if (it != g_funcs.end() && it->value == vma) found = it;
    else if (it != g_funcs.begin()) found = it - 1;
    if (found == g_funcs.end()) return nullptr;
    if (found->size != 0 && vma >= found->value + found->size) return nullptr;
    if (found->name >= g_strtab.size()) return nullptr;
    return &*found;
}

struct ShownFrame {
    std::uintptr_t pc = 0;
    const char *raw_name = nullptr;
    char pretty[160]{};
    char file[128]{};
    unsigned offset = 0;
    int line = 0;
};

ShownFrame *g_shown = nullptr;
int g_shown_count = 0;
bool g_frames_printed = false;

void copy_base_name(const char *path, char *out, std::size_t capacity) noexcept {
    if (capacity == 0) return;
    out[0] = '\0';
    if (path == nullptr || path[0] == '\0') return;
    const char *slash = std::strrchr(path, '/');
    const char *base = slash != nullptr ? slash + 1 : path;
    std::strncpy(out, base, capacity - 1);
    out[capacity - 1] = '\0';
}

void print_shown() noexcept {
    if (g_frames_printed) return;
    g_frames_printed = true;
    if (g_shown == nullptr || g_shown_count <= 0) {
        say("stack: (could not be walked)");
        return;
    }
    say("stack:");
    for (int i = 0; i < g_shown_count; ++i) {
        const ShownFrame &frame = g_shown[i];
        const char *name = frame.pretty[0] != '\0' ? frame.pretty : frame.raw_name;
        const auto address = static_cast<unsigned long long>(frame.pc);
        if (name != nullptr && frame.line > 0 && frame.file[0] != '\0')
            say("  #%02d 0x%llx  %s+0x%x  [%s:%d]", i, address, name, frame.offset, frame.file, frame.line);
        else if (name != nullptr)
            say("  #%02d 0x%llx  %s+0x%x", i, address, name, frame.offset);
        else
            say("  #%02d 0x%llx", i, address);
    }
}

void on_enrich_alarm(int) {
    t_in_signal = true;
    print_pending_stack();
    say("name lookup stopped after %d seconds", kEnrichSeconds);
    end_process(kExitCode);
}

void print_pending_stack() noexcept {
    if (g_shown != nullptr && g_shown_count > 0 && !g_frames_printed) print_shown();
}

bool reporter_frame(const char *name) noexcept {
    if (name == nullptr) return false;
    return std::strstr(name, "print_posix_stack") != nullptr || std::strstr(name, "on_posix_signal") != nullptr ||
           std::strstr(name, "log_cxx_throw") != nullptr || std::strstr(name, "note_cxx_throw") != nullptr ||
           std::strstr(name, "__cxa_throw") != nullptr || std::strstr(name, "backtrace") != nullptr ||
           std::strstr(name, "__restore_rt") != nullptr || std::strstr(name, "gsignal") != nullptr;
}

#if defined(__linux__) && defined(LCS_HAVE_LIBDW)
Dwfl *g_dwfl = nullptr;

void init_dwfl() noexcept {
    try {
        // dwfl_begin keeps this pointer. It must outlive the session.
        static char *debuginfo_path = nullptr;
        static Dwfl_Callbacks callbacks{};
        callbacks.find_elf = dwfl_linux_proc_find_elf;
        callbacks.find_debuginfo = dwfl_standard_find_debuginfo;
        callbacks.debuginfo_path = &debuginfo_path;
        g_dwfl = dwfl_begin(&callbacks);
        if (g_dwfl == nullptr) return;
        if (dwfl_linux_proc_report(g_dwfl, getpid()) != 0) {
            dwfl_end(g_dwfl);
            g_dwfl = nullptr;
            return;
        }
        dwfl_report_end(g_dwfl, nullptr, nullptr);
    } catch (...) {
        g_dwfl = nullptr;
    }
}
#endif

void enrich_frames() noexcept {
    for (int i = 0; i < g_shown_count; ++i) {
        ShownFrame &frame = g_shown[i];
        if (frame.raw_name == nullptr) {
            Dl_info info{};
            if (::dladdr(reinterpret_cast<void *>(frame.pc), &info) != 0 && info.dli_sname != nullptr) {
                frame.raw_name = info.dli_sname;
                if (info.dli_saddr != nullptr)
                    frame.offset = static_cast<unsigned>(frame.pc - reinterpret_cast<std::uintptr_t>(info.dli_saddr));
            }
        }
        if (frame.raw_name != nullptr && frame.raw_name[0] == '_' && frame.raw_name[1] == 'Z') {
            int status = 0;
            char *demangled = abi::__cxa_demangle(frame.raw_name, nullptr, nullptr, &status);
            if (status == 0 && demangled != nullptr) {
                std::strncpy(frame.pretty, demangled, sizeof frame.pretty - 1);
                std::free(demangled);
            }
        }
#if defined(__linux__) && defined(LCS_HAVE_LIBDW)
        // libdw faults from a signal handler, and on addresses outside this executable.
        const auto pc = static_cast<std::uint64_t>(frame.pc);
        if (!t_in_signal && g_dwfl != nullptr && pc >= g_exe_low && pc < g_exe_high) {
            if (Dwfl_Line *source = dwfl_getsrc(g_dwfl, frame.pc)) {
                int line = 0;
                const char *file = dwfl_lineinfo(source, nullptr, &line, nullptr, nullptr, nullptr);
                if (file != nullptr && line > 0) {
                    copy_base_name(file, frame.file, sizeof frame.file);
                    frame.line = line;
                }
            }
            if (frame.pretty[0] == '\0') {
                if (Dwfl_Module *mod = dwfl_addrmodule(g_dwfl, frame.pc)) {
                    if (const char *name = dwfl_module_addrname(mod, frame.pc))
                        std::strncpy(frame.pretty, name, sizeof frame.pretty - 1);
                }
            }
        }
#endif
    }
}

thread_local int t_stack_depth = 0;

void print_posix_stack() noexcept {
    if (t_stack_depth > 0) return;
    ++t_stack_depth;
    void *raw[kFatalFrames];
    const int captured = ::backtrace(raw, kFatalFrames);
    ShownFrame frames[kFatalFrames];
    int count = 0;
    for (int i = 0; i < captured && count < kFatalFrames; ++i) {
        ShownFrame &frame = frames[count];
        frame.pc = reinterpret_cast<std::uintptr_t>(raw[i]);
        const auto pc = static_cast<std::uint64_t>(frame.pc);
        if (pc >= g_exe_low && pc < g_exe_high) {
            const std::uint64_t vma = pc - g_load_bias;
            if (const FuncSym *func = find_func(vma)) {
                frame.raw_name = g_strtab.data() + func->name;
                frame.offset = static_cast<unsigned>(vma - func->value);
            }
        }
        ++count;
    }
    g_shown = frames;
    g_shown_count = count;
    g_frames_printed = false;
    int start = 0;
    while (start < g_shown_count && reporter_frame(g_shown[start].raw_name)) ++start;
    g_shown += start;
    g_shown_count -= start;

    // dladdr and libdw can lock or allocate. If that does not return, the alarm exits and the handler above prints
    // the frames already stored. fork() is not used: another thread can be inside malloc.
    struct sigaction previous {};
    struct sigaction alarm_action {};
    alarm_action.sa_handler = on_enrich_alarm;
    ::sigemptyset(&alarm_action.sa_mask);
    ::sigaction(SIGALRM, &alarm_action, &previous);
    ::alarm(kEnrichSeconds);
    enrich_frames();
    ::alarm(0);
    ::sigaction(SIGALRM, &previous, nullptr);
    // A signal trampoline has no symbol. Drop that leading gap once dladdr has named the frame after it.
    while (g_shown_count > 1 && g_shown[0].pretty[0] == '\0' && g_shown[0].raw_name == nullptr &&
           (g_shown[1].pretty[0] != '\0' || g_shown[1].raw_name != nullptr)) {
        ++g_shown;
        --g_shown_count;
    }
    print_shown();
    g_shown = nullptr;
    --t_stack_depth;
}

const char *signal_reason(int sig, const siginfo_t *info) noexcept {
    if (sig == SIGSEGV) {
        if (info != nullptr && info->si_code == SEGV_ACCERR) return "segmentation fault (protection)";
        if (info != nullptr && info->si_code == SEGV_MAPERR) return "segmentation fault (unmapped)";
        return "segmentation fault";
    }
    if (sig == SIGBUS) return "bus error";
    if (sig == SIGILL) return "illegal instruction";
    if (sig == SIGFPE) {
        if (info == nullptr) return "floating-point exception";
        if (info->si_code == FPE_INTDIV) return "integer division by zero";
        if (info->si_code == FPE_INTOVF) return "integer overflow";
        if (info->si_code == FPE_FLTDIV) return "floating-point division by zero";
        if (info->si_code == FPE_FLTOVF) return "floating-point overflow";
        if (info->si_code == FPE_FLTUND) return "floating-point underflow";
        if (info->si_code == FPE_FLTRES) return "inexact floating-point result";
        if (info->si_code == FPE_FLTINV) return "invalid floating-point operation";
        return "floating-point exception";
    }
    if (sig == SIGABRT) return "abort()";
    return "signal";
}

void on_posix_signal(int sig, siginfo_t *info, void *) {
    if (!enter_fatal("signal")) end_process(kExitCode);
    t_in_signal = true;
    say("======== crash: %s ========", signal_reason(sig, info));
    // si_addr is the faulting address for these signals, and 0 is a real address (a null dereference).
    if (info != nullptr && (sig == SIGSEGV || sig == SIGBUS || sig == SIGILL || sig == SIGFPE))
        say("faulting address 0x%llx", static_cast<unsigned long long>(reinterpret_cast<std::uintptr_t>(info->si_addr)));
    print_posix_stack();
    finish_fatal(kExitCode);
}

// Public non-virtual base offset of std::exception, or -1. Walking the Itanium type_info avoids dynamic_cast on
// the thrown object: a non-polymorphic throw has no vptr, and reading one would be undefined.
bool exception_base_offset(const abi::__class_type_info *type, std::ptrdiff_t offset, std::ptrdiff_t &found,
                           int depth) noexcept {
    if (type == nullptr || depth > 16) return false;
    if (*static_cast<const std::type_info *>(type) == typeid(std::exception)) {
        found = offset;
        return true;
    }
    if (const auto *single = dynamic_cast<const abi::__si_class_type_info *>(type))
        return exception_base_offset(single->__base_type, offset, found, depth + 1);
    const auto *multiple = dynamic_cast<const abi::__vmi_class_type_info *>(type);
    if (multiple == nullptr) return false;
    const unsigned count = std::min(multiple->__base_count, 32u);
    for (unsigned i = 0; i < count; ++i) {
        const abi::__base_class_type_info &base = multiple->__base_info[i];
        if (!base.__is_public_p() || base.__is_virtual_p()) continue;
        if (exception_base_offset(base.__base_type, offset + base.__offset(), found, depth + 1)) return true;
    }
    return false;
}

const char *exception_message(void *thrown, const std::type_info *type) noexcept {
    if (thrown == nullptr || type == nullptr) return nullptr;
    const auto *cls = dynamic_cast<const abi::__class_type_info *>(type);
    std::ptrdiff_t offset = 0;
    if (cls == nullptr || !exception_base_offset(cls, 0, offset, 0)) return nullptr;
    try {
        const auto *error = reinterpret_cast<const std::exception *>(static_cast<const char *>(thrown) + offset);
        return error->what();
    } catch (...) {
        return nullptr;
    }
}

void log_cxx_throw(void *thrown, const std::type_info *type) noexcept {
    if (!g_trace_throws.load(std::memory_order_relaxed) || t_in_first_chance || t_fatal_depth > 0) return;
    const unsigned number = g_first_chance_reports.fetch_add(1, std::memory_order_relaxed) + 1;
    if (number > kFirstChanceThrowCap) return;
    t_in_first_chance = true;
    say("-------- throw %u of %u (raised, not yet handled) --------", number, kFirstChanceThrowCap);
    if (type != nullptr) {
        int status = 0;
        char *demangled = abi::__cxa_demangle(type->name(), nullptr, nullptr, &status);
        const char *name = status == 0 && demangled != nullptr ? demangled : type->name();
        const char *message = exception_message(thrown, type);
        if (message != nullptr && message[0] != '\0') say("throw %s: %s", name, message);
        else say("throw %s", name);
        std::free(demangled);
    }
    print_posix_stack();
    if (number == kFirstChanceThrowCap) say("throw trace limit reached; later ones are not reported");
    say("-------- end of throw report --------");
    t_in_first_chance = false;
}

void install_posix_signals() noexcept {
    stack_t alt{};
    // libdw walks DWARF with a deep stack. The guard page of a thread that overflowed cannot cover that, so the
    // report runs here instead.
    static char stack_memory[2 * 1024 * 1024];
    alt.ss_sp = stack_memory;
    alt.ss_size = sizeof stack_memory;
    alt.ss_flags = 0;
    ::sigaltstack(&alt, nullptr);

    struct sigaction action {};
    action.sa_sigaction = on_posix_signal;
    ::sigemptyset(&action.sa_mask);
    // SA_NODEFER: a fault inside the report re-enters this handler, which then exits. The lines already written stay.
    // SA_ONSTACK: a stack overflow still has this buffer to report from. It is per thread; this installs it for the
    // thread that calls install_crash_handlers.
    action.sa_flags = SA_SIGINFO | SA_ONSTACK | SA_NODEFER;
    const int signals[] = {SIGSEGV, SIGBUS, SIGILL, SIGFPE, SIGABRT};
    for (int sig : signals) ::sigaction(sig, &action, nullptr);

    load_function_symbols();
#if defined(__linux__) && defined(LCS_HAVE_LIBDW)
    init_dwfl();
#endif
    // A fatal signal cannot be resumed the way a Windows vectored handler can. Throw tracing is the part that
    // continues, and it follows the same two switches as Windows.
    if (env_flag("LCS_CRASH_FIRST_CHANCE") && env_flag("LCS_TRACE_THROWS")) {
        g_trace_throws.store(true, std::memory_order_relaxed);
        say("throw tracing on: the first %u C++ throws are reported, then the throw continues", kFirstChanceThrowCap);
    }
}

#endif  // !defined(_WIN32)

void say_type_name(const std::type_info &type, const char *message) noexcept {
#if defined(_WIN32)
    char name[256];
    symbols::readable_name(type.name(), name, sizeof name, true);
    say("uncaught %s: %s", name, message);
#else
    int status = 0;
    char *demangled = abi::__cxa_demangle(type.name(), nullptr, nullptr, &status);
    say("uncaught %s: %s", status == 0 && demangled != nullptr ? demangled : type.name(), message);
    std::free(demangled);
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
#else
    print_posix_stack();
#endif
    finish_fatal(kExitCode);
}

#if defined(_WIN32)
void on_abort_signal(int) {
    if (!enter_fatal("abort()")) end_process(kExitCode);
    ReportLock lock;
    say("======== crash: abort() ========");
    say_current_thread();
    print_current_stack(1);
    finish_fatal(kExitCode);
}
#endif

}  // namespace

void install_crash_handlers() {
    static bool installed = false;
    if (installed) return;
    installed = true;

    report_mutex();  // construct now rather than mid-crash
    std::set_terminate(on_terminate);

#if defined(_WIN32)
    std::signal(SIGABRT, on_abort_signal);
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
#else
    install_posix_signals();
#endif
}

#if !defined(_WIN32)
void note_cxx_throw(void *thrown, const std::type_info *type) noexcept { log_cxx_throw(thrown, type); }
#endif

}  // namespace lcs

#if !defined(_WIN32)
extern "C" void __cxa_throw(void *thrown, void *type, void (*dest)(void *)) {
    lcs::note_cxx_throw(thrown, static_cast<const std::type_info *>(type));
    using Throw = void (*)(void *, void *, void (*)(void *));
    static std::atomic<Throw> real{nullptr};
    Throw next = real.load(std::memory_order_acquire);
    if (next == nullptr) {
        next = reinterpret_cast<Throw>(dlsym(RTLD_NEXT, "__cxa_throw"));
        Throw expected = nullptr;
        if (!real.compare_exchange_strong(expected, next, std::memory_order_release)) next = expected;
    }
    if (next != nullptr) next(thrown, type, dest);
    std::terminate();
}
#endif
