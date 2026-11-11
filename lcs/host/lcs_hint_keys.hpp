// Names of the PC controls for the game's hint boxes, San Andreas style:
// "Press F to enter" in place of "Press ~T~ to enter".
//
// The hints name controls through "~k~ ~TOKEN~"; the decompiled resolver
// (decomp/game/ControlText.cpp) asks here for each part of a token. The
// style follows Display.ButtonPrompts: keyboard and mouse, Xbox, or the
// original PlayStation text.
#pragma once

#include "lcs_key_bindings.hpp"

#include <string>

namespace lcs {

enum class HintStyle : std::uint8_t {
    Original,  // the game's own button text
    Keyboard,
    Gamepad,
};

[[nodiscard]] HintStyle lcs_hint_style() noexcept;

// The first key (or pad button) bound to the action, e.g. "F", "LMB", "Y".
[[nodiscard]] std::string lcs_hint_action_name(BindAction action, HintStyle style);
// What turns the camera: "MOUSE", or the stick that has the Camera role.
[[nodiscard]] std::string lcs_hint_look_name(HintStyle style);
// Sniper zoom: the wheel on keyboard and mouse, the pad button otherwise.
[[nodiscard]] std::string lcs_hint_zoom_name(bool zoom_in, HintStyle style);

// Whole replacements for the few English texts that name a PSP button
// outside "~k~" (LDWAIT, TUP_AD, GA_7). False for every other key.
[[nodiscard]] bool lcs_hint_text_override(const char *key, std::string &text);

}  // namespace lcs
