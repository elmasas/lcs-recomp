#include "lcs_radio_wheel.hpp"

#if defined(_WIN32)

#include "lcs_controls.hpp"
#include "lcs_frontend_ui.hpp"
#include "lcs_imgui_menu.hpp"
#include "lcs_key_bindings.hpp"
#include "lcs_render_config.hpp"
#include "lcs_texture_pack.hpp"
#include "lcs_texture_probe.hpp"
#include "lcs_trainer.hpp"

#include "imgui.h"

#include <algorithm>
#include <atomic>
#include <bit>
#include <cfloat>
#include <chrono>
#include <cmath>
#include <cstdlib>
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

struct Station {
    const char *name;
    std::uint32_t logo;  // the texture's data hash, US v1.05: both the game's logo and a pack's replacement go by it
};
// In the order the game cycles through them. The last is the radio off.
constexpr Station kStations[] = {
    {"Head Radio", 0x927384E9u}, {"Double Clef FM", 0xC7A3DFD4u}, {"K-Jah", 0xF8529709u}, {"Rise FM", 0x9786C9E5u},
    {"Lips 106", 0x9A98D957u},   {"Radio Del Mundo", 0xD44049E8u}, {"MSX 98", 0x5700D234u}, {"Flashback FM", 0x7AAB93CFu},
    {"The Liberty Jam", 0xFB4AD5F4u}, {"LCFR", 0xFAAEA22Fu},      {"Radio off", 0u},
};
constexpr int kCount = static_cast<int>(std::size(kStations));
constexpr std::uint32_t kLogoSize = 64u;

constexpr std::uint32_t kTimeScale = 0x08B5E040u;
constexpr std::uint32_t kVehicleRadio = 0x2A0u;
constexpr float kSlowMotion = 0.25f;
constexpr int kOpenAfterMs = 170;  // a shorter press tunes to the next station
constexpr int kPressMs = 90;       // the radio button's press and release
constexpr float kDeadZone = 0.35f;

enum class Phase { Closed, Pressing, Open };
std::atomic<Phase> g_phase{Phase::Closed};
std::atomic<bool> g_tap{false};
std::atomic<int> g_pointed{-1};
std::atomic<float> g_pointer_x{0.0f}, g_pointer_y{0.0f};
std::atomic<int> g_current{0};
std::atomic<int> g_target{-1};
std::chrono::steady_clock::time_point g_pressed_at{};

std::mutex g_logo_mutex;
struct Logo {
    std::uint32_t width{}, height{};
    std::vector<std::byte> rgba;
};
Logo g_pending[kCount];
ImTextureID g_textures[kCount]{};
ImVec2 g_logo_sizes[kCount]{};
std::atomic<bool> g_logos_started{false};
std::atomic<std::uint32_t> g_saved_logos{0u};

fs::path logo_file(int station) {
    char name[32];
    std::snprintf(name, sizeof(name), "radio-%08x.rgba", kStations[station].logo);
    return fs::path(game_root_folder()) / "cache" / name;
}

void load_logos() {
    for (int i = 0; i < kCount; ++i) {
        if (kStations[i].logo == 0u) continue;
        Logo logo;
        if (const auto pack = texture_pack_find_hash(kStations[i].logo)) {
            logo = {pack->width, pack->height, pack->rgba8};
        } else {
            std::ifstream in(logo_file(i), std::ios::binary);
            std::vector<char> bytes{std::istreambuf_iterator<char>(in), std::istreambuf_iterator<char>()};
            if (bytes.size() == kLogoSize * kLogoSize * 4u) {
                const auto *start = reinterpret_cast<const std::byte *>(bytes.data());
                logo = {kLogoSize, kLogoSize, std::vector<std::byte>(start, start + bytes.size())};
            }
        }
        if (logo.rgba.empty()) continue;
        const std::lock_guard<std::mutex> lock(g_logo_mutex);
        g_pending[i] = std::move(logo);
    }
}

float load_float(const psprecomp::GuestMemory &memory, std::uint32_t address) { return std::bit_cast<float>(memory.load32(address)); }

}  // namespace

void radio_wheel_input(bool held, bool usable) noexcept {
    const auto now = std::chrono::steady_clock::now();
    Phase phase = g_phase.load();
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
            g_pointed.store(g_current.load());
            g_phase.store(Phase::Open);
        }
    } else if (phase == Phase::Open && !held) {
        g_phase.store(Phase::Closed);
    }
}

bool radio_wheel_open() noexcept { return g_phase.load(std::memory_order_relaxed) == Phase::Open; }

