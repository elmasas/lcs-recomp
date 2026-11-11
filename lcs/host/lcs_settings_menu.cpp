// The in-game options window: one tab bar over a scrolling list of options, and a fixed footer that explains the
// option in use, says which changes wait for a restart, and lists the keys. Every value goes through opts::change.

#include "lcs_settings_menu.hpp"

#include "lcs_settings.hpp"

#include "imgui.h"

#include <algorithm>
#include <cfloat>
#include <cstddef>
#include <string>
#include <unordered_map>
#include <vector>

namespace opts {
namespace {

// Wording shown on screen.
constexpr const char *kWindowTitle = "Options###lcs-options-window";
constexpr const char *kRestartTag = "restart";
constexpr const char *kRestartAbout = "Saved now; it applies the next time the game starts.";
constexpr const char *kRestartPending = "Options tagged \"restart\" are saved and apply the next time the game starts.";
constexpr const char *kNothingSelected =
    "Point at an option, or move to it with the arrow keys or D-pad, to read about it.";
constexpr const char *kNoOptions = "There are no options to show here.";
constexpr const char *kUnknownEntry = "Other";
constexpr const char *kHintLong =
    "Q / E or LB / RB: switch tab    Arrows or D-pad: move    Enter or A: use    Esc or B: close";
constexpr const char *kHintShort = "Q/E, LB/RB: tab    Esc/B: close";
constexpr const char *kResetButton = "Reset tab...";
constexpr const char *kResetPopup = "Reset tab###lcs-options-reset";

const ImVec4 kAmber(1.0f, 0.72f, 0.28f, 1.0f);
const ImVec4 kHeading(0.62f, 0.80f, 1.0f, 1.0f);

struct MenuState {
    bool open = false;
    std::string tab;               // the tab shown
    bool tab_pending = false;      // `tab` was picked by code and the tab bar has yet to show it selected
    bool scroll_to_top = false;
    bool want_focus = false;
    bool blocked_last_frame = false;  // a list, a popup, a text field or a dragged control had the keys last frame
    ImGuiConfigFlags nav_added = 0;   // the navigation flags this window turned on, to turn off again on close

    std::string selected;      // the option the footer explains
    std::string last_hovered;  // under the mouse last frame
    std::string last_focused;  // under the keyboard/gamepad cursor last frame

    std::string draft_id;      // a slider being moved: its value is applied when it is let go
    int draft_value = 0;

