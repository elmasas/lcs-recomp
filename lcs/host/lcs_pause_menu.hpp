#pragma once
// The pause menu of our own: one row of pages, over the game's menu, which stays open underneath. It's what pauses the
// world, and it draws the pages kept from the game (the map, the brief, the stats, load and delete, audio). The page row
// of the game is a selected tab, and the game follows it, so going to one of its pages is writing that tab.
// Display.ClassicPause turns this off.

#include <cstdint>

#include "psprecomp/runtime.hpp"

namespace lcs {

// Game thread, each pad sample: acts on the row, and returns what the game gets to see.
[[nodiscard]] std::uint32_t pause_menu_game_tick(psprecomp::Runtime &runtime, std::uint32_t buttons);
// True while the row is on screen, so the mouse can reach it.
[[nodiscard]] bool pause_menu_visible() noexcept;
// Render thread, in Dear ImGui's frame.
void pause_menu_draw();
// From Settings: one of the game's pages that isn't in the row: 5 controls, 7 display, 9 language.
void pause_menu_open_game_tab(int tab) noexcept;

}  // namespace lcs
