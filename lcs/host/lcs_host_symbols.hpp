// Turns code addresses into readable names for the crash reporter and the sampling profiler (Windows, DbgHelp).
// DbgHelp is single-threaded: hold a symbols::Guard around every call into it. Names read the same in clang-cl
// (MSVC decoration) and llvm-mingw (Itanium mangling) builds: "ns::Class::function", without the parameter list.
#pragma once

#if defined(_WIN32)

#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <dbghelp.h>

#include <chrono>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <mutex>

#if !defined(_MSC_VER) && defined(__GNUC__)
#include <cxxabi.h>
#define LCS_SYMBOLS_ITANIUM 1
#endif

namespace lcs::symbols {

inline std::recursive_timed_mutex &dbghelp_mutex() {
    static std::recursive_timed_mutex mutex;
    return mutex;
}

// Takes the DbgHelp lock, waiting at most `wait`. A crash report goes ahead even without it.
class Guard {
public:
    explicit Guard(std::chrono::milliseconds wait) : locked_(dbghelp_mutex().try_lock_for(wait)) {}
    ~Guard() {
        if (locked_) dbghelp_mutex().unlock();
    }
    Guard(const Guard &) = delete;
    Guard &operator=(const Guard &) = delete;
    [[nodiscard]] bool locked() const noexcept { return locked_; }

private:
    bool locked_;
};

inline void copy_text(char *destination, std::size_t capacity, const char *source) noexcept {
    if (capacity == 0) return;
    std::size_t length = 0;
    if (source != nullptr) {
        while (source[length] != '\0' && length + 1 < capacity) {
            destination[length] = source[length];
            ++length;
        }
    }
    destination[length] = '\0';
}

inline void wide_to_utf8(const wchar_t *source, char *destination, std::size_t capacity) noexcept {
    if (capacity == 0) return;
    destination[0] = '\0';
    if (source == nullptr) return;
    const int written = WideCharToMultiByte(CP_UTF8, 0, source, -1, destination, static_cast<int>(capacity), nullptr,
                                            nullptr);
    if (written <= 0) destination[0] = '\0';
    destination[capacity - 1] = '\0';
}

// Cuts the parameter list (and trailing qualifiers) off a demangled Itanium name. "operator()" itself is kept.
inline void strip_parameter_list(char *name) noexcept {
    const char *last_close = std::strrchr(name, ')');
    if (last_close == nullptr) return;
    int depth = 0;
    for (std::ptrdiff_t i = last_close - name; i >= 0; --i) {
        if (name[i] == ')') {
            ++depth;
        } else if (name[i] == '(' && --depth == 0) {
            if (i >= 8 && std::strncmp(name + i - 8, "operator", 8) == 0) return;
            name[i] = '\0';
            return;
        }
    }
}

// Makes a symbol or type name readable in place of `raw`, writing into `out`.
inline void readable_name(const char *raw, char *out, std::size_t capacity, bool is_type = false) noexcept {
    copy_text(out, capacity, raw);
    if (raw == nullptr || raw[0] == '\0') return;
#if defined(LCS_SYMBOLS_ITANIUM)
    const char *mangled = raw;
    if (!is_type && mangled[0] == '_' && mangled[1] == '_' && mangled[2] == 'Z') ++mangled;
    if (is_type || (mangled[0] == '_' && mangled[1] == 'Z')) {
        int status = 0;
        char *demangled = abi::__cxa_demangle(mangled, nullptr, nullptr, &status);
        if (status == 0 && demangled != nullptr) {
            copy_text(out, capacity, demangled);
            if (!is_type) strip_parameter_list(out);
        }
        std::free(demangled);
    }
#else
    if (!is_type && raw[0] == '?') {
        if (UnDecorateSymbolName(raw, out, static_cast<DWORD>(capacity), UNDNAME_NAME_ONLY) == 0)
            copy_text(out, capacity, raw);
    }
#endif
}

// Prepares DbgHelp once; call with the Guard held. Symbols come from PDBs next to the executable (or their recorded
// path); no symbol server is consulted, so a crash never waits on the network.
inline bool ready() noexcept {
    static int state = 0;  // 0 untried, 1 ready, -1 failed
    if (state == 0) {
        SymSetOptions(SymGetOptions() | SYMOPT_UNDNAME | SYMOPT_DEFERRED_LOADS | SYMOPT_LOAD_LINES |
                      SYMOPT_FAIL_CRITICAL_ERRORS | SYMOPT_NO_PROMPTS);
        char directory[MAX_PATH * 2] = {};
        const DWORD length = GetModuleFileNameA(nullptr, directory, static_cast<DWORD>(sizeof directory));
        const char *search_path = nullptr;
        if (length > 0 && length < sizeof directory) {
            if (char *slash = std::strrchr(directory, '\\'); slash != nullptr) {
                *slash = '\0';
                search_path = directory;
            }
        }
        state = SymInitialize(GetCurrentProcess(), search_path, TRUE) ? 1 : -1;
    }
    return state == 1;
}

// Picks up modules loaded since the last call. Guard held.
inline void refresh_modules() noexcept {
    if (ready()) SymRefreshModuleList(GetCurrentProcess());
}

struct Location {
    std::uint64_t module_base = 0;
    std::uint64_t symbol_address = 0;  // 0 when no symbol covers the address
    unsigned line = 0;                 // 0 when unknown
    char module[64] = {};
    char function[384] = {};
    char file[192] = {};
};

// The last two components of a source path, so logs stay short and don't carry the builder's folders.
inline void short_source_path(const char *path, char *out, std::size_t capacity) noexcept {
    const char *start = path;
    int separators = 0;
    for (const char *p = path + std::strlen(path); p > path; --p) {
        if (p[-1] == '\\' || p[-1] == '/') {
            if (++separators == 2) {
                start = p;
                break;
            }
        }
    }
    copy_text(out, capacity, start);
}

// Module, function and (optionally) source line for `address`. Guard held. Never fails; fields stay empty instead.
inline void locate(std::uint64_t address, Location &out, bool want_line) noexcept {
    out = Location{};
    HMODULE module = nullptr;
    if (GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                           reinterpret_cast<LPCWSTR>(static_cast<std::uintptr_t>(address)), &module) &&
        module != nullptr) {
        out.module_base = reinterpret_cast<std::uintptr_t>(module);
        wchar_t path[MAX_PATH] = {};
        if (GetModuleFileNameW(module, path, MAX_PATH) > 0) {
            const wchar_t *base = path;
            for (const wchar_t *p = path; *p != L'\0'; ++p)
                if (*p == L'\\' || *p == L'/') base = p + 1;
            wide_to_utf8(base, out.module, sizeof out.module);
        }
    }
    if (!ready()) return;

