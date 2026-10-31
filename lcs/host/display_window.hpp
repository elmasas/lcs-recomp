#pragma once
#include "psprecomp/runtime.hpp"

#include <cstddef>
#include <cstdint>
#include <span>

namespace lcs {

void display_window_init();
void display_window_attach_gpu_backend();
[[nodiscard]] bool display_window_closed();
void display_window_pump();
void display_window_present(psprecomp::Runtime &runtime, std::uint32_t frame_buffer,
                            std::uint32_t buffer_width, std::uint32_t pixel_format,
                            std::uint32_t width, std::uint32_t height);
void display_window_present_rgba(std::span<const std::byte> rgba, std::uint32_t width,
                                 std::uint32_t height);
void display_window_shutdown();
void display_window_request_fullscreen(bool enabled) noexcept;

struct HostInputState {
    std::uint32_t buttons{};
    std::uint8_t analog_x{128u};
    std::uint8_t analog_y{128u};
    int camera_x{};
    int camera_y{};
    bool accelerate{};
    bool brake{};
    std::uint8_t throttle{};
    std::uint8_t brake_pressure{};
};
[[nodiscard]] HostInputState display_window_input();

}
