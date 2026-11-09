// See settings_menu.h. Adapted from VCS Recomp (GPL-3.0; see lcs/VCS_IMPORT.md).
//
// Layout: a fixed-size window (from the viewport alone), the page tabs, the page's sections in a scrolling child, and a
// footer of fixed height (help text sized for the longest help of any setting, the restart note, the buttons). Nothing
// in the window changes size with what the mouse is over: an auto-sized, centred window whose help line grew and
// shrank with the hovered row moved the rows under a still mouse every other frame, and a click whose press and release
// landed in different layouts was lost.
#include "settings_menu.h"

#include "settings.h"

#include "imgui.h"

#include <algorithm>
#include <cfloat>
#include <string>
#include <vector>

namespace ui {
namespace {

bool g_open = false;
bool g_popup_was_open = false;  // a combo's list: Escape / B close it, not the menu
bool g_was_focused = false;     // the menu window had focus last frame
bool g_focus_window = false;
int g_page = 0, g_select_page = -1;
std::string g_help_key;     // the row whose help shows: the last one hovered or navigated to (kept in between)
std::string g_nav_focused;  // the row whose control had keyboard / gamepad focus last frame

bool restart_pending(const settings::Spec &s) {
    return s.apply == settings::Apply::Restart && settings::changedSinceStart(s.key);
}

std::string help_text(const settings::Spec &s) {
    std::string text = s.help;
    if (s.apply == settings::Apply::Restart) text += " Applies the next time the game starts.";
    if (s.locked && s.locked()) text += " " + s.lockedNote;
    return text;
}

// A page's sections in the order their first setting was registered.
std::vector<std::string> sections(const std::string &page) {
    std::vector<std::string> out;
    for (const settings::Spec &s : settings::all())
        if (s.page == page && std::find(out.begin(), out.end(), s.section) == out.end()) out.push_back(s.section);
    return out;
}

// The label, then the setting's control. A row is hovered when the mouse is anywhere across it; clicking anywhere on a
// toggle's row flips it.
void row(const settings::Spec &s, std::string &focused_now) {
    const ImGuiStyle &style = ImGui::GetStyle();
    const bool locked = s.locked && s.locked();
    const int v = settings::value(s.key);
    ImGui::TableNextRow(ImGuiTableRowFlags_None, ImGui::GetFrameHeight() + style.CellPadding.y * 2.0f);
    ImGui::TableNextColumn();
    const float top = ImGui::GetCursorScreenPos().y - style.CellPadding.y;
    ImGui::AlignTextToFramePadding();
    if (locked)
        ImGui::TextDisabled("%s", s.label.c_str());
    else
        ImGui::TextUnformatted(s.label.c_str());
    if (restart_pending(s)) {
        ImGui::SameLine();
        ImGui::TextColored(ImVec4(1.0f, 0.75f, 0.3f, 1.0f), "*");
    }
    ImGui::TableNextColumn();
    ImGui::PushID(s.key.c_str());
    ImGui::BeginDisabled(locked);
    ImGui::SetNextItemWidth(-FLT_MIN);
    bool over_item = false;
    const auto note_item = [&] {  // right after the control itself (a combo's list is another window)
        over_item = ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled);
        if (ImGui::IsItemFocused()) focused_now = s.key;
    };
    switch (s.type) {
    case settings::Type::Toggle: {
        bool on = v != 0;
        const bool changed = ImGui::Checkbox(on ? "On###v" : "Off###v", &on);
        note_item();
        if (changed) settings::set(s.key, on ? 1 : 0);
        break;
    }
    case settings::Type::Choice: {
        const std::vector<settings::Choice> choices = s.dynamicChoices ? s.dynamicChoices() : s.choices;
        const auto current = std::find_if(choices.begin(), choices.end(),
                                          [&](const settings::Choice &c) { return c.value == v; });
        const char *shown = current != choices.end() ? current->label.c_str() : (s.dynamicChoices ? "Choose..." : "Custom");
        const bool list_open = ImGui::BeginCombo("##v", shown, ImGuiComboFlags_HeightLarge);
        note_item();
        if (list_open) {
            for (const settings::Choice &c : choices) {
                if (ImGui::Selectable(c.label.c_str(), c.value == v)) settings::set(s.key, c.value);
                if (c.value == v) ImGui::SetItemDefaultFocus();
            }
            ImGui::EndCombo();
        }
        break;
    }
    case settings::Type::Integer: {
        int edited = v;
        const bool changed =
            ImGui::SliderInt("##v", &edited, s.min, s.max, s.format.c_str(), ImGuiSliderFlags_AlwaysClamp);
        note_item();
        if (changed) settings::set(s.key, edited);
        break;
    }
    case settings::Type::Action: {
        const bool pressed = ImGui::Button(((s.buttonText ? s.buttonText() : s.button) + "###v").c_str(), ImVec2(-FLT_MIN, 0.0f));
        note_item();
        if (pressed && s.onChange) s.onChange(0);
        break;
    }
    }
    ImGui::EndDisabled();
    ImGui::PopID();