    constexpr std::size_t kNameCapacity = 1024;
    alignas(SYMBOL_INFO) unsigned char storage[sizeof(SYMBOL_INFO) + kNameCapacity] = {};
    auto *symbol = reinterpret_cast<SYMBOL_INFO *>(storage);
    symbol->SizeOfStruct = sizeof(SYMBOL_INFO);
    symbol->MaxNameLen = static_cast<ULONG>(kNameCapacity);
    DWORD64 displacement = 0;
    if (SymFromAddr(GetCurrentProcess(), address, &displacement, symbol)) {
        out.symbol_address = symbol->Address;
        readable_name(symbol->Name, out.function, sizeof out.function);
    }
    if (want_line) {
        IMAGEHLP_LINE64 line = {};
        line.SizeOfStruct = sizeof line;
        DWORD line_displacement = 0;
        if (SymGetLineFromAddr64(GetCurrentProcess(), address, &line_displacement, &line) && line.FileName != nullptr) {
            short_source_path(line.FileName, out.file, sizeof out.file);
            out.line = line.LineNumber;
        }
    }
}

// The Windows thread description of `thread` as UTF-8, or an empty string.
inline void thread_description(HANDLE thread, char *out, std::size_t capacity) noexcept {
    copy_text(out, capacity, "");
    PWSTR description = nullptr;
    if (SUCCEEDED(GetThreadDescription(thread, &description)) && description != nullptr) {
        wide_to_utf8(description, out, capacity);
        LocalFree(description);
    }
}

}  // namespace lcs::symbols

#endif  // _WIN32
