// Adapted from VCS Recomp's src/debug/profiler.cpp (GPL-3.0; see lcs/VCS_IMPORT.md): the thread lookup and the
// suspend-and-read sampling and the spike reports are the same; the PS2 guest function table is gone.
#include "profiler.hpp"

#include "psprecomp/runtime.hpp"

#if defined(_WIN32)

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <thread>
#include <unordered_map>
#include <utility>
#include <vector>

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <tlhelp32.h>
#include <timeapi.h>
#include <dbghelp.h>
#include "win_symbols.h"

namespace vcs {
namespace {

std::atomic<std::int64_t> g_last_frame_ns{0}, g_spike_from_ns{0}, g_spike_to_ns{0};
std::int64_t g_spike_ms = 0;

std::int64_t now_ns() noexcept {
    return std::chrono::duration_cast<std::chrono::nanoseconds>(
        std::chrono::steady_clock::now().time_since_epoch()).count();
}

struct Sampled {
    HANDLE handle{};
    std::string name;
};

std::vector<Sampled> find_threads() {
    using GetThreadDescriptionFn = HRESULT(WINAPI *)(HANDLE, PWSTR *);
    const auto get_description = reinterpret_cast<GetThreadDescriptionFn>(
        GetProcAddress(GetModuleHandleW(L"Kernel32.dll"), "GetThreadDescription"));
    std::vector<Sampled> out;
    if (get_description == nullptr) return out;
    std::vector<std::string> wanted{"GameThread", "GeWorker"};
    if (const char *list = std::getenv("LCS_PROFILE_THREAD")) {
        wanted.clear();
        for (const char *p = list; *p;) {
            const char *comma = std::strchr(p, ',');
            const char *end = comma ? comma : p + std::strlen(p);
            wanted.emplace_back(p, end);
            p = comma ? comma + 1 : end;
        }
    }
    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);
    THREADENTRY32 entry{sizeof(entry)};
    const DWORD pid = GetCurrentProcessId();
    for (BOOL ok = Thread32First(snapshot, &entry); ok; ok = Thread32Next(snapshot, &entry)) {
        if (entry.th32OwnerProcessID != pid) continue;
        HANDLE handle = OpenThread(THREAD_SUSPEND_RESUME | THREAD_GET_CONTEXT | THREAD_QUERY_LIMITED_INFORMATION,
                                   FALSE, entry.th32ThreadID);
        if (handle == nullptr) continue;
        PWSTR name = nullptr;
        std::string label;
        if (SUCCEEDED(get_description(handle, &name)) && name != nullptr) {
            for (const wchar_t *c = name; *c; ++c) label += static_cast<char>(*c);
            LocalFree(name);
        }
        if (std::find(wanted.begin(), wanted.end(), label) != wanted.end())
            out.push_back({handle, label});
        else
            CloseHandle(handle);
    }
    CloseHandle(snapshot);
    return out;
}

std::string symbol_name(DWORD64 address) {
    alignas(SYMBOL_INFO) char buffer[sizeof(SYMBOL_INFO) + 256];
    auto *symbol = reinterpret_cast<SYMBOL_INFO *>(buffer);
    symbol->SizeOfStruct = sizeof(SYMBOL_INFO);
    symbol->MaxNameLen = 255;
    DWORD64 displacement = 0;
    if (symFromAddr(GetCurrentProcess(), address, &displacement, symbol)) return symbol->Name;
    HMODULE module = nullptr;
    char module_name[MAX_PATH] = "?";
    if (GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                           reinterpret_cast<LPCSTR>(address), &module))
        GetModuleFileNameA(module, module_name, MAX_PATH);
    const char *leaf = std::strrchr(module_name, '\\');
    return std::string(leaf ? leaf + 1 : module_name) + "!?";
}

}  // namespace

