#pragma once

// Paints PC button prompts straight into the game's HUD button textures as
// they are uploaded. The atlases already arrive decoded, so only the button
// cells are repainted and the rest of each texture stays the disc's own.
// This replaces the old dump-then-build-a-pack step for the built-in styles.

#include "lcs_key_bindings.hpp"

#include <cstddef>
#include <cstdint>
#include <span>
#include <string_view>

namespace lcs {

enum class PromptGlyphStyle : std::uint8_t {
    Keyboard,  // The first key bound to the action the PSP button stands for.
    Xbox,      // A / B / X / Y discs and LB / RB.
};

// Maps a Display.ButtonPrompts value to a built-in style. Returns false for
// Original and for custom folder names, which stay file-driven.
[[nodiscard]] bool prompt_glyph_style_from_name(std::string_view name, PromptGlyphStyle &style);

// True when `signature` is one of the HUD textures that carry button glyphs.
[[nodiscard]] bool prompt_glyphs_known(std::uint64_t signature, std::uint32_t width,
                                       std::uint32_t height);

// Repaints the button cells of mip 0 in place. Returns true when `signature`
// is a known prompt texture and at least one cell was painted. Cells whose
// action has no key bound keep the original picture.
bool prompt_glyphs_paint(PromptGlyphStyle style, const ControlBindings &bindings,
                         std::uint64_t signature, std::uint32_t width, std::uint32_t height,
                         std::span<std::byte> rgba8);

}  // namespace lcs