    std::unordered_map<std::string, std::vector<Entry>> built_lists;  // entries_now() results while the menu is open
};

MenuState &state() {
    static MenuState instance;
    return instance;
}

bool is_held(const Setting &setting) {
    return setting.held && setting.held();
}

const Setting *find_setting(const std::string &id) {
    for (const Setting &setting : declared()) {
        if (setting.id == id) return &setting;
    }
    return nullptr;
}

const std::vector<Entry> &entries_of(MenuState &m, const Setting &setting, bool rebuild) {
    if (!setting.entries_now) return setting.entries;
    auto it = m.built_lists.find(setting.id);
    if (it == m.built_lists.end()) {
        it = m.built_lists.emplace(setting.id, setting.entries_now()).first;
    } else if (rebuild) {
        it->second = setting.entries_now();
    }
    return it->second;
}

std::string entry_text(const std::vector<Entry> &entries, int value) {
    for (const Entry &entry : entries) {
        if (entry.value == value) return entry.text;
    }
    return kUnknownEntry;
}

bool contains(const std::vector<std::string> &names, const std::string &name) {
    return std::find(names.begin(), names.end(), name) != names.end();
}

void set_tab(MenuState &m, const std::string &name) {
    if (m.tab == name) return;
    m.tab = name;
    m.tab_pending = true;
    m.scroll_to_top = true;
}

void step_tab(MenuState &m, const std::vector<std::string> &names, int direction) {
    if (names.empty()) return;
    const int count = static_cast<int>(names.size());
    const auto at = std::find(names.begin(), names.end(), m.tab);
    const int index = at == names.end() ? 0 : static_cast<int>(at - names.begin());
    set_tab(m, names[static_cast<std::size_t>(((index + direction) % count + count) % count)]);
}

void enable_navigation(MenuState &m) {
    if (ImGui::GetCurrentContext() == nullptr) return;
    ImGuiIO &io = ImGui::GetIO();
    const ImGuiConfigFlags wanted = ImGuiConfigFlags_NavEnableKeyboard | ImGuiConfigFlags_NavEnableGamepad;
    m.nav_added |= wanted & ~io.ConfigFlags;
    io.ConfigFlags |= wanted;
}

void disable_navigation(MenuState &m) {
    if (ImGui::GetCurrentContext() != nullptr) ImGui::GetIO().ConfigFlags &= ~m.nav_added;
    m.nav_added = 0;
}

void commit_draft(MenuState &m) {
    if (m.draft_id.empty()) return;
    change(m.draft_id, m.draft_value);
    m.draft_id.clear();
}

bool pressed(ImGuiKey key) {
    return ImGui::IsKeyPressed(key, false);
}

// Style values scaled to the text size, pushed for the whole window.
int push_scaled_style(float k) {
    ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(14.0f * k, 12.0f * k));
    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(7.0f * k, 4.0f * k));
    ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(8.0f * k, 6.0f * k));
    ImGui::PushStyleVar(ImGuiStyleVar_ItemInnerSpacing, ImVec2(5.0f * k, 4.0f * k));
    ImGui::PushStyleVar(ImGuiStyleVar_CellPadding, ImVec2(6.0f * k, 3.0f * k));
    ImGui::PushStyleVar(ImGuiStyleVar_ScrollbarSize, 13.0f * k);
    ImGui::PushStyleVar(ImGuiStyleVar_GrabMinSize, 12.0f * k);
    ImGui::PushStyleVar(ImGuiStyleVar_WindowRounding, 6.0f * k);
    ImGui::PushStyleVar(ImGuiStyleVar_ChildRounding, 4.0f * k);
    ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 3.0f * k);
    ImGui::PushStyleVar(ImGuiStyleVar_TabRounding, 4.0f * k);
    return 11;
}

// The value control of one option. Returns nothing; every change goes through opts::change.
void draw_control(MenuState &m, const Setting &setting) {
    const int value = current(setting.id);
    ImGui::SetNextItemWidth(-FLT_MIN);
    switch (setting.kind) {
    case Kind::Switch: {
        bool on = value != 0;
        if (ImGui::Checkbox(on ? "On###value" : "Off###value", &on)) change(setting.id, on ? 1 : 0);
        break;
    }
    case Kind::List: {
        const std::string shown = entry_text(entries_of(m, setting, false), value);
        if (ImGui::BeginCombo("##value", shown.c_str())) {
            const std::vector<Entry> &entries = entries_of(m, setting, ImGui::IsWindowAppearing());
            for (std::size_t i = 0; i < entries.size(); ++i) {
                ImGui::PushID(static_cast<int>(i));
                const bool chosen = entries[i].value == value;
                if (ImGui::Selectable(entries[i].text.c_str(), chosen)) change(setting.id, entries[i].value);
                if (chosen) ImGui::SetItemDefaultFocus();
                ImGui::PopID();
            }
            ImGui::EndCombo();
        }
        break;
    }
    case Kind::Number: {
        const bool drafting = m.draft_id == setting.id;
        int shown = drafting ? m.draft_value : value;
        if (ImGui::SliderInt("##value", &shown, setting.lo, setting.hi, setting.shown_as.c_str(),
                             ImGuiSliderFlags_AlwaysClamp)) {
            if (!drafting) commit_draft(m);
            m.draft_id = setting.id;
            m.draft_value = shown;
        }
        // Applied once the slider is let go, so the ini isn't written on every frame of a drag.
        if (m.draft_id == setting.id && !ImGui::IsItemActive()) commit_draft(m);
        break;
    }
    case Kind::Button: {
        std::string text = setting.button_text_now ? setting.button_text_now() : setting.button_text;
        text += "###value";
        if (ImGui::Button(text.c_str(), ImVec2(-FLT_MIN, 0.0f)) && setting.take) setting.take(0);
        break;
    }
    }
}

