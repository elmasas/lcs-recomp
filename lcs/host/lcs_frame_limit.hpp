#pragma once

#include <chrono>

namespace lcs {

[[nodiscard]] bool lcs_frame_limiter_unlocked() noexcept;

void precise_sleep_until(std::chrono::steady_clock::time_point deadline) noexcept;

// The name the sampling profiler looks for (lcs/host/vcs/profiler.hpp).
void set_host_thread_name(const wchar_t *name) noexcept;

}
