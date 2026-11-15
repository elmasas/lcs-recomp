// Sampling profiler (see lcs_profiler.hpp). A background thread suspends each watched thread every ~250 us, reads its
// instruction pointer and resumes it. Every interval it prints, per thread, the host functions that held the most
// samples; with LCS_PROFILE_SPIKES it also explains single slow frames from a short ring of timestamped samples.

#include "lcs_profiler.hpp"

#if defined(_WIN32)
#include "lcs_host_symbols.hpp"
#include <tlhelp32.h>
#endif

#include "lcs_frame_limit.hpp"
#include "psprecomp/runtime.hpp"

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cmath>
#include <cstdarg>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <memory>
#include <string>
#include <thread>
#include <unordered_map>
#include <utility>
#include <vector>

namespace lcs {
namespace {

using Clock = std::chrono::steady_clock;

std::int64_t to_ns(Clock::time_point time) noexcept {
    return std::chrono::duration_cast<std::chrono::nanoseconds>(time.time_since_epoch()).count();
}

// Frame timing shared with profiler_frame(). It has a single caller (the presenting thread), so it publishes slow
// frames into a small ring that only the sampler thread reads.
constexpr std::uint32_t kSpikeSlots = 16;
constexpr std::uint32_t kMaxSpikeReports = 24;

struct SpikeSlot {
    std::atomic<std::int64_t> begin{0};
    std::atomic<std::int64_t> end{0};
};

std::atomic<bool> g_watch_frames{false};
std::atomic<std::int64_t> g_spike_limit_ns{0};
std::atomic<std::int64_t> g_last_frame_ns{0};
std::atomic<std::uint32_t> g_spikes_posted{0};
SpikeSlot g_spike_slots[kSpikeSlots];

std::atomic<bool> g_stop{false};

}  // namespace

void profiler_frame() noexcept {
    if (!g_watch_frames.load(std::memory_order_relaxed)) return;
    const std::int64_t now = to_ns(Clock::now());
    const std::int64_t previous = g_last_frame_ns.exchange(now, std::memory_order_relaxed);
    if (previous == 0 || now - previous <= g_spike_limit_ns.load(std::memory_order_relaxed)) return;
    const std::uint32_t index = g_spikes_posted.load(std::memory_order_relaxed);
    if (index >= kMaxSpikeReports) {
        g_watch_frames.store(false, std::memory_order_relaxed);
        return;
    }
    SpikeSlot &slot = g_spike_slots[index % kSpikeSlots];
    slot.begin.store(previous, std::memory_order_relaxed);
    slot.end.store(now, std::memory_order_relaxed);
    g_spikes_posted.store(index + 1, std::memory_order_release);
}

#if defined(_WIN32)

namespace {

constexpr auto kSamplePeriod = std::chrono::microseconds(250);
constexpr auto kRescanPeriod = std::chrono::seconds(1);
constexpr double kDefaultIntervalSeconds = 5.0;
constexpr std::size_t kRingSize = std::size_t{1} << 14;  // about 4 s of samples per thread
constexpr std::size_t kTopFunctions = 12;
constexpr std::size_t kSpikeTopFunctions = 4;
constexpr std::size_t kMaxCachedAddresses = std::size_t{1} << 20;

struct Config {
    double interval_seconds = kDefaultIntervalSeconds;
    double spike_ms = 0.0;  // 0: no slow-frame reports
    std::vector<std::string> names;
    std::vector<std::wstring> wide_names;
};

std::wstring widen(const std::string &text) {
    if (text.empty()) return {};
    const int length = MultiByteToWideChar(CP_UTF8, 0, text.data(), static_cast<int>(text.size()), nullptr, 0);
    std::wstring out(static_cast<std::size_t>(std::max(length, 0)), L'\0');
    if (length > 0)
        MultiByteToWideChar(CP_UTF8, 0, text.data(), static_cast<int>(text.size()), out.data(), length);
    return out;
}

double positive_number(const char *text) {
    if (text == nullptr) return 0.0;
    char *end = nullptr;
    const double value = std::strtod(text, &end);
    if (end == text || !std::isfinite(value) || value <= 0.0) return 0.0;
    return value;
}

Config read_config(const char *interval_text) {
    Config config;
    if (const double interval = positive_number(interval_text); interval > 0.0) config.interval_seconds = interval;
    config.spike_ms = positive_number(std::getenv("LCS_PROFILE_SPIKES"));

    const char *list = std::getenv("LCS_PROFILE_THREAD");
    if (list == nullptr || list[0] == '\0') list = "GameThread,GeWorker";
    std::string current;
    for (const char *p = list;; ++p) {
        if (*p == ',' || *p == '\0') {
            const auto first = current.find_first_not_of(" \t");
            const auto last = current.find_last_not_of(" \t");
            if (first != std::string::npos) config.names.push_back(current.substr(first, last - first + 1));
            current.clear();
            if (*p == '\0') break;
        } else {
            current.push_back(*p);
        }
    }
    for (const auto &name : config.names) config.wide_names.push_back(widen(name));
    return config;
}

// Interns one display name per function. Addresses are cached, so each one goes through DbgHelp only once.
class Resolver {
public:
    // Call with a symbols::Guard held.
    std::uint32_t function_of(std::uint64_t address) {
        if (const auto found = by_address_.find(address); found != by_address_.end()) return found->second;
        if (by_address_.size() >= kMaxCachedAddresses) by_address_.clear();
        symbols::Location where;
        symbols::locate(address, where, false);
        std::string name;
        const bool main_module = where.module_base == main_module_base_;
        if (where.function[0] != '\0') {
            if (!main_module) name = std::string(where.module) + "!";
            name += where.function;
        } else if (where.module[0] != '\0') {
            name = std::string(where.module) + "!(no symbol)";
        } else {
            name = "(unknown code)";
        }
        const std::uint32_t index = intern(name);
        by_address_.emplace(address, index);
        return index;
    }