void radio_wheel_pointer_mouse(int dx, int dy) noexcept {
    float x = g_pointer_x.load() + static_cast<float>(dx) / 120.0f, y = g_pointer_y.load() + static_cast<float>(dy) / 120.0f;
    const float length = std::hypot(x, y);
    if (length > 1.0f) {
        x /= length;
        y /= length;
    }
    g_pointer_x.store(x);
    g_pointer_y.store(y);
}

void radio_wheel_pointer_stick(float x, float y) noexcept {
    g_pointer_x.store(x);
    g_pointer_y.store(y);
}

std::uint32_t radio_wheel_game_tick(psprecomp::Runtime &runtime, std::uint32_t buttons) {
    auto &memory = runtime.memory();
    const std::uint32_t vehicle = trainer_player_vehicle(runtime);
    // LCS_TEST_WHEEL=<station>: while it's open, points at that one, for unattended runs.
    static const char *const test = std::getenv("LCS_TEST_WHEEL");
    const bool open = radio_wheel_open() && vehicle != 0u;
    static bool was_open = false;
    static float scale_before = 1.0f;
    if (open && !was_open) {
        scale_before = load_float(memory, kTimeScale);
        if (lcs_render_configuration().display.radio_wheel_slow_motion) {
            memory.store32(kTimeScale, std::bit_cast<std::uint32_t>(scale_before * kSlowMotion));
        }
        if (!g_logos_started.exchange(true)) std::thread(load_logos).detach();
    } else if (!open && was_open) {
        memory.store32(kTimeScale, std::bit_cast<std::uint32_t>(scale_before));
    }
    was_open = open;
    if (vehicle == 0u) {
        g_target.store(-1);
        return buttons;
    }
    const int current = static_cast<int>(memory.load8(vehicle + kVehicleRadio));
    g_current.store(current);
    if (test != nullptr) {  // unattended runs: each station change
        static int logged = -1;
        if (current != logged) std::cerr << "[radio-wheel] station " << current << "\n";
        logged = current;
    }
    // A quick press goes back a station: Q, the wheel's key, is also "previous station", and that press is the wheel's
    // while it decides between a tap and a hold (below).
    if (g_tap.exchange(false)) g_target.store((current + kCount - 1) % kCount);
    if (g_phase.load() != Phase::Closed) buttons &= ~(kPspLeft | kPspRight);
    if (open) {
        // The station plays as you point at it.
        int pointed = g_pointed.load();
        const float x = g_pointer_x.load(), y = g_pointer_y.load();
        if (test != nullptr) {
            pointed = std::clamp(std::atoi(test), 0, kCount - 1);
        } else if (std::hypot(x, y) >= kDeadZone) {
            const float angle = std::atan2(x, -y);  // 0 at the top, clockwise
            const float turn = angle / (2.0f * 3.14159265f);
            pointed = static_cast<int>(std::floor(turn * static_cast<float>(kCount) + 0.5f));
            pointed = (pointed % kCount + kCount) % kCount;
        }
        g_pointed.store(pointed);
        g_target.store(pointed);
    }
    const int target = g_target.load();
    if (target < 0 || target == current || current >= kCount) {
        if (target == current) g_target.store(-1);
        return buttons;
    }
    // One press at a time, whichever way round is shorter. The game moves by one for each.
    static auto phase_start = std::chrono::steady_clock::now();
    const auto now = std::chrono::steady_clock::now();
    const auto since = std::chrono::duration_cast<std::chrono::milliseconds>(now - phase_start).count();
    static bool down = false;
    if (since >= kPressMs) {
        down = !down;
        phase_start = now;
    }
    if (!down) return buttons;
    const int forward = (target - current + kCount) % kCount;
    return buttons | (forward <= kCount / 2 ? kPspRight : kPspLeft);
}