// The rows of the shown tab, by group in the order first used. Notes which row the mouse and the nav cursor are on.
void draw_rows(MenuState &m, std::string &hovered, std::string &focused) {
    std::vector<const Setting *> rows;
    std::vector<std::string> groups;
    for (const Setting &setting : declared()) {
        if (setting.tab != m.tab) continue;
        rows.push_back(&setting);
        if (!contains(groups, setting.group)) groups.push_back(setting.group);
    }
    if (rows.empty()) {
        ImGui::TextDisabled("%s", kNoOptions);
        return;
    }

    const ImGuiStyle &style = ImGui::GetStyle();
    const float control_width = std::max(ImGui::GetContentRegionAvail().x * 0.44f, 120.0f);
    const float tag_width = ImGui::CalcTextSize(kRestartTag).x + style.CellPadding.x;
    const ImGuiHoveredFlags hover_flags = ImGuiHoveredFlags_AllowWhenDisabled;

    for (std::size_t g = 0; g < groups.size(); ++g) {
        ImGui::PushID(static_cast<int>(g));
        if (g > 0) ImGui::Spacing();
        if (!groups[g].empty()) {
            ImGui::PushStyleColor(ImGuiCol_Text, kHeading);
            ImGui::SeparatorText(groups[g].c_str());
            ImGui::PopStyleColor();
        }
        if (ImGui::BeginTable("group", 3, ImGuiTableFlags_RowBg)) {
            ImGui::TableSetupColumn("title", ImGuiTableColumnFlags_WidthStretch);
            ImGui::TableSetupColumn("control", ImGuiTableColumnFlags_WidthFixed, control_width);
            ImGui::TableSetupColumn("tag", ImGuiTableColumnFlags_WidthFixed, tag_width);
            for (const Setting *setting : rows) {
                if (setting->group != groups[g]) continue;
                const bool held = is_held(*setting);
                ImGui::PushID(setting->id.c_str());
                const float row_height = ImGui::GetFrameHeightWithSpacing() + style.CellPadding.y;
                ImGui::TableNextRow(ImGuiTableRowFlags_None, row_height);

                ImGui::TableSetColumnIndex(0);
                ImGui::AlignTextToFramePadding();
                if (held) {
                    ImGui::TextDisabled("%s", setting->title.c_str());
                } else {
                    ImGui::TextUnformatted(setting->title.c_str());
                }
                bool row_hovered = ImGui::IsItemHovered(hover_flags);

                ImGui::TableSetColumnIndex(1);
                ImGui::BeginDisabled(held);
                draw_control(m, *setting);
                ImGui::EndDisabled();
                row_hovered = row_hovered || ImGui::IsItemHovered(hover_flags);
                if (ImGui::IsItemFocused()) focused = setting->id;

                ImGui::TableSetColumnIndex(2);
                if (setting->when == When::NextLaunch && changed_since_launch(setting->id)) {
                    ImGui::AlignTextToFramePadding();
                    ImGui::TextColored(kAmber, "%s", kRestartTag);
                    row_hovered = row_hovered || ImGui::IsItemHovered(hover_flags);
                }
                if (row_hovered) hovered = setting->id;
                ImGui::PopID();
            }
            ImGui::EndTable();
        }
        ImGui::PopID();
    }
}

// What the selected option does, in a box of fixed height.
void draw_about(const MenuState &m, float height) {
    ImGui::BeginChild("about", ImVec2(0.0f, height), ImGuiChildFlags_Borders);
    const Setting *setting = m.selected.empty() ? nullptr : find_setting(m.selected);
    if (setting == nullptr || setting->tab != m.tab) {
        ImGui::TextDisabled("%s", kNothingSelected);
    } else {
        ImGui::TextColored(kHeading, "%s", setting->title.c_str());
        std::string text = setting->about;
        if (is_held(*setting) && !setting->held_note.empty()) text += (text.empty() ? "" : " ") + setting->held_note;
        if (!text.empty()) ImGui::TextWrapped("%s", text.c_str());
        if (setting->when == When::NextLaunch) ImGui::TextColored(kAmber, "%s", kRestartAbout);
    }
    ImGui::EndChild();
}

bool restart_pending() {
    for (const Setting &setting : declared()) {
        if (setting.when == When::NextLaunch && changed_since_launch(setting.id)) return true;
    }
    return false;
}

void reset_tab(const std::string &tab) {
    for (const Setting &setting : declared()) {
        if (setting.tab == tab && setting.kind != Kind::Button) change(setting.id, setting.fallback);
    }
}

