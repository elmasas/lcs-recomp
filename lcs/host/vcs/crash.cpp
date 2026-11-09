// From VCS Recomp (gothamor/gta-vcs-recomp, GPL-3.0; see lcs/VCS_IMPORT.md).
// Crash reporting: uncaught C++ exceptions, abort() and SEH exceptions (Windows) / fatal signals (Linux) print the
// reason and the host stack to stderr before the process dies. Windows symbolizes with dbghelp; Linux prints each
// frame as module + offset (and the symbol dladdr knows: the exe is linked -rdynamic) and an llvm-symbolizer command
// for file and line.
#include "crash.h"

#include <cstdio>
#include <cstdlib>
#include <csignal>
#include <cstdint>
#include <exception>
#include <initializer_list>

#if defined(_WIN32)
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <dbghelp.h>
#include "win_symbols.h"
#elif defined(__linux__)
#include <dlfcn.h>
#include <execinfo.h>
#include <ucontext.h>
#include <unistd.h>
#include <sys/syscall.h>
#endif

namespace vcs
{
    namespace
    {
#if defined(_WIN32)
        void printStack(CONTEXT *context)
        {
            HANDLE process = GetCurrentProcess();
            SymSetOptions(SYMOPT_UNDNAME | SYMOPT_DEFERRED_LOADS | SYMOPT_LOAD_LINES);
            SymInitialize(process, nullptr, TRUE);
            CONTEXT local{};
            if (!context)
            {
                RtlCaptureContext(&local);
                context = &local;
            }
            STACKFRAME64 frame{};
            frame.AddrPC.Offset = context->Rip;
            frame.AddrFrame.Offset = context->Rbp;
            frame.AddrStack.Offset = context->Rsp;
            frame.AddrPC.Mode = frame.AddrFrame.Mode = frame.AddrStack.Mode = AddrModeFlat;
            for (int i = 0; i < 40; ++i)
            {
                if (!StackWalk64(IMAGE_FILE_MACHINE_AMD64, process, GetCurrentThread(), &frame, context, nullptr,
                                 SymFunctionTableAccess64, SymGetModuleBase64, nullptr) ||
                    frame.AddrPC.Offset == 0)
                    break;
                alignas(SYMBOL_INFO) char buffer[sizeof(SYMBOL_INFO) + 256];
                auto *sym = reinterpret_cast<SYMBOL_INFO *>(buffer);
                sym->SizeOfStruct = sizeof(SYMBOL_INFO);
                sym->MaxNameLen = 255;
                DWORD64 disp = 0;
                IMAGEHLP_LINE64 line{sizeof(line)};
                DWORD lineDisp = 0;
                const bool haveSym = symFromAddr(process, frame.AddrPC.Offset, &disp, sym);
                const bool haveLine = SymGetLineFromAddr64(process, frame.AddrPC.Offset, &lineDisp, &line);
                std::fprintf(stderr, "[crash]   #%02d %016llx %s+0x%llx %s:%lu\n", i,
                             static_cast<unsigned long long>(frame.AddrPC.Offset), haveSym ? sym->Name : "?",
                             static_cast<unsigned long long>(disp), haveLine ? line.FileName : "",
                             haveLine ? line.LineNumber : 0ul);
            }
            std::fflush(stderr);
        }