    [[nodiscard]] const std::string &name(std::uint32_t index) const { return names_[index]; }

private:
    std::uint32_t intern(const std::string &name) {
        if (const auto found = by_name_.find(name); found != by_name_.end()) return found->second;
        const auto index = static_cast<std::uint32_t>(names_.size());
        names_.push_back(name);
        by_name_.emplace(name, index);
        return index;
    }

    std::uint64_t main_module_base_ = reinterpret_cast<std::uintptr_t>(GetModuleHandleW(nullptr));
    std::unordered_map<std::uint64_t, std::uint32_t> by_address_;
    std::unordered_map<std::string, std::uint32_t> by_name_;
    std::vector<std::string> names_;
};

struct Sample {
    std::int64_t time_ns = 0;
    std::uint64_t address = 0;
};

struct Target {
    std::string name;
    DWORD thread_id = 0;
    HANDLE handle = nullptr;
    bool gone = false;
    std::uint64_t samples = 0;  // this interval
    std::unordered_map<std::uint64_t, std::uint32_t> counts;
    std::vector<Sample> ring = std::vector<Sample>(kRingSize);
    std::size_t ring_next = 0;
    std::size_t ring_used = 0;
};

using Ranking = std::vector<std::pair<std::uint32_t, std::uint64_t>>;  // function index, samples

void print_block(const std::string &text) {
    std::fputs(text.c_str(), stdout);
    std::fflush(stdout);
}

void append(std::string &out, const char *format, ...) {
    char line[768];
    va_list args;
    va_start(args, format);
    const int written = std::vsnprintf(line, sizeof line, format, args);
    va_end(args);
    if (written > 0) out += line;
}

class Sampler {
public:
    Sampler(psprecomp::Runtime &runtime, Config config) : runtime_(runtime), config_(std::move(config)) {}

    Sampler(const Sampler &) = delete;
    Sampler &operator=(const Sampler &) = delete;

    ~Sampler() {
        for (auto &target : targets_) CloseHandle(target->handle);
        if (timer_ != nullptr) CloseHandle(timer_);
    }

