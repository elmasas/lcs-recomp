#include "lcs_weapon_wheel.hpp"

#if defined(_WIN32)

#include "lcs_controls.hpp"
#include "lcs_frontend_ui.hpp"
#include "lcs_imgui_menu.hpp"
#include "lcs_key_bindings.hpp"
#include "lcs_render_config.hpp"
#include "lcs_texture_pack.hpp"
#include "lcs_texture_probe.hpp"

#include "imgui.h"

#include <algorithm>
#include <atomic>
#include <bit>
#include <cfloat>
#include <chrono>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <iterator>
#include <mutex>
#include <thread>
#include <vector>

namespace lcs {
namespace {

namespace fs = std::filesystem;

// The game's HUD weapon icons by their data hash (US v1.05), which is also how a texture pack replaces them. Each icon
// has its weapon's colour in it, as on the HUD.
struct Icon {
    const char *name;
    std::uint32_t hash;
    ImU32 colour;  // when there is no icon yet: the HUD's colour for that kind of weapon
};
constexpr ImU32 kMelee = IM_COL32(120, 175, 235, 255), kThrown = IM_COL32(80, 150, 230, 255),
                kHandgun = IM_COL32(120, 200, 80, 255), kShotgun = IM_COL32(90, 190, 110, 255),
                kSmg = IM_COL32(235, 200, 60, 255), kRifle = IM_COL32(240, 150, 40, 255),
                kHeavy = IM_COL32(190, 90, 220, 255), kSniper = IM_COL32(230, 110, 170, 255),
                kOther = IM_COL32(200, 200, 200, 255);
constexpr Icon kIcons[] = {
    {"Fist", 0x81A279A7u, kOther},           {"Brass Knuckles", 0x234DDBDCu, kMelee},
    {"Baseball Bat", 0xB891BD8Au, kMelee},   {"Nightstick", 0xF0D46232u, kMelee},
    {"Machete", 0xCCCDA3A1u, kMelee},        {"Meat Cleaver", 0x75973EF3u, kMelee},
    {"Knife", 0xF0DACE6Fu, kMelee},          {"Hockey Stick", 0xFB99C2ECu, kMelee},
    {"Axe", 0x613C2866u, kMelee},            {"Katana", 0xB3FE0156u, kMelee},
    {"Chainsaw", 0x02B0F911u, kMelee},       {"Pistol", 0xB2EBEA57u, kHandgun},
    {".357", 0xBD15E717u, kHandgun},         {"Shotgun", 0x967C11D4u, kShotgun},
    {"Stubby Shotgun", 0x5F8F9260u, kShotgun}, {"SPAS-12", 0x36F7FEA2u, kShotgun},
    {"MAC-10", 0xC0C84ED3u, kSmg},           {"TEC-9", 0x5467C86Bu, kSmg},
    {"Micro SMG", 0x9E603D96u, kSmg},        {"MP5", 0x74A8ED4Du, kSmg},
    {"AK-47", 0x69487714u, kRifle},          {"M4", 0x4B97A362u, kRifle},
    {"M60", 0x2B897BEEu, kHeavy},            {"Flamethrower", 0x33457110u, kHeavy},
    {"Minigun", 0xA9BE459Eu, kHeavy},        {"Rocket Launcher", 0x8EA571A6u, kHeavy},
    {"Sniper Rifle", 0x18B120A8u, kSniper},  {"Laser Sniper", 0x3465E88Bu, kSniper},
    {"Grenades", 0x7E409C1Fu, kThrown},      {"Molotovs", 0x0B91673Cu, kThrown},
    {"Remote Grenades", 0xB2165CAAu, kThrown}, {"Camera", 0xD0C892EDu, kOther},
    {"Detonator", 0x6141A329u, kOther},
};
constexpr int kIconCount = static_cast<int>(std::size(kIcons));

// The weapon type's icon, in kIcons; -1 for none (the chisel and type 15 have no HUD icon). Types 0, 10-13, 18, 20,
// 21, 24-27, 29, 30 and 33 were seen with their icons (LCS_TEST_WEAPON_ICONS runs); the rest follow the game's own
// order of weapons (its pickups and the slots its firing code groups them in).
int icon_of_type(std::uint32_t type) noexcept {
    static constexpr int kByType[] = {
        0,  1,  -1, 7,  3,  6,  2,  8,  5,  4,   // 0 fist, brass knuckles, chisel, hockey stick, nightstick, knife, bat, axe, cleaver, machete
        9,  10, 28, 30, 29, -1, 32, 11, 12, 13,  // 10 katana, chainsaw, grenades, remote grenades, molotovs, -, detonator, pistol, .357, shotgun
        15, 14, 17, 18, 16, 19, 21, 20, 26, 27,  // 20 SPAS-12, stubby, TEC-9, micro SMG, MAC-10, MP5, M4, AK-47, sniper, laser sniper
        25, 23, 22, 24, -1, -1, 31,              // 30 rocket launcher, flamethrower, M60, minigun, -, -, camera
    };
    return type < std::size(kByType) ? kByType[type] : -1;
}

// CPed (US v1.05): ten weapon slots of 28 bytes from +1428 (type at +0, ammo in the clip at +8, in all at +12), the
// current slot as a byte at +1720.
constexpr std::uint32_t kSlots = 10u, kSlotBase = 1428u, kSlotBytes = 28u, kCurrentSlot = 1720u;
constexpr std::uint32_t kTimeScale = 0x08B5E040u;
constexpr float kSlowMotion = 0.25f;
constexpr int kOpenAfterMs = 170;  // a shorter press takes the next weapon
constexpr int kPressMs = 90;       // a weapon button's press and release
constexpr float kDeadZone = 0.35f;

struct Item {
    int slot{};
    std::uint32_t type{};
    std::uint32_t clip{}, total{};
};

enum class Phase { Closed, Pressing, Open };
std::atomic<Phase> g_phase{Phase::Closed};
std::atomic<bool> g_tap{false};
std::atomic<int> g_pointed{-1};  // in g_items
std::atomic<float> g_pointer_x{0.0f}, g_pointer_y{0.0f};
std::chrono::steady_clock::time_point g_pressed_at{};

std::mutex g_items_mutex;
std::vector<Item> g_items;  // the slots with a weapon, in slot order (the game thread writes, the draw reads)
std::atomic<int> g_current_slot{0};

std::mutex g_icon_mutex;
struct Picture {
    std::uint32_t width{}, height{};
    std::vector<std::byte> rgba;
};
Picture g_pending[kIconCount];
std::atomic<bool> g_from_pack[kIconCount]{};  // a pack's icon has its colour in it; the game's own gets it from the HUD
ImTextureID g_textures[kIconCount]{};
ImVec2 g_sizes[kIconCount]{};
std::atomic<bool> g_icons_started{false};
std::atomic<std::uint64_t> g_saved_icons{0u};

fs::path icon_file(int icon) {
    char name[40];
    std::snprintf(name, sizeof(name), "weapon-%08x.rgba", kIcons[icon].hash);
    return fs::path(game_root_folder()) / "cache" / name;
}

// From the player's texture pack, or as the game drew it: width and height, then the pixels.
void load_icons() {
    for (int i = 0; i < kIconCount; ++i) {
        Picture picture;
        if (const auto pack = texture_pack_find_hash(kIcons[i].hash)) {
            picture = {pack->width, pack->height, pack->rgba8};
            g_from_pack[i].store(true);
        } else {
            std::ifstream in(icon_file(i), std::ios::binary);
            std::uint32_t size[2]{};
            if (in.read(reinterpret_cast<char *>(size), sizeof size) && size[0] != 0u && size[0] <= 256u && size[1] != 0u &&
                size[1] <= 256u) {
                std::vector<std::byte> rgba(static_cast<std::size_t>(size[0]) * size[1] * 4u);
                if (in.read(reinterpret_cast<char *>(rgba.data()), static_cast<std::streamsize>(rgba.size())))
                    picture = {size[0], size[1], std::move(rgba)};
            }
        }
        if (picture.rgba.empty()) continue;
        const std::lock_guard<std::mutex> lock(g_icon_mutex);
        g_pending[i] = std::move(picture);
    }
}

}  // namespace

void weapon_wheel_input(bool held, bool usable) noexcept {
    const auto now = std::chrono::steady_clock::now();
    const Phase phase = g_phase.load();
    static bool was_held = false;
    const bool pressed = held && !was_held;
    was_held = held;
    if (!usable) {
        if (phase != Phase::Closed) g_phase.store(Phase::Closed);
        return;
    }
    if (phase == Phase::Closed && pressed) {
        g_pressed_at = now;
        g_phase.store(Phase::Pressing);
    } else if (phase == Phase::Pressing) {
        if (!held) {
            g_tap.store(true);
            g_phase.store(Phase::Closed);
        } else if (std::chrono::duration_cast<std::chrono::milliseconds>(now - g_pressed_at).count() >= kOpenAfterMs) {
            g_pointer_x.store(0.0f);
            g_pointer_y.store(0.0f);
            g_pointed.store(-1);
            g_phase.store(Phase::Open);
        }
    } else if (phase == Phase::Open && !held) {
        g_phase.store(Phase::Closed);
    }
}

bool weapon_wheel_open() noexcept { return g_phase.load(std::memory_order_relaxed) == Phase::Open; }

void weapon_wheel_pointer_mouse(int dx, int dy) noexcept {
    float x = g_pointer_x.load() + static_cast<float>(dx) / 120.0f, y = g_pointer_y.load() + static_cast<float>(dy) / 120.0f;
    const float length = std::hypot(x, y);
    if (length > 1.0f) {
        x /= length;
        y /= length;
    }
    g_pointer_x.store(x);
    g_pointer_y.store(y);
}

void weapon_wheel_pointer_stick(float x, float y) noexcept {
    g_pointer_x.store(x);
    g_pointer_y.store(y);
}

std::uint32_t weapon_wheel_game_tick(psprecomp::Runtime &runtime, std::uint32_t buttons) {
    auto &memory = runtime.memory();
    // Slow motion while it's open; the game's speed is put back whenever it closes, whatever else is going on.
    const bool open = weapon_wheel_open();
    static bool was_open = false;
    static float scale_before = 1.0f;
    if (open && !was_open) {
        scale_before = std::bit_cast<float>(memory.load32(kTimeScale));
        if (lcs_render_configuration().display.radio_wheel_slow_motion)
            memory.store32(kTimeScale, std::bit_cast<std::uint32_t>(scale_before * kSlowMotion));
        if (!g_icons_started.exchange(true)) std::thread(load_icons).detach();
    } else if (!open && was_open) {
        memory.store32(kTimeScale, std::bit_cast<std::uint32_t>(scale_before));
    }
    was_open = open;
    const std::uint32_t ped = lcs_guest_player_ped(memory);
    if (ped == 0u || !memory.contains(ped + kSlotBase, kSlots * kSlotBytes) || memory.load8(ped + 1336u) != 0u) {
        g_items_mutex.lock();
        g_items.clear();
        g_items_mutex.unlock();
        return buttons;
    }
    std::vector<Item> items;
    for (std::uint32_t slot = 0u; slot < kSlots; ++slot) {
        const std::uint32_t at = ped + kSlotBase + slot * kSlotBytes;
        const std::uint32_t type = memory.load32(at);
        if (type == 0u && slot != 0u) continue;
        items.push_back({static_cast<int>(slot), type, memory.load32(at + 8u), memory.load32(at + 12u)});
    }
    const int current = static_cast<int>(static_cast<std::int8_t>(memory.load8(ped + kCurrentSlot)));
    g_current_slot.store(current);
    {
        const std::lock_guard<std::mutex> lock(g_items_mutex);
        g_items = items;
    }

    // LCS_TEST_WEAPON_ICONS: the current weapon's type and ammo, for matching the HUD's icons to weapon types.
    static const bool probe = std::getenv("LCS_TEST_WEAPON_ICONS") != nullptr;
    if (probe) {
        static int last = -2;
        if (current != last) {
            last = current;
            for (const Item &item : items)
                if (item.slot == current) std::cerr << "[weapon-wheel] current slot " << current << " type " << item.type << " clip " << item.clip << " total " << item.total << "\n";
        }
    }


    const int count = static_cast<int>(items.size());
    static int target_slot = -1;
    if (g_tap.exchange(false) && count > 1) {
        int index = 0;
        for (int i = 0; i < count; ++i)
            if (items[static_cast<std::size_t>(i)].slot == current) index = i;
        target_slot = items[static_cast<std::size_t>((index + 1) % count)].slot;
    }
    if (open && count > 0) {
        const float x = g_pointer_x.load(), y = g_pointer_y.load();
        int pointed = g_pointed.load();
        static const char *const test = std::getenv("LCS_TEST_WEAPON_WHEEL");  // <index>: points there, for unattended runs
        if (test != nullptr) {
            pointed = std::clamp(std::atoi(test), 0, count - 1);
        } else if (std::hypot(x, y) >= kDeadZone) {
            const float angle = std::atan2(x, -y);  // 0 at the top, clockwise
            pointed = static_cast<int>(std::floor(angle / (2.0f * 3.14159265f) * static_cast<float>(count) + 0.5f));
            pointed = (pointed % count + count) % count;
        }
        g_pointed.store(pointed);
        if (pointed >= 0 && pointed < count) target_slot = items[static_cast<std::size_t>(pointed)].slot;
    }
    // While it's open the game gets no other buttons: the click that points doesn't fire.
    if (open) buttons &= kPspLeft | kPspRight;
    if (target_slot < 0 || target_slot == current) {
        target_slot = -1;
        return buttons;
    }
    // One press at a time, whichever way round is shorter; the game skips empty slots by itself.
    static auto phase_start = std::chrono::steady_clock::now();
    const auto now = std::chrono::steady_clock::now();
    static bool down = false;
    if (std::chrono::duration_cast<std::chrono::milliseconds>(now - phase_start).count() >= kPressMs) {
        down = !down;
        phase_start = now;
    }
    if (!down) return buttons & ~(kPspLeft | kPspRight);
    int from = 0, to = 0;
    for (int i = 0; i < count; ++i) {
        if (items[static_cast<std::size_t>(i)].slot == current) from = i;
        if (items[static_cast<std::size_t>(i)].slot == target_slot) to = i;
    }
    const int forward = (to - from + count) % count;
    return (buttons & ~(kPspLeft | kPspRight)) | (forward <= count / 2 ? kPspRight : kPspLeft);
}

void weapon_wheel_draw() {
    if (!weapon_wheel_open()) return;
    {
        const std::lock_guard<std::mutex> lock(g_icon_mutex);
        for (int i = 0; i < kIconCount; ++i) {
            if (!g_pending[i].rgba.empty() && g_textures[i] == ImTextureID{}) {
                g_textures[i] = imgui_menu_upload_rgba(g_pending[i].width, g_pending[i].height, g_pending[i].rgba);
                g_sizes[i] = ImVec2(static_cast<float>(g_pending[i].width), static_cast<float>(g_pending[i].height));
                g_pending[i] = {};
            }
        }
    }
    std::vector<Item> items;
    {
        const std::lock_guard<std::mutex> lock(g_items_mutex);
        items = g_items;
    }
    const int count = static_cast<int>(items.size());
    if (count == 0) return;
    ImDrawList *draw = ImGui::GetBackgroundDrawList();
    const ImVec2 size = ImGui::GetIO().DisplaySize;
    draw->AddRectFilled(ImVec2(0, 0), size, IM_COL32(0, 0, 0, 115));
    const ImVec2 centre(size.x * 0.5f, size.y * 0.5f);
    const float radius = size.y * 0.32f, slot = size.y * 0.15f;
    const int pointed = g_pointed.load();
    const int current = g_current_slot.load();
    ImFont *font = imgui_menu_regular_font();
    constexpr float kTau = 2.0f * 3.14159265f;
    for (int i = 0; i < count; ++i) {
        const Item &item = items[static_cast<std::size_t>(i)];
        const int icon = icon_of_type(item.type);
        const ImU32 colour = icon >= 0 ? kIcons[icon].colour : kOther;
        const float angle = -kTau / 4.0f + static_cast<float>(i) * kTau / static_cast<float>(count);
        const ImVec2 at(centre.x + std::cos(angle) * radius, centre.y + std::sin(angle) * radius);
        const bool active = i == pointed || (pointed < 0 && item.slot == current);
        const float r = slot * (active ? 0.62f : 0.52f);
        draw->AddCircleFilled(at, r, active ? IM_COL32(20, 20, 20, 240) : IM_COL32(0, 0, 0, 215), 48);
        // The ring in the weapon's colour, as on the HUD; brighter on the one pointed at.
        const ImU32 ring = active ? colour : (colour & 0x00FFFFFFu) | (150u << 24);
        draw->AddCircle(at, r, ring, 48, size.y * (active ? 0.006f : 0.0035f));
        if (icon >= 0 && g_textures[icon] != ImTextureID{}) {
            const float fit = r * 1.35f / std::max(g_sizes[icon].x, g_sizes[icon].y);
            const ImVec2 half(g_sizes[icon].x * fit * 0.5f, g_sizes[icon].y * fit * 0.5f);
            // The game's own icon is drawn over its colour, as the HUD does; a pack's icon has the colour in it.
            if (!g_from_pack[icon].load())
                draw->AddRectFilled(ImVec2(at.x - half.x, at.y - half.y), ImVec2(at.x + half.x, at.y + half.y), colour, half.x * 0.18f);
            draw->AddImage(ImTextureRef(g_textures[icon]), ImVec2(at.x - half.x, at.y - half.y), ImVec2(at.x + half.x, at.y + half.y));
        } else {
            const char *label = icon >= 0 ? kIcons[icon].name : "?";
            const float text = size.y * 0.018f;
            const ImVec2 measured = font->CalcTextSizeA(text, FLT_MAX, r * 1.7f, label);
            draw->AddText(font, text, ImVec2(at.x - measured.x * 0.5f, at.y - measured.y * 0.5f), colour, label, nullptr, r * 1.7f);
        }
        if (item.slot != 0 && item.total != 0u) {  // the ammo, under the icon
            char ammo[24];
            std::snprintf(ammo, sizeof ammo, "%u", item.total);
            const float text = size.y * 0.02f;
            const ImVec2 measured = font->CalcTextSizeA(text, FLT_MAX, 0.0f, ammo);
            draw->AddText(font, text, ImVec2(at.x - measured.x * 0.5f, at.y + r + size.y * 0.004f), IM_COL32(235, 235, 235, 230), ammo);
        }
    }
    const int shown = pointed >= 0 && pointed < count ? pointed : -1;
    if (shown >= 0) {
        const int icon = icon_of_type(items[static_cast<std::size_t>(shown)].type);
        const float angle = -kTau / 4.0f + static_cast<float>(shown) * kTau / static_cast<float>(count);
        draw->AddCircleFilled(ImVec2(centre.x + std::cos(angle) * size.y * 0.16f, centre.y + std::sin(angle) * size.y * 0.16f),
                              size.y * 0.008f, icon >= 0 ? kIcons[icon].colour : kFrontendSelected, 16);
        const char *name = icon >= 0 ? kIcons[icon].name : "Weapon";
        const float text = size.y * 0.034f;
        const ImVec2 measured = font->CalcTextSizeA(text, FLT_MAX, 0.0f, name);
        draw->AddText(font, text, ImVec2(centre.x - measured.x * 0.5f, centre.y - measured.y * 0.5f),
                      icon >= 0 ? kIcons[icon].colour : kFrontendSelected, name);
    }
}

void weapon_wheel_note_texture(const psprecomp::GuestMemory &memory, const GeGpuDrawDescriptor &draw,
                               std::span<const std::byte> rgba) noexcept {
    const std::uint32_t w = draw.texture_width, h = draw.texture_height;
    if (w == 0u || h == 0u || w > 256u || h > 256u || rgba.size() < static_cast<std::size_t>(w) * h * 4u) return;
    if (g_saved_icons.load(std::memory_order_relaxed) == (1ull << kIconCount) - 1u) return;
    std::uint32_t data = 0u;
    if (!texture_data_key(memory, draw, h, TextureHash::Xxh64, data)) return;
    for (int i = 0; i < kIconCount; ++i) {
        if (data != kIcons[i].hash) continue;
        static const bool probe = std::getenv("LCS_TEST_WEAPON_ICONS") != nullptr;
        if (probe) std::cerr << "[weapon-wheel] icon " << kIcons[i].name << " " << w << "x" << h << "\n";
        const std::uint64_t bit = 1ull << i;
        if ((g_saved_icons.fetch_or(bit) & bit) != 0u) return;
        try {
            const fs::path path = icon_file(i);
            std::error_code error;
            if (fs::exists(path, error)) return;
            fs::create_directories(path.parent_path(), error);
            std::ofstream out(path, std::ios::binary);
            const std::uint32_t header[2] = {w, h};
            out.write(reinterpret_cast<const char *>(header), sizeof header);
            out.write(reinterpret_cast<const char *>(rgba.data()), static_cast<std::streamsize>(static_cast<std::size_t>(w) * h * 4u));
        } catch (...) {
        }
        return;
    }
}

}  // namespace lcs

#else

namespace lcs {

void weapon_wheel_input(bool, bool) noexcept {}
bool weapon_wheel_open() noexcept { return false; }
void weapon_wheel_pointer_mouse(int, int) noexcept {}
void weapon_wheel_pointer_stick(float, float) noexcept {}
std::uint32_t weapon_wheel_game_tick(psprecomp::Runtime &, std::uint32_t buttons) { return buttons; }
void weapon_wheel_draw() {}
void weapon_wheel_note_texture(const psprecomp::GuestMemory &, const GeGpuDrawDescriptor &, std::span<const std::byte>) noexcept {}

}  // namespace lcs

#endif
