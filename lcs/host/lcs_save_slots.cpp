#include "lcs_save_slots.hpp"

#if defined(_WIN32)

#include "display_window.hpp"
#include "ge_gpu_backend.hpp"
#include "lcs_controls.hpp"
#include "lcs_display_menu.hpp"
#include "lcs_frontend_ui.hpp"
#include "lcs_imgui_menu.hpp"
#include "lcs_key_bindings.hpp"
#include "lcs_stress_test.hpp"
#include "lcs_texture_pack.hpp"

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cstdio>
#include <ctime>
#include <fstream>
#include <iostream>
#include <iterator>
#include <memory>
#include <mutex>
#include <string_view>
#include <thread>
#include <unordered_map>
#include <vector>

namespace lcs {
namespace {

namespace fs = std::filesystem;

constexpr std::uint32_t kModeOffset = 0x30u, kGameOffset = 0x3Cu, kSaveOffset = 0x4Cu, kListOffset = 0x60u;
constexpr std::uint32_t kDetailOffset = 0x180u, kFocusOffset = 0x5C8u;
constexpr std::uint32_t kModeAutoLoad = 0u, kModeListLoad = 4u, kModeListSave = 5u, kModeListDelete = 7u;
constexpr std::uint32_t kFocusLatest = 3u;
constexpr const char *kDetailsFile = "SLOTINFO.TXT";

enum class Action { Save, Load, Delete };

struct Row {
    std::string name;
    bool used{};
    std::string line1, line2;
    std::shared_ptr<const TexturePackImage> icon;
    std::size_t icon_key{};
};

std::mutex g_mutex;
std::atomic<bool> g_open{false};
Action g_action{Action::Save};
std::vector<Row> g_rows;
std::atomic<int> g_selected{0};
std::atomic<int> g_clicked{-1};
std::atomic<int> g_confirm{-1};  // while asking: 0 Yes, 1 No
std::atomic<int> g_confirm_clicked{-1};
std::string g_chosen;
std::string g_boot_choice;
std::string g_known_game;  // the game's name, from its requests: its delete request has none
std::uint32_t g_previous{};
bool g_first_step{true};
std::unordered_map<std::size_t, ImTextureID> g_icons;  // the game has few icons: each is uploaded once

std::vector<char> read_file(const fs::path &path) {
    std::ifstream in(path, std::ios::binary);
    return {std::istreambuf_iterator<char>(in), std::istreambuf_iterator<char>()};
}

std::string read_guest_text(const psprecomp::GuestMemory &memory, std::uint32_t address, std::uint32_t size) {
    std::string out;
    for (std::uint32_t i = 0u; i < size; ++i) {
        const char c = static_cast<char>(memory.load8(address + i));
        if (c == '\0') break;
        if (c == '\n' || (c >= 0x20 && c < 0x7F)) out.push_back(c);
    }
    return out;
}

std::string date_of(const fs::path &file) {
    std::error_code error;
    const auto written = fs::last_write_time(file, error);
    if (error) return {};
    const std::time_t seconds = std::chrono::system_clock::to_time_t(std::chrono::clock_cast<std::chrono::system_clock>(written));
    std::tm parts{};
    localtime_s(&parts, &seconds);
    char text[32];
    std::snprintf(text, sizeof(text), "%04d/%02d/%02d %02d:%02d", parts.tm_year + 1900, parts.tm_mon + 1, parts.tm_mday, parts.tm_hour, parts.tm_min);
    return text;
}

Row read_row(const fs::path &root, const std::string &game, const std::string &name) {
    Row row;
    row.name = name;
    const fs::path directory = root / (game + name);
    std::error_code error;
    row.used = fs::is_regular_file(directory / "DATA.BIN", error);
    if (!row.used) {
        row.line1 = "New Save";
        return row;
    }
    const std::string date = date_of(directory / "DATA.BIN");
    row.line1 = "Saved game";
    row.line2 = date;
    const std::vector<char> details = read_file(directory / kDetailsFile);
    if (!details.empty()) {
        const std::string text(details.begin(), details.end());
        const std::size_t first = text.find('\n');
        row.line1 = text.substr(0u, first);
        std::string rest = first == std::string::npos ? std::string{} : text.substr(first + 1u);
        std::replace(rest.begin(), rest.end(), '\n', ' ');
        row.line2 = rest.empty() ? date : rest + "   " + date;
    }
    const std::vector<char> icon = read_file(directory / "ICON0.PNG");
    if (!icon.empty()) {
        row.icon_key = std::hash<std::string_view>{}(std::string_view(icon.data(), icon.size()));
        row.icon = texture_png_decode(reinterpret_cast<const std::uint8_t *>(icon.data()), icon.size());
    }
    return row;
}

void open_list(Action action, std::vector<Row> rows, int selected) {
    {
        const std::lock_guard<std::mutex> lock(g_mutex);
        g_action = action;
        g_rows = std::move(rows);
    }
    g_selected.store(selected);
    g_confirm.store(-1);
    g_clicked.store(-1);
    g_confirm_clicked.store(-1);
    g_first_step = true;
    frontend_ui_load();
    g_open.store(true);
}

// Input and one frame. Waiting, or Proceed with g_chosen set, or Cancelled.
SlotOutcome step(psprecomp::Runtime &runtime) {
    display_window_pump();
    if (display_window_closed()) {
        runtime.stop("Display window closed");
        return SlotOutcome::Waiting;
    }
    const std::uint32_t held = display_window_input().buttons;
    // What was held when the list opened, such as the press that opened it, doesn't count until released.
    const std::uint32_t pressed = g_first_step ? 0u : held & ~g_previous;
    g_previous = held;
    g_first_step = false;
    SlotOutcome outcome = SlotOutcome::Waiting;
    if (!host_settings_open()) {
        const std::lock_guard<std::mutex> lock(g_mutex);
        const int count = static_cast<int>(g_rows.size());
        int selected = std::clamp(g_selected.load(), 0, count - 1);
        const auto choose = [&](int index) {
            const Row &row = g_rows[static_cast<std::size_t>(index)];
            if (g_action == Action::Load || (g_action == Action::Save && !row.used)) {
                g_chosen = row.name;
                outcome = SlotOutcome::Proceed;
            } else {
                g_selected.store(index);
                g_confirm.store(1);
            }
        };
        const int confirm = g_confirm.load();
        if (confirm >= 0) {
            const int clicked = g_confirm_clicked.exchange(-1);
            if ((pressed & (kPspUp | kPspDown | kPspLeft | kPspRight)) != 0u) g_confirm.store(1 - confirm);
            if ((pressed & kPspCircle) != 0u || clicked == 1) {
                g_confirm.store(-1);
            } else if (clicked == 0 || ((pressed & kPspCross) != 0u && confirm == 0)) {
                g_chosen = g_rows[static_cast<std::size_t>(selected)].name;
                g_confirm.store(-1);
                outcome = SlotOutcome::Proceed;
            } else if ((pressed & kPspCross) != 0u) {
                g_confirm.store(-1);
            }
        } else {
            if ((pressed & kPspUp) != 0u) selected = (selected + count - 1) % count;
            if ((pressed & kPspDown) != 0u) selected = (selected + 1) % count;
            g_selected.store(selected);
            const int clicked = g_clicked.exchange(-1);
            if ((pressed & kPspCircle) != 0u) {
                outcome = SlotOutcome::Cancelled;
            } else if ((pressed & kPspCross) != 0u) {
                choose(selected);
            } else if (clicked >= 0 && clicked < count) {
                choose(clicked);
            }
        }
    }
    if (outcome != SlotOutcome::Waiting) {
        g_open.store(false);
        return outcome;
    }
    if (!ge_gpu_backend_present_host_frame()) std::this_thread::sleep_for(std::chrono::milliseconds(16));
    return SlotOutcome::Waiting;
}

void write_text(psprecomp::GuestMemory &memory, std::uint32_t address, std::uint32_t size, const std::string &text) {
    memory.zero(address, size);
    for (std::size_t i = 0u; i < text.size() && i + 1u < size; ++i) {
        memory.store8(address + static_cast<std::uint32_t>(i), static_cast<std::uint8_t>(text[i]));
    }
}

void write_save_name(psprecomp::GuestMemory &memory, std::uint32_t parameter, const std::string &name) {
    write_text(memory, parameter + kSaveOffset, 20u, name);
}

}  // namespace

void save_slots_open_for_load(const fs::path &saves_root, const std::string &game) {
    std::vector<Row> rows;
    int newest = 0;
    fs::file_time_type newest_time{};
    for (int i = 0; i < 8; ++i) {
        Row row = read_row(saves_root, game, "S" + std::to_string(i));
        if (!row.used) continue;
        std::error_code error;
        const auto written = fs::last_write_time(saves_root / (game + row.name), error);
        if (!error && written > newest_time) {
            newest_time = written;
            newest = static_cast<int>(rows.size());
        }
        rows.push_back(std::move(row));
    }
    if (!rows.empty()) open_list(Action::Load, std::move(rows), newest);
}

SlotOutcome save_slots_step_for_load(psprecomp::Runtime &runtime) {
    const SlotOutcome outcome = step(runtime);
    if (outcome == SlotOutcome::Proceed) g_boot_choice = g_chosen;
    return outcome;
}

SlotOutcome save_slots_utility(psprecomp::Runtime &runtime, std::uint32_t parameter) {
    auto &memory = runtime.memory();
    const std::uint32_t mode = memory.load32(parameter + kModeOffset);
    if (const std::string named = read_guest_text(memory, parameter + kGameOffset, 13u); !named.empty()) g_known_game = named;
    if (mode == kModeAutoLoad && !g_boot_choice.empty()) {
        std::cerr << "[save-slots] loading " << g_boot_choice << "\n";
        write_save_name(memory, parameter, g_boot_choice);
        g_boot_choice.clear();
    }
    if (mode == kModeAutoLoad) std::cerr << "[save-slots] automatic load of " << read_guest_text(memory, parameter + kSaveOffset, 20u) << "\n";
    if (mode != kModeListLoad && mode != kModeListSave && mode != kModeListDelete) return SlotOutcome::Proceed;
    if (stress_test_enabled() || !ge_gpu_backend_supports_host_frame()) return SlotOutcome::Proceed;
    if (!g_open.load()) {
        const Action action = mode == kModeListSave ? Action::Save : mode == kModeListLoad ? Action::Load : Action::Delete;
        const std::uint32_t list = memory.load32(parameter + kListOffset);
        const std::string game = g_known_game;
        const fs::path root = runtime.game_root() / "PSP" / "SAVEDATA";
        std::vector<std::string> names;
        for (std::uint32_t i = 0u; list != 0u && i < 32u; ++i) {
            const std::string name = read_guest_text(memory, list + i * 20u, 20u);
            if (name.empty()) break;
            names.push_back(name);
        }
        // The delete request lists nothing: the system shows all of the game's saves.
        if (names.empty() && action == Action::Delete) {
            for (int i = 0; i < 8; ++i) names.push_back("S" + std::to_string(i));
        }
        std::vector<Row> rows;
        int newest = 0, first_empty = -1;
        fs::file_time_type newest_time{};
        for (const std::string &name : names) {
            Row row = read_row(root, game, name);
            if (action != Action::Save && !row.used) continue;
            const int index = static_cast<int>(rows.size());
            if (row.used) {
                std::error_code error;
                const auto written = fs::last_write_time(root / (game + name), error);
                if (!error && written > newest_time) {
                    newest_time = written;
                    newest = index;
                }
            } else if (first_empty < 0) {
                first_empty = index;
            }
            rows.push_back(std::move(row));
        }
        // Nothing to pick: the operation runs and reports it has no data, as the game expects.
        if (rows.empty()) return SlotOutcome::Proceed;
        const std::uint32_t focus = memory.load32(parameter + kFocusOffset);
        const int selected = focus == kFocusLatest ? newest : first_empty >= 0 ? first_empty : newest;
        std::cerr << "[save-slots] open mode=" << mode << " rows=" << rows.size() << " focus=" << focus << "\n";
        open_list(action, std::move(rows), selected);
    }
    const SlotOutcome outcome = step(runtime);
    if (outcome == SlotOutcome::Proceed) {
        std::cerr << "[save-slots] chosen " << g_chosen << "\n";
        write_text(memory, parameter + kGameOffset, 13u, g_known_game);
        write_save_name(memory, parameter, g_chosen);
    } else if (outcome == SlotOutcome::Cancelled) {
        std::cerr << "[save-slots] cancelled\n";
    }
    return outcome;
}

bool save_slots_open() noexcept { return g_open.load(std::memory_order_relaxed); }

void save_slots_note_saved(psprecomp::Runtime &runtime, std::uint32_t parameter, const fs::path &directory) {
    const std::string detail = read_guest_text(runtime.memory(), parameter + kDetailOffset, 0x400u);
    std::cerr << "[save-slots] saved " << directory.filename().string() << ": " << detail << "\n";
    {
        std::ofstream out(directory / kDetailsFile, std::ios::binary | std::ios::trunc);
        out << detail;
    }
    // The game picks the newest save by its folder's date, which writing over a file inside doesn't change.
    std::error_code error;
    fs::last_write_time(directory, fs::file_time_type::clock::now(), error);
}

void save_slots_draw() {
    if (!g_open.load()) return;
    const std::lock_guard<std::mutex> lock(g_mutex);
    ImDrawList *draw = ImGui::GetBackgroundDrawList();
    const ImVec2 size = ImGui::GetIO().DisplaySize;
    frontend_ui_backdrop(draw, 0.38f);
    const char *title = g_action == Action::Save ? "Save Game" : g_action == Action::Load ? "Load Game" : "Delete Game";
    const float right = size.x * 0.97f, left = size.x * 0.5f;
    const float title_height = size.y * 0.075f;
    frontend_ui_text(draw, ImVec2(right - frontend_ui_text_width(title, title_height), size.y * 0.035f), title, title_height, kFrontendNormal);

    const ImVec2 mouse = ImGui::GetIO().MousePos;
    static ImVec2 last_mouse = mouse;
    const bool mouse_moved = mouse.x != last_mouse.x || mouse.y != last_mouse.y;
    last_mouse = mouse;
    const bool clicked = ImGui::IsMouseClicked(ImGuiMouseButton_Left) && !host_settings_open();
    const int confirm = g_confirm.load();

    const float row_height = size.y * 0.088f;
    float y = size.y * 0.135f;
    const float line1 = size.y * 0.036f, line2 = size.y * 0.024f;
    for (int i = 0; i < static_cast<int>(g_rows.size()); ++i) {
        const Row &row = g_rows[static_cast<std::size_t>(i)];
        const bool over = confirm < 0 && !host_settings_open() && mouse.x >= left && mouse.x <= right && mouse.y >= y && mouse.y < y + row_height;
        if (over && mouse_moved) g_selected.store(i);
        if (over && clicked) g_clicked.store(i);
        const bool active = g_selected.load() == i;
        if (active) draw->AddRectFilled(ImVec2(left, y), ImVec2(right, y + row_height * 0.94f), IM_COL32(255, 255, 255, 28), size.y * 0.006f);
        float x = left + size.y * 0.012f;
        const float icon_height = row_height * 0.8f;
        if (row.icon) {
            auto found = g_icons.find(row.icon_key);
            if (found == g_icons.end()) {
                found = g_icons.emplace(row.icon_key, imgui_menu_upload_rgba(row.icon->width, row.icon->height, row.icon->rgba8)).first;
            }
            if (found->second != ImTextureID{}) {
                const float aspect = static_cast<float>(row.icon->width) / static_cast<float>(row.icon->height);
                draw->AddImage(ImTextureRef(found->second), ImVec2(x, y + row_height * 0.07f), ImVec2(x + icon_height * aspect, y + row_height * 0.07f + icon_height));
            }
        }
        x += icon_height * 144.0f / 80.0f + size.y * 0.018f;
        const ImU32 colour = active ? kFrontendSelected : kFrontendNormal;
        if (row.line2.empty()) {
            frontend_ui_text(draw, ImVec2(x, y + (row_height - line1) * 0.45f), row.line1, line1, colour);
        } else {
            frontend_ui_text(draw, ImVec2(x, y + row_height * 0.1f), row.line1, line1, colour);
            frontend_ui_text(draw, ImVec2(x, y + row_height * 0.1f + line1 * 1.1f), row.line2, line2, kFrontendDim);
        }
        y += row_height;
    }

    if (confirm >= 0) {
        const char *question = g_action == Action::Save ? "Proceed with overwriting this saved game?" : "Proceed with deleting this saved game?";
        const float box_left = left - size.x * 0.03f, box_top = size.y * 0.38f, box_bottom = size.y * 0.62f;
        draw->AddRectFilled(ImVec2(0.0f, 0.0f), size, IM_COL32(0, 0, 0, 130));
        draw->AddRectFilled(ImVec2(box_left, box_top), ImVec2(right, box_bottom), IM_COL32(0, 0, 0, 235), size.y * 0.008f);
        const float center = (box_left + right) * 0.5f;
        const float height = size.y * 0.034f;
        frontend_ui_text(draw, ImVec2(center - frontend_ui_text_width(question, height) * 0.5f, box_top + size.y * 0.04f), question, height, kFrontendNormal);
        const char *labels[2] = {"Yes", "No"};
        const float option = size.y * 0.055f;
        float option_y = box_top + size.y * 0.09f;
        for (int i = 0; i < 2; ++i) {
            const float width = frontend_ui_text_width(labels[i], option);
            const bool over = mouse.x >= center - width && mouse.x <= center + width && mouse.y >= option_y && mouse.y < option_y + option;
            if (over && mouse_moved) g_confirm.store(i);
            if (over && clicked) g_confirm_clicked.store(i);
            frontend_ui_text(draw, ImVec2(center - width * 0.5f, option_y), labels[i], option, g_confirm.load() == i ? kFrontendSelected : kFrontendNormal);
            option_y += option * 1.05f;
        }
    }
    const char *footer = "Enter select     Esc back";
    const float footer_height = size.y * 0.024f;
    frontend_ui_text(draw, ImVec2(right - frontend_ui_text_width(footer, footer_height), size.y * 0.95f), footer, footer_height, kFrontendDim);
}

}  // namespace lcs

#else

namespace lcs {

SlotOutcome save_slots_utility(psprecomp::Runtime &, std::uint32_t) { return SlotOutcome::Proceed; }
void save_slots_open_for_load(const std::filesystem::path &, const std::string &) {}
SlotOutcome save_slots_step_for_load(psprecomp::Runtime &) { return SlotOutcome::Cancelled; }
bool save_slots_open() noexcept { return false; }
void save_slots_draw() {}
void save_slots_note_saved(psprecomp::Runtime &, std::uint32_t, const std::filesystem::path &) {}

}  // namespace lcs

#endif
