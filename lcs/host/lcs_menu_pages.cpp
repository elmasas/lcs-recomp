#include "lcs_menu_pages.hpp"

#include "lcs_display_menu.hpp"
#include "lcs_hint_keys.hpp"
#include "lcs_key_bindings.hpp"
#include "lcs_render_config.hpp"

#include "psprecomp/allegrex_context.hpp"
#include "psprecomp/runtime.hpp"

#include <algorithm>
#include <array>
#include <atomic>
#include <cctype>
#include <chrono>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>

namespace lcs {
namespace {

// Guest addresses (ULUS-10041 v1.05).
constexpr std::uint32_t kLanguage = 0x08B59B5Cu;            // 4 selects the alternate tab bar
constexpr std::uint32_t kMenuTabs = 0x08B58F2Cu;            // CMenuTab[], 24 bytes each
constexpr std::uint32_t kMenuTabsAlternate = 0x08B59004u;
constexpr std::uint32_t kLanguageTab = 9u;                  // added by lcs_lang.cpp
constexpr std::int32_t kLanguageScreen = 6;

// Tab ids MULTIPLAYER had; GRAPHICS takes them.
constexpr std::uint32_t kGraphicsTab = 8u;
constexpr std::uint32_t kGraphicsTabAlternate = 7u;
// CONTROLS opens the keyboard / controller chooser.
constexpr std::uint32_t kControlsTab = 5u;
constexpr std::uint32_t kControlsTabAlternate = 8u;

psprecomp::Runtime *g_runtime{};
std::uint32_t g_scratch{};
std::uint32_t g_scratch_size{};

// ---------------------------------------------------------------------------
// Text slots: one guest buffer per key, so every label drawn in a frame keeps
// its own string.
// ---------------------------------------------------------------------------

constexpr std::uint32_t kSlotChars = 96u;
constexpr std::uint32_t kSlotBytes = kSlotChars * 2u;
constexpr std::uint32_t kTabKeyBytes = 16u;  // "ZZH_GFX" for the tab's name pointer

enum Slot : std::uint32_t {
    SlotGraphicsTitle,
    SlotKeyboardTitle,
    SlotControlsRow,
    SlotControllerRow,
    SlotGraphicsRow0,
    SlotKeyboardRow0 = SlotGraphicsRow0 + 16u,
    SlotHintOverride0 = SlotKeyboardRow0 + 16u,  // LDWAIT, TUP_AD, GA_7 (lcs_hint_keys.cpp)
    SlotCount = SlotHintOverride0 + 3u,
};

// ---------------------------------------------------------------------------
// GRAPHICS rows
// ---------------------------------------------------------------------------

enum GraphicsRow : std::int32_t {
    RowResolution,
    RowFullscreen,
    RowVSync,
    RowFrameRate,
    RowViewDistance,
    RowAnisotropic,
    RowMsaa,
    RowLodBias,
    RowHudSize,
    RowFpsCounter,
    GraphicsRowCount,
};

constexpr std::uint32_t kAnisotropic[] = {1u, 2u, 4u, 8u, 16u};
constexpr std::uint32_t kMsaa[] = {1u, 2u, 4u, 8u};
// Negative keeps distant textures sharper, positive softens them.
constexpr float kLodBias[] = {-5.0f, -4.5f, -4.0f, -3.5f, -3.0f, -2.5f, -2.0f, -1.5f, -1.0f, -0.5f, 0.0f,
                              0.5f,  1.0f,  1.5f,  2.0f,  2.5f,  3.0f,  3.5f,  4.0f,  4.5f,  5.0f};

// Values read at start; samplers are built once, so these two apply on restart.
bool g_launch_ready = false;
std::uint32_t g_launch_anisotropic = 1u;
std::uint32_t g_launch_msaa = 1u;
float g_launch_lod_bias = 0.0f;

void remember_launch_values() noexcept {
    if (g_launch_ready) return;
    const RenderingConfiguration &rendering = lcs_render_configuration().rendering;
    g_launch_anisotropic = rendering.anisotropic_filtering;
    g_launch_msaa = rendering.msaa;
    g_launch_lod_bias = rendering.texture_lod_bias;
    g_launch_ready = true;
}

template <typename T, std::size_t N>
int closest_index(const T (&values)[N], T current) noexcept {
    int best = 0;
    double gap = 1e30;
    for (int index = 0; index < static_cast<int>(N); ++index) {
        const double d = std::abs(static_cast<double>(values[index]) - static_cast<double>(current));
        if (d < gap) {
            gap = d;
            best = index;
        }
    }
    return best;
}

int clamp_step(int index, int count, int delta) noexcept { return std::clamp(index + delta, 0, count - 1); }

void change_graphics(std::int32_t row, std::int32_t delta) noexcept {
    remember_launch_values();
    const int direction = delta < 0 ? -1 : 1;
    const LcsConfiguration &config = lcs_render_configuration();
    switch (row) {
    case RowResolution:
        host_settings_change(HostSettingsRow::Resolution, direction);  // also saves
        return;
    case RowFullscreen:
        host_settings_change(HostSettingsRow::Fullscreen, direction);
        return;
    case RowFrameRate:
        host_settings_change(HostSettingsRow::FrameRate, direction);
        return;
    case RowViewDistance:
        host_settings_change(HostSettingsRow::ViewDistance, direction);
        return;
    case RowFpsCounter:
        host_settings_change(HostSettingsRow::ShowFps, direction);
        return;
    case RowVSync:
        lcs_set_vsync(!config.display.vsync);
        break;
    case RowAnisotropic: {
        const int index = closest_index(kAnisotropic, config.rendering.anisotropic_filtering);
        lcs_set_anisotropic_filtering(
            kAnisotropic[clamp_step(index, static_cast<int>(std::size(kAnisotropic)), direction)]);
        break;
    }
    case RowMsaa: {
        const int index = closest_index(kMsaa, config.rendering.msaa);
        lcs_set_msaa(kMsaa[clamp_step(index, static_cast<int>(std::size(kMsaa)), direction)]);
        break;
    }
    case RowLodBias: {
        const int index = closest_index(kLodBias, config.rendering.texture_lod_bias);
        lcs_set_texture_lod_bias(kLodBias[clamp_step(index, static_cast<int>(std::size(kLodBias)), direction)]);
        break;
    }
    case RowHudSize: {
        // 25% to 100% in steps of 5.
        int percent = static_cast<int>(std::lround(config.display.hud_scale * 100.0f));
        percent = std::clamp((percent + 2) / 5 * 5 + direction * 5, 25, 100);
        lcs_set_hud_scale(static_cast<float>(percent) / 100.0f);
        break;
    }
    default:
        return;
    }
    host_settings_save();
}

// Upper case, and no '~' (the font reads it as a formatting code).
std::string menu_text(std::string text) {
    std::string out;
    out.reserve(text.size());
    for (const char ch : text) {
        if (ch == '~') continue;
        out.push_back(static_cast<char>(std::toupper(static_cast<unsigned char>(ch))));
    }
    // Collapse the double space a removed '~' leaves.
    std::string collapsed;
    for (const char ch : out)
        if (!(ch == ' ' && !collapsed.empty() && collapsed.back() == ' ')) collapsed.push_back(ch);
    return collapsed;
}

std::string graphics_label(std::int32_t row) {
    remember_launch_values();
    const LcsConfiguration &config = lcs_render_configuration();
    char value[64]{};
    const char *restart = " - RESTART";
    switch (row) {
    case RowResolution:
        host_settings_value(HostSettingsRow::Resolution, value, sizeof(value));
        return "RESOLUTION: " + menu_text(value) + (host_settings_resolution_pending() ? restart : "");
    case RowFullscreen:
        host_settings_value(HostSettingsRow::Fullscreen, value, sizeof(value));
        return std::string("FULLSCREEN: ") + value;
    case RowVSync:
        return std::string("VSYNC: ") + (config.display.vsync ? "ON" : "OFF");
    case RowFrameRate:
        host_settings_value(HostSettingsRow::FrameRate, value, sizeof(value));
        return std::string("FRAME RATE: ") + value + " FPS";
    case RowViewDistance:
        host_settings_value(HostSettingsRow::ViewDistance, value, sizeof(value));
        return std::string("VIEW DISTANCE: ") + value + "X";
    case RowAnisotropic: {
        const std::uint32_t level = config.rendering.anisotropic_filtering;
        std::string text = level <= 1u ? std::string("OFF") : std::to_string(level) + "X";
        return "ANISOTROPIC FILTER: " + text + (level != g_launch_anisotropic ? restart : "");
    }
    case RowMsaa: {
        // MSAA is chosen when the GPU backend starts.
        const std::uint32_t samples = config.rendering.msaa;
        std::string text = samples <= 1u ? std::string("OFF") : std::to_string(samples) + "X";
        return "MSAA: " + text + (samples != g_launch_msaa ? restart : "");
    }
    case RowLodBias: {
        const float bias = config.rendering.texture_lod_bias;
        std::snprintf(value, sizeof(value), "%.1f", bias);
        return std::string("TEXTURE LOD BIAS: ") + value +
               (std::abs(bias - g_launch_lod_bias) > 0.01f ? restart : "");
    }
    case RowHudSize:
        return "HUD SIZE: " + std::to_string(std::lround(config.display.hud_scale * 100.0f)) + " PERCENT";
    case RowFpsCounter:
        host_settings_value(HostSettingsRow::ShowFps, value, sizeof(value));
        return std::string("FPS COUNTER: ") + value;
    default:
        return "";
    }
}

// ---------------------------------------------------------------------------
// KEYBOARD AND MOUSE rows
// ---------------------------------------------------------------------------

constexpr std::int32_t kBindingsPerPage = 9;
constexpr std::int32_t kBindingPages =
    (static_cast<std::int32_t>(BindAction::Count) + kBindingsPerPage - 1) / kBindingsPerPage;
constexpr std::int32_t kRowKeyPage = kBindingsPerPage;
constexpr std::int32_t kRowMouseSensitivity = kBindingsPerPage + 1;
constexpr std::int32_t kRowInvertMouse = kBindingsPerPage + 2;
constexpr std::int32_t kRowResetKeys = kBindingsPerPage + 3;

std::atomic<std::int32_t> g_key_page{0};

// Rebinding state, shared by the game thread (menu) and the input poll.
enum CaptureState : int { CaptureIdle, CaptureWaitRelease, CaptureListening, CaptureSettle };
std::atomic<int> g_capture_state{CaptureIdle};
std::atomic<int> g_capture_action{0};
std::atomic<std::int64_t> g_capture_deadline{0};
constexpr auto kCaptureTimeout = std::chrono::seconds(8);

std::int64_t now_ticks() noexcept {
    return std::chrono::steady_clock::now().time_since_epoch().count();
}

bool binding_row_action(std::int32_t row, BindAction &action) noexcept {
    if (row < 0 || row >= kBindingsPerPage) return false;
    const std::int32_t index = g_key_page.load() * kBindingsPerPage + row;
    if (index >= static_cast<std::int32_t>(BindAction::Count)) return false;
    action = static_cast<BindAction>(index);
    return true;
}

void save_bindings(BindAction only, bool all) noexcept {
    std::array<bool, static_cast<std::size_t>(BindAction::Count)> changed{};
    if (all) changed.fill(true);
    else if (only < BindAction::Count) changed[bind_index(only)] = true;
    host_settings_save_controls(changed.data(), changed.size());
}

std::string keyboard_label(std::int32_t row) {
    const ControlsConfiguration &controls = lcs_render_configuration().controls;
    if (row < kBindingsPerPage) {
        BindAction action{};
        if (!binding_row_action(row, action)) return "";
        std::string text = std::string(bind_action_menu_name(action)) + ": ";
        if (g_capture_state.load() != CaptureIdle && g_capture_action.load() == static_cast<int>(action) &&
            g_capture_state.load() != CaptureSettle)
            return text + "PRESS A KEY OR ESC";
        const std::size_t index = bind_index(action);
        const std::uint8_t count = std::min<std::uint8_t>(controls.bindings.count[index], 3u);
        if (count == 0u) return text + "NONE";
        for (std::uint8_t slot = 0; slot < count; ++slot) {
            if (slot != 0u) text += ", ";
            text += host_key_menu_name(controls.bindings.keys[index][slot]);
        }
        return text;
    }
    switch (row) {
    case kRowKeyPage:
        return "MORE ACTIONS - PAGE " + std::to_string(g_key_page.load() + 1) + " OF " +
               std::to_string(kBindingPages);
    case kRowMouseSensitivity:
        return "MOUSE SENSITIVITY: " + std::to_string(controls.mouse_sensitivity);
    case kRowInvertMouse:
        return std::string("INVERT MOUSE Y: ") + (controls.invert_camera_y ? "ON" : "OFF");
    case kRowResetKeys:
        return "RESET KEYS TO DEFAULTS";
    default:
        return "";
    }
}

void flip_key_page(std::int32_t delta) noexcept {
    std::int32_t page = g_key_page.load() + (delta < 0 ? -1 : 1);
    if (page < 0) page = kBindingPages - 1;
    if (page >= kBindingPages) page = 0;
    g_key_page.store(page);
}

void begin_capture(BindAction action) noexcept {
    g_capture_action.store(static_cast<int>(action));
    g_capture_deadline.store(now_ticks() +
                             std::chrono::duration_cast<std::chrono::steady_clock::duration>(kCaptureTimeout).count());
    g_capture_state.store(CaptureWaitRelease);
}

// ---------------------------------------------------------------------------
// Text hook
// ---------------------------------------------------------------------------

// Slot for a key, or SlotCount when the key is not ours. Keys are at most 7
// characters: ZZH_GFX, ZZH_KBM, ZZC_KBM, ZZG_nn, ZZK_nn.
std::uint32_t slot_for_key(const char *key) noexcept {
    if (std::strcmp(key, "ZZH_GFX") == 0) return SlotGraphicsTitle;
    if (std::strcmp(key, "ZZH_KBM") == 0) return SlotKeyboardTitle;
    if (std::strcmp(key, "ZZC_KBM") == 0) return SlotControlsRow;
    if (std::strcmp(key, "ZZC_PAD") == 0) return SlotControllerRow;
    if ((key[2] == 'G' || key[2] == 'K') && key[3] == '_' && std::isdigit(static_cast<unsigned char>(key[4])) &&
        std::isdigit(static_cast<unsigned char>(key[5])) && key[6] == '\0') {
        const std::uint32_t row = static_cast<std::uint32_t>((key[4] - '0') * 10 + (key[5] - '0'));
        if (row >= 16u) return SlotCount;
        return (key[2] == 'G' ? SlotGraphicsRow0 : SlotKeyboardRow0) + row;
    }
    return SlotCount;
}

std::string text_for_slot(std::uint32_t slot) {
    if (slot == SlotGraphicsTitle) return "GRAPHICS";
    if (slot == SlotKeyboardTitle || slot == SlotControlsRow) return "KEYBOARD AND MOUSE";
    if (slot == SlotControllerRow) return "CONTROLLER";
    if (slot >= SlotGraphicsRow0 && slot < SlotKeyboardRow0)
        return graphics_label(static_cast<std::int32_t>(slot - SlotGraphicsRow0));
    if (slot >= SlotKeyboardRow0 && slot < SlotCount)
        return keyboard_label(static_cast<std::int32_t>(slot - SlotKeyboardRow0));
    return "";
}

std::uint32_t slot_address(std::uint32_t slot) noexcept { return g_scratch + kTabKeyBytes + slot * kSlotBytes; }

}  // namespace

void lcs_menu_pages_install(psprecomp::Runtime &runtime, std::uint32_t scratch, std::uint32_t size) noexcept {
    g_runtime = &runtime;
    g_scratch = scratch;
    g_scratch_size = size;
    remember_launch_values();
    auto &memory = runtime.memory();
    if (scratch == 0u || size < kTabKeyBytes + SlotCount * kSlotBytes || !memory.contains(scratch, size)) {
        g_scratch = 0u;
        std::fprintf(stderr, "[menu] no guest memory for the PC menu pages\n");
        return;
    }
    memory.zero(scratch, size);
    const char key[] = "ZZH_GFX";
    for (std::uint32_t i = 0; i < sizeof(key); ++i) memory.store8(scratch + i, static_cast<std::uint8_t>(key[i]));
    // CMenuTab::m_Name of the tab MULTIPLAYER had, in both tab bars.
    memory.store32(kMenuTabs + (kGraphicsTab - 1u) * 24u + 4u, scratch);
    memory.store32(kMenuTabsAlternate + (kGraphicsTabAlternate - 1u) * 24u + 4u, scratch);
}

std::int32_t lcs_menu_tab_screen(std::uint32_t tab) noexcept {
    if (tab == kLanguageTab) return kLanguageScreen;
    if (g_runtime == nullptr) return -1;
    const bool alternate = g_runtime->memory().load32(kLanguage) == 4u;
    if (tab == (alternate ? kGraphicsTabAlternate : kGraphicsTab)) return kMenuPageGraphics;
    if (tab == (alternate ? kControlsTabAlternate : kControlsTab)) return kMenuPageControlsChooser;
    return -1;
}

bool lcs_menu_text_hook(psprecomp::Runtime &runtime, psprecomp::AllegrexContext &ctx) noexcept {
    if (g_scratch == 0u) return false;
    const std::uint32_t key_address = ctx.gpr[5];
    auto &memory = runtime.memory();
    if (!memory.contains(key_address, 8u)) return false;
    // Cheap test first: this runs for every text lookup the game makes.
    const std::uint8_t first = memory.load8(key_address);
    const bool ours = first == 'Z' && memory.load8(key_address + 1u) == 'Z';
    const bool hint = first == 'L' || first == 'T' || first == 'G';
    if (!ours && !hint) return false;
    char key[8]{};
    for (std::uint32_t i = 0; i < 7u; ++i) {
        key[i] = static_cast<char>(memory.load8(key_address + i));
        if (key[i] == '\0') break;
    }
    std::uint32_t slot = SlotCount;
    std::string text;
    if (ours) {
        slot = slot_for_key(key);
        if (slot >= SlotCount) return false;
        text = text_for_slot(slot);
    } else {
        // Hints that name a PSP button outside "~k~".
        if (!lcs_hint_text_override(key, text)) return false;
        slot = SlotHintOverride0 + (key[0] == 'L' ? 0u : key[0] == 'T' ? 1u : 2u);
    }
    const std::uint32_t address = slot_address(slot);
    const std::size_t length = std::min<std::size_t>(text.size(), kSlotChars - 1u);
    for (std::size_t i = 0; i < length; ++i)
        memory.store16(address + static_cast<std::uint32_t>(i) * 2u, static_cast<std::uint8_t>(text[i]));
    memory.store16(address + static_cast<std::uint32_t>(length) * 2u, 0u);
    ctx.gpr[2] = address;
    return true;
}

void lcs_menu_pages_cross(std::int32_t screen, std::int32_t row, std::int32_t action) noexcept {
    switch (action) {
    case kMenuActionPcGraphics:
        if (screen == kMenuPageGraphics) change_graphics(row, 1);
        break;
    case kMenuActionPcKeyBinding: {
        BindAction bind{};
        if (binding_row_action(row, bind)) begin_capture(bind);
        break;
    }
    case kMenuActionPcKeyPage:
        flip_key_page(1);
        break;
    case kMenuActionPcInvertMouse:
        lcs_set_invert_camera_y(!lcs_render_configuration().controls.invert_camera_y);
        save_bindings(BindAction::Count, false);
        break;
    case kMenuActionPcResetKeys:
        lcs_reset_key_bindings();
        save_bindings(BindAction::Count, true);
        break;
    default:
        break;
    }
}

void lcs_menu_pages_change(std::int32_t screen, std::int32_t row, std::int32_t action,
                           std::int32_t delta) noexcept {
    if (delta == 0) return;
    switch (action) {
    case kMenuActionPcGraphics:
        if (screen == kMenuPageGraphics) change_graphics(row, delta);
        break;
    case kMenuActionPcKeyPage:
        flip_key_page(delta);
        break;
    case kMenuActionPcMouseSensitivity: {
        const std::int32_t current = static_cast<std::int32_t>(lcs_render_configuration().controls.mouse_sensitivity);
        lcs_set_mouse_sensitivity(static_cast<std::uint32_t>(std::clamp(current + (delta < 0 ? -1 : 1), 1, 100)));
        save_bindings(BindAction::Count, false);
        break;
    }
    case kMenuActionPcInvertMouse:
        lcs_set_invert_camera_y(!lcs_render_configuration().controls.invert_camera_y);
        save_bindings(BindAction::Count, false);
        break;
    default:
        break;
    }
}

namespace {

// Pointer in menu space, x and y in 1/16 pixel; serial counts moves.
std::atomic<std::int32_t> g_pointer_x{-1};
std::atomic<std::int32_t> g_pointer_y{-1};
std::atomic<std::uint32_t> g_pointer_serial{0};
std::uint32_t g_pointer_taken{0};

// Where the last frame drew each tab (ids 1..9).
constexpr std::int32_t kMaxTabs = 10;
std::array<std::int32_t, kMaxTabs> g_tab_x{};
std::array<std::int32_t, kMaxTabs> g_tab_y{};
std::array<bool, kMaxTabs> g_tab_seen{};

}  // namespace

void lcs_menu_pointer_from_client(bool inside, int x, int y, int client_width, int client_height) noexcept {
    if (!inside || client_width <= 0 || client_height <= 0) return;
    const LcsConfiguration &config = lcs_render_configuration();
    const InternalResolutionDimensions source = resolve_internal_resolution(config.rendering);
    const PresentationRectangle rect = calculate_presentation_rectangle(
        static_cast<std::uint32_t>(client_width), static_cast<std::uint32_t>(client_height), source.width,
        source.height, config.display.aspect_mode, config.display.integer_scale);
    if (rect.width <= 0 || rect.height <= 0) return;
    float menu_x = static_cast<float>(x - rect.x) * 480.0f / static_cast<float>(rect.width);
    const float menu_y = static_cast<float>(y - rect.y) * 272.0f / static_cast<float>(rect.height);
    // 2D draws are squeezed toward the centre on a wider screen (ge_renderer.cpp).
    const float shrink = widescreen_render_stretch();
    if (std::isfinite(shrink) && shrink > 0.0f) menu_x = 240.0f + (menu_x - 240.0f) * shrink;
    const std::int32_t fx = static_cast<std::int32_t>(std::lround(menu_x * 16.0f));
    const std::int32_t fy = static_cast<std::int32_t>(std::lround(menu_y * 16.0f));
    if (fx == g_pointer_x.load() && fy == g_pointer_y.load()) return;
    g_pointer_x.store(fx);
    g_pointer_y.store(fy);
    g_pointer_serial.fetch_add(1u);
}

bool lcs_menu_pointer_moved(float &x, float &y) noexcept {
    const std::uint32_t serial = g_pointer_serial.load();
    if (serial == g_pointer_taken) return false;
    g_pointer_taken = serial;
    x = static_cast<float>(g_pointer_x.load()) / 16.0f;
    y = static_cast<float>(g_pointer_y.load()) / 16.0f;
    return true;
}

void lcs_menu_note_tab(std::uint32_t tab, std::int32_t x, std::int32_t y) noexcept {
    if (tab == 0u || tab >= static_cast<std::uint32_t>(kMaxTabs)) return;
    g_tab_x[tab] = x;
    g_tab_y[tab] = y;
    g_tab_seen[tab] = true;
}

std::int32_t lcs_menu_tab_at(float x, float y) noexcept {
    for (std::int32_t tab = 1; tab < kMaxTabs; ++tab) {
        if (!g_tab_seen[tab]) continue;
        const float top = static_cast<float>(g_tab_y[tab]) - 3.0f;
        if (y < top || y > top + 16.0f) continue;
        // A tab reaches the next one drawn to its right on the same row.
        float right = static_cast<float>(g_tab_x[tab]) + 90.0f;
        for (std::int32_t other = 1; other < kMaxTabs; ++other) {
            if (!g_tab_seen[other] || g_tab_y[other] != g_tab_y[tab] || g_tab_x[other] <= g_tab_x[tab]) continue;
            right = std::min(right, static_cast<float>(g_tab_x[other]));
        }
        if (x >= static_cast<float>(g_tab_x[tab]) && x < right) return tab;
    }
    return -1;
}

bool lcs_key_capture_active() noexcept { return g_capture_state.load() != CaptureIdle; }

void lcs_key_capture_update(const bool *down, std::size_t count, int wheel) noexcept {
    const int state = g_capture_state.load();
    if (state == CaptureIdle || down == nullptr) return;
    const auto held = [&](HostKey key) {
        const std::size_t index = static_cast<std::size_t>(key);
        return index < count && down[index];
    };
    bool any = false;
    for (std::size_t index = 1; index < count; ++index) any = any || down[index];

    if (state == CaptureWaitRelease) {
        // The key that chose the row (Enter, Space, a mouse button) is still down.
        if (!any) g_capture_state.store(CaptureListening);
        return;
    }
    if (state == CaptureSettle) {
        if (!any) g_capture_state.store(CaptureIdle);
        return;
    }

    // Listening.
    if (held(HostKey::Escape) || now_ticks() > g_capture_deadline.load()) {
        g_capture_state.store(CaptureSettle);
        return;
    }
    HostKey chosen = HostKey::None;
    for (std::size_t index = 1; index < count && chosen == HostKey::None; ++index) {
        const HostKey key = static_cast<HostKey>(index);
        if (!down[index] || key == HostKey::F10 || key == HostKey::F11 || host_key_is_wheel(key)) continue;
        chosen = key;
    }
    if (chosen == HostKey::None && wheel != 0) chosen = wheel > 0 ? HostKey::WheelUp : HostKey::WheelDown;
    if (chosen == HostKey::None) return;

    const BindAction action = static_cast<BindAction>(g_capture_action.load());
    lcs_set_key_binding(action, chosen);
    save_bindings(action, false);
    g_capture_state.store(CaptureSettle);
}

}  // namespace lcs