void startProfiler(psprecomp::Runtime &runtime) {
    const char *env = std::getenv("LCS_PROFILE");
    if (env == nullptr || *env == '\0') return;
    const double report_seconds = std::atof(env) > 0.0 ? std::atof(env) : 5.0;
    if (const char *spikes = std::getenv("LCS_PROFILE_SPIKES")) g_spike_ms = std::atoll(spikes);
    SetThreadDescription(GetCurrentThread(), L"GameThread");
    std::thread([&runtime, report_seconds] {
        SetThreadDescription(GetCurrentThread(), L"Profiler");
        // Without this the 500 us sleep below lasts ~15 ms, far too coarse to see inside one slow frame.
        timeBeginPeriod(1);
        SymSetOptions(SYMOPT_UNDNAME | SYMOPT_DEFERRED_LOADS);
        SymInitialize(GetCurrentProcess(), nullptr, TRUE);
        std::vector<Sampled> threads;
        std::vector<std::unordered_map<DWORD64, std::uint64_t>> hits;
        struct Timed {
            std::int64_t ns;
            DWORD64 rip;
            std::uint32_t thread;
        };
        std::vector<Timed> recent;
        int spikes_reported = 0;
        const std::int64_t start_ns = now_ns();
        auto last_report = std::chrono::steady_clock::now();
        auto last_look = std::chrono::steady_clock::time_point{};
        while (!runtime.stopped()) {
            std::this_thread::sleep_for(std::chrono::microseconds(500));
            const auto now = std::chrono::steady_clock::now();
            if (threads.size() < 2u && now - last_look > std::chrono::seconds(1)) {
                last_look = now;
                for (const Sampled &thread : threads) CloseHandle(thread.handle);
                threads = find_threads();
                hits.assign(threads.size(), {});
                recent.clear();
            }
            for (std::size_t index = 0u; index < threads.size(); ++index) {
                if (SuspendThread(threads[index].handle) == static_cast<DWORD>(-1)) continue;
                CONTEXT context{};
                context.ContextFlags = CONTEXT_CONTROL;
                const bool got = GetThreadContext(threads[index].handle, &context) != 0;
                ResumeThread(threads[index].handle);
                if (!got) continue;
                ++hits[index][context.Rip];
                if (g_spike_ms > 0) {
                    if (recent.size() >= 8192u) recent.erase(recent.begin(), recent.begin() + 4096);
                    recent.push_back({now_ns(), context.Rip, static_cast<std::uint32_t>(index)});
                }
            }
            if (g_spike_ms > 0 && g_spike_to_ns.load(std::memory_order_acquire) != 0) {
                const std::int64_t from = g_spike_from_ns.load(), to = g_spike_to_ns.load();
                g_spike_to_ns.store(0, std::memory_order_release);
                std::unordered_map<std::string, std::uint64_t> by;
                std::uint64_t count = 0u;
                for (const Timed &sample : recent) {
                    if (sample.ns < from || sample.ns > to) continue;
                    ++count;
                    ++by[threads[sample.thread].name + ": " + symbol_name(sample.rip)];
                }
                if (count != 0u && spikes_reported++ < 400) {
                    std::vector<std::pair<std::string, std::uint64_t>> rows(by.begin(), by.end());
                    std::sort(rows.begin(), rows.end(), [](const auto &a, const auto &b) { return a.second > b.second; });
                    std::string line;
                    for (std::size_t row = 0u; row < rows.size() && row < 10u; ++row)
                        line += " | " + rows[row].first + " " + std::to_string(rows[row].second);
                    std::fprintf(stderr, "[spike] t=%.2f s: %.1f ms frame, %llu samples%s\n",
                                 static_cast<double>(to - start_ns) / 1e9, static_cast<double>(to - from) / 1e6,
                                 static_cast<unsigned long long>(count), line.c_str());
                    std::fflush(stderr);
                }
            }
            if (std::chrono::duration<double>(now - last_report).count() < report_seconds) continue;
            last_report = now;
            for (std::size_t index = 0u; index < threads.size(); ++index) {
                std::unordered_map<std::string, std::uint64_t> by_name;
                std::uint64_t total = 0u;
                for (const auto &[rip, count] : hits[index]) {
                    by_name[symbol_name(rip)] += count;
                    total += count;
                }
                hits[index].clear();
                if (total == 0u) continue;
                std::vector<std::pair<std::string, std::uint64_t>> rows(by_name.begin(), by_name.end());
                std::sort(rows.begin(), rows.end(), [](const auto &a, const auto &b) { return a.second > b.second; });
                std::fprintf(stderr, "[profile] %s: %llu samples\n", threads[index].name.c_str(),
                             static_cast<unsigned long long>(total));
                for (std::size_t row = 0u; row < rows.size() && row < 30u; ++row)
                    std::fprintf(stderr, "[profile]   %5.1f%%  %s\n", 100.0 * static_cast<double>(rows[row].second) /
                                 static_cast<double>(total), rows[row].first.c_str());
            }
            std::fflush(stderr);
        }
    }).detach();
}

void profilerFrame() noexcept {
    if (g_spike_ms <= 0) return;
    const std::int64_t now = now_ns(), last = g_last_frame_ns.exchange(now);
    if (last != 0 && now - last > g_spike_ms * 1000000 && g_spike_to_ns.load(std::memory_order_acquire) == 0) {
        g_spike_from_ns.store(last);
        g_spike_to_ns.store(now, std::memory_order_release);
    }
}

}  // namespace vcs

#else

namespace vcs {
void startProfiler(psprecomp::Runtime &) {}
void profilerFrame() noexcept {}
}  // namespace vcs

#endif
