#pragma once

#include <cstdint>

namespace lcs {

[[nodiscard]] bool lcs_camera_hook_enabled() noexcept;
[[nodiscard]] int lcs_camera_axis_x() noexcept;
[[nodiscard]] int lcs_camera_axis_y() noexcept;
void lcs_camera_set_axes(int x, int y) noexcept;
[[nodiscard]] bool lcs_camera_in_use() noexcept;
[[nodiscard]] bool lcs_player_aiming() noexcept;
[[nodiscard]] bool lcs_auto_aim() noexcept;
[[nodiscard]] bool lcs_free_aim_weapon(std::uint32_t weapon_type) noexcept;
void lcs_set_free_aim(bool active) noexcept;
[[nodiscard]] bool lcs_free_aim_active() noexcept;

[[nodiscard]] std::uint32_t lcs_accelerate_pad_offset() noexcept;
[[nodiscard]] std::uint32_t lcs_brake_pad_offset() noexcept;
[[nodiscard]] std::uint8_t lcs_host_accelerate() noexcept;
[[nodiscard]] std::uint8_t lcs_host_brake() noexcept;
void lcs_set_host_drive_inputs(bool accelerate, bool brake,
                               std::uint8_t throttle = 0, std::uint8_t brake_pressure = 0) noexcept;
void lcs_note_vehicle_control_read() noexcept;
[[nodiscard]] bool lcs_player_in_vehicle() noexcept;

template <typename Memory>
[[nodiscard]] std::uint32_t lcs_guest_player_ped(Memory &memory) {
    const std::uint32_t slot = memory.aot_load8(0x08B5E054u);
    return memory.aot_load32(0x08B89A10u + slot * 368u);
}

template <typename Memory>
[[nodiscard]] bool lcs_guest_player_in_vehicle(Memory &memory) {
    const std::uint32_t ped = lcs_guest_player_ped(memory);
    return ped != 0u && memory.aot_load8(ped + 1336u) != 0u;
}

}
