#pragma once

#include <cstdint>

namespace lcs {

[[nodiscard]] bool lcs_camera_hook_enabled() noexcept;
[[nodiscard]] int lcs_camera_axis_x() noexcept;
[[nodiscard]] int lcs_camera_axis_y() noexcept;
void lcs_camera_set_axes(int x, int y) noexcept;
[[nodiscard]] bool lcs_camera_in_use() noexcept;
[[nodiscard]] bool lcs_player_aiming() noexcept;
// Lock-on targeting. Off while keyboard and mouse is the device in use (the
// reticle, free aim, as San Andreas on PC); with a controller it follows
// Controls.AutoAim.
[[nodiscard]] bool lcs_auto_aim() noexcept;
// The window input reports which device was used last.
void lcs_note_input_device(bool gamepad) noexcept;
// Manual aim is on (keyboard and mouse) and the aim button (RMB; R on the
// PSP pad) is held.
[[nodiscard]] bool lcs_manual_aim_held() noexcept;
// Lee is in the manual aim pose (raised from a standstill with the aim button
// held). The reticle and shots through it apply, and the window holds his
// movement, as the PSP game only aims standing still.
void lcs_set_manual_aim_pose(bool aiming) noexcept;
[[nodiscard]] bool lcs_manual_aim_pose() noexcept;
[[nodiscard]] bool lcs_using_gamepad() noexcept;
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
// Keyboard LookLeft / LookRight held in a vehicle (CPad::GetLookLeft/Right).
void lcs_set_host_vehicle_look(bool left, bool right) noexcept;
[[nodiscard]] bool lcs_host_look_left() noexcept;
[[nodiscard]] bool lcs_host_look_right() noexcept;
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
