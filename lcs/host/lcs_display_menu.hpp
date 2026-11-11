#pragma once

#include <cstddef>
#include <cstdint>
#include <string>

namespace lcs {

enum class HostSettingsKey {
    Toggle,
    Up,
    Down,
    Left,
    Right,
    Close,
};

struct HostSettingsView {
    int selected{0};
    char rows[5][48]{};
    bool resolution_pending{false};
};

[[nodiscard]] bool host_settings_open() noexcept;
bool host_settings_handle(HostSettingsKey key) noexcept;
void host_settings_note_fullscreen(bool enabled) noexcept;
// Updates one value in LCSNative.ini, keeping the rest of the file. Any thread.
void host_settings_write(const std::string &section, const std::string &key, const std::string &value);
[[nodiscard]] HostSettingsView host_settings_view() noexcept;

// Win32 message and virtual-key values, named here so the window procedure
// and the tests share one classification without including windows.h.
inline constexpr std::uint32_t kWin32KeyDown = 0x0100u;
inline constexpr std::uint32_t kWin32KeyUp = 0x0101u;
inline constexpr std::uint32_t kWin32SysKeyDown = 0x0104u;
inline constexpr std::uint32_t kWin32SysKeyUp = 0x0105u;
inline constexpr std::uint32_t kWin32SysCommand = 0x0112u;
inline constexpr std::uint32_t kWin32VkF10 = 0x79u;
inline constexpr std::uint32_t kWin32ScKeyMenu = 0xF100u;

struct Win32HostKeyDecision {
    bool consume{false};
    bool toggle_settings{false};
};

// F10 press and release are consumed, including when Windows delivers them as
// system keys. The system key-menu command is ignored so DefWindowProc cannot
// enter its modal menu loop.
[[nodiscard]] Win32HostKeyDecision classify_win32_host_key(std::uint32_t message,
                                                          std::uint32_t wparam,
                                                          bool repeat) noexcept;

struct Dx12FramePresentDecision {
    bool present_directly{false};
    bool map_full_frame_readback{false};
    bool composite_settings{false};
    bool composite_fps{false};
    HostSettingsView settings{};
};

[[nodiscard]] Dx12FramePresentDecision decide_dx12_frame_present(
    bool direct_presentation_possible) noexcept;

inline constexpr std::uint32_t kSettingsOverlayWidth = 512u;
inline constexpr std::uint32_t kSettingsOverlayHeight = 256u;
inline constexpr std::uint32_t kFpsOverlayWidth = 192u;
inline constexpr std::uint32_t kFpsOverlayHeight = 48u;

void rasterize_settings_overlay(const HostSettingsView &view, std::uint8_t *rgba,
                                std::uint32_t width, std::uint32_t height) noexcept;

void host_fps_note_presented_frame() noexcept;
void host_fps_format(char *label, std::size_t size) noexcept;
void rasterize_fps_overlay(std::uint8_t *rgba, std::uint32_t width,
                           std::uint32_t height) noexcept;

}
