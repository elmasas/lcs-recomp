#pragma once
// A wheel of the radio stations: hold its key (Q, as in GTA V) in a vehicle, point at one, let go. A short press goes
// back a station, as Q does on its own.
// The idea is VoidRadioWheel's for San Andreas; none of its code or art is used here. Stations change through the game's
// own radio button, pressed as many times as it takes, so the game's audio stays in charge.

#include <array>
#include <cstdint>
#include <span>

#include "ge_gpu_backend.hpp"
#include "psprecomp/guest_memory.hpp"
#include "psprecomp/runtime.hpp"

namespace lcs {

// Window side, each sample: whether its key or button is held, and whether the player can use it now.
void radio_wheel_input(bool held, bool usable) noexcept;
// True while it's open: the mouse and right stick point at stations instead of turning the camera.
[[nodiscard]] bool radio_wheel_open() noexcept;
void radio_wheel_pointer_mouse(int dx, int dy) noexcept;
void radio_wheel_pointer_stick(float x, float y) noexcept;

// Game thread, each pad sample: the station and slow motion. Returns the buttons with the radio presses added.
[[nodiscard]] std::uint32_t radio_wheel_game_tick(psprecomp::Runtime &runtime, std::uint32_t buttons);

// Render thread, in Dear ImGui's frame.
void radio_wheel_draw();

// Upload path: keeps the game's station logos, for players with no pack that has them.
void radio_wheel_note_texture(const psprecomp::GuestMemory &memory, const GeGpuDrawDescriptor &draw, std::span<const std::byte> rgba) noexcept;

}  // namespace lcs
