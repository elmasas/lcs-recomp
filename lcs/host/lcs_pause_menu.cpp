#include "lcs_pause_menu.hpp"

#if defined(_WIN32)

#include "display_window.hpp"
#include "lcs_display_menu.hpp"
#include "lcs_frontend_options.hpp"
#include "lcs_frontend_ui.hpp"
#include "lcs_imgui_menu.hpp"
#include "lcs_key_bindings.hpp"
#include "lcs_menu.hpp"
#include "lcs_render_config.hpp"
#include "lcs_save_slots.hpp"
#include "lcs_state.hpp"

#include "imgui.h"

#include <algorithm>
#include <atomic>
#include <cfloat>
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <mutex>
#include <string>

namespace lcs {
namespace {

// CMenuManager, ULUS-10041 v1.05.
constexpr std::uint32_t kMenu = 0x08B8ED20u;  // its first byte is the row's selected tab
constexpr std::uint32_t kScreen = kMenu + 0x564u;
constexpr std::uint32_t kRowY = kMenu + 0x554u;  // the row's place: it moves when a page is entered
constexpr std::uint32_t kRowHome = 366u;
constexpr int kLastRowScreen = 8;  // later screens are questions and multiplayer: the game's own business

struct Page {
    const char *name;
    int tab;  // the game's, or one of ours
};
constexpr int kSettings = -1, kQuit = -2, kStates = -3;
constexpr Page kPages[] = {{"Map", 1}, {"Brief", 2}, {"Stats", 4}, {"Game", 3}, {"States", kStates}, {"Audio", 6},
                           {"Settings", kSettings}, {"Quit", kQuit}};
constexpr int kCount = static_cast<int>(std::size(kPages));

std::atomic<bool> g_visible{false};
std::atomic<int> g_page{0};        // in kPages; -1 on a page of the game's outside the row
std::atomic<int> g_clicked{-1};
std::atomic<int> g_quit_choice{-1};  // while asking: 0 Yes, 1 No
std::atomic<int> g_quit_clicked{-1};
std::atomic<int> g_open_tab{-1};
bool g_entered = false;  // on the pages that don't move the row when entered: the Game page's rows, the stats' scrolling
int g_wanted_tab = -1;  // the game overwrites the tab while a page animates in, so it's written until it holds
std::uint32_t g_previous{};

// The States page: the save states (lcs_state.hpp), one row each. Enter on a row asks what to do with it.
enum StateOption { kOptionLoad, kOptionSave, kOptionCancel };
std::atomic<bool> g_states_entered{false};
std::atomic<int> g_state_row{0};
std::atomic<int> g_state_option{-1};  // -1: no question; otherwise the highlighted option, in state_options(row)
std::atomic<int> g_state_row_clicked{-1};
std::atomic<int> g_state_option_clicked{-1};

std::vector<StateOption> state_options(int row) {
    std::vector<StateOption> options;
    if (lcs_state_slot_info(row).used) options.push_back(kOptionLoad);
    if (!lcs_state_slot_is_auto(row)) options.push_back(kOptionSave);
    options.push_back(kOptionCancel);
    return options;
}

const char *state_option_name(StateOption option) {
    return option == kOptionLoad ? "Load" : option == kOptionSave ? "Save here" : "Cancel";
}

void states_reset() {
    g_states_entered.store(false);
    g_state_option.store(-1);
    g_state_row_clicked.store(-1);
    g_state_option_clicked.store(-1);
}

// Game thread: the keys while the States page has them. Back with Circle; the game sees nothing.
void states_tick(std::uint32_t pressed) {
    const int option = g_state_option.load();
    const int row = g_state_row.load();
    if (option >= 0) {
        const std::vector<StateOption> options = state_options(row);
        int chosen = g_state_option_clicked.exchange(-1);
        int next = option;
        if ((pressed & kPspUp) != 0u) next = (option + static_cast<int>(options.size()) - 1) % static_cast<int>(options.size());
        if ((pressed & kPspDown) != 0u) next = (option + 1) % static_cast<int>(options.size());
        g_state_option.store(next);
        if ((pressed & kPspCross) != 0u) chosen = next;
        if ((pressed & kPspCircle) != 0u) chosen = static_cast<int>(options.size()) - 1;  // Cancel
        if (chosen < 0 || chosen >= static_cast<int>(options.size())) return;
        g_state_option.store(-1);
        if (options[static_cast<std::size_t>(chosen)] == kOptionLoad) lcs_state_request_load(row);
        else if (options[static_cast<std::size_t>(chosen)] == kOptionSave) lcs_state_request_save(row);
        return;
    }
    int next = row;
    if ((pressed & kPspUp) != 0u) next = (row + kStateSlotCount - 1) % kStateSlotCount;
    if ((pressed & kPspDown) != 0u) next = (row + 1) % kStateSlotCount;
    const int clicked = g_state_row_clicked.exchange(-1);
    if (clicked >= 0) next = clicked;
    g_state_row.store(next);
    if ((pressed & kPspCross) != 0u || clicked >= 0) g_state_option.store(0);
    else if ((pressed & kPspCircle) != 0u) g_states_entered.store(false);
}

int page_of_tab(int tab) {
    for (int i = 0; i < kCount; ++i) {
        if (kPages[i].tab == tab) return i;
    }
    return -1;
}

}  // namespace

std::uint32_t pause_menu_game_tick(psprecomp::Runtime &runtime, std::uint32_t buttons) {
    auto &memory = runtime.memory();
    const std::uint32_t pressed = buttons & ~g_previous;
    g_previous = buttons;
    // The list of saves has the keys, and what it uses isn't for the row either. The game is back on its row after the
    // list or a question closes, whatever the answer.
    static bool away = false;
    if (save_slots_open()) {
        away = true;
        return buttons;
    }
    if (!lcs_menu_active() || lcs_render_configuration().display.classic_pause) {
        states_reset();
        g_visible.store(false);
        g_page.store(0);
        g_quit_choice.store(-1);
        g_open_tab.store(-1);
        g_wanted_tab = -1;
        g_entered = false;
        return buttons;
    }
    constexpr std::uint32_t kMoves = kPspUp | kPspDown | kPspLeft | kPspRight | kPspLTrigger | kPspRTrigger;
    if (const int tab = g_open_tab.exchange(-1); tab >= 0) {
        g_wanted_tab = tab;
        g_page.store(-1);
    }
    int page = g_page.load();
    if (g_wanted_tab > 0 && static_cast<int>(memory.load8(kMenu)) != g_wanted_tab) memory.store8(kMenu, static_cast<std::uint8_t>(g_wanted_tab));
    const int tab = static_cast<int>(memory.load8(kMenu));
    const bool ours = page >= 0 && kPages[page].tab < 0;
    if (!ours && g_wanted_tab <= 0 && (page < 0 || kPages[page].tab != tab)) {
        page = page_of_tab(tab);  // as the menu opens, the tab isn't valid for a frame: this finds it again after
        g_page.store(page);
    }
    const auto screen = static_cast<int>(memory.load32(kScreen));
    const bool question = screen > kLastRowScreen;
    if (question) {
        away = true;
    } else if (away) {
        away = false;
        g_entered = false;
    }
    if (g_entered && !question && (pressed & kPspCircle) != 0u) {
        g_entered = false;  // back to the row: the game does the same with this press
        g_visible.store(true);
        return buttons;
    }
    if (!ours && !g_entered && !question && (tab == 3 || tab == 4) && (pressed & kPspCross) != 0u && !host_settings_open() && !frontend_options_is_open()) {
        g_entered = true;
    }
    const bool inside = !ours && (g_entered || memory.load32(kRowY) != kRowHome || question);
    g_visible.store(!inside && !host_settings_open());
    if (host_settings_open() || frontend_options_is_open()) return buttons;
    if (inside) return buttons;

    if (const int choice = g_quit_choice.load(); choice >= 0) {
        const int clicked = g_quit_clicked.exchange(-1);
        if ((pressed & (kPspUp | kPspDown | kPspLeft | kPspRight)) != 0u) g_quit_choice.store(1 - choice);
        if ((pressed & kPspCircle) != 0u || clicked == 1 || ((pressed & kPspCross) != 0u && choice == 1)) {
            g_quit_choice.store(-1);
        } else if (clicked == 0 || (pressed & kPspCross) != 0u) {
            display_window_request_close();
        }
        return 0u;
    }

    int next = page;
    if ((pressed & (kPspRight | kPspRTrigger)) != 0u) next = page < 0 ? 0 : (page + 1) % kCount;
    if ((pressed & (kPspLeft | kPspLTrigger)) != 0u) next = page < 0 ? kCount - 1 : (page + kCount - 1) % kCount;
    if (const int clicked = g_clicked.exchange(-1); clicked >= 0 && clicked < kCount) next = clicked;
    if (next != page) {
        g_page.store(next);
        if (kPages[next].tab > 0) {
            g_wanted_tab = kPages[next].tab;
            memory.store8(kMenu, static_cast<std::uint8_t>(g_wanted_tab));
        }
    }
    if (next >= 0 && kPages[next].tab == kStates) {
        // The States page: Enter goes into its list, which then has the keys; the game sees nothing but the way out.
        if (g_states_entered.load()) {
            states_tick(pressed);
            return 0u;
        }
        if ((pressed & kPspCross) != 0u || g_state_row_clicked.load() >= 0) {
            g_states_entered.store(true);
            if (g_state_row_clicked.load() >= 0) states_tick(0u);
        }
        return buttons & kPspCircle;
    }
    if (next >= 0 && kPages[next].tab < 0) {
        // Our own pages: the game sees nothing but the way out.
        if ((pressed & kPspCross) != 0u) {
            if (kPages[next].tab == kSettings) frontend_options_open();
            else g_quit_choice.store(1);
        }
        return buttons & kPspCircle;
    }
    return buttons & ~kMoves;
}

bool pause_menu_visible() noexcept { return g_visible.load(std::memory_order_relaxed); }

void pause_menu_open_game_tab(int tab) noexcept { g_open_tab.store(tab); }

// "9 Nov 15:42", in the player's own time zone. Read again twice a second, not every frame.
std::string state_time_text(std::int64_t saved_unix) {
    const std::time_t time = static_cast<std::time_t>(saved_unix);
    std::tm local{};
    localtime_s(&local, &time);
    static const char *const kMonths[] = {"jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec"};
    char text[32];
    std::snprintf(text, sizeof text, "%d %s %02d:%02d", local.tm_mday, kMonths[local.tm_mon % 12], local.tm_hour, local.tm_min);
    return text;
}

void states_draw(ImDrawList *draw, ImVec2 size, float unit, ImVec2 mouse, bool clicked) {
    struct Row {
        std::string label, when;
        bool used{};
    };
    static std::vector<Row> rows;
    static auto refreshed = std::chrono::steady_clock::time_point{};
    const auto now = std::chrono::steady_clock::now();
    if (rows.empty() || now - refreshed > std::chrono::milliseconds(500)) {
        refreshed = now;
        rows.clear();
        for (int slot = 0; slot < kStateSlotCount; ++slot) {
            const StateSlotInfo info = lcs_state_slot_info(slot);
            rows.push_back({lcs_state_slot_label(slot), info.used ? state_time_text(info.saved_unix) : "empty", info.used});
        }
    }
    frontend_ui_backdrop_dim(draw);
    constexpr ImU32 kHeading = IM_COL32(205, 35, 35, 255);
    frontend_ui_text(draw, ImVec2(size.x * 0.19f, size.y * 0.02f), "States", 74.0f * unit, kHeading);
    const bool entered = g_states_entered.load();
    const int selected = g_state_row.load();
    const int option = g_state_option.load();
    const float row_height = 58.0f * unit, text = 40.0f * unit;
    const float left = size.x * 0.30f, right = size.x * 0.70f;
    float y = size.y * 0.17f;
    for (int i = 0; i < static_cast<int>(rows.size()); ++i) {
        if (i == kStateManualSlots) y += row_height * 0.4f;  // the automatic ones apart
        const bool over = mouse.x >= left && mouse.x <= right && mouse.y >= y && mouse.y < y + row_height;
        if (over && clicked && option < 0) g_state_row_clicked.store(i);
        const bool active = entered && i == selected;
        if (active) draw->AddRectFilled(ImVec2(left, y), ImVec2(right, y + row_height * 0.94f), IM_COL32(255, 255, 255, 28), 6.0f * unit);
        const Row &row = rows[static_cast<std::size_t>(i)];
        const ImU32 colour = active ? kFrontendSelected : row.used ? kFrontendNormal : kFrontendDim;
        frontend_ui_text(draw, ImVec2(left + 14.0f * unit, y + (row_height - text) * 0.5f), row.label, text, colour);
        const float when = frontend_ui_text_width(row.when, text);
        frontend_ui_text(draw, ImVec2(right - 14.0f * unit - when, y + (row_height - text) * 0.5f), row.when, text, colour);
        y += row_height;
    }
    ImFont *font = imgui_menu_regular_font();
    const float note = 26.0f * unit;
    const char *hint = entered ? "Enter: choose    Esc: back    Auto states are saved every few minutes of play"
                               : "Press Enter to choose a state";
    const ImVec2 measured = font->CalcTextSizeA(note, FLT_MAX, 0.0f, hint);
    draw->AddText(font, note, ImVec2((size.x - measured.x) * 0.5f, y + row_height * 0.5f), kFrontendDim, hint);

    if (option >= 0 && selected >= 0 && selected < static_cast<int>(rows.size())) {
        const std::vector<StateOption> options = state_options(selected);
        const float box_w = size.x * 0.26f, line = 56.0f * unit;
        const float box_h = line * (static_cast<float>(options.size()) + 1.4f);
        const float box_x = (size.x - box_w) * 0.5f, box_y = (size.y - box_h) * 0.5f;
        draw->AddRectFilled(ImVec2(0.0f, 0.0f), size, IM_COL32(0, 0, 0, 130));
        draw->AddRectFilled(ImVec2(box_x, box_y), ImVec2(box_x + box_w, box_y + box_h), IM_COL32(0, 0, 0, 235), 8.0f * unit);
        const std::string &title = rows[static_cast<std::size_t>(selected)].label;
        frontend_ui_text(draw, ImVec2(box_x + (box_w - frontend_ui_text_width(title, text)) * 0.5f, box_y + line * 0.3f), title, text, kFrontendDim);
        for (int i = 0; i < static_cast<int>(options.size()); ++i) {
            const char *name = state_option_name(options[static_cast<std::size_t>(i)]);
            const float width = frontend_ui_text_width(name, text);
            const float x = box_x + (box_w - width) * 0.5f, oy = box_y + line * (1.2f + static_cast<float>(i));
            if (clicked && mouse.x >= box_x && mouse.x <= box_x + box_w && mouse.y >= oy && mouse.y < oy + line) g_state_option_clicked.store(i);
            frontend_ui_text(draw, ImVec2(x, oy), name, text, i == option ? kFrontendSelected : kFrontendNormal);
        }
    }
}

void pause_menu_draw() {
    if (!g_visible.load() || !lcs_menu_active()) return;
    frontend_ui_load();
    ImDrawList *draw = ImGui::GetBackgroundDrawList();
    const ImVec2 size = ImGui::GetIO().DisplaySize;
    const float unit = size.y / 1080.0f;
    const int page = g_page.load();
    const ImVec2 mouse = ImGui::GetIO().MousePos;
    const bool clicked = ImGui::IsMouseClicked(ImGuiMouseButton_Left);
    if (page >= 0 && kPages[page].tab == kSettings) frontend_options_draw_preview();
    if (page >= 0 && kPages[page].tab == kStates) states_draw(draw, size, unit, mouse, clicked);
    if (page >= 0 && kPages[page].tab == kQuit) {
        frontend_ui_backdrop_dim(draw);
        ImFont *font = imgui_menu_regular_font();
        constexpr ImU32 kHeading = IM_COL32(205, 35, 35, 255);
        frontend_ui_text(draw, ImVec2(size.x * 0.19f, size.y * 0.02f), "Quit", 74.0f * unit, kHeading);
        const int choice = g_quit_choice.load();
        const char *question = choice >= 0 ? "Quit the game? Anything you haven't saved will be lost." : "Press Enter to quit the game.";
        const float text = 34.0f * unit;
        const ImVec2 measured = font->CalcTextSizeA(text, FLT_MAX, 0.0f, question);
        draw->AddText(font, text, ImVec2((size.x - measured.x) * 0.5f, size.y * 0.32f), kFrontendNormal, question);
        if (choice >= 0) {
            const char *labels[2] = {"Yes", "No"};
            float y = size.y * 0.42f;
            for (int i = 0; i < 2; ++i) {
                const float width = frontend_ui_text_width(labels[i], 60.0f * unit);
                const float x = (size.x - width) * 0.5f;
                if (clicked && mouse.x >= x && mouse.x <= x + width && mouse.y >= y && mouse.y < y + 60.0f * unit) g_quit_clicked.store(i);
                frontend_ui_text(draw, ImVec2(x, y), labels[i], 60.0f * unit, choice == i ? kFrontendSelected : kFrontendNormal);
                y += 72.0f * unit;
            }
        }
    }
    // Over the game's own row, leaving its hints to the right of it. Where the game puts that row follows the window's
    // shape in a straight line, measured from 1.1:1 up to 2.37:1, past which it stops widening and stays centred.
    const float aspect = std::min(size.x / size.y, 2.37f);
    const float frame = size.y * aspect, side = (size.x - frame) * 0.5f;
    const float top = size.y * (0.4994f + 0.1382f * aspect), bottom = size.y * (0.5015f + 0.2084f * aspect);
    const float left = side + frame * 0.02f, right = side + frame * 0.70f;
    draw->AddRectFilled(ImVec2(left, top + 2.0f), ImVec2(right, bottom - 2.0f), IM_COL32(6, 6, 8, 255));
    float height = (bottom - top) * 0.34f;
    float gap = height * 0.62f;
    float total = -gap;
    for (const Page &item : kPages) total += frontend_ui_text_width(item.name, height) + gap;
    if (total > (right - left) * 0.94f) {  // a narrow window: smaller, so all the pages fit
        const float shrink = (right - left) * 0.94f / total;
        height *= shrink;
        gap *= shrink;
        total *= shrink;
    }
    float x = left + (right - left - total) * 0.5f;
    const float y = (top + bottom - height) * 0.5f;
    for (int i = 0; i < kCount; ++i) {
        const float width = frontend_ui_text_width(kPages[i].name, height);
        if (clicked && mouse.x >= x && mouse.x < x + width && mouse.y >= y && mouse.y < y + height) g_clicked.store(i);
        frontend_ui_text(draw, ImVec2(x, y), kPages[i].name, height, i == page ? IM_COL32(205, 35, 35, 255) : IM_COL32(235, 165, 50, 255));
        x += width + gap;
    }
}

}  // namespace lcs

#else

namespace lcs {

std::uint32_t pause_menu_game_tick(psprecomp::Runtime &, std::uint32_t buttons) { return buttons; }
bool pause_menu_visible() noexcept { return false; }
void pause_menu_draw() {}
void pause_menu_open_game_tab(int) noexcept {}

}  // namespace lcs

#endif
