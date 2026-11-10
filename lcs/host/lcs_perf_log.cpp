#include "lcs_perf_log.hpp"

#include "lcs_render_config.hpp"
#include "vcs/profiler.hpp"

#include <condition_variable>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <psapi.h>
#endif

namespace lcs::perf {

bool g_enabled = false;
std::array<std::atomic<std::uint64_t>, kCounterCount> g_counters{};

namespace {

using Clock = std::chrono::steady_clock;

struct Row {
    double t{};
    double frame_ms{};
    std::array<std::uint64_t, kCounterCount> counters{};
    float x{};
    float y{};
    float view_distance{};
    std::uint32_t coronas{};
    float z{};
    std::uint8_t vehicle{};
    std::uint8_t menu{};
    std::uint8_t mark{};
    std::uint32_t mem_mb{};
};

std::FILE *g_file = nullptr;
std::mutex g_mutex;
std::condition_variable g_wake;
std::vector<Row> g_pending;
std::thread g_writer;
bool g_stop = false;
Clock::time_point g_start{};
Clock::time_point g_previous{};
std::atomic<float> g_x{0.0f};
std::atomic<float> g_y{0.0f};
std::atomic<std::uint32_t> g_coronas{0u};
std::atomic<float> g_z{0.0f};
std::atomic<std::uint8_t> g_vehicle{0u};
std::atomic<std::uint8_t> g_menu{0u};
std::atomic<bool> g_mark{false};

// Once a second: the process's working set, in MB, to see memory grow over a long session.
std::uint32_t memory_mb(Clock::time_point now) noexcept {
    static Clock::time_point last{};
    static std::uint32_t value = 0u;
    if (now - last < std::chrono::seconds(1)) return value;
    last = now;
#ifdef _WIN32
    PROCESS_MEMORY_COUNTERS counters{};
    if (K32GetProcessMemoryInfo(GetCurrentProcess(), &counters, sizeof(counters)))
        value = static_cast<std::uint32_t>(counters.WorkingSetSize >> 20u);
#endif
    return value;
}

void write_rows(const std::vector<Row> &rows) {
    for (const Row &row : rows) {
        std::fprintf(g_file, "%.4f,%.3f", row.t, row.frame_ms);
        for (const std::uint64_t value : row.counters)
            std::fprintf(g_file, ",%llu", static_cast<unsigned long long>(value));
        std::fprintf(g_file, ",%.1f,%.1f,%.2f,%u,%.1f,%u,%u,%u,%u\n", row.x, row.y, row.view_distance, row.coronas, row.z,
                     row.vehicle, row.menu, row.mark, row.mem_mb);
    }
    std::fflush(g_file);
}

// Disk writes stay off the presenting thread: they would make the hitches this log looks for.
void writer_main() {
    std::vector<Row> rows;
    std::unique_lock lock(g_mutex);
    for (;;) {
        g_wake.wait_for(lock, std::chrono::seconds(2), [] { return g_stop; });
        rows.swap(g_pending);
        const bool stop = g_stop;
        lock.unlock();
        write_rows(rows);
        rows.clear();
        lock.lock();
        if (stop && g_pending.empty()) return;
    }
}

}  // namespace

void init() {
    const char *path = std::getenv("LCS_PERF_LOG");
    if (path == nullptr || *path == '\0') return;
    g_file = std::fopen(path, "w");
    if (g_file == nullptr) {
        std::cerr << "[perf] cannot open " << path << "\n";
        return;
    }
    std::fputs("t_s,frame_ms,ge_list_us,finish_frame_us,dxgi_present_us,fence_wait_us,idle_wait_us,throttle_us,"
               "tex_new,tex_same,tex_replaced,tex_evicted,tex_kb,tex_decode_us,tex_hash_us,pso_new,pso_us,"
               "io_reads,io_kb,io_us,world_us,world_read_us,world_merge_us,world_cache_hits,world_sectors,lod_us,lod_drawn,vblanks,skipped_vblanks,skipped_presents,game_us,x,y,view_distance,coronas,"
               "z,vehicle,menu,mark,mem_mb\n", g_file);
    g_pending.reserve(1024u);
    g_start = g_previous = Clock::now();
    g_enabled = true;
    g_writer = std::thread(writer_main);
    std::cerr << "[perf] logging frames to " << path << "\n";
}

void shutdown() {
    if (!g_enabled) return;
    g_enabled = false;
    {
        std::lock_guard lock(g_mutex);
        g_stop = true;
    }
    g_wake.notify_all();
    if (g_writer.joinable()) g_writer.join();
    std::fclose(g_file);
    g_file = nullptr;
}

namespace {
// An exit that doesn't pass through main's shutdown() would destroy a running thread, which ends the process.
struct WriterStopper {
    ~WriterStopper() { shutdown(); }
};
const WriterStopper g_writer_stopper;
}  // namespace

void frame() noexcept {
    vcs::profilerFrame();
    if (!g_enabled) return;
    const auto now = Clock::now();
    Row row;
    row.t = std::chrono::duration<double>(now - g_start).count();
    row.frame_ms = std::chrono::duration<double, std::milli>(now - g_previous).count();
    g_previous = now;
    for (std::size_t index = 0u; index < kCounterCount; ++index)
        row.counters[index] = g_counters[index].exchange(0u, std::memory_order_relaxed);
    row.x = g_x.load(std::memory_order_relaxed);
    row.y = g_y.load(std::memory_order_relaxed);
    row.view_distance = view_distance_scale();
    row.coronas = g_coronas.load(std::memory_order_relaxed);
    row.z = g_z.load(std::memory_order_relaxed);
    row.vehicle = g_vehicle.load(std::memory_order_relaxed);
    row.menu = g_menu.load(std::memory_order_relaxed);
    row.mark = g_mark.exchange(false, std::memory_order_relaxed) ? 1u : 0u;
    row.mem_mb = memory_mb(now);
    try {
        std::lock_guard lock(g_mutex);
        g_pending.push_back(row);
    } catch (...) {
    }
}

void set_coronas(std::uint32_t active) noexcept { g_coronas.store(active, std::memory_order_relaxed); }

void set_player(float x, float y, float z, bool vehicle, bool menu) noexcept {
    if (!g_enabled) return;
    set_position(x, y);
    g_z.store(z, std::memory_order_relaxed);
    g_vehicle.store(vehicle ? 1u : 0u, std::memory_order_relaxed);
    g_menu.store(menu ? 1u : 0u, std::memory_order_relaxed);
}

bool mark() noexcept {
    if (!g_enabled) return false;
    g_mark.store(true, std::memory_order_relaxed);
    std::cerr << "[perf] mark at " << std::chrono::duration<double>(Clock::now() - g_start).count() << " s\n";
    return true;
}

void set_position(float x, float y) noexcept {
    g_x.store(x, std::memory_order_relaxed);
    g_y.store(y, std::memory_order_relaxed);
}

}  // namespace lcs::perf
