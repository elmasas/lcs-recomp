#include "lcs_prompt_glyphs.hpp"

#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <vector>

namespace {

int failures = 0;

void check(bool condition, const char *what) {
    if (condition) return;
    std::fprintf(stderr, "FAIL: %s\n", what);
    ++failures;
}

constexpr std::uint64_t kFontWhite = 0x37bf52ac7d5c44c4ull;
constexpr std::uint64_t kFontColor = 0x5ff05f6c2afa636bull;
constexpr std::uint64_t kChipCross = 0x76678d09c8dbc3d3ull;
constexpr std::uint64_t kChipN = 0x076fdf02217dd339ull;

// Every pixel starts as opaque magenta so painted and untouched pixels differ.
std::vector<std::byte> canvas(std::uint32_t width, std::uint32_t height) {
    std::vector<std::byte> pixels(static_cast<std::size_t>(width) * height * 4u);
    for (std::size_t i = 0; i < pixels.size(); i += 4) {
        pixels[i + 0] = std::byte{0xFF};
        pixels[i + 1] = std::byte{0x00};
        pixels[i + 2] = std::byte{0xFF};
        pixels[i + 3] = std::byte{0xFF};
    }
    return pixels;
}

bool is_magenta(const std::vector<std::byte> &pixels, std::uint32_t width, std::uint32_t x,
                std::uint32_t y) {
    const std::size_t i = (static_cast<std::size_t>(y) * width + x) * 4u;
    return pixels[i] == std::byte{0xFF} && pixels[i + 1] == std::byte{0x00} &&
           pixels[i + 2] == std::byte{0xFF} && pixels[i + 3] == std::byte{0xFF};
}

// Counts opaque-ish pixels and pixels left as the original fill in one cell.
struct CellStats {
    int ink{};
    int original{};
};
CellStats cell_stats(const std::vector<std::byte> &pixels, std::uint32_t width,
                     std::uint32_t column, std::uint32_t row) {
    CellStats stats;
    for (std::uint32_t y = row * 16u; y < row * 16u + 16u; ++y)
        for (std::uint32_t x = column * 16u; x < column * 16u + 16u; ++x) {
            if (is_magenta(pixels, width, x, y)) ++stats.original;
            else if (pixels[(static_cast<std::size_t>(y) * width + x) * 4u + 3u] > std::byte{128})
                ++stats.ink;
        }
    return stats;
}

// The cross cell of the white font with only MoveForward bound to `key`.
std::vector<std::byte> paint_cell_alone(lcs::HostKey key) {
    lcs::ControlBindings bindings{};
    const auto forward = lcs::bind_index(lcs::BindAction::MoveForward);
    bindings.keys[forward][0] = key;
    bindings.count[forward] = 1;
    auto atlas = canvas(256, 256);
    lcs::prompt_glyphs_paint(lcs::PromptGlyphStyle::Keyboard, bindings, kFontWhite, 256, 256,
                             atlas);
    std::vector<std::byte> cell(16 * 16 * 4);
    for (std::uint32_t y = 0; y < 16; ++y)
        for (std::uint32_t x = 0; x < 16 * 4; ++x)
            cell[y * 16 * 4 + x] = atlas[((15u * 16u + y) * 256u) * 4u + 2u * 16u * 4u + x];
    return cell;
}

}  // namespace

