// In-process painter for the HUD button prompts (original code, MIT).
//
// The cell layout, action tables and glyph shapes follow tools/prompt_pack.py,
// which used to bake the same pictures into files from dumped textures. Doing
// it at upload time needs no dumps, follows the live [Controls] bindings and
// works on a fresh install.

#include "lcs_prompt_glyphs.hpp"

#include <algorithm>
#include <array>
#include <cctype>
#include <cmath>
#include <string>

namespace lcs {
namespace {

constexpr std::uint32_t kCell = 16u;

enum class Glyph : std::uint8_t {
    Triangle, Circle, Cross, Square, L, R, N,
    DpadLeft, DpadUp, DpadRight, DpadDown,
};

struct AtlasCell {
    std::uint8_t column;
    std::uint8_t row;
    Glyph glyph;
};

// 16x16 cells of the HUD font atlases (256x256). Signatures are content
// hashes, so each font the game ships needs its own entry.
constexpr std::uint64_t kFontWhite = 0x37bf52ac7d5c44c4ull;
constexpr std::uint64_t kFontColor = 0x5ff05f6c2afa636bull;
// ULUS-10041 v1.05 as dumped by LCSNative: the all-caps help font (tinted,
// white) and the outlined font with the D-pad arrows.
constexpr std::uint64_t kFontCaps = 0x61f4b5af924623d8ull;
constexpr std::uint64_t kFontOutlined = 0x895eec7c6d77579cull;

constexpr std::array kFontWhiteCells{
    AtlasCell{0, 15, Glyph::Triangle}, AtlasCell{1, 15, Glyph::Square},
    AtlasCell{2, 15, Glyph::Cross},    AtlasCell{3, 15, Glyph::Circle},
    AtlasCell{4, 15, Glyph::N},        AtlasCell{5, 15, Glyph::R},
    AtlasCell{6, 15, Glyph::L},
    // ASCII 'R': ~k~ VEHB draws this letter in fonts that have no R-button glyph.
    AtlasCell{2, 3, Glyph::R},
};
constexpr std::array kFontColorCells{
    AtlasCell{0, 15, Glyph::Triangle}, AtlasCell{1, 15, Glyph::Circle},
    AtlasCell{2, 15, Glyph::Cross},    AtlasCell{3, 15, Glyph::Square},
    AtlasCell{2, 3, Glyph::R},
};
// Every R of this all-caps font's text uses the ASCII cell, so it stays a letter.
constexpr std::array kFontCapsCells{
    AtlasCell{0, 15, Glyph::Triangle}, AtlasCell{1, 15, Glyph::Square},
    AtlasCell{2, 15, Glyph::Cross},    AtlasCell{3, 15, Glyph::Circle},
    AtlasCell{4, 15, Glyph::N},        AtlasCell{5, 15, Glyph::R},
    AtlasCell{6, 15, Glyph::L},
};
constexpr std::array kFontOutlinedCells{
    AtlasCell{0, 15, Glyph::Triangle}, AtlasCell{1, 15, Glyph::Square},
    AtlasCell{2, 15, Glyph::Cross},    AtlasCell{3, 15, Glyph::Circle},
    AtlasCell{4, 15, Glyph::DpadLeft}, AtlasCell{5, 15, Glyph::DpadDown},
    AtlasCell{6, 15, Glyph::DpadRight},
};

struct AtlasInfo {
    std::uint64_t signature;
    std::span<const AtlasCell> cells;
    bool white;     // The game tints it, so glyphs stay white.
    bool outlined;  // Glyphs get a dark rim like the font's own letters.
};
constexpr AtlasInfo kAtlases[] = {
    {kFontWhite, kFontWhiteCells, true, false},
    {kFontColor, kFontColorCells, false, false},
    {kFontCaps, kFontCapsCells, true, false},
    {kFontOutlined, kFontOutlinedCells, false, true},
};

// Standalone 16x16 chips (pause menu and HUD).
struct StandaloneChip {
    std::uint64_t signature;
    Glyph glyph;
};
constexpr std::array kChips{
    StandaloneChip{0x48e344e67bdb8e5dull, Glyph::Circle},
    StandaloneChip{0x76678d09c8dbc3d3ull, Glyph::Cross},
    StandaloneChip{0x076fdf02217dd339ull, Glyph::N},
    StandaloneChip{0x4c1d02749b0305dfull, Glyph::DpadLeft},
    StandaloneChip{0x57e9759b2df78970ull, Glyph::DpadUp},
    StandaloneChip{0xac671fd021041e6cull, Glyph::DpadRight},
    StandaloneChip{0xcfe0949bae0af93bull, Glyph::DpadDown},
};

// ---------------------------------------------------------------------------
// Which key a PSP glyph stands for.

// In-world ~k~ lines: gas is MoveForward, brake/reverse MoveBack, handbrake
// Space. The driving tutorial uses the circle cell for brake, so S first.
std::span<const BindAction> atlas_actions(Glyph glyph) {
    static constexpr BindAction cross[] = {BindAction::MoveForward, BindAction::Sprint};
    static constexpr BindAction circle[] = {BindAction::MoveBack, BindAction::Handbrake,
                                            BindAction::Attack};
    static constexpr BindAction square[] = {BindAction::MoveBack, BindAction::Jump};
    static constexpr BindAction triangle[] = {BindAction::EnterVehicle};
    static constexpr BindAction l[] = {BindAction::CenterCamera};
    static constexpr BindAction r[] = {BindAction::Handbrake, BindAction::Aim};
    static constexpr BindAction left[] = {BindAction::WeaponPrevious};
    static constexpr BindAction up[] = {BindAction::Up};
    static constexpr BindAction right[] = {BindAction::WeaponNext};
    static constexpr BindAction down[] = {BindAction::Down};
    switch (glyph) {
    case Glyph::Cross: return cross;
    case Glyph::Circle: return circle;
    case Glyph::Square: return square;
    case Glyph::Triangle: return triangle;
    case Glyph::L: return l;
    case Glyph::R: return r;
    case Glyph::DpadLeft: return left;
    case Glyph::DpadUp: return up;
    case Glyph::DpadRight: return right;
    case Glyph::DpadDown: return down;
    case Glyph::N: return {};
    }
    return {};
}

// Pause-menu chips stay on-foot actions (Space and LMB).
std::span<const BindAction> menu_actions(Glyph glyph) {
    static constexpr BindAction cross[] = {BindAction::Sprint, BindAction::MoveForward};
    static constexpr BindAction circle[] = {BindAction::Attack};
    static constexpr BindAction square[] = {BindAction::Jump, BindAction::MoveBack};
    switch (glyph) {
    case Glyph::Cross: return cross;
    case Glyph::Circle: return circle;
    case Glyph::Square: return square;
    default: return atlas_actions(glyph);
    }
}

bool glyph_pad(Glyph glyph, PadButton &button) {
    switch (glyph) {
    case Glyph::Cross: button = PadButton::A; return true;
    case Glyph::Circle: button = PadButton::B; return true;
    case Glyph::Square: button = PadButton::X; return true;
    case Glyph::Triangle: button = PadButton::Y; return true;
    case Glyph::L: button = PadButton::LeftShoulder; return true;
    case Glyph::R: button = PadButton::RightShoulder; return true;
    case Glyph::DpadLeft: button = PadButton::DpadLeft; return true;
    case Glyph::DpadUp: button = PadButton::DpadUp; return true;
    case Glyph::DpadRight: button = PadButton::DpadRight; return true;
    case Glyph::DpadDown: button = PadButton::DpadDown; return true;
    case Glyph::N: return false;
    }
    return false;
}

HostKey first_key(const ControlBindings &bindings, BindAction action) {
    const std::size_t index = bind_index(action);
    for (std::uint8_t slot = 0; slot < bindings.count[index] && slot < kMaxKeysPerAction; ++slot)
        if (bindings.keys[index][slot] != HostKey::None) return bindings.keys[index][slot];
    return HostKey::None;
}

// The arrow key a D-pad glyph reads as, if it is one.
HostKey dpad_arrow(Glyph glyph) {
    switch (glyph) {
    case Glyph::DpadLeft: return HostKey::Left;
    case Glyph::DpadUp: return HostKey::Up;
    case Glyph::DpadRight: return HostKey::Right;
    case Glyph::DpadDown: return HostKey::Down;
    default: return HostKey::None;
    }
}

HostKey key_for_glyph(const ControlBindings &bindings, Glyph glyph, bool menu) {
    // Menu chips label the fixed menu keys (kMenuKeys), not gameplay bindings.
    if (menu) {
        if (glyph == Glyph::Cross) return HostKey::Space;
        if (const HostKey arrow = dpad_arrow(glyph); arrow != HostKey::None) return arrow;
    }
    // D-pad glyphs mostly label menu navigation, so the matching arrow key
    // wins whenever the action has it bound (Left is on WeaponPrevious by default).
    if (const HostKey arrow = dpad_arrow(glyph); arrow != HostKey::None)
        for (const BindAction action : atlas_actions(glyph))
            if (binding_has(bindings, action, arrow)) return arrow;
    for (const BindAction action : menu ? menu_actions(glyph) : atlas_actions(glyph))
        if (const HostKey key = first_key(bindings, action); key != HostKey::None) return key;
    PadButton pad{};
    if (!glyph_pad(glyph, pad)) return HostKey::None;
    const std::size_t index = static_cast<std::size_t>(pad);
    for (std::uint8_t slot = 0; slot < bindings.pad_count[index] && slot < kMaxKeysPerAction;
         ++slot)
        if (const HostKey key = first_key(bindings, bindings.pad[index][slot]);
            key != HostKey::None)
            return key;
    return HostKey::None;
}

// ---------------------------------------------------------------------------
// Pixel fonts.

struct Pattern3 {
    char ch;
    const char *rows[5];
};
constexpr Pattern3 kFont3x5[] = {
    {'A', {"010", "101", "111", "101", "101"}}, {'B', {"110", "101", "110", "101", "110"}},
    {'C', {"011", "100", "100", "100", "011"}}, {'D', {"110", "101", "101", "101", "110"}},
    {'E', {"111", "100", "110", "100", "111"}}, {'F', {"111", "100", "110", "100", "100"}},
    {'G', {"011", "100", "101", "101", "011"}}, {'H', {"101", "101", "111", "101", "101"}},
    {'I', {"111", "010", "010", "010", "111"}}, {'J', {"001", "001", "001", "101", "010"}},
    {'K', {"101", "101", "110", "101", "101"}}, {'L', {"100", "100", "100", "100", "111"}},
    {'M', {"101", "111", "111", "101", "101"}}, {'N', {"101", "111", "111", "101", "101"}},
    {'O', {"010", "101", "101", "101", "010"}}, {'P', {"110", "101", "110", "100", "100"}},
    {'Q', {"010", "101", "101", "111", "001"}}, {'R', {"110", "101", "110", "101", "101"}},
    {'S', {"011", "100", "010", "001", "110"}}, {'T', {"111", "010", "010", "010", "010"}},
    {'U', {"101", "101", "101", "101", "111"}}, {'V', {"101", "101", "101", "010", "010"}},
    {'W', {"101", "101", "101", "111", "101"}}, {'X', {"101", "101", "010", "101", "101"}},
    {'Y', {"101", "101", "010", "010", "010"}}, {'Z', {"111", "001", "010", "100", "111"}},
    {'0', {"111", "101", "101", "101", "111"}}, {'1', {"010", "110", "010", "010", "111"}},
    {'2', {"111", "001", "111", "100", "111"}}, {'3', {"111", "001", "111", "001", "111"}},
    {'4', {"101", "101", "111", "001", "001"}}, {'5', {"111", "100", "111", "001", "111"}},
    {'6', {"111", "100", "111", "101", "111"}}, {'7', {"111", "001", "010", "010", "010"}},
    {'8', {"111", "101", "111", "101", "111"}}, {'9', {"111", "101", "111", "001", "111"}},
    {'+', {"000", "010", "111", "010", "000"}}, {'-', {"000", "000", "111", "000", "000"}},
    {'=', {"000", "111", "000", "111", "000"}}, {',', {"000", "000", "000", "010", "100"}},
    {'.', {"000", "000", "000", "000", "010"}},
};

struct Pattern5 {
    char ch;
    const char *rows[5];
};
// 5-wide letters that would read as H (or Q as 4) in 3x5.
constexpr Pattern5 kFont5x5[] = {
    {'Q', {"01110", "10001", "10101", "10010", "01101"}},
    {'W', {"10001", "10001", "10101", "10101", "01010"}},
    {'M', {"10001", "11011", "10101", "10001", "10001"}},
    {'N', {"10001", "11001", "10101", "10011", "10001"}},
};

const char *const *find3(char ch) {
    for (const Pattern3 &entry : kFont3x5)
        if (entry.ch == ch) return entry.rows;
    return nullptr;
}

const char *const *find5(char ch) {
    for (const Pattern5 &entry : kFont5x5)
        if (entry.ch == ch) return entry.rows;
    return nullptr;
}

// ---------------------------------------------------------------------------
// Coverage masks. A mask is kCell x kCell coverage in [0, 1].

using Mask = std::array<float, kCell * kCell>;

// 8x8 supersampling per pixel, the same grid as the Python 4x SSAA x 2 taps.
template <class Inside>
Mask sample(Inside &&inside) {
    Mask mask{};
    constexpr int kSub = 8;
    for (std::uint32_t y = 0; y < kCell; ++y) {
        for (std::uint32_t x = 0; x < kCell; ++x) {
            int hits = 0;
            for (int sy = 0; sy < kSub; ++sy)
                for (int sx = 0; sx < kSub; ++sx)
                    if (inside(static_cast<double>(x) + (sx + 0.5) / kSub,
                               static_cast<double>(y) + (sy + 0.5) / kSub))
                        ++hits;
            mask[y * kCell + x] = static_cast<float>(hits) / (kSub * kSub);
        }
    }
    return mask;
}

bool rounded_rect(double px, double py, double cx, double cy, double hw, double hh,
                  double radius) {
    const double dx = std::abs(px - cx) - (hw - radius);
    const double dy = std::abs(py - cy) - (hh - radius);
    if (dx <= 0.0 && std::abs(py - cy) <= hh) return true;
    if (dy <= 0.0 && std::abs(px - cx) <= hw) return true;
    if (dx > 0.0 && dy > 0.0) return dx * dx + dy * dy <= radius * radius;
    return false;
}

// button: 0 LMB, 1 RMB, 2 MMB, 3 M4, 4 M5. wheel: +1 up, -1 down, 0 none.
Mask mouse_mask(int button, int wheel) {
    constexpr double size = kCell;
    const double inset = wheel != 0 ? 2.4 : 0.6;
    const double top = inset;
    const double bottom = size - (wheel != 0 ? 0.6 : inset);
    const double bh = bottom - top;
    const double mw = std::min(size - 1.2, bh * 0.68);
    const double radius = mw / 2.0;
    const double cx = size / 2.0;
    const double line = std::max(0.35, mw * 0.09);
    const double split = top + bh * 0.42;
    Mask body = sample([&](double px, double py) {
        const double ay = std::clamp(py, top + radius, bottom - radius);
        const double d = std::hypot(px - cx, py - ay) - radius;
        if (d >= 0.0) return false;
        const bool outline = d > -line || std::abs(py - split) < line / 2.0 ||
                             (py < split && std::abs(px - cx) < line / 2.0);
        const bool pressed =
            py < split &&
            ((button == 0 && px < cx) || (button == 1 && px > cx) ||
             (button == 2 && std::abs(px - cx) < mw * 0.12 && top + bh * 0.1 < py &&
              py < split - bh * 0.06));
        const bool side =
            (button == 3 && px < cx - mw * 0.25 && split < py && py < split + bh * 0.22) ||
            (button == 4 && px > cx + mw * 0.25 && split < py && py < split + bh * 0.22);
        return outline || pressed || side;
    });
    if (wheel == 0) return body;
    // Chevron above the body points the wheel direction.
    const Mask arrow = sample([&](double px, double py) {
        if (py < 0.0 || py > top - 0.4) return false;
        const double height = top - 0.4;
        const double t = wheel > 0 ? py / height : 1.0 - py / height;
        return std::abs(px - cx) <= 0.5 + t * mw * 0.3;
    });
    for (std::size_t i = 0; i < body.size(); ++i) body[i] = std::min(1.0f, body[i] + arrow[i]);
    return body;
}

Mask spacebar_mask() {
    constexpr double size = kCell;
    const double y0 = size * 0.42, y1 = size * 0.72;
    const double x0 = size * 0.08, x1 = size * 0.92;
    const double cx = (x0 + x1) / 2.0, cy = (y0 + y1) / 2.0;
    const double hw = (x1 - x0) / 2.0, hh = (y1 - y0) / 2.0;
    const double radius = std::min(hw, hh) * 0.45;
    const double line = 0.85;
    return sample([&](double px, double py) {
        return rounded_rect(px, py, cx, cy, hw, hh, radius) &&
               !rounded_rect(px, py, cx, cy, hw - line, hh - line, std::max(0.3, radius - line));
    });
}

// Up arrow with a stem: Shift.
Mask shift_mask() {
    constexpr double size = kCell;
    return sample([&](double px, double py) {
        const double cx = size / 2.0;
        if (2.0 < py && py < size * 0.48) {
            const double t = (py - 2.0) / (size * 0.48 - 2.0);
            return std::abs(px - cx) <= size * 0.08 + t * size * 0.32;
        }
        return size * 0.48 <= py && py < size * 0.88 && std::abs(px - cx) <= size * 0.16;
    });
}

// Solid triangle for the arrow keys. direction: 0 up, 1 down, 2 left, 3 right.
Mask arrow_mask(int direction) {
    constexpr double size = kCell;
    return sample([&](double px, double py) {
        double x = px, y = py;
        if (direction == 1) y = size - py;
        else if (direction == 2) { x = py; y = px; }
        else if (direction == 3) { x = py; y = size - px; }
        const double top = size * 0.22, bottom = size * 0.74;
        if (y < top || y > bottom) return false;
        return std::abs(x - size / 2.0) <= (y - top) / (bottom - top) * size * 0.38;
    });
}

// One or two characters filling the cell.
Mask letter_mask(std::string_view text) {
    Mask mask{};
    if (text.empty()) return mask;
    text = text.substr(0, 2);
    const char *const *patterns[2]{};
    int count = 0;
    int width = 3;
    int scale = 1;
    if (text.size() == 1 && find5(text[0]) != nullptr) {
        patterns[count++] = find5(text[0]);
        width = 5;
        scale = 2;
    } else {
        for (const char ch : text)
            if (const char *const *rows = find3(ch)) patterns[count++] = rows;
        scale = count == 1 ? 2 : 1;
    }
    if (count == 0) return mask;
    constexpr int gap = 1;
    const int glyph_width = count * (width * scale + gap) - gap;
    const int origin_x = (static_cast<int>(kCell) - glyph_width) / 2;
    const int origin_y = (static_cast<int>(kCell) - 5 * scale) / 2;
    for (int index = 0; index < count; ++index) {
        const int base = origin_x + index * (width * scale + gap);
        for (int row = 0; row < 5; ++row)
            for (int col = 0; col < width; ++col) {
                if (patterns[index][row][col] != '1') continue;
                for (int sy = 0; sy < scale; ++sy)
                    for (int sx = 0; sx < scale; ++sx) {
                        const int x = base + col * scale + sx;
                        const int y = origin_y + row * scale + sy;
                        if (x >= 0 && y >= 0 && x < static_cast<int>(kCell) &&
                            y < static_cast<int>(kCell))
                            mask[static_cast<std::size_t>(y) * kCell + x] = 1.0f;
                    }
            }
    }
    return mask;
}

std::string key_label(HostKey key) {
    const int id = static_cast<int>(key);
    if (host_key_in(key, HostKey::A, HostKey::Z))
        return std::string(1, static_cast<char>('A' + (id - static_cast<int>(HostKey::A))));
    if (host_key_in(key, HostKey::Digit0, HostKey::Digit9))
        return std::string(1, static_cast<char>('0' + (id - static_cast<int>(HostKey::Digit0))));
    if (host_key_in(key, HostKey::Numpad0, HostKey::Numpad9))
        return std::string(1, static_cast<char>('0' + (id - static_cast<int>(HostKey::Numpad0))));
    if (host_key_in(key, HostKey::F1, HostKey::F9))
        return "F" + std::string(1, static_cast<char>('1' + (id - static_cast<int>(HostKey::F1))));
    switch (key) {
    case HostKey::F10: return "10";
    case HostKey::F11: return "11";
    case HostKey::F12: return "12";
    case HostKey::Enter: return "EN";
    case HostKey::Escape: return "ES";
    case HostKey::Tab: return "TB";
    case HostKey::Backspace: return "BS";
    case HostKey::LeftCtrl:
    case HostKey::RightCtrl: return "CT";
    case HostKey::LeftAlt:
    case HostKey::RightAlt: return "AL";
    case HostKey::NumpadPlus: return "+";
    case HostKey::NumpadMinus: return "-";
    case HostKey::Delete: return "DL";
    case HostKey::Insert: return "IN";
    case HostKey::Home: return "HM";
    case HostKey::End: return "ND";
    case HostKey::PageUp: return "PU";
    case HostKey::PageDown: return "PD";
    case HostKey::Comma: return ",";
    case HostKey::Period: return ".";
    case HostKey::Minus: return "-";
    case HostKey::Equals: return "=";
    default: return {};
    }
}

Mask key_mask(HostKey key) {
    switch (key) {
    case HostKey::MouseLeft: return mouse_mask(0, 0);
    case HostKey::MouseRight: return mouse_mask(1, 0);
    case HostKey::MouseMiddle: return mouse_mask(2, 0);
    case HostKey::Mouse4: return mouse_mask(3, 0);
    case HostKey::Mouse5: return mouse_mask(4, 0);
    case HostKey::WheelUp: return mouse_mask(2, 1);
    case HostKey::WheelDown: return mouse_mask(2, -1);
    case HostKey::Space: return spacebar_mask();
    case HostKey::LeftShift:
    case HostKey::RightShift: return shift_mask();
    case HostKey::Up: return arrow_mask(0);
    case HostKey::Down: return arrow_mask(1);
    case HostKey::Left: return arrow_mask(2);
    case HostKey::Right: return arrow_mask(3);
    default: return letter_mask(key_label(key));
    }
}

// ---------------------------------------------------------------------------
// Writing into the texture.

struct Canvas {
    std::span<std::byte> rgba8;
    std::uint32_t width;
    std::uint32_t height;