void draw_reset_popup(MenuState &m) {
    const ImGuiViewport *viewport = ImGui::GetMainViewport();
    ImGui::SetNextWindowPos(viewport->GetWorkCenter(), ImGuiCond_Always, ImVec2(0.5f, 0.5f));
    if (!ImGui::BeginPopupModal(kResetPopup, nullptr, ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoMove)) {
        return;
    }
    ImGui::Text("Put every option on \"%s\" back to its default value?", m.tab.c_str());
    if (std::any_of(declared().begin(), declared().end(),
                    [&](const Setting &setting) { return setting.tab == m.tab && setting.kind == Kind::Button; }))
        ImGui::TextDisabled("Key bindings stay as they are.");
    ImGui::Spacing();
    const float width = ImGui::CalcTextSize("Cancel").x + ImGui::GetStyle().FramePadding.x * 6.0f;
    if (ImGui::Button("Reset", ImVec2(width, 0.0f))) {
        commit_draft(m);
        reset_tab(m.tab);
        ImGui::CloseCurrentPopup();
    }
    ImGui::SameLine();
    if (ImGui::Button("Cancel", ImVec2(width, 0.0f))) ImGui::CloseCurrentPopup();
    ImGui::SetItemDefaultFocus();
    if (!keys_captured && (pressed(ImGuiKey_Escape) || pressed(ImGuiKey_GamepadFaceRight))) ImGui::CloseCurrentPopup();
    ImGui::EndPopup();
}

void draw_footer(MenuState &m, float about_height) {
    draw_about(m, about_height);

    if (restart_pending()) {
        ImGui::TextColored(kAmber, "%s", kRestartPending);
    } else {
        ImGui::TextUnformatted("");
    }

    const ImGuiStyle &style = ImGui::GetStyle();
    const float right = ImGui::GetCursorPosX() + ImGui::GetContentRegionAvail().x;
    const float button_width = ImGui::CalcTextSize(kResetButton).x + style.FramePadding.x * 2.0f;
    const float hint_room = ImGui::GetContentRegionAvail().x - button_width - style.ItemSpacing.x;
    const char *hint = ImGui::CalcTextSize(kHintLong).x <= hint_room ? kHintLong : kHintShort;
    ImGui::AlignTextToFramePadding();
    ImGui::TextDisabled("%s", hint);
    ImGui::SameLine(right - button_width);
    ImGui::BeginDisabled(m.tab.empty());
    if (ImGui::Button(kResetButton, ImVec2(button_width, 0.0f))) ImGui::OpenPopup(kResetPopup);
    ImGui::EndDisabled();
    draw_reset_popup(m);
}

}  // namespace

void open_menu(const std::string &tab) {
    MenuState &m = state();
    reload();
    if (!m.open) {
        m.open = true;
        m.want_focus = true;
        m.tab_pending = true;
        m.scroll_to_top = true;
        m.blocked_last_frame = false;
        m.last_hovered.clear();
        m.last_focused.clear();
        m.draft_id.clear();
        m.built_lists.clear();
        enable_navigation(m);
    }
    if (!tab.empty() && contains(tabs(), tab)) set_tab(m, tab);
}

void close_menu() {
    MenuState &m = state();
    if (!m.open) return;
    commit_draft(m);
    disable_navigation(m);
    m.built_lists.clear();
    m.open = false;
}

