#pragma once
// What the screens drawn before and around the game share: the painting and the game's font. Windows only.

#if defined(_WIN32)

#include "imgui.h"

#include <string>

namespace lcs {

// Starts loading the painting and the font, once. Any thread; they appear when ready.
void frontend_ui_load();
// Render thread, in Dear ImGui's frame. `panel` is where the dark side starts, as a fraction of the width.
void frontend_ui_backdrop(ImDrawList *draw, float panel);
// The painting blurred and dark, for a screen with a lot of text on it.
void frontend_ui_backdrop_dim(ImDrawList *draw);
[[nodiscard]] float frontend_ui_text_width(const std::string &text, float height);
void frontend_ui_text(ImDrawList *draw, ImVec2 at, const std::string &text, float height, ImU32 colour);

inline constexpr ImU32 kFrontendSelected = IM_COL32(250, 215, 90, 255);
inline constexpr ImU32 kFrontendNormal = IM_COL32(245, 245, 245, 255);
inline constexpr ImU32 kFrontendDim = IM_COL32(205, 205, 205, 255);

}  // namespace lcs

#endif