    void run() {
        timer_ = CreateWaitableTimerExW(nullptr, nullptr, CREATE_WAITABLE_TIMER_HIGH_RESOLUTION, TIMER_ALL_ACCESS);
        const auto interval = std::chrono::duration_cast<Clock::duration>(
            std::chrono::duration<double>(config_.interval_seconds));
        auto window_start = Clock::now();
        auto next_report = window_start + interval;
        auto next_scan = window_start;

        while (!g_stop.load(std::memory_order_relaxed) && !runtime_.stopped()) {
            const auto now = Clock::now();
            if (now >= next_scan) {
                forget_finished_threads();
                if (!all_found()) find_threads();
                next_scan = now + kRescanPeriod;
            }
            const std::int64_t stamp = to_ns(now);
            for (auto &target : targets_) sample(*target, stamp);
            if (config_.spike_ms > 0.0) report_slow_frames();
            if (now >= next_report) {
                report(std::chrono::duration<double>(now - window_start).count(), false);
                window_start = now;
                next_report = now + interval;
            }
            wait_one_period();
        }
        g_watch_frames.store(false, std::memory_order_relaxed);
        const double tail = std::chrono::duration<double>(Clock::now() - window_start).count();
        if (std::any_of(targets_.begin(), targets_.end(), [](const auto &t) { return t->samples > 0; }))
            report(tail, true);
    }

private:
    void wait_one_period() {
        if (timer_ != nullptr) {
            LARGE_INTEGER due{};
            due.QuadPart = -static_cast<LONGLONG>(std::chrono::duration_cast<std::chrono::nanoseconds>(kSamplePeriod)
                                                      .count() / 100);
            if (SetWaitableTimerEx(timer_, &due, 0, nullptr, nullptr, nullptr, 0)) {
                WaitForSingleObject(timer_, INFINITE);
                return;
            }
        }
        Sleep(1);
    }

    [[nodiscard]] bool all_found() const {
        for (const auto &name : config_.names) {
            const bool found = std::any_of(targets_.begin(), targets_.end(),
                                           [&](const auto &t) { return _stricmp(t->name.c_str(), name.c_str()) == 0; });
            if (!found) return false;
        }
        return true;
    }

    [[nodiscard]] bool tracking(DWORD thread_id) const {
        return std::any_of(targets_.begin(), targets_.end(), [&](const auto &t) { return t->thread_id == thread_id; });
    }

    void find_threads() {
        HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);
        if (snapshot == INVALID_HANDLE_VALUE) return;
        const DWORD process = GetCurrentProcessId();
        const DWORD self = GetCurrentThreadId();
        THREADENTRY32 entry{};
        entry.dwSize = sizeof entry;
        for (BOOL more = Thread32First(snapshot, &entry); more; more = Thread32Next(snapshot, &entry)) {
            const DWORD id = entry.th32ThreadID;
            if (entry.th32OwnerProcessID != process || id == self || tracking(id)) continue;
            HANDLE handle = OpenThread(THREAD_SUSPEND_RESUME | THREAD_GET_CONTEXT | THREAD_QUERY_LIMITED_INFORMATION |
                                           SYNCHRONIZE,
                                       FALSE, id);
            if (handle == nullptr) continue;
            const std::string *match = nullptr;
            PWSTR description = nullptr;
            if (SUCCEEDED(GetThreadDescription(handle, &description)) && description != nullptr) {
                for (std::size_t i = 0; i < config_.wide_names.size() && match == nullptr; ++i)
                    if (_wcsicmp(description, config_.wide_names[i].c_str()) == 0) match = &config_.names[i];
                LocalFree(description);
            }
            if (match == nullptr) {
                CloseHandle(handle);
                continue;
            }
            auto target = std::make_unique<Target>();
            target->name = *match;
            target->thread_id = id;
            target->handle = handle;
            std::printf("[profile] watching %s (thread %lu)\n", match->c_str(), static_cast<unsigned long>(id));
            std::fflush(stdout);
            targets_.push_back(std::move(target));
        }
        CloseHandle(snapshot);
    }

    void forget_finished_threads() {
        for (auto it = targets_.begin(); it != targets_.end();) {
            Target &target = **it;
            if (target.gone || WaitForSingleObject(target.handle, 0) == WAIT_OBJECT_0) {
                std::printf("[profile] %s (thread %lu) has ended\n", target.name.c_str(),
                            static_cast<unsigned long>(target.thread_id));
                std::fflush(stdout);
                CloseHandle(target.handle);
                it = targets_.erase(it);
            } else {
                ++it;
            }
        }
    }

