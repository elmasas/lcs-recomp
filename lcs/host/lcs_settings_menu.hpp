#pragma once
// The in-game options window (F10): every declared option, drawn with Dear ImGui and driven by mouse, keys or gamepad.

#include <string>

namespace opts {

// Draws the window; call each frame inside the ImGui frame while it is open. False: the user asked to close it.
bool draw_menu();
// Opens the window, on `tab` when it is a visible one; an empty name keeps the tab shown last.
void open_menu(const std::string &tab);
// Closes the window and gives the keys back to the game.
void close_menu();

}  // namespace opts