    void put(std::uint32_t x, std::uint32_t y, std::uint8_t r, std::uint8_t g, std::uint8_t b,
             std::uint8_t a) const {
        if (x >= width || y >= height) return;
        const std::size_t index = (static_cast<std::size_t>(y) * width + x) * 4u;
        if (index + 3u >= rgba8.size()) return;
        rgba8[index + 0] = std::byte{r};
        rgba8[index + 1] = std::byte{g};
        rgba8[index + 2] = std::byte{b};
        rgba8[index + 3] = std::byte{a};
    }

    void clear(std::uint32_t cx, std::uint32_t cy) const {
        for (std::uint32_t y = 0; y < kCell; ++y)
            for (std::uint32_t x = 0; x < kCell; ++x) put(cx + x, cy + y, 0, 0, 0, 0);
    }

    void blit(std::uint32_t cx, std::uint32_t cy, const Mask &mask, std::uint8_t r,
              std::uint8_t g, std::uint8_t b) const {
        for (std::uint32_t y = 0; y < kCell; ++y)
            for (std::uint32_t x = 0; x < kCell; ++x) {
                const float cover = mask[y * kCell + x];
                if (cover <= 0.02f) continue;
                put(cx + x, cy + y, r, g, b,
                    static_cast<std::uint8_t>(std::lround(255.0f * std::min(cover, 1.0f))));
            }
    }