void radio_wheel_draw() {
    if (!radio_wheel_open()) return;
    {
        const std::lock_guard<std::mutex> lock(g_logo_mutex);
        for (int i = 0; i < kCount; ++i) {
            if (!g_pending[i].rgba.empty() && g_textures[i] == ImTextureID{}) {
                g_textures[i] = imgui_menu_upload_rgba(g_pending[i].width, g_pending[i].height, g_pending[i].rgba);
                g_logo_sizes[i] = ImVec2(static_cast<float>(g_pending[i].width), static_cast<float>(g_pending[i].height));
                g_pending[i] = {};
            }
        }
    }
    ImDrawList *draw = ImGui::GetBackgroundDrawList();
    const ImVec2 size = ImGui::GetIO().DisplaySize;
    draw->AddRectFilled(ImVec2(0, 0), size, IM_COL32(0, 0, 0, 115));
    const ImVec2 centre(size.x * 0.5f, size.y * 0.5f);
    const float radius = size.y * 0.33f, slot = size.y * 0.135f;
    const int pointed = g_pointed.load();
    ImFont *font = imgui_menu_regular_font();
    constexpr float kTau = 2.0f * 3.14159265f;
    for (int i = 0; i < kCount; ++i) {
        const float angle = -kTau / 4.0f + static_cast<float>(i) * kTau / static_cast<float>(kCount);
        const ImVec2 at(centre.x + std::cos(angle) * radius, centre.y + std::sin(angle) * radius);
        const bool active = i == pointed;
        const float r = slot * (active ? 0.62f : 0.52f);
        draw->AddCircleFilled(at, r, active ? IM_COL32(20, 20, 20, 240) : IM_COL32(0, 0, 0, 215), 48);
        draw->AddCircle(at, r, active ? kFrontendSelected : IM_COL32(255, 255, 255, 50), 48, active ? size.y * 0.004f : size.y * 0.002f);
        if (g_textures[i] != ImTextureID{}) {
            const float fit = r * 1.5f / std::max(g_logo_sizes[i].x, g_logo_sizes[i].y);
            const ImVec2 half(g_logo_sizes[i].x * fit * 0.5f, g_logo_sizes[i].y * fit * 0.5f);
            draw->AddImage(ImTextureRef(g_textures[i]), ImVec2(at.x - half.x, at.y - half.y), ImVec2(at.x + half.x, at.y + half.y));
        } else {
            const char *label = i == kCount - 1 ? "OFF" : kStations[i].name;
            const float text = size.y * (i == kCount - 1 ? 0.03f : 0.018f);
            const ImVec2 measured = font->CalcTextSizeA(text, FLT_MAX, r * 1.7f, label);
            draw->AddText(font, text, ImVec2(at.x - measured.x * 0.5f, at.y - measured.y * 0.5f), kFrontendNormal, label, nullptr, r * 1.7f);
        }
    }
    if (pointed >= 0 && pointed < kCount) {
        const float angle = -kTau / 4.0f + static_cast<float>(pointed) * kTau / static_cast<float>(kCount);
        draw->AddCircleFilled(ImVec2(centre.x + std::cos(angle) * size.y * 0.17f, centre.y + std::sin(angle) * size.y * 0.17f), size.y * 0.008f, kFrontendSelected, 16);
        const char *name = kStations[pointed].name;
        const float text = size.y * 0.032f;
        const ImVec2 measured = font->CalcTextSizeA(text, FLT_MAX, 0.0f, name);
        draw->AddText(font, text, ImVec2(centre.x - measured.x * 0.5f, centre.y - measured.y * 0.5f), kFrontendSelected, name);
    }
}

void radio_wheel_note_texture(const psprecomp::GuestMemory &memory, const GeGpuDrawDescriptor &draw, std::span<const std::byte> rgba) noexcept {
    if (draw.texture_width != kLogoSize || draw.texture_height != kLogoSize) return;
    if (g_saved_logos.load(std::memory_order_relaxed) == (1u << (kCount - 1)) - 1u) return;
    if (rgba.size() < kLogoSize * kLogoSize * 4u) return;
    std::uint32_t data = 0u;
    if (!texture_data_key(memory, draw, kLogoSize, TextureHash::Xxh64, data)) return;
    for (int i = 0; i + 1 < kCount; ++i) {
        if (data != kStations[i].logo) continue;
        const std::uint32_t bit = 1u << i;
        if ((g_saved_logos.fetch_or(bit) & bit) != 0u) return;
        try {
            const fs::path path = logo_file(i);
            std::error_code error;
            if (fs::exists(path, error)) return;
            fs::create_directories(path.parent_path(), error);
            std::ofstream out(path, std::ios::binary);
            out.write(reinterpret_cast<const char *>(rgba.data()), kLogoSize * kLogoSize * 4u);
        } catch (...) {
        }
        return;
    }
}

}  // namespace lcs

#else

namespace lcs {

void radio_wheel_input(bool, bool) noexcept {}
bool radio_wheel_open() noexcept { return false; }
void radio_wheel_pointer_mouse(int, int) noexcept {}
void radio_wheel_pointer_stick(float, float) noexcept {}
std::uint32_t radio_wheel_game_tick(psprecomp::Runtime &, std::uint32_t buttons) { return buttons; }
void radio_wheel_draw() {}
void radio_wheel_note_texture(const psprecomp::GuestMemory &, const GeGpuDrawDescriptor &, std::span<const std::byte>) noexcept {}

}  // namespace lcs

#endif
