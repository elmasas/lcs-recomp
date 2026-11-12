#include "lcs_frontend_options.hpp"

#if defined(_WIN32)

#include "lcs_display_menu.hpp"
#include "lcs_frontend_ui.hpp"
#include "lcs_imgui_menu.hpp"
#include "lcs_key_bindings.hpp"
#include "lcs_settings.hpp"

#include "imgui.h"

#include <algorithm>
#include <atomic>
#include <cctype>
#include <cfloat>
#include <chrono>
#include <cstdio>
#include <string>
#include <vector>

namespace lcs {
namespace {

constexpr ImU32 kHeading = IM_COL32(205, 35, 35, 255);
constexpr ImU32 kTab = IM_COL32(235, 165, 50, 255);
constexpr ImU32 kRow = IM_COL32(125, 180, 225, 255);
constexpr ImU32 kRowLocked = IM_COL32(95, 110, 125, 255);
constexpr int kRepeatDelayMs = 400, kRepeatEveryMs = 70;
constexpr int kVisibleRows = 10;

std::atomic<bool> g_open{false};
std::atomic<int> g_page{0};
std::atomic<int> g_row{0};
std::atomic<int> g_clicked_page{-1};
std::atomic<int> g_clicked_row{-1};
std::atomic<int> g_clicked_side{0};  // -1 left of the value, +1 anything else on the row
std::atomic<int> g_page_step{0};
std::atomic<std::uint32_t> g_held{0u};
std::atomic<bool> g_block_game{false};
int g_scroll = 0;
std::uint32_t g_previous{};
bool g_first_step{true};
std::uint64_t g_held_since{};
std::uint64_t g_last_repeat{};

std::uint64_t now_ms() {
    return static_cast<std::uint64_t>(
        std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now().time_since_epoch()).count());
}

// The settings, not the trainer: it keeps to F10.
std::vector<std::string> visible_pages() {
    std::vector<std::string> pages;
    for (const std::string &page : opts::tabs()) {
        if (page == "Display" || page == "Graphics" || page == "Controls" || page == "Game") pages.push_back(page);
    }
    return pages;
}

std::vector<const opts::Setting *> rows_of(const std::string &page) {
    std::vector<const opts::Setting *> rows;
    for (const opts::Setting &spec : opts::declared()) {
        if (spec.tab == page) rows.push_back(&spec);
    }
    return rows;
}

std::vector<opts::Entry> choices_of(const opts::Setting &spec) {
    return spec.entries_now ? spec.entries_now() : spec.entries;
}

std::string upper(std::string text) {
    std::transform(text.begin(), text.end(), text.begin(), [](unsigned char c) { return static_cast<char>(std::toupper(c)); });
    return text;
}

std::string value_text(const opts::Setting &spec) {
    const int value = opts::current(spec.id);
    switch (spec.kind) {
    case opts::Kind::Switch: return value != 0 ? "On" : "Off";
    case opts::Kind::List: {
        for (const opts::Entry &choice : choices_of(spec)) {
            if (choice.value == value) return choice.text;
        }
        return "Custom";
    }
    case opts::Kind::Number: {
        char text[64];
        std::snprintf(text, sizeof(text), spec.shown_as.c_str(), value);
        return text;
    }
    case opts::Kind::Button: return spec.button_text_now ? spec.button_text_now() : spec.button_text;
    }
    return {};
}

// A step left or right on a row; Enter is a step right, and presses a button.
void change(const opts::Setting &spec, int direction, bool press) {
    if (spec.held && spec.held()) return;
    const int value = opts::current(spec.id);
    switch (spec.kind) {
    case opts::Kind::Switch:
        opts::change(spec.id, value != 0 ? 0 : 1);
        break;
    case opts::Kind::List: {
        const std::vector<opts::Entry> choices = choices_of(spec);
        if (choices.empty()) break;
        int index = 0;
        for (int i = 0; i < static_cast<int>(choices.size()); ++i) {
            if (choices[static_cast<std::size_t>(i)].value == value) index = i;
        }
        const int count = static_cast<int>(choices.size());
        opts::change(spec.id, choices[static_cast<std::size_t>((index + direction + count) % count)].value);
        break;
    }
    case opts::Kind::Number: {
        const int step = std::max(1, (spec.hi - spec.lo) / 50);
        opts::change(spec.id, std::clamp(value + direction * step, spec.lo, spec.hi));
        break;
    }
    case opts::Kind::Button:
        if (press && spec.take) spec.take(0);
        break;
    }
}

}  // namespace

