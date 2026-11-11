// PC pages in the game's own pause menu: GRAPHICS (on the tab MULTIPLAYER
// used to have) and KEYBOARD AND MOUSE (a row on the CONTROLS screen).
//
// The rows are ordinary entries in aScreens (decomp/game/MenuData.cpp). Their
// GXT keys start with "ZZ"; the hook on CText::Get answers those keys with
// text built here every frame, so a label carries its own value
// ("FRAME RATE: 60"). Their actions are numbers the recompiled drawing code
// has no value for, so it prints the label alone. CMenuManager
// (decomp/game/MenuManager.cpp) passes Cross and left/right on them here.
#pragma once

#include <cstddef>
#include <cstdint>

namespace psprecomp {
class Runtime;
struct AllegrexContext;
}  // namespace psprecomp

namespace lcs {

// The multiplayer screens they replace cannot be reached on PC: the WLAN
// switch always reads off, and the MULTIPLAYER tab is GRAPHICS now.
inline constexpr std::int32_t kMenuPageGraphics = 15;
inline constexpr std::int32_t kMenuPageKeyboard = 16;
// CONTROLS tab: KEYBOARD AND MOUSE (row 0) or CONTROLLER (row 1, the game's
// own CONTROLS screen with the legend).
inline constexpr std::int32_t kMenuPageControlsChooser = 18;
inline constexpr std::int32_t kChooserKeyboardRow = 0;
inline constexpr std::int32_t kChooserControllerRow = 1;
inline constexpr std::int32_t kMenuPageControls = 3;

inline constexpr std::int32_t kMenuActionPcGraphics = 50;          // row = option
inline constexpr std::int32_t kMenuActionPcKeyBinding = 51;        // Cross waits for a key
inline constexpr std::int32_t kMenuActionPcKeyPage = 52;           // shows the other half of the actions
inline constexpr std::int32_t kMenuActionPcMouseSensitivity = 53;
inline constexpr std::int32_t kMenuActionPcInvertMouse = 54;
inline constexpr std::int32_t kMenuActionPcResetKeys = 55;

[[nodiscard]] constexpr bool menu_action_is_pc(std::int32_t action) noexcept {
    return action >= kMenuActionPcGraphics && action <= kMenuActionPcResetKeys;
}
[[nodiscard]] constexpr bool menu_screen_is_pc(std::int32_t screen) noexcept {
    return screen == kMenuPageGraphics || screen == kMenuPageKeyboard || screen == kMenuPageControlsChooser;
}
// Left/right held keeps stepping these, like the volume sliders.
[[nodiscard]] constexpr bool menu_action_repeats(std::int32_t action) noexcept {
    return action == kMenuActionPcMouseSensitivity;
}

// Points the GRAPHICS tab's name at its key. scratch is guest memory the
// host reserved for the strings returned by the text hook.
void lcs_menu_pages_install(psprecomp::Runtime &runtime, std::uint32_t scratch,
                            std::uint32_t size) noexcept;

// The screen behind a tab the host changed: GRAPHICS in place of MULTIPLAYER
// (tab 8, or 7 with the alternate tab bar) and LANGUAGE (tab 9). -1 for the
// game's own tabs. The recompiled tab-to-screen code and CMenuManager use it.
[[nodiscard]] std::int32_t lcs_menu_tab_screen(std::uint32_t tab) noexcept;

// Entry of CText::Get (0x08913B70; a0 = TheText, a1 = key). For a "ZZ" key
// it sets v0 to the text and returns true; otherwise the game looks it up.
[[nodiscard]] bool lcs_menu_text_hook(psprecomp::Runtime &runtime,
                                      psprecomp::AllegrexContext &ctx) noexcept;

// From CMenuManager, for a PC row (row is m_nCurrOption).
void lcs_menu_pages_cross(std::int32_t screen, std::int32_t row, std::int32_t action) noexcept;
void lcs_menu_pages_change(std::int32_t screen, std::int32_t row, std::int32_t action,
                           std::int32_t delta) noexcept;

// Mouse in the pause menu. The window reports the cursor in client pixels;
// it is mapped to the game's 480x272 menu space (letterbox and widescreen
// HUD squeeze undone). The menu code takes it once per move: hovering a row
// or a tab highlights it, so a click (Cross) acts on what is under it.
void lcs_menu_pointer_from_client(bool inside, int x, int y, int client_width,
                                  int client_height) noexcept;
[[nodiscard]] bool lcs_menu_pointer_moved(float &x, float &y) noexcept;
// Entry of 0x08AD9224, which draws one tab of the bar at (x, y).
void lcs_menu_note_tab(std::uint32_t tab, std::int32_t x, std::int32_t y) noexcept;
// The tab drawn under (x, y), or -1.
[[nodiscard]] std::int32_t lcs_menu_tab_at(float x, float y) noexcept;

// Waiting for the key to bind. While it is true the window sends the game no
// input at all, from the moment Cross chose the row until every key is up
// again after the new key was taken.
[[nodiscard]] bool lcs_key_capture_active() noexcept;
// down[] is indexed by HostKey; wheel is the wheel steps since the last poll.
void lcs_key_capture_update(const bool *down, std::size_t count, int wheel) noexcept;

}  // namespace lcs
