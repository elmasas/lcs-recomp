// From VCS Recomp (gothamor/gta-vcs-recomp, GPL-3.0; see lcs/VCS_IMPORT.md).
// dbghelp's name for a host address, as the crash handler and the profiler print it (Windows). clang-cl's build: the
// name SymFromAddr gives (SYMOPT_UNDNAME undecorates MSVC's names: "FUN_003703b8_0x3703b8", "PS2Memory::read32").
// llvm-mingw's build: code without debug info - the generated code, libc++ - has only its
// public symbol, an Itanium name ("_Z21FUN_003703b8_0x3703b8Ph..."; dbghelp drops the leading '_'): it is demangled
// and its parameter list cut, so both builds print and match (FUN_*) the same names.
#pragma once

#if defined(_WIN32)
#include <windows.h>
#include <dbghelp.h>

#include <cstdlib>
#include <cstring>
#include <string>
#if defined(__MINGW32__)
#include <cxxabi.h>
#endif

namespace vcs
{
    // SymFromAddr, with sym->Name made plain (see above)
    inline BOOL symFromAddr(HANDLE process, DWORD64 address, DWORD64 *displacement, SYMBOL_INFO *sym)
    {
        if (!SymFromAddr(process, address, displacement, sym))
            return FALSE;
#if defined(__MINGW32__)
        const char *name = sym->Name;
        if (name[0] == 'Z' || (name[0] == '_' && name[1] == 'Z'))
        {
            const std::string mangled = name[0] == '_' ? std::string(name) : "_" + std::string(name);
            int status = 0;
            char *plain = abi::__cxa_demangle(mangled.c_str(), nullptr, nullptr, &status);
            if (status == 0 && plain)
            {
                std::string text(plain);
                std::free(plain);
                // the parameter list: from the '(' matching the last ')' ("(anonymous namespace)::f(int) const")
                size_t end = text.rfind(')');
                if (end != std::string::npos)
                {
                    int depth = 0;
                    for (size_t i = end + 1; i-- > 0;)
                    {
                        if (text[i] == ')')
                            ++depth;
                        else if (text[i] == '(' && --depth == 0)
                        {
                            text.resize(i);
                            break;
                        }
                    }
                }
                const size_t n = text.size() < sym->MaxNameLen - 1 ? text.size() : sym->MaxNameLen - 1;
                std::memcpy(sym->Name, text.data(), n);
                sym->Name[n] = '\0';
                sym->NameLen = static_cast<ULONG>(n);
            }
        }
#endif
        return TRUE;
    }
}
#endif