        // First-chance faults (seen before any handler or a later __fastfail): log the first few.
        LONG WINAPI onFirstChance(EXCEPTION_POINTERS *info)
        {
            const DWORD code = info->ExceptionRecord->ExceptionCode;
            // LCS_TRACE_THROWS: also a C++ throw, whose stack is gone by the time it is caught (a guest memory fault).
            static const bool throws = std::getenv("LCS_TRACE_THROWS") != nullptr;
            const bool wanted_throw = throws && code == 0xE06D7363u;
            if (!wanted_throw && code != EXCEPTION_ACCESS_VIOLATION && code != EXCEPTION_ILLEGAL_INSTRUCTION &&
                code != EXCEPTION_INT_DIVIDE_BY_ZERO && code != EXCEPTION_STACK_OVERFLOW && code != 0xC0000409u)
                return EXCEPTION_CONTINUE_SEARCH;
            static volatile LONG reported = 0;
            if (InterlockedIncrement(&reported) > (throws ? 500 : 3))
                return EXCEPTION_CONTINUE_SEARCH;
            std::fprintf(stderr, "[crash] first-chance exception 0x%08lx at %p (thread %lu)", code,
                         info->ExceptionRecord->ExceptionAddress, GetCurrentThreadId());
            if (code == EXCEPTION_ACCESS_VIOLATION && info->ExceptionRecord->NumberParameters >= 2)
                std::fprintf(stderr, " %s 0x%llx", info->ExceptionRecord->ExceptionInformation[0] ? "writing" : "reading",
                             static_cast<unsigned long long>(info->ExceptionRecord->ExceptionInformation[1]));
            std::fprintf(stderr, "\n");
            printStack(info->ContextRecord);
            return EXCEPTION_CONTINUE_SEARCH;
        }

        // The CRT's invalid-parameter path ends in __fastfail (0xC0000409) without any exception.
        void onInvalidParameter(const wchar_t *expression, const wchar_t *function, const wchar_t *file, unsigned int line,
                                uintptr_t)
        {
            std::fprintf(stderr, "[crash] CRT invalid parameter (%ls in %ls at %ls:%u)\n", expression ? expression : L"?",
                         function ? function : L"?", file ? file : L"?", line);
            printStack(nullptr);
            std::_Exit(3);
        }

        LONG WINAPI onUnhandled(EXCEPTION_POINTERS *info)
        {
            std::fprintf(stderr, "[crash] unhandled exception 0x%08lx at %p\n", info->ExceptionRecord->ExceptionCode,
                         info->ExceptionRecord->ExceptionAddress);
            printStack(info->ContextRecord);
            return EXCEPTION_CONTINUE_SEARCH;
        }
#elif defined(__linux__)
        // Frames as "module+0xoffset (symbol+0xoffset)", then one llvm-symbolizer line per module seen. Called from
        // signal handlers: no allocation; dladdr is not async-signal-safe in theory, but the process is ending anyway.
        void printStack(void *faultPc)
        {
            void *frames[64];
            int n = backtrace(frames, 64);
            int first = 0;
            if (faultPc) // skip the handler and the signal trampoline: start at the faulting instruction
                for (int i = 0; i < n; ++i)
                    if (frames[i] == faultPc)
                    {
                        first = i;
                        break;
                    }
            const char *modules[8] = {};
            for (int i = first; i < n; ++i)
            {
                Dl_info info{};
                const bool known = dladdr(frames[i], &info) != 0 && info.dli_fname;
                const unsigned long long off = known ? reinterpret_cast<uintptr_t>(frames[i]) - reinterpret_cast<uintptr_t>(info.dli_fbase) : 0;
                std::fprintf(stderr, "[crash]   #%02d %016llx %s+0x%llx", i - first,
                             static_cast<unsigned long long>(reinterpret_cast<uintptr_t>(frames[i])), known ? info.dli_fname : "?", off);
                if (known && info.dli_sname)
                    std::fprintf(stderr, " (%s+0x%llx)", info.dli_sname,
                                 static_cast<unsigned long long>(reinterpret_cast<uintptr_t>(frames[i]) - reinterpret_cast<uintptr_t>(info.dli_saddr)));
                std::fprintf(stderr, "\n");
                for (const char *&m : modules)
                    if (known && (!m || m == info.dli_fname))
                    {
                        m = info.dli_fname;
                        break;
                    }
            }
            for (const char *m : modules)
            {
                if (!m)
                    break;
                std::fprintf(stderr, "[crash] file and line: llvm-symbolizer -e %s", m);
                for (int i = first; i < n; ++i)
                {
                    Dl_info info{};
                    if (dladdr(frames[i], &info) && info.dli_fname == m)
                        // the return address minus one: the call, not the instruction after it (not for the fault)
                        std::fprintf(stderr, " 0x%llx",
                                     static_cast<unsigned long long>(reinterpret_cast<uintptr_t>(frames[i]) - reinterpret_cast<uintptr_t>(info.dli_fbase) -
                                                                     (i == first && faultPc ? 0 : 1)));
                }
                std::fprintf(stderr, "\n");
            }
            std::fflush(stderr);
        }

