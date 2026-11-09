#include "lcs_frame_limit.hpp"

#include <thread>

#if defined(_WIN32)
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#endif

namespace lcs {

void set_host_thread_name(const wchar_t *name) noexcept {
#if defined(_WIN32)
    SetThreadDescription(GetCurrentThread(), name);
#else
    (void)name;
#endif
}

void precise_sleep_until(std::chrono::steady_clock::time_point deadline) noexcept {
#if defined(_WIN32)
    thread_local HANDLE timer = CreateWaitableTimerExW(
        nullptr, nullptr, CREATE_WAITABLE_TIMER_HIGH_RESOLUTION, TIMER_ALL_ACCESS);
    if (timer == nullptr) {
        std::this_thread::sleep_until(deadline);
        return;
    }
    constexpr auto kSpinMargin = std::chrono::microseconds(500);
    const auto remaining = deadline - std::chrono::steady_clock::now() - kSpinMargin;
    if (remaining > std::chrono::steady_clock::duration::zero()) {
        LARGE_INTEGER due{};
        due.QuadPart = -static_cast<LONGLONG>(
            std::chrono::duration_cast<std::chrono::nanoseconds>(remaining).count() / 100);
        if (SetWaitableTimerEx(timer, &due, 0, nullptr, nullptr, nullptr, 0))
            WaitForSingleObject(timer, INFINITE);
    }
    while (std::chrono::steady_clock::now() < deadline) YieldProcessor();
#else
    std::this_thread::sleep_until(deadline);
#endif
}

}