    // Nothing that could take a lock runs while the target is suspended: it might hold that lock.
    static void sample(Target &target, std::int64_t stamp) {
        if (target.gone) return;
        if (SuspendThread(target.handle) == static_cast<DWORD>(-1)) {
            target.gone = true;
            return;
        }
        CONTEXT context{};
        context.ContextFlags = CONTEXT_CONTROL;
        const BOOL ok = GetThreadContext(target.handle, &context);
        ResumeThread(target.handle);
        if (!ok) return;
#if defined(_M_X64) || defined(__x86_64__)
        const std::uint64_t address = context.Rip;
#elif defined(_M_ARM64) || defined(__aarch64__)
        const std::uint64_t address = context.Pc;
#else
        const std::uint64_t address = context.Eip;
#endif
        ++target.counts[address];
        ++target.samples;
        target.ring[target.ring_next] = Sample{stamp, address};
        target.ring_next = (target.ring_next + 1) % kRingSize;
        target.ring_used = std::min(target.ring_used + 1, kRingSize);
    }

    Ranking rank(const std::unordered_map<std::uint64_t, std::uint32_t> &counts) {
        std::unordered_map<std::uint32_t, std::uint64_t> per_function;
        for (const auto &[address, count] : counts) per_function[resolver_.function_of(address)] += count;
        Ranking ranking(per_function.begin(), per_function.end());
        std::sort(ranking.begin(), ranking.end(), [](const auto &a, const auto &b) { return a.second > b.second; });
        return ranking;
    }

    // Layout:
    //   [profile] ==== 5.0 s ====
    //   [profile] GameThread (thread 1234): 19876 samples, 3975/s
    //   [profile]    41.3%    8210  lcs::some_function
    //   [profile]     9.0%    1790  (213 more functions)
    void report(double seconds, bool final_window) {
        std::string out;
        symbols::Guard guard(std::chrono::seconds(10));
        append(out, "[profile] ==== %.1f s%s ====\n", seconds, final_window ? ", last window" : "");
        if (guard.locked()) symbols::refresh_modules();
        for (const auto &name : config_.names) {
            const bool found = std::any_of(targets_.begin(), targets_.end(),
                                           [&](const auto &t) { return _stricmp(t->name.c_str(), name.c_str()) == 0; });
            if (!found) append(out, "[profile] %s: no such thread yet\n", name.c_str());
        }
        for (auto &pointer : targets_) {
            Target &target = *pointer;
            const double total = static_cast<double>(target.samples);
            append(out, "[profile] %s (thread %lu): %llu samples, %.0f/s\n", target.name.c_str(),
                   static_cast<unsigned long>(target.thread_id), static_cast<unsigned long long>(target.samples),
                   seconds > 0.0 ? total / seconds : 0.0);
            if (target.samples > 0 && guard.locked()) {
                const Ranking ranking = rank(target.counts);
                std::uint64_t shown = 0;
                for (std::size_t i = 0; i < ranking.size() && i < kTopFunctions; ++i) {
                    shown += ranking[i].second;
                    const double share = 100.0 * static_cast<double>(ranking[i].second) / total;
                    const auto count = static_cast<unsigned long long>(ranking[i].second);
                    append(out, "[profile]   %5.1f%%  %7llu  %s\n", share, count,
                           resolver_.name(ranking[i].first).c_str());
                }
                if (ranking.size() > kTopFunctions) {
                    const std::uint64_t rest = target.samples - shown;
                    append(out, "[profile]   %5.1f%%  %7llu  (%zu more functions)\n",
                           100.0 * static_cast<double>(rest) / total, static_cast<unsigned long long>(rest),
                           ranking.size() - kTopFunctions);
                }
            }
            target.counts.clear();
            target.samples = 0;
        }
        print_block(out);
    }

    // Layout:
    //   [profile] slow frame 3/24: 48.2 ms (limit 25 ms)
    //   [profile]   GameThread: 190 samples | 61% lcs::foo | 20% lcs::bar | 9% ntdll.dll!NtWaitForSingleObject
    void report_slow_frames() {
        const std::uint32_t posted = g_spikes_posted.load(std::memory_order_acquire);
        if (spikes_seen_ + kSpikeSlots < posted) spikes_seen_ = posted - kSpikeSlots;
        while (spikes_seen_ < posted) {
            const SpikeSlot &slot = g_spike_slots[spikes_seen_ % kSpikeSlots];
            const std::int64_t begin = slot.begin.load(std::memory_order_relaxed);
            const std::int64_t end = slot.end.load(std::memory_order_relaxed);
            ++spikes_seen_;
            if (end > begin) report_slow_frame(spikes_seen_, begin, end);
        }
    }