void frontend_options_open() {
    frontend_ui_load();
    g_page.store(0);
    g_row.store(0);
    g_first_step = true;
    g_block_game.store(true);
    g_open.store(true);
}

bool frontend_options_is_open() noexcept { return g_open.load(std::memory_order_relaxed); }

void frontend_options_close() noexcept { g_open.store(false); }

void frontend_options_note_input(std::uint32_t held) noexcept {
    g_held.store(held, std::memory_order_relaxed);
    if (!g_open.load(std::memory_order_relaxed) && held == 0u) g_block_game.store(false, std::memory_order_relaxed);
}

bool frontend_options_blocks_game() noexcept { return g_block_game.load(std::memory_order_relaxed); }

static void step() {
    const std::uint32_t held = g_held.load(std::memory_order_relaxed);
    if (g_first_step) {
        opts::reload();
        g_scroll = 0;
    }
    std::uint32_t pressed = g_first_step ? 0u : held & ~g_previous;
    g_previous = held;
    g_first_step = false;
    if (host_settings_open() || opts::keys_captured) {
        g_clicked_page.store(-1);
        g_clicked_row.store(-1);
        return;
    }
    // Held directions repeat, as long lists and sliders need.
    constexpr std::uint32_t kDirections = kPspUp | kPspDown | kPspLeft | kPspRight;
    const std::uint64_t now = now_ms();
    if ((pressed & kDirections) != 0u) {
        g_held_since = now;
    } else if ((held & kDirections) != 0u && now - g_held_since >= kRepeatDelayMs && now - g_last_repeat >= kRepeatEveryMs) {
        g_last_repeat = now;
        pressed |= held & kDirections;
    }

    const std::vector<std::string> pages = visible_pages();
    if (pages.empty() || (pressed & kPspCircle) != 0u) {
        g_open.store(false);
        return;
    }
    const int page_count = static_cast<int>(pages.size());
    int page = std::clamp(g_page.load(), 0, page_count - 1);
    int step = g_page_step.exchange(0);
    if ((pressed & kPspLTrigger) != 0u) --step;
    if ((pressed & kPspRTrigger) != 0u) ++step;
    const int clicked_page = g_clicked_page.exchange(-1);
    int next_page = (page + step % page_count + page_count) % page_count;
    if (clicked_page >= 0 && clicked_page < page_count) next_page = clicked_page;
    if (next_page != page) {
        page = next_page;
        g_page.store(page);
        g_row.store(0);
        g_scroll = 0;
    }
    const std::vector<const opts::Setting *> rows = rows_of(pages[static_cast<std::size_t>(page)]);
    if (rows.empty()) return;
    const int count = static_cast<int>(rows.size());
    int row = std::clamp(g_row.load(), 0, count - 1);
    if ((pressed & kPspUp) != 0u) row = (row + count - 1) % count;
    if ((pressed & kPspDown) != 0u) row = (row + 1) % count;
    g_row.store(row);
    const opts::Setting &spec = *rows[static_cast<std::size_t>(row)];
    if ((pressed & kPspLeft) != 0u) change(spec, -1, false);
    if ((pressed & kPspRight) != 0u) change(spec, 1, false);
    if ((pressed & kPspCross) != 0u) change(spec, 1, true);
    const int clicked = g_clicked_row.exchange(-1);
    if (clicked >= 0 && clicked < count) change(*rows[static_cast<std::size_t>(clicked)], g_clicked_side.load(), true);
}