    void disk(std::uint32_t cx, std::uint32_t cy, std::uint8_t r, std::uint8_t g,
              std::uint8_t b) const {
        constexpr int radius = static_cast<int>(kCell) / 2 - 1;
        constexpr int half = static_cast<int>(kCell) / 2;
        for (int y = 0; y < static_cast<int>(kCell); ++y)
            for (int x = 0; x < static_cast<int>(kCell); ++x) {
                const int dx = x - half, dy = y - half;
                if (dx * dx + dy * dy <= radius * radius)
                    put(cx + static_cast<std::uint32_t>(x), cy + static_cast<std::uint32_t>(y),
                        r, g, b, 255);
            }
    }
};

struct XboxFace {
    const char *letter;
    std::uint8_t r, g, b;
};

bool xbox_face(Glyph glyph, XboxFace &face) {
    switch (glyph) {
    case Glyph::Cross: face = {"A", 0x3D, 0xC7, 0x42}; return true;
    case Glyph::Circle: face = {"B", 0xE4, 0x3C, 0x3C}; return true;
    case Glyph::Square: face = {"X", 0x3C, 0x7A, 0xE4}; return true;
    case Glyph::Triangle: face = {"Y", 0xE4, 0xC8, 0x3C}; return true;
    case Glyph::L: face = {"LB", 0xC8, 0xC8, 0xC8}; return true;
    case Glyph::R: face = {"RB", 0xC8, 0xC8, 0xC8}; return true;
    // D-pad arrows already read as an Xbox D-pad.
    default: return false;
    }
}

// Grows a mask by one pixel, for a dark rim behind white glyphs.
Mask dilate(const Mask &mask) {
    Mask out{};
    for (int y = 0; y < static_cast<int>(kCell); ++y)
        for (int x = 0; x < static_cast<int>(kCell); ++x) {
            float best = 0.0f;
            for (int dy = -1; dy <= 1; ++dy)
                for (int dx = -1; dx <= 1; ++dx) {
                    const int sx = x + dx, sy = y + dy;
                    if (sx < 0 || sy < 0 || sx >= static_cast<int>(kCell) ||
                        sy >= static_cast<int>(kCell))
                        continue;
                    best = std::max(best, mask[static_cast<std::size_t>(sy) * kCell + sx]);
                }
            out[static_cast<std::size_t>(y) * kCell + x] = best;
        }
    return out;
}

// `white_atlas`: the font is tinted by the game, so it has to stay white.
// `outlined`: draw a dark rim first so the white glyph reads on any background.
bool paint_cell(const Canvas &canvas, std::uint32_t cx, std::uint32_t cy, Glyph glyph,
                PromptGlyphStyle style, const ControlBindings &bindings, bool white_atlas,
                bool outlined, bool menu) {
    if (glyph == Glyph::N) {
        // Analog "N": a letter, not a face button. Xbox keeps the original.
        if (style == PromptGlyphStyle::Xbox) return false;
        canvas.clear(cx, cy);
        const Mask n = letter_mask("N");
        if (outlined) canvas.blit(cx, cy, dilate(n), 0, 0, 0);
        canvas.blit(cx, cy, n, 255, 255, 255);
        return true;
    }
    if (style == PromptGlyphStyle::Xbox) {
        XboxFace face{};
        if (!xbox_face(glyph, face)) return false;
        canvas.clear(cx, cy);
        if (white_atlas) {
            canvas.disk(cx, cy, 255, 255, 255);
            canvas.blit(cx, cy, letter_mask(face.letter), 0, 0, 0);
        } else {
            canvas.disk(cx, cy, face.r, face.g, face.b);
            canvas.blit(cx, cy, letter_mask(face.letter), 20, 20, 20);
        }
        return true;
    }
    const HostKey key = key_for_glyph(bindings, glyph, menu);
    if (key == HostKey::None) return false;
    const Mask mask = key_mask(key);
    if (std::none_of(mask.begin(), mask.end(), [](float cover) { return cover > 0.02f; }))
        return false;
    canvas.clear(cx, cy);
    if (outlined) canvas.blit(cx, cy, dilate(mask), 0, 0, 0);
    canvas.blit(cx, cy, mask, 255, 255, 255);
    return true;
}

const AtlasInfo *find_atlas(std::uint64_t signature) {
    for (const AtlasInfo &atlas : kAtlases)
        if (atlas.signature == signature) return &atlas;
    return nullptr;
}

const StandaloneChip *find_chip(std::uint64_t signature) {
    for (const StandaloneChip &chip : kChips)
        if (chip.signature == signature) return &chip;
    return nullptr;
}

}  // namespace

bool prompt_glyph_style_from_name(std::string_view name, PromptGlyphStyle &style) {
    std::string lower(name);
    for (char &c : lower) c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
    if (lower == "kb" || lower == "keyboard" || lower == "kbm" || lower == "pc" ||
        lower == "mouse") {
        style = PromptGlyphStyle::Keyboard;
        return true;
    }
    if (lower == "xbox" || lower == "xinput" || lower == "controller") {
        style = PromptGlyphStyle::Xbox;
        return true;
    }
    return false;
}

bool prompt_glyphs_known(std::uint64_t signature, std::uint32_t width, std::uint32_t height) {
    if (find_atlas(signature) != nullptr) return width == 256u && height == 256u;
    if (find_chip(signature) != nullptr) return width == kCell && height == kCell;
    return false;
}

bool prompt_glyphs_paint(PromptGlyphStyle style, const ControlBindings &bindings,
                         std::uint64_t signature, std::uint32_t width, std::uint32_t height,
                         std::span<std::byte> rgba8) {
    if (!prompt_glyphs_known(signature, width, height)) return false;
    if (rgba8.size() < static_cast<std::size_t>(width) * height * 4u) return false;
    const Canvas canvas{rgba8, width, height};
    bool painted = false;
    if (const AtlasInfo *atlas = find_atlas(signature)) {
        for (const AtlasCell &cell : atlas->cells)
            painted |= paint_cell(canvas, cell.column * kCell, cell.row * kCell, cell.glyph,
                                  style, bindings, atlas->white, atlas->outlined, false);
        return painted;
    }
    // Chips lose their dark bezel when cleared, so their glyph gets a rim.
    const StandaloneChip *chip = find_chip(signature);
    return paint_cell(canvas, 0u, 0u, chip->glyph, style, bindings, false, true, true);
}

}  // namespace lcs
