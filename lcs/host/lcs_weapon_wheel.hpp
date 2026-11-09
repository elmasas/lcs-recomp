#pragma once
// A wheel of the player's weapons, on foot: hold the radio wheel's key (Tab, or the right stick's click), point at a
// weapon, let go. A short press takes the next weapon. Each weapon shows the game's own HUD icon, with its colour, from
// the player's texture pack when it has them or else as the game drew it. The weapon changes through the game's own
// next/previous weapon buttons, pressed as many times as it takes, so the game stays in charge of the switch.

#include <cstdint>
#include <span>

#include "ge_gpu_backend.hpp"
#include "psprecomp/guest_memory.hpp"
#include "psprecomp/runtime.hpp"

namespace lcs {

// Window side, each sample: whether its key or button is held, and whether the player can use it now (on foot).
void weapon_wheel_input(bool held, bool usable) noexcept;
// True while it's open: the mouse and right stick point at weapons instead of turning the camera.
[[nodiscard]] bool weapon_wheel_open() noexcept;
void weapon_wheel_pointer_mouse(int dx, int dy) noexcept;
void weapon_wheel_pointer_stick(float x, float y) noexcept;

// Game thread, each pad sample: the weapon list, the switch and slow motion. Returns the buttons the game gets.
[[nodiscard]] std::uint32_t weapon_wheel_game_tick(psprecomp::Runtime &runtime, std::uint32_t buttons);

// Render thread, in Dear ImGui's frame.
void weapon_wheel_draw();

// Upload path: keeps the game's weapon icons, for players with no pack that has them.
void weapon_wheel_note_texture(const psprecomp::GuestMemory &memory, const GeGpuDrawDescriptor &draw,
                               std::span<const std::byte> rgba) noexcept;

}  // namespace lcs