    void report_slow_frame(std::uint32_t number, std::int64_t begin, std::int64_t end) {
        std::string out;
        append(out, "[profile] slow frame %u/%u: %.1f ms (limit %.0f ms)\n", number, kMaxSpikeReports,
               static_cast<double>(end - begin) / 1e6, config_.spike_ms);
        symbols::Guard guard(std::chrono::seconds(2));
        for (auto &pointer : targets_) {
            const Target &target = *pointer;
            std::unordered_map<std::uint64_t, std::uint32_t> counts;
            std::uint64_t in_frame = 0;
            std::int64_t oldest = end;
            for (std::size_t i = 0; i < target.ring_used; ++i) {
                const Sample &sample = target.ring[(target.ring_next + kRingSize - 1 - i) % kRingSize];
                oldest = sample.time_ns;
                if (sample.time_ns > end) continue;
                if (sample.time_ns < begin) break;
                ++counts[sample.address];
                ++in_frame;
            }
            append(out, "[profile]   %s: %llu samples", target.name.c_str(), static_cast<unsigned long long>(in_frame));
            if (in_frame > 0 && guard.locked()) {
                const Ranking ranking = rank(counts);
                for (std::size_t i = 0; i < ranking.size() && i < kSpikeTopFunctions; ++i)
                    append(out, " | %.0f%% %s",
                           100.0 * static_cast<double>(ranking[i].second) / static_cast<double>(in_frame),
                           resolver_.name(ranking[i].first).c_str());
            }
            if (target.ring_used == kRingSize && oldest > begin)
                append(out, " (only the last %.0f ms were kept)", static_cast<double>(end - oldest) / 1e6);
            out += '\n';
        }
        if (number == kMaxSpikeReports) out += "[profile] slow-frame report limit reached\n";
        print_block(out);
    }

    psprecomp::Runtime &runtime_;
    Config config_;
    Resolver resolver_;
    std::vector<std::unique_ptr<Target>> targets_;
    std::uint32_t spikes_seen_ = 0;
    HANDLE timer_ = nullptr;
};

// Joins the sampler at exit. Created after the DbgHelp lock, so it is destroyed (and joined) before that lock is.
struct SamplerThread {
    std::thread thread;
    ~SamplerThread() {
        g_stop.store(true, std::memory_order_relaxed);
        if (thread.joinable()) thread.join();
    }
};

}  // namespace

void start_profiler(psprecomp::Runtime &runtime) {
    set_host_thread_name(L"GameThread");
    const char *setting = std::getenv("LCS_PROFILE");
    if (setting == nullptr) return;

    static bool started = false;
    if (started) return;
    started = true;

    Config config = read_config(setting);
    if (positive_number(setting) <= 0.0)
        std::printf("[profile] LCS_PROFILE=\"%s\" is not a positive number of seconds; using %.0f\n", setting,
                    kDefaultIntervalSeconds);
    std::string names;
    for (const auto &name : config.names) names += (names.empty() ? "" : ",") + name;
    std::printf("[profile] on: report every %.1f s, sampling %s every %lld us", config.interval_seconds, names.c_str(),
                static_cast<long long>(kSamplePeriod.count()));
    if (config.spike_ms > 0.0) std::printf(", slow frames over %.1f ms", config.spike_ms);
    std::printf("\n");
    std::fflush(stdout);
    if (config.names.empty()) return;

    if (config.spike_ms > 0.0) {
        g_spike_limit_ns.store(static_cast<std::int64_t>(config.spike_ms * 1e6), std::memory_order_relaxed);
        g_last_frame_ns.store(0, std::memory_order_relaxed);
        g_watch_frames.store(true, std::memory_order_relaxed);
    }

    symbols::dbghelp_mutex();
    static SamplerThread holder;
    holder.thread = std::thread([&runtime, config = std::move(config)]() mutable {
        set_host_thread_name(L"Profiler");
        SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_HIGHEST);
        Sampler sampler(runtime, std::move(config));
        sampler.run();
    });
}

#else  // !_WIN32

void start_profiler(psprecomp::Runtime &) {
    if (std::getenv("LCS_PROFILE") != nullptr) {
        std::printf("[profile] the sampling profiler is only available on Windows\n");
        std::fflush(stdout);
    }
}

#endif

}  // namespace lcs