static void draw_screen(bool preview);

void frontend_options_draw() {
    if (!g_open.load()) return;
    step();
    if (!g_open.load()) return;
    draw_screen(false);
}

void frontend_options_draw_preview() { draw_screen(true); }

static void draw_screen(bool preview) {
    ImDrawList *draw = ImGui::GetBackgroundDrawList();
    const ImGuiIO &io = ImGui::GetIO();
    const ImVec2 size = io.DisplaySize;
    frontend_ui_backdrop_dim(draw);

    const float unit = size.y / 1080.0f;
    const float side = size.x / size.y > 16.0f / 9.0f ? (size.x - size.y * 16.0f / 9.0f) * 0.5f : 0.0f;
    const float span = size.x - side * 2.0f;
    const std::vector<std::string> pages = visible_pages();
    if (pages.empty()) return;
    const int page = std::clamp(g_page.load(), 0, static_cast<int>(pages.size()) - 1);
    const std::vector<const opts::Setting *> rows = rows_of(pages[static_cast<std::size_t>(page)]);
    const int count = static_cast<int>(rows.size());
    const int row = std::clamp(g_row.load(), 0, std::max(0, count - 1));

    const bool mouse_free = !preview && !host_settings_open() && !opts::keys_captured;
    const ImVec2 mouse = io.MousePos;
    static ImVec2 last_mouse = mouse;
    const bool mouse_moved = mouse.x != last_mouse.x || mouse.y != last_mouse.y;
    last_mouse = mouse;
    const bool clicked = mouse_free && ImGui::IsMouseClicked(ImGuiMouseButton_Left);

    if (mouse_free) {
        if (ImGui::IsKeyPressed(ImGuiKey_Q, false)) g_page_step.fetch_sub(1);
        if (ImGui::IsKeyPressed(ImGuiKey_E, false)) g_page_step.fetch_add(1);
    }

    frontend_ui_text(draw, ImVec2(side + span * 0.19f, size.y * 0.02f), pages[static_cast<std::size_t>(page)], 74.0f * unit, kHeading);

    // The rows, scrolled so the selected one shows.
    if (row < g_scroll) g_scroll = row;
    if (row >= g_scroll + kVisibleRows) g_scroll = row - kVisibleRows + 1;
    g_scroll = std::clamp(g_scroll, 0, std::max(0, count - kVisibleRows));
    if (mouse_free && io.MouseWheel != 0.0f) {
        g_scroll = std::clamp(g_scroll - static_cast<int>(io.MouseWheel), 0, std::max(0, count - kVisibleRows));
    }
    ImFont *font = imgui_menu_regular_font();
    const float text = 32.0f * unit, step = 56.0f * unit;
    const float label_x = side + span * 0.27f, value_x = side + span * 0.73f, pad = 24.0f * unit;
    float y = size.y * 0.15f;
    for (int i = g_scroll; i < std::min(count, g_scroll + kVisibleRows); ++i) {
        const opts::Setting &spec = *rows[static_cast<std::size_t>(i)];
        const bool selected = !preview && i == row;
        const bool locked = spec.held && spec.held();
        const bool over = mouse_free && mouse.x >= label_x - pad && mouse.x <= value_x + pad && mouse.y >= y - 7.0f * unit && mouse.y < y + step - 7.0f * unit;
        if (over && mouse_moved) g_row.store(i);
        if (over && clicked) {
            g_row.store(i);
            g_clicked_side.store(mouse.x < (label_x + value_x) * 0.5f ? 1 : (mouse.x < value_x - 200.0f * unit ? -1 : 1));
            g_clicked_row.store(i);
        }
        if (selected) draw->AddRectFilled(ImVec2(label_x - pad, y - 7.0f * unit), ImVec2(value_x + pad, y + 43.0f * unit), IM_COL32(255, 255, 255, 26));
        ImU32 colour = locked ? kRowLocked : selected ? kFrontendNormal : kRow;
        std::string label = upper(spec.title);
        if (spec.when == opts::When::NextLaunch && opts::changed_since_launch(spec.id)) label += " *";
        draw->AddText(font, text, ImVec2(label_x, y), colour, label.c_str());
        std::string value = upper(value_text(spec));
        if (selected && !locked && spec.kind != opts::Kind::Button) value = "<  " + value + "  >";
        const float value_width = font->CalcTextSizeA(text, FLT_MAX, 0.0f, value.c_str()).x;
        draw->AddText(font, text, ImVec2(value_x - value_width, y), selected && !locked ? kFrontendSelected : colour, value.c_str());
        y += step;
    }
    if (g_scroll > 0) draw->AddText(font, text, ImVec2(value_x + pad * 2.0f, size.y * 0.15f), kRow, "^");
    if (g_scroll + kVisibleRows < count) draw->AddText(font, text, ImVec2(value_x + pad * 2.0f, y - step), kRow, "v");

    // What the selected setting does.
    const float band = size.y * 0.82f;
    if (preview) {
        draw->AddText(font, 24.0f * unit, ImVec2(label_x, band - 34.0f * unit), kFrontendNormal, "Press Enter to change these.");
    } else if (count > 0) {
        const opts::Setting &spec = *rows[static_cast<std::size_t>(row)];
        std::string help = spec.about;
        if (spec.when == opts::When::NextLaunch) help += " Takes effect after a restart.";
        if (spec.held && spec.held() && !spec.held_note.empty()) help += " " + spec.held_note;
        const float help_size = 24.0f * unit;
        const float wrap = value_x - label_x;
        const float help_height = font->CalcTextSizeA(help_size, FLT_MAX, wrap, help.c_str()).y;
        draw->AddText(font, help_size, ImVec2(label_x, band - help_height - 10.0f * unit), kFrontendDim, help.c_str(), nullptr, wrap);
    }

    // The pages, and the keys.
    draw->AddRectFilled(ImVec2(side + span * 0.03f, band), ImVec2(size.x - side - span * 0.03f, size.y * 0.985f), IM_COL32(0, 0, 0, 205));
    const float tab_height = 50.0f * unit;
    const float tab_y = band + size.y * 0.05f;
    float x = side + span * 0.19f;
    for (int i = 0; i < static_cast<int>(pages.size()); ++i) {
        const std::string &name = pages[static_cast<std::size_t>(i)];
        const float width = frontend_ui_text_width(name, tab_height);
        if (mouse_free && clicked && mouse.x >= x && mouse.x < x + width && mouse.y >= tab_y && mouse.y < tab_y + tab_height) g_clicked_page.store(i);
        frontend_ui_text(draw, ImVec2(x, tab_y), name, tab_height, i == page ? kHeading : kTab);
        x += width + 32.0f * unit;
    }
    const float hint_x = side + span * 0.72f;
    draw->AddText(font, 24.0f * unit, ImVec2(hint_x, band + size.y * 0.035f), kFrontendNormal, "Move  W S    Change  A D");
    draw->AddText(font, 24.0f * unit, ImVec2(hint_x, band + size.y * 0.085f), kFrontendNormal, "Page  Q E     Back  Esc");
}

}  // namespace lcs

#else

namespace lcs {

void frontend_options_open() {}
bool frontend_options_is_open() noexcept { return false; }
void frontend_options_close() noexcept {}
void frontend_options_note_input(std::uint32_t) noexcept {}
bool frontend_options_blocks_game() noexcept { return false; }
void frontend_options_draw_preview() {}
void frontend_options_draw() {}

}  // namespace lcs

#endif
