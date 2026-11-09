#pragma once
// The main menu, shown at launch while the game waits on its first save check, as it would for a slow memory stick.
// Nothing of the game runs differently meanwhile. Continue lets the game load its save as usual; New Game hides the
// saves from it while it starts, which is how it decides to begin a new game. Its art comes from the player's own game
// files, at runtime. The idea and the layout of pages follow rofhima13's main menu for VCS Recomp (see VCS_IMPORT.md).

#include <array>
#include <cstdint>
#include <span>
#include <string>
#include <vector>

#include "ge_gpu_backend.hpp"
#include "psprecomp/guest_memory.hpp"
#include "psprecomp/runtime.hpp"

namespace lcs {

// True while the menu or the list of saves is, or may be about to be, on screen.
[[nodiscard]] bool frontend_menu_active() noexcept;
// Game thread, at the first save check: input and one frame of the menu. True while the game must go on waiting; false
// at once when there's no menu, as in the stress modes.
[[nodiscard]] bool frontend_menu_tick(psprecomp::Runtime &runtime, std::uint32_t parameter);
// Render thread, in Dear ImGui's frame.
void frontend_menu_draw();

// True while the game must not find a save.
[[nodiscard]] bool frontend_hide_saves() noexcept;
// Pad buttons the game gets: after a choice, presses Cross until gameplay, skipping the logos and the title movie.
[[nodiscard]] std::uint32_t frontend_boot_pad(std::uint32_t held) noexcept;
// Upload path: keeps the game's menu font for the next launch, in the player's own game folder.
void frontend_note_texture(const psprecomp::GuestMemory &memory, const std::array<std::uint32_t, 256> &commands,
                           const GeGpuDrawDescriptor &draw, std::span<const std::byte> rgba) noexcept;

// The paintings a player can choose from, in menu order: their own images from <game>/MENUART, then the game's. The
// setting also has "random", the default.
struct FrontendArtChoice {
    std::string label;
    std::string value;
};
[[nodiscard]] const std::vector<FrontendArtChoice> &frontend_art_choices();

}  // namespace lcs
