#pragma once
// The main menu's Options, laid out like the game's pause menu: pages along the bottom, a label and a value on each row.
// Generated from the settings registry (vcs/settings.h), so a new setting appears here as it does under F10.

#include <cstdint>

namespace lcs {

void frontend_options_open();
void frontend_options_close() noexcept;
[[nodiscard]] bool frontend_options_is_open() noexcept;
// Each input sample: the pad's buttons. Acted on where it's drawn, as settings belong to the render thread.
void frontend_options_note_input(std::uint32_t held) noexcept;
// True while the game must not see the pad: while it's open, and until what closed it is released.
[[nodiscard]] bool frontend_options_blocks_game() noexcept;
// Render thread, in Dear ImGui's frame.
void frontend_options_draw();
// The same screen before it's entered, as a page of the pause menu: nothing selected, no input.
void frontend_options_draw_preview();

}  // namespace lcs
