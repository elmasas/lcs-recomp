// The in-game settings menu: Dear ImGui pages generated from the settings registry (settings.h). F10 opens and closes
// it, Escape or B closes it, and the game gets no input while it is open. Adapted from VCS Recomp's src/ui/settings_menu
// (GPL-3.0; see lcs/VCS_IMPORT.md). Key rebinding is not here yet: the launcher does that.
#pragma once

#include <string>

namespace ui {

// Inside the Dear ImGui frame. Returns false when the menu asks to close.
bool drawSettingsMenu();
void openSettingsMenu(const std::string &page);  // an empty page keeps the current one
void closeSettingsMenu();

}  // namespace ui