        void onFatalSignal(int sig, siginfo_t *info, void *context)
        {
            static volatile sig_atomic_t inside = 0;
            if (inside) // a fault while reporting one: just go
                _exit(128 + sig);
            inside = 1;
            const ucontext_t *uc = static_cast<const ucontext_t *>(context);
            void *pc = uc ? reinterpret_cast<void *>(uc->uc_mcontext.gregs[REG_RIP]) : nullptr;
            const char *name = sig == SIGSEGV ? "SIGSEGV" : sig == SIGBUS ? "SIGBUS" : sig == SIGILL ? "SIGILL" : sig == SIGFPE ? "SIGFPE" : "signal";
            std::fprintf(stderr, "[crash] %s at %p", name, pc);
            if ((sig == SIGSEGV || sig == SIGBUS) && info)
                std::fprintf(stderr, " %s address %p", info->si_code == SEGV_ACCERR ? "no access to" : "bad", info->si_addr);
            std::fprintf(stderr, " (thread %ld)\n", static_cast<long>(syscall(SYS_gettid)));
            printStack(pc);
            // the default action: the exit status (and a core dump where enabled) say what happened
            signal(sig, SIG_DFL);
            raise(sig);
        }

#endif

        void onTerminate()
        {
            std::fprintf(stderr, "[crash] std::terminate");
            if (auto ep = std::current_exception())
            {
                try
                {
                    std::rethrow_exception(ep);
                }
                catch (const std::exception &e)
                {
                    std::fprintf(stderr, ": %s", e.what());
                }
                catch (...)
                {
                    std::fprintf(stderr, ": non-std exception");
                }
            }
            std::fprintf(stderr, "\n");
#if defined(_WIN32) || defined(__linux__)
            printStack(nullptr);
#endif
            std::_Exit(3);
        }

        void onAbort(int)
        {
            std::fprintf(stderr, "[crash] abort()\n");
#if defined(_WIN32) || defined(__linux__)
            printStack(nullptr);
#endif
            std::_Exit(3);
        }
    }

    void installCrashHandlers()
    {
        std::set_terminate(&onTerminate);
        std::signal(SIGABRT, &onAbort);
#if defined(_WIN32)
        _set_abort_behavior(0, _WRITE_ABORT_MSG | _CALL_REPORTFAULT);
        SetUnhandledExceptionFilter(&onUnhandled);
        _set_invalid_parameter_handler(&onInvalidParameter);
        if (std::getenv("VCS_CRASH_FIRST_CHANCE"))
            AddVectoredExceptionHandler(1, &onFirstChance);
#elif defined(__linux__)
        // the handler runs on its own stack, so a stack overflow is reported too (the main thread's; other threads
        // report on their own stack)
        static char altStack[64 * 1024];
        stack_t ss{};
        ss.ss_sp = altStack;
        ss.ss_size = sizeof(altStack);
        sigaltstack(&ss, nullptr);
        void *warm[1];
        backtrace(warm, 1); // loads the unwinder now, not inside a signal handler
        struct sigaction sa{};
        sa.sa_sigaction = &onFatalSignal;
        sa.sa_flags = SA_SIGINFO | SA_ONSTACK;
        sigemptyset(&sa.sa_mask);
        for (int sig : {SIGSEGV, SIGBUS, SIGILL, SIGFPE})
            sigaction(sig, &sa, nullptr);
#endif
    }
}