    const float bottom = top + ImGui::GetFrameHeight() + style.CellPadding.y * 2.0f;  // every control is one frame high
    const ImVec2 mouse = ImGui::GetMousePos();
    const bool hovered = ImGui::IsWindowHovered() && mouse.y >= top && mouse.y < bottom;
    const ImGuiIO &io = ImGui::GetIO();
    // the mouse takes the help over only when it moves or clicks, so a resting cursor doesn't fight the keyboard
    if (hovered && (io.MouseDelta.x != 0.0f || io.MouseDelta.y != 0.0f || ImGui::IsMouseClicked(ImGuiMouseButton_Left) ||
                    g_help_key.empty()))
        g_help_key = s.key;
    if (hovered && !over_item && !locked && s.type == settings::Type::Toggle && !g_popup_was_open &&
        ImGui::IsMouseClicked(ImGuiMouseButton_Left))
        settings::set(s.key, v != 0 ? 0 : 1);
    if (g_help_key == s.key)
        ImGui::TableSetBgColor(ImGuiTableBgTarget_RowBg0, ImGui::GetColorU32(ImGuiCol_Header, hovered ? 0.6f : 0.35f));
}

}  // namespace

void openSettingsMenu(const std::string &page) {
    const std::vector<std::string> pages = settings::pages();
    for (std::size_t i = 0u; i < pages.size(); ++i)
        if (pages[i] == page) g_select_page = static_cast<int>(i);
    if (g_open) return;
    settings::refresh();
    g_open = true;
    g_focus_window = true;
    g_help_key.clear();
    g_nav_focused.clear();
    ImGui::GetIO().ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard | ImGuiConfigFlags_NavEnableGamepad;
}

void closeSettingsMenu() {
    g_open = false;
    ImGui::GetIO().ConfigFlags &= ~(ImGuiConfigFlags_NavEnableKeyboard | ImGuiConfigFlags_NavEnableGamepad);
}