bool draw_menu() {
    MenuState &m = state();
    if (!m.open) open_menu({});
    enable_navigation(m);
    ImGuiIO &io = ImGui::GetIO();

    const std::vector<std::string> names = tabs();
    if (!contains(names, m.tab)) set_tab(m, names.empty() ? std::string() : names.front());

    // The window's own keys, unless something else is using them.
    bool keep_open = true;
    const bool keys_free = !keys_captured && !m.blocked_last_frame && !io.WantTextInput &&
                           !ImGui::IsPopupOpen("", ImGuiPopupFlags_AnyPopup);
    if (keys_free) {
        const bool plain = !io.KeyCtrl && !io.KeyAlt && !io.KeySuper;
        if (pressed(ImGuiKey_Escape) || pressed(ImGuiKey_GamepadFaceRight)) keep_open = false;
        if ((plain && pressed(ImGuiKey_Q)) || pressed(ImGuiKey_GamepadL1)) step_tab(m, names, -1);
        if ((plain && pressed(ImGuiKey_E)) || pressed(ImGuiKey_GamepadR1)) step_tab(m, names, 1);
    }

    // Size from the viewport: text scales with its height, so it reads the same from 720p to 4K.
    const ImGuiViewport *viewport = ImGui::GetMainViewport();
    const float view_w = viewport->WorkSize.x;
    const float view_h = viewport->WorkSize.y;
    const float text_size = std::clamp(view_h / 44.0f, 13.0f, 72.0f);
    const float k = text_size / 13.0f;
    const ImVec2 size(std::min(view_w * 0.94f, view_h * 1.2f), view_h * 0.8f);

    ImGui::PushFont(nullptr, text_size);
    const int pushed_vars = push_scaled_style(k);
    ImGui::SetNextWindowPos(viewport->GetWorkCenter(), ImGuiCond_Always, ImVec2(0.5f, 0.5f));
    ImGui::SetNextWindowSize(size, ImGuiCond_Always);
    ImGui::SetNextWindowBgAlpha(0.96f);
    // Clicking the game behind the window leaves no window focused: take the focus back.
    if (m.want_focus || !ImGui::IsWindowFocused(ImGuiFocusedFlags_AnyWindow)) ImGui::SetNextWindowFocus();
    m.want_focus = false;

    bool title_open = true;
    const ImGuiWindowFlags flags = ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse |
                                   ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoScrollbar |
                                   ImGuiWindowFlags_NoScrollWithMouse;
    if (ImGui::Begin(kWindowTitle, &title_open, flags)) {
        if (ImGui::BeginTabBar("tabs", ImGuiTabBarFlags_NoTooltip | ImGuiTabBarFlags_FittingPolicyScroll)) {
            for (const std::string &name : names) {
                const ImGuiTabItemFlags tab_flags =
                    m.tab_pending && name == m.tab ? ImGuiTabItemFlags_SetSelected : ImGuiTabItemFlags_None;
                const bool shown_now = ImGui::BeginTabItem(name.c_str(), nullptr, tab_flags);
                // A click picks the tab directly: Dear ImGui alone sometimes kept the old tab selected.
                if (ImGui::IsItemClicked() && name != m.tab) set_tab(m, name);
                if (shown_now) {
                    if (m.tab_pending) {
                        if (name == m.tab) m.tab_pending = false;
                    } else if (name != m.tab) {
                        set_tab(m, name);
                        m.tab_pending = false;
                    }
                    ImGui::EndTabItem();
                }
            }
            ImGui::EndTabBar();
        }

        const ImGuiStyle &style = ImGui::GetStyle();
        const float about_height = ImGui::GetTextLineHeightWithSpacing() * 4.0f + style.WindowPadding.y * 2.0f;
        const float footer_height = about_height + style.ItemSpacing.y * 2.0f +
                                    ImGui::GetTextLineHeightWithSpacing() + ImGui::GetFrameHeight();

        std::string hovered;
        std::string focused;
        ImGui::BeginChild("rows", ImVec2(0.0f, -footer_height), ImGuiChildFlags_NavFlattened,
                          ImGuiWindowFlags_AlwaysVerticalScrollbar);
        if (m.scroll_to_top) {
            ImGui::SetScrollY(0.0f);
            m.scroll_to_top = false;
        }
        draw_rows(m, hovered, focused);
        ImGui::EndChild();

        // Whichever of the mouse and the nav cursor moved onto an option last picks the one explained.
        if (!hovered.empty() && hovered != m.last_hovered) m.selected = hovered;
        if (!focused.empty() && focused != m.last_focused) m.selected = focused;
        m.last_hovered = hovered;
        m.last_focused = focused;

        draw_footer(m, about_height);
    }
    ImGui::End();
    ImGui::PopStyleVar(pushed_vars);
    ImGui::PopFont();

    m.blocked_last_frame =
        ImGui::IsAnyItemActive() || io.WantTextInput || ImGui::IsPopupOpen("", ImGuiPopupFlags_AnyPopup);
    return keep_open && title_open;
}

}  // namespace opts
