// Per-frame timing log, in the spirit of VCS Recomp's PS2X_PERF_LOG (docs/PERFORMANCE.md).
// LCS_PERF_LOG=<file.csv> turns it on; off, each note costs one predictable branch.
#pragma once

#include <array>
#include <atomic>
#include <chrono>
#include <cstddef>
#include <cstdint>

namespace lcs::perf {

enum Counter : std::size_t {
    kGeListUs,         // GE worker: running the game's display lists
    kFinishFrameUs,    // GE worker: closing and submitting the frame, Present included
    kDxgiPresentUs,    // of which IDXGISwapChain::Present
    kFenceWaitUs,      // waiting for the GPU
    kIdleWaitUs,       // game thread blocked until the GE worker is idle
    kThrottleUs,       // game thread sleeping until the next real-time vblank
    kTexNew,           // textures created
    kTexSame,          // decoded again, but the content was already cached
    kTexReplaced,      // same key, new content
    kTexEvicted,       // dropped to make room
    kTexKb,            // bytes prepared for upload
    kTexDecodeUs,      // decoding guest textures to RGBA
    kTexHashUs,        // hashing decoded textures
    kPsoNew,           // pipelines created
    kPsoUs,            // time creating pipelines
    kIoReads,          // sceIoRead calls
    kIoKb,             // bytes read
    kIoUs,             // time reading
    kWorldUs,          // game thread: expand_world_sector, whole
    kWorldReadUs,      // reading the neighbours, on whichever thread
    kWorldMergeUs,     // merging them, on whichever thread
    kWorldCacheHits,   // sectors already built or being built
    kWorldSectors,     // sectors expanded
    kLodUs,            // game thread: distant lights
    kLodDrawn,         // distant lights drawn
    kVblanks,          // presents attempted
    kSkippedVblanks,   // vblanks the throttle skipped because it was behind
    kSkippedPresents,  // vblanks with a present still pending on the GE worker
    kGameUs,           // game thread: running the game between vblank waits (idle_wait included)
    kCounterCount,
};

extern bool g_enabled;
extern std::array<std::atomic<std::uint64_t>, kCounterCount> g_counters;

inline void add(Counter counter, std::uint64_t value = 1u) noexcept {
    if (g_enabled) g_counters[counter].fetch_add(value, std::memory_order_relaxed);
}

class Scope {
public:
    explicit Scope(Counter counter) noexcept : counter_(counter) {
        if (g_enabled) start_ = std::chrono::steady_clock::now();
    }
    Scope(const Scope &) = delete;
    Scope &operator=(const Scope &) = delete;
    ~Scope() {
        if (!g_enabled) return;
        add(counter_, static_cast<std::uint64_t>(std::chrono::duration_cast<std::chrono::microseconds>(
                                                     std::chrono::steady_clock::now() - start_).count()));
    }

private:
    Counter counter_;
    std::chrono::steady_clock::time_point start_{};
};

void init();
void shutdown();
// One row per new image shown. Called by the thread that presents.
void frame() noexcept;
void set_position(float x, float y) noexcept;
// Game thread, each pad sample: where the player is, and whether in a vehicle or a menu.
void set_player(float x, float y, float z, bool vehicle, bool menu) noexcept;
// The player's stutter key: the next row gets mark=1. False when the log is off.
bool mark() noexcept;
void set_coronas(std::uint32_t active) noexcept;

}  // namespace lcs::perf