bool drawSettingsMenu() {
    if (!g_open) return true;
    if (!g_popup_was_open &&
        !settings::inputCaptured && (ImGui::IsKeyPressed(ImGuiKey_Escape, false) || ImGui::IsKeyPressed(ImGuiKey_GamepadFaceRight, false)))
        return false;

    const std::vector<std::string> pages = settings::pages();
    const int n = static_cast<int>(pages.size());
    if (n == 0) return true;
    g_page = std::clamp(g_page, 0, n - 1);

    const ImGuiViewport *vp = ImGui::GetMainViewport();
    const float scale = std::max(1.0f, vp->Size.y / 720.0f);
    ImGui::PushFont(nullptr, ImGui::GetStyle().FontSizeBase * scale * 1.25f);
    ImGui::SetNextWindowPos(ImVec2(vp->Pos.x + vp->Size.x * 0.5f, vp->Pos.y + vp->Size.y * 0.5f), ImGuiCond_Always,
                            ImVec2(0.5f, 0.5f));
    ImGui::SetNextWindowSize(ImVec2(std::min(vp->Size.x * 0.92f, 1000.0f * scale), std::min(vp->Size.y * 0.88f, 540.0f * scale)),
                             ImGuiCond_Always);
    ImGui::SetNextWindowBgAlpha(0.92f);
    // keeps keyboard / gamepad focus after a click on the game picture behind it (not while a combo list is open:
    // focusing the window would close it)
    if (g_focus_window || (!g_was_focused && !g_popup_was_open)) {
        ImGui::SetNextWindowFocus();
        g_focus_window = false;
    }
    const ImGuiWindowFlags flags = ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse |
                                   ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoScrollbar |
                                   ImGuiWindowFlags_NoScrollWithMouse;
    if (ImGui::Begin("Settings", nullptr, flags)) {
        const ImGuiStyle &style = ImGui::GetStyle();
        // LB / RB (or Q / E with the keyboard) switch pages
        if (n > 1 && !g_popup_was_open) {
            if (!settings::inputCaptured && (ImGui::IsKeyPressed(ImGuiKey_GamepadL1, false) || ImGui::IsKeyPressed(ImGuiKey_Q, false)))
                g_select_page = (g_page + n - 1) % n;
            if (!settings::inputCaptured && (ImGui::IsKeyPressed(ImGuiKey_GamepadR1, false) || ImGui::IsKeyPressed(ImGuiKey_E, false)))
                g_select_page = (g_page + 1) % n;
        }

        // the help area fits the longest help of any page, so it is the same height whatever is selected - but at most
        // four lines, so the rows keep the room: a longer help is drawn smaller
        const float wrap = ImGui::GetContentRegionAvail().x;
        const float line = ImGui::GetTextLineHeightWithSpacing();
        float help_height = line * 2.0f;
        for (const settings::Spec &s : settings::all())
            help_height = std::max(help_height, ImGui::CalcTextSize(help_text(s).c_str(), nullptr, false, wrap).y);
        help_height = std::min(help_height, line * 4.0f);
        const float footer = (1.0f + style.ItemSpacing.y) + (help_height + style.ItemSpacing.y) +
                             (ImGui::GetTextLineHeight() + style.ItemSpacing.y) + ImGui::GetFrameHeight() +
                             style.ItemSpacing.y + 2.0f;

        const int shown_page = g_page;
        if (ImGui::BeginTabBar("pages")) {
            for (int i = 0; i < n; ++i) {
                const ImGuiTabItemFlags tab_flags = g_select_page == i ? ImGuiTabItemFlags_SetSelected : 0;
                if (ImGui::BeginTabItem(pages[static_cast<std::size_t>(i)].c_str(), nullptr, tab_flags)) {
                    g_page = i;
                    ImGui::EndTabItem();
                }
            }
            g_select_page = -1;
            ImGui::EndTabBar();
        }
        if (g_page != shown_page) g_help_key.clear();
        const std::string &page = pages[static_cast<std::size_t>(g_page)];

        std::string focused_now;
        ImGui::PushID(page.c_str());
        if (ImGui::BeginChild("rows", ImVec2(0.0f, -footer), ImGuiChildFlags_NavFlattened)) {
            for (const std::string &section : sections(page)) {
                if (!section.empty()) ImGui::SeparatorText(section.c_str());
                if (ImGui::BeginTable(section.c_str(), 2, ImGuiTableFlags_SizingStretchProp)) {
                    ImGui::TableSetupColumn("label", ImGuiTableColumnFlags_WidthStretch, 0.45f);
                    ImGui::TableSetupColumn("value", ImGuiTableColumnFlags_WidthStretch, 0.55f);
                    for (const settings::Spec &s : settings::all())
                        if (s.page == page && s.section == section) row(s, focused_now);
                    ImGui::EndTable();
                }
                ImGui::Spacing();
            }
        }
        ImGui::EndChild();
        ImGui::PopID();
        // keyboard / gamepad navigation moved to another row: its help shows
        if (!focused_now.empty() && focused_now != g_nav_focused) g_help_key = focused_now;
        g_nav_focused = focused_now;

        ImGui::Separator();
        const settings::Spec *help_spec = nullptr;
        bool any_restart = false;
        for (const settings::Spec &s : settings::all()) {
            if (s.page == page && s.key == g_help_key) help_spec = &s;
            any_restart = any_restart || restart_pending(s);
        }
        if (ImGui::BeginChild("help", ImVec2(0.0f, help_height), ImGuiChildFlags_None,
                              ImGuiWindowFlags_NoNav | ImGuiWindowFlags_NoScrollbar)) {
            ImGui::PushTextWrapPos(0.0f);
            if (help_spec != nullptr) {
                const std::string text = help_text(*help_spec);
                const float base = ImGui::GetFontSize();
                float size = base;  // the largest size, down to 60%, at which the help fits
                while (size > base * 0.6f &&
                       ImGui::GetFont()->CalcTextSizeA(size, FLT_MAX, ImGui::GetContentRegionAvail().x, text.c_str()).y >
                           help_height)
                    size -= base * 0.05f;
                ImGui::PushFont(nullptr, size);
                ImGui::TextUnformatted(text.c_str());
                ImGui::PopFont();
            } else {
                ImGui::TextDisabled("Point at or select a setting to see what it does.");
            }
            ImGui::PopTextWrapPos();
        }
        ImGui::EndChild();
        if (any_restart)
            ImGui::TextColored(ImVec4(1.0f, 0.75f, 0.3f, 1.0f), "* changed: applies the next time the game starts");
        else
            ImGui::TextUnformatted(" ");

        if (ImGui::Button("Reset page to defaults"))
            for (const settings::Spec &s : settings::all())
                if (s.page == page && s.type != settings::Type::Action) settings::set(s.key, s.defaultValue);
        const char *hint = "F10: close  Q/E, LB/RB: page";
        ImGui::SameLine();
        if (const float room = ImGui::GetContentRegionAvail().x - ImGui::CalcTextSize(hint).x; room > 0.0f)
            ImGui::SetCursorPosX(ImGui::GetCursorPosX() + room);  // right-aligned
        ImGui::AlignTextToFramePadding();
        ImGui::TextDisabled("%s", hint);
    }
    g_was_focused = ImGui::IsWindowFocused(ImGuiFocusedFlags_RootAndChildWindows);
    ImGui::End();
    ImGui::PopFont();
    g_popup_was_open = ImGui::IsPopupOpen(nullptr, ImGuiPopupFlags_AnyPopupId | ImGuiPopupFlags_AnyPopupLevel);
    return true;
}

}  // namespace ui