int main() {
    using namespace lcs;
    const ControlBindings defaults = default_control_bindings();

    PromptGlyphStyle style{};
    check(prompt_glyph_style_from_name("Keyboard", style) && style == PromptGlyphStyle::Keyboard,
          "Keyboard parses");
    check(prompt_glyph_style_from_name("kb", style) && style == PromptGlyphStyle::Keyboard,
          "kb parses");
    check(prompt_glyph_style_from_name("XBOX", style) && style == PromptGlyphStyle::Xbox,
          "Xbox parses");
    check(!prompt_glyph_style_from_name("original", style), "Original is not built in");
    check(!prompt_glyph_style_from_name("mypack", style), "custom folder is not built in");

    check(prompt_glyphs_known(kFontWhite, 256, 256), "white font is known");
    check(!prompt_glyphs_known(kFontWhite, 128, 128), "wrong size is not known");
    check(!prompt_glyphs_known(0x1234, 256, 256), "random texture is not known");

    {
        auto pixels = canvas(256, 256);
        check(!prompt_glyphs_paint(PromptGlyphStyle::Keyboard, defaults, 0x1234, 256, 256, pixels),
              "unknown texture is not painted");
        bool untouched = true;
        for (std::uint32_t y = 0; y < 256 && untouched; ++y)
            for (std::uint32_t x = 0; x < 256; ++x) untouched &= is_magenta(pixels, 256, x, y);
        check(untouched, "unknown texture keeps every pixel");
    }

    {
        auto pixels = canvas(256, 256);
        check(prompt_glyphs_paint(PromptGlyphStyle::Keyboard, defaults, kFontWhite, 256, 256,
                                  pixels),
              "white font is painted");
        for (std::uint32_t column = 0; column < 7; ++column) {
            const CellStats stats = cell_stats(pixels, 256, column, 15);
            check(stats.original == 0, "button cell is fully repainted");
            check(stats.ink > 4, "button cell has a glyph");
        }
        const CellStats letter_r = cell_stats(pixels, 256, 2, 3);
        check(letter_r.original == 0 && letter_r.ink > 4, "ASCII R cell shows the handbrake key");
        // Cells that are not button glyphs stay the disc's picture.
        check(cell_stats(pixels, 256, 7, 15).original == 256, "cell after the buttons untouched");
        check(cell_stats(pixels, 256, 1, 3).original == 256, "ASCII Q cell untouched");
        check(cell_stats(pixels, 256, 0, 0).original == 256, "first cell untouched");
    }

    {
        // The fonts this build actually uploads for ULUS-10041.
        auto caps = canvas(256, 256);
        check(prompt_glyphs_paint(PromptGlyphStyle::Keyboard, defaults, 0x61f4b5af924623d8ull,
                                  256, 256, caps),
              "all-caps help font is painted");
        for (std::uint32_t column = 0; column < 7; ++column)
            check(cell_stats(caps, 256, column, 15).original == 0, "caps font button repainted");
        check(cell_stats(caps, 256, 2, 3).original == 256, "caps font keeps the letter R");

        auto outlined = canvas(256, 256);
        check(prompt_glyphs_paint(PromptGlyphStyle::Keyboard, defaults, 0x895eec7c6d77579cull,
                                  256, 256, outlined),
              "outlined font is painted");
        for (std::uint32_t column = 0; column < 7; ++column)
            check(cell_stats(outlined, 256, column, 15).original == 0,
                  "outlined font button and D-pad repainted");

        auto dpad = canvas(16, 16);
        check(prompt_glyphs_paint(PromptGlyphStyle::Keyboard, defaults, 0x4c1d02749b0305dfull, 16,
                                  16, dpad),
              "D-pad left chip is painted");
        // Default WeaponPrevious is Q, Left, WheelUp: the menu arrow shows Left, not Q.
        ControlBindings q_only = defaults;
        const auto previous = bind_index(BindAction::WeaponPrevious);
        q_only.keys[previous] = {HostKey::Q, HostKey::None, HostKey::None, HostKey::None};
        q_only.count[previous] = 1;
        // In the gameplay font the arrow follows the binding: Left if bound, else Q.
        auto font_default = canvas(256, 256);
        auto font_q = canvas(256, 256);
        prompt_glyphs_paint(PromptGlyphStyle::Keyboard, defaults, 0x895eec7c6d77579cull, 256, 256,
                            font_default);
        prompt_glyphs_paint(PromptGlyphStyle::Keyboard, q_only, 0x895eec7c6d77579cull, 256, 256,
                            font_q);
        check(font_default != font_q, "D-pad left prefers the Left arrow when it is bound");
        // Menu chips always show the arrow keys.
        auto dpad_q = canvas(16, 16);
        prompt_glyphs_paint(PromptGlyphStyle::Keyboard, q_only, 0x4c1d02749b0305dfull, 16, 16,
                            dpad_q);
        check(dpad == dpad_q, "menu D-pad chip always shows the arrow key");

        auto dpad_xbox = canvas(16, 16);
        check(!prompt_glyphs_paint(PromptGlyphStyle::Xbox, defaults, 0x4c1d02749b0305dfull, 16, 16,
                                   dpad_xbox),
              "Xbox keeps the D-pad chip");
    }

    {
        // Xbox leaves the analog N cell alone and paints the rest.
        auto pixels = canvas(256, 256);
        check(prompt_glyphs_paint(PromptGlyphStyle::Xbox, defaults, kFontColor, 256, 256, pixels),
              "Xbox paints the colour font");
        const CellStats a = cell_stats(pixels, 256, 2, 15);
        check(a.original == 0 && a.ink > 100, "Xbox A is a filled disc");
        auto chip = canvas(16, 16);
        check(!prompt_glyphs_paint(PromptGlyphStyle::Xbox, defaults, kChipN, 16, 16, chip),
              "Xbox keeps the analog N chip");
    }

    {
        // Different keys give different pictures, and an unbound action keeps the original.
        const auto space = paint_cell_alone(HostKey::Space);
        const auto w = paint_cell_alone(HostKey::W);
        const auto mouse = paint_cell_alone(HostKey::MouseLeft);
        const auto up = paint_cell_alone(HostKey::Up);
        check(space != w && w != mouse && mouse != up && space != up, "keys differ");
        check(cell_stats(w, 16, 0, 0).ink > 10, "W is drawn");

        // The circle chip (Back) follows Attack; unbound keeps the original.
        ControlBindings empty{};
        auto pixels = canvas(16, 16);
        check(!prompt_glyphs_paint(PromptGlyphStyle::Keyboard, empty, 0x48e344e67bdb8e5dull, 16,
                                   16, pixels),
              "unbound chip is not painted");
        check(cell_stats(pixels, 16, 0, 0).original == 256, "unbound chip keeps the original");

        // The menu Select chip always shows the fixed menu key, whatever Sprint is.
        auto select = canvas(16, 16);
        check(prompt_glyphs_paint(PromptGlyphStyle::Keyboard, empty, kChipCross, 16, 16, select),
              "menu select chip shows the fixed menu key");
    }

    {
        // Sprint=LeftShift, Jump=Space (a reported setup): menus, movies and
        // cutscenes must still confirm/skip with Enter and Space.
        ControlBindings swapped = defaults;
        const auto sprint = bind_index(BindAction::Sprint);
        const auto jump = bind_index(BindAction::Jump);
        swapped.keys[sprint] = {HostKey::LeftShift, HostKey::None, HostKey::None, HostKey::None};
        swapped.count[sprint] = 1;
        swapped.keys[jump] = {HostKey::Space, HostKey::None, HostKey::None, HostKey::None};
        swapped.count[jump] = 1;
        const auto only = [](HostKey held) { return [held](HostKey key) { return key == held; }; };

        const auto space = sample_menu_keyboard(swapped, only(HostKey::Space));
        check((space.buttons & kPspCross) != 0, "menu: Space confirms after a rebind");
        check((space.buttons & kPspSquare) == 0, "menu: Space does not also send Jump");
        const auto enter = sample_menu_keyboard(swapped, only(HostKey::Enter));
        check((enter.buttons & kPspCross) != 0, "menu: Enter confirms");
        check((enter.buttons & kPspTriangle) == 0, "menu: Enter does not also send EnterVehicle");
        const auto back = sample_menu_keyboard(swapped, only(HostKey::Backspace));
        check((back.buttons & kPspCircle) != 0, "menu: Backspace goes back");
        const auto shift = sample_menu_keyboard(swapped, only(HostKey::LeftShift));
        check((shift.buttons & kPspCross) != 0, "menu: the Sprint key still confirms");
        const auto mouse = sample_menu_keyboard(swapped, only(HostKey::MouseLeft));
        check((mouse.buttons & kPspCircle) != 0, "menu: Attack (LMB) still backs out");

        // Gameplay keeps the user's bindings exactly.
        const auto play_space = sample_keyboard(swapped, false, only(HostKey::Space));
        check((play_space.buttons & kPspSquare) != 0 && (play_space.buttons & kPspCross) == 0,
              "gameplay: Space is Jump");
        const auto play_enter = sample_keyboard(swapped, false, only(HostKey::Enter));
        check((play_enter.buttons & kPspTriangle) != 0, "gameplay: Enter enters vehicles");
    }

    {
        // A short buffer is refused rather than overrun.
        std::vector<std::byte> small(16);
        check(!prompt_glyphs_paint(PromptGlyphStyle::Keyboard, defaults, kFontWhite, 256, 256,
                                   small),
              "short buffer is refused");
    }

    if (failures == 0) std::puts("lcs_prompt_glyphs_test: ok");
    return failures == 0 ? 0 : 1;
}
