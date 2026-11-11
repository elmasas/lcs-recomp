#include "lcs_imgui_menu.hpp"

#if defined(_WIN32)

#include "display_window.hpp"
#include "lcs_display_menu.hpp"
#include "lcs_frontend_menu.hpp"
#include "lcs_menu.hpp"
#include "lcs_frontend_music.hpp"
#include "lcs_frontend_options.hpp"
#include "lcs_pause_menu.hpp"
#include "lcs_render_config.hpp"
#include "lcs_texture_pack.hpp"
#include "lcs_settings.hpp"
#include "lcs_settings_menu.hpp"

#include "imgui.h"
#include "backends/imgui_impl_dx12.h"
#include "backends/imgui_impl_win32.h"

#include <wrl/client.h>

#include <algorithm>
#include <chrono>
#include <filesystem>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <mutex>
#include <string>
#include <vector>

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND, UINT, WPARAM, LPARAM);

namespace lcs {
namespace {

using Microsoft::WRL::ComPtr;
using opts::When;
using opts::Entry;
using opts::Setting;
using opts::Kind;

struct QueuedMessage {
    HWND window;
    UINT message;
    WPARAM wparam;
    LPARAM lparam;
};

std::mutex g_queue_mutex;
std::vector<QueuedMessage> g_queue;
ComPtr<ID3D12DescriptorHeap> g_heap;
ID3D12Device *g_device = nullptr;
UINT g_heap_next = 0u;
UINT g_heap_stride = 0u;
bool g_initialized = false;
bool g_failed = false;
bool g_was_open = false;
// Every picture the menus show takes one (fonts, the main menu's painting, the wheels' icons and logos, save icons),
// and Dear ImGui frees and takes them again as its font atlas grows. Freed ones are used again.
constexpr UINT kHeapSize = 1024u;
std::vector<UINT> g_heap_free;
ImFont *g_regular_font = nullptr;

const LcsConfiguration &config() { return lcs_render_configuration(); }

void alloc_descriptor(ImGui_ImplDX12_InitInfo *, D3D12_CPU_DESCRIPTOR_HANDLE *cpu, D3D12_GPU_DESCRIPTOR_HANDLE *gpu) {
    UINT index = 0u;
    if (!g_heap_free.empty()) {
        index = g_heap_free.back();
        g_heap_free.pop_back();
    } else if (g_heap_next < kHeapSize) {
        index = g_heap_next++;
    } else {
        // Full: the oldest is taken over, and one picture may then show another's.
        static bool logged = false;
        if (!logged) std::cerr << "[menu] all " << kHeapSize << " picture slots are in use\n";
        logged = true;
        index = g_heap_next++ % kHeapSize;
    }
    *cpu = g_heap->GetCPUDescriptorHandleForHeapStart();
    *gpu = g_heap->GetGPUDescriptorHandleForHeapStart();
    cpu->ptr += static_cast<SIZE_T>(index) * g_heap_stride;
    gpu->ptr += static_cast<UINT64>(index) * g_heap_stride;
}

void free_descriptor(ImGui_ImplDX12_InitInfo *, D3D12_CPU_DESCRIPTOR_HANDLE cpu, D3D12_GPU_DESCRIPTOR_HANDLE) {
    if (g_heap == nullptr || g_heap_stride == 0u) return;
    const SIZE_T start = g_heap->GetCPUDescriptorHandleForHeapStart().ptr;
    if (cpu.ptr < start) return;
    const auto index = static_cast<UINT>((cpu.ptr - start) / g_heap_stride);
    if (index < kHeapSize) g_heap_free.push_back(index);
}

std::function<void(int)> persist_int(const char *section, const char *key) {
    return [section, key](int v) { host_settings_write(section, key, std::to_string(v)); };
}

std::function<void(int)> persist_bool(const char *section, const char *key) {
    return [section, key](int v) { host_settings_write(section, key, v != 0 ? "true" : "false"); };
}

// A float kept in the menu as a percentage or hundredths.
std::function<void(int)> persist_hundredths(const char *section, const char *key) {
    return [section, key](int v) { host_settings_write(section, key, std::to_string(static_cast<float>(v) / 100.0f)); };
}

// Rebinding a key: its button waits for the next key or mouse button, read from the system so that any can be used.
struct CapturableKey {
    const char *name;
    int virtual_key;
};
constexpr CapturableKey kCapturableKeys[] = {
    {"A", 'A'}, {"B", 'B'}, {"C", 'C'}, {"D", 'D'}, {"E", 'E'}, {"F", 'F'}, {"G", 'G'}, {"H", 'H'}, {"I", 'I'},
    {"J", 'J'}, {"K", 'K'}, {"L", 'L'}, {"M", 'M'}, {"N", 'N'}, {"O", 'O'}, {"P", 'P'}, {"Q", 'Q'}, {"R", 'R'},
    {"S", 'S'}, {"T", 'T'}, {"U", 'U'}, {"V", 'V'}, {"W", 'W'}, {"X", 'X'}, {"Y", 'Y'}, {"Z", 'Z'},
    {"0", '0'}, {"1", '1'}, {"2", '2'}, {"3", '3'}, {"4", '4'}, {"5", '5'}, {"6", '6'}, {"7", '7'}, {"8", '8'}, {"9", '9'},
    {"F1", VK_F1}, {"F2", VK_F2}, {"F3", VK_F3}, {"F4", VK_F4}, {"F5", VK_F5}, {"F6", VK_F6}, {"F7", VK_F7}, {"F8", VK_F8}, {"F9", VK_F9}, {"F12", VK_F12},
    {"Space", VK_SPACE}, {"Enter", VK_RETURN}, {"Tab", VK_TAB}, {"Backspace", VK_BACK},
    {"LeftShift", VK_LSHIFT}, {"RightShift", VK_RSHIFT}, {"LeftCtrl", VK_LCONTROL}, {"RightCtrl", VK_RCONTROL}, {"LeftAlt", VK_LMENU}, {"RightAlt", VK_RMENU},
    {"Up", VK_UP}, {"Down", VK_DOWN}, {"Left", VK_LEFT}, {"Right", VK_RIGHT},
    {"Numpad0", VK_NUMPAD0}, {"Numpad1", VK_NUMPAD1}, {"Numpad2", VK_NUMPAD2}, {"Numpad3", VK_NUMPAD3}, {"Numpad4", VK_NUMPAD4},
    {"Numpad5", VK_NUMPAD5}, {"Numpad6", VK_NUMPAD6}, {"Numpad7", VK_NUMPAD7}, {"Numpad8", VK_NUMPAD8}, {"Numpad9", VK_NUMPAD9},
    {"NumpadPlus", VK_ADD}, {"NumpadMinus", VK_SUBTRACT},
    {"Delete", VK_DELETE}, {"Insert", VK_INSERT}, {"Home", VK_HOME}, {"End", VK_END}, {"PageUp", VK_PRIOR}, {"PageDown", VK_NEXT},
    {"Comma", VK_OEM_COMMA}, {"Period", VK_OEM_PERIOD}, {"Minus", VK_OEM_MINUS}, {"Equals", VK_OEM_PLUS},
    {"MouseLeft", VK_LBUTTON}, {"MouseRight", VK_RBUTTON}, {"MouseMiddle", VK_MBUTTON}, {"Mouse4", VK_XBUTTON1}, {"Mouse5", VK_XBUTTON2},
};
int g_capturing_action = -1;
bool g_capture_waits_for_release = false;

std::string host_key_label(HostKey wanted) {
    if (wanted == HostKey::Escape) return "Escape";
    if (wanted == HostKey::WheelUp) return "WheelUp";
    if (wanted == HostKey::WheelDown) return "WheelDown";
    for (const CapturableKey &entry : kCapturableKeys) {
        HostKey key{}, extra{};
        if (lookup_host_key(normalize_binding_token(entry.name), key, extra) && key == wanted) return entry.name;
    }
    return "?";
}

std::string binding_label(BindAction action) {
    if (g_capturing_action == static_cast<int>(action)) return "Press a key or mouse button... (Esc cancels)";
    const ControlBindings &bindings = config().controls.bindings;
    const std::size_t index = bind_index(action);
    std::string text;
    for (std::uint8_t i = 0u; i < bindings.count[index]; ++i) {
        if (!text.empty()) text += ", ";
        text += host_key_label(bindings.keys[index][i]);
    }
    return text.empty() ? std::string("None") : text;
}

void set_binding(BindAction action, const char *token) {
    const char *name = bind_action_name(action);
    lcs_update_configuration([&](LcsConfiguration &c) {
        std::string warning;
        (void)apply_control_binding(c.controls.bindings, name, token, warning);
    });
    host_settings_write("controls", name, token);
}

void poll_key_capture() {
    if (g_capturing_action < 0) return;
    const auto down = [](int key) { return (GetAsyncKeyState(key) & 0x8000) != 0; };
    const auto action = static_cast<BindAction>(g_capturing_action);
    // The click on the button is still held when this starts.
    bool any = false;
    for (const CapturableKey &entry : kCapturableKeys) any = any || down(entry.virtual_key);
    if (g_capture_waits_for_release) {
        g_capture_waits_for_release = any;
        return;
    }
    if (down(VK_ESCAPE)) {
        g_capturing_action = -1;
        return;
    }
    const float wheel = ImGui::GetIO().MouseWheel;
    if (wheel != 0.0f) {
        set_binding(action, wheel > 0.0f ? "WheelUp" : "WheelDown");
        g_capturing_action = -1;
        return;
    }
    for (const CapturableKey &entry : kCapturableKeys) {
        if (!down(entry.virtual_key)) continue;
        set_binding(action, entry.name);
        g_capturing_action = -1;
        return;
    }
}

void register_settings() {
    Setting s;
    // ---- Display
    s = {};
    s.id = "display.mode"; s.tab = "Display"; s.group = "Window"; s.title = "Window size";
    s.about = "The size of the game's window. Desktop follows your monitor."; s.kind = Kind::List; s.fallback = 2;
    s.entries = {{"Desktop", 0}, {"960x544", 2}, {"1440x816", 3}, {"1920x1088", 4}, {"2880x1632", 6}, {"3840x2176", 8}};
    s.when = When::NextLaunch;
    s.get_value = [] {
        const auto &d = config().display;
        return d.resolution_mode == DisplayResolutionMode::Desktop ? 0
             : d.resolution_mode == DisplayResolutionMode::Scale ? static_cast<int>(d.scale) : -1;
    };
    s.store = [](int v) {
        host_settings_write("display", "ResolutionMode", v == 0 ? "Desktop" : "Scale");
        if (v != 0) host_settings_write("display", "Scale", std::to_string(v));
    };
    opts::declare(s);

    s = {};
    s.id = "display.Fullscreen"; s.tab = "Display"; s.group = "Window"; s.title = "Fullscreen";
    s.about = "Borderless fullscreen. F11 also toggles it."; s.kind = Kind::Switch;
    s.get_value = [] { return config().display.fullscreen ? 1 : 0; };
    s.store = persist_bool("display", "Fullscreen");
    s.take = [](int v) {
        lcs_set_fullscreen_setting(v != 0);
        display_window_request_fullscreen(v != 0);
    };
    opts::declare(s);

    s = {};
    s.id = "display.VSync"; s.tab = "Display"; s.group = "Window"; s.title = "VSync";
    s.about = "Waits for the monitor's refresh. Prevents tearing."; s.kind = Kind::Switch; s.fallback = 1;
    s.get_value = [] { return config().display.vsync ? 1 : 0; };
    s.store = persist_bool("display", "VSync");
    s.take = [](int v) { lcs_update_configuration([v](LcsConfiguration &c) { c.display.vsync = v != 0; }); };
    opts::declare(s);

    s = {};
    s.id = "display.ShowFPS"; s.tab = "Display"; s.group = "Window"; s.title = "FPS counter";
    s.about = "Shows the frame rate in a corner of the screen."; s.kind = Kind::Switch;
    s.get_value = [] { return config().display.show_fps ? 1 : 0; };
    s.store = persist_bool("display", "ShowFPS");
    s.take = [](int v) { lcs_set_show_fps(v != 0); };
    opts::declare(s);

    s = {};
    s.id = "widescreen.Enabled"; s.tab = "Display"; s.group = "Picture"; s.title = "Widescreen";
    s.about = "Widens the view to the window's shape instead of the PSP's."; s.kind = Kind::Switch; s.fallback = 1;
    s.when = When::NextLaunch;
    s.get_value = [] { return config().widescreen.enabled ? 1 : 0; };
    s.store = persist_bool("widescreen", "Enabled");
    opts::declare(s);

    s = {};
    s.id = "display.MainMenu"; s.tab = "Display"; s.group = "Main menu"; s.title = "Show the main menu";
    s.about = "At launch. Off goes straight into your save, or a new game, after the logos and the title movie.";
    s.kind = Kind::Switch; s.fallback = 1;
    s.get_value = [] { return config().display.skip_main_menu ? 0 : 1; };
    s.store = [](int v) { host_settings_write("display", "SkipMainMenu", v != 0 ? "false" : "true"); };
    s.take = [](int v) { lcs_update_configuration([v](LcsConfiguration &c) { c.display.skip_main_menu = v == 0; }); };
    s.when = When::NextLaunch;
    opts::declare(s);

    {
        static const std::array<const char *, 4> tracks = {"intro", "finale", "ending", "off"};
        Setting m;
        m.id = "display.MenuMusic"; m.tab = "Display"; m.group = "Main menu"; m.title = "Music";
        m.about = "From your game's files. Follows the master volume.";
        m.kind = Kind::List; m.fallback = 0;
        m.entries = {{"Opening theme", 0}, {"Finale", 1}, {"Ending", 2}, {"Off", 3}};
        m.get_value = [] {
            const std::string &wanted = config().display.menu_music;
            for (std::size_t i = 0u; i < tracks.size(); ++i) {
                if (wanted == tracks[i]) return static_cast<int>(i);
            }
            return 0;
        };
        const auto stored = [](int v) { return std::string(tracks[static_cast<std::size_t>(std::clamp(v, 0, 3))]); };
        m.store = [stored](int v) { host_settings_write("display", "MenuMusic", stored(v)); };
        m.take = [stored](int v) {
            lcs_update_configuration([&](LcsConfiguration &c) { c.display.menu_music = stored(v); });
            frontend_music_select(stored(v));
        };
        opts::declare(m);
    }
    {
        Setting a;
        a.id = "display.MenuArt"; a.tab = "Display"; a.group = "Main menu"; a.title = "Painting";
        a.about = "Your own images, from the game folder's MENUART, then the game's. Random uses yours if you have any, among those that suit the window's shape.";
        a.kind = Kind::List; a.fallback = 0;
        a.entries_now = [] {
            std::vector<Entry> list{{"Random each start", 0}};
            int index = 0;
            for (const FrontendArtChoice &choice : frontend_art_choices()) list.push_back({choice.label, ++index});
            return list;
        };
        a.get_value = [] {
            const std::string &wanted = config().display.menu_art;
            const auto &choices = frontend_art_choices();
            for (std::size_t i = 0u; i < choices.size(); ++i) {
                if (wanted == choices[i].value) return static_cast<int>(i) + 1;
            }
            return 0;
        };
        const auto stored = [](int v) {
            const auto &choices = frontend_art_choices();
            return v > 0 && v <= static_cast<int>(choices.size()) ? choices[static_cast<std::size_t>(v - 1)].value : std::string("random");
        };
        a.store = [stored](int v) { host_settings_write("display", "MenuArt", stored(v)); };
        a.take = [stored](int v) { lcs_update_configuration([&](LcsConfiguration &c) { c.display.menu_art = stored(v); }); };
        a.when = When::NextLaunch;
        opts::declare(a);

        Setting q;
        q.id = "display.MenuArtQuality"; q.tab = "Display"; q.group = "Main menu"; q.title = "Painting quality";
        q.about = "For the game's own paintings. Automatic uses your texture pack's version when it has one, and otherwise the game's own, smoothly enlarged. Smooth always uses the game's own.";
        q.kind = Kind::List; q.fallback = 0;
        q.entries = {{"Automatic", 0}, {"Smooth", 2}};
        q.get_value = [] { return config().display.menu_art_quality == "smooth" ? 2 : 0; };
        const auto quality = [](int v) { return std::string(v == 2 ? "smooth" : "auto"); };
        q.store = [quality](int v) { host_settings_write("display", "MenuArtQuality", quality(v)); };
        q.take = [quality](int v) { lcs_update_configuration([&](LcsConfiguration &c) { c.display.menu_art_quality = quality(v); }); };
        q.when = When::NextLaunch;
        opts::declare(q);
    }

    s = {};
    s.id = "display.HudAtEdges"; s.tab = "Display"; s.group = "Picture"; s.title = "HUD at screen edges";
    s.about = "On a wide screen the HUD normally stays in the middle 16:9. This moves it out to the sides.";
    s.kind = Kind::Switch; s.fallback = 0;
    s.get_value = [] { return config().display.hud_at_edges ? 1 : 0; };
    s.store = persist_bool("display", "HudAtEdges");
    s.take = [](int v) { lcs_update_configuration([v](LcsConfiguration &c) { c.display.hud_at_edges = v != 0; }); };
    opts::declare(s);

    s = {};
    s.id = "display.HudScale"; s.tab = "Display"; s.group = "Picture"; s.title = "HUD size";
    s.about = "The size of the radar, weapon, health and money."; s.kind = Kind::Number; s.lo = 25; s.hi = 100;
    s.fallback = 75; s.shown_as = "%d%%"; s.when = When::NextLaunch;
    s.get_value = [] { return static_cast<int>(std::lround(config().display.hud_scale * 100.0f)); };
    s.store = persist_hundredths("display", "HudScale");
    opts::declare(s);

    s = {};
    s.id = "display.ButtonPrompts"; s.tab = "Display"; s.group = "Picture"; s.title = "Button icons";
    s.about = "Xbox and keyboard icons need the packs the launcher builds from your disc."; s.kind = Kind::List;
    s.entries = {{"PlayStation", 0}, {"Xbox", 1}, {"Keyboard and mouse", 2}}; s.when = When::NextLaunch;
    s.get_value = [] {
        const std::string &style = config().display.prompt_style;
        return style == "xbox" ? 1 : style == "kb" ? 2 : 0;
    };
    s.store = [](int v) { host_settings_write("display", "ButtonPrompts", v == 1 ? "xbox" : v == 2 ? "kb" : "Original"); };
    opts::declare(s);

    // ---- Graphics
    s = {};
    s.id = "rendering.resolution"; s.tab = "Graphics"; s.group = "Quality"; s.title = "Internal resolution";
    s.about = "What the game renders at. Higher is sharper and heavier. Desktop matches your monitor.";
    s.kind = Kind::List; s.fallback = 3; s.when = When::NextLaunch;
    s.entries = {{"Desktop", 0},    {"480x272", 1},   {"960x544", 2},   {"1440x816", 3}, {"1920x1088", 4},
                 {"2400x1360", 5}, {"2880x1632", 6}, {"3360x1904", 7}, {"3840x2176", 8}};
    s.get_value = [] {
        const auto &r = config().rendering;
        return r.internal_resolution_mode == InternalResolutionMode::Desktop ? 0
             : r.internal_resolution_mode == InternalResolutionMode::Scale ? static_cast<int>(r.internal_scale) : -1;
    };
    s.store = [](int v) {
        host_settings_write("rendering", "InternalResolutionMode", v == 0 ? "Desktop" : "Scale");
        if (v != 0) host_settings_write("rendering", "InternalScale", std::to_string(v));
    };
    opts::declare(s);

    s = {};
    s.id = "rendering.MSAA"; s.tab = "Graphics"; s.group = "Quality"; s.title = "Anti-aliasing (MSAA)";
    s.about = "Smooths jagged edges. Higher is heavier on the GPU."; s.kind = Kind::List; s.fallback = 1;
    s.entries = {{"Off", 1}, {"2x", 2}, {"4x", 4}, {"8x", 8}}; s.when = When::NextLaunch;
    s.get_value = [] { return static_cast<int>(config().rendering.msaa); };
    s.store = persist_int("rendering", "MSAA");
    opts::declare(s);

    s = {};
    s.id = "rendering.AnisotropicFiltering"; s.tab = "Graphics"; s.group = "Quality"; s.title = "Anisotropic filtering";
    s.about = "Keeps textures sharp at shallow angles, such as roads."; s.kind = Kind::List; s.fallback = 1;
    s.entries = {{"Off", 1}, {"2x", 2}, {"4x", 4}, {"8x", 8}, {"16x", 16}}; s.when = When::NextLaunch;
    s.get_value = [] { return static_cast<int>(config().rendering.anisotropic_filtering); };
    s.store = persist_int("rendering", "AnisotropicFiltering");
    opts::declare(s);

    s = {};
    s.id = "rendering.TextureLodBias"; s.tab = "Graphics"; s.group = "Quality"; s.title = "Texture sharpness";
    s.about = "Negative keeps distant textures sharper, but they can shimmer."; s.kind = Kind::Number; s.lo = -8; s.hi = 8;
    s.when = When::NextLaunch;
    s.get_value = [] { return static_cast<int>(std::lround(config().rendering.texture_lod_bias)); };
    s.store = persist_int("rendering", "TextureLodBias");
    opts::declare(s);

    s = {};
    s.id = "rendering.ViewDistance"; s.tab = "Graphics"; s.group = "World"; s.title = "View distance";
    s.about = "How far the world draws. 1 is the original, and 2 and up also use detailed scenery from nearby sectors.";
    s.kind = Kind::List; s.fallback = 100;
    s.entries = {{"1 (original)", 100}, {"1.25", 125}, {"1.5", 150}, {"1.75", 175}, {"2", 200}, {"2.5", 250}, {"3", 300}, {"4", 400}};
    s.get_value = [] { return static_cast<int>(std::lround(view_distance_scale() * 100.0f)); };
    s.store = persist_hundredths("rendering", "ViewDistance");
    s.take = [](int v) { lcs_set_view_distance(static_cast<float>(v) / 100.0f); };
    opts::declare(s);

    s = {};
    s.id = "rendering.TexturePack"; s.tab = "Graphics"; s.group = "Textures"; s.title = "Texture pack";
    s.about = "PPSSPP texture packs from the game's TEXTURES folder. Applies at once.";
    s.kind = Kind::List; s.fallback = 0;
    s.entries_now = [] {
        std::vector<Entry> list{{"Original", 0}};
        int index = 0;
        for (const std::string &name : texture_pack_names()) list.push_back({name, ++index});
        return list;
    };
    s.get_value = [] { return texture_pack_current_index(); };
    s.store = [](int v) {
        const auto &names = texture_pack_names();
        host_settings_write("rendering", "TexturePack",
                            v > 0 && v <= static_cast<int>(names.size()) ? names[static_cast<std::size_t>(v - 1)] : std::string("Original"));
    };
    s.take = [](int v) { texture_pack_select(v); };
    opts::declare(s);

    s = {};
    s.id = "rendering.SecondTexturePack"; s.tab = "Graphics"; s.group = "Textures"; s.title = "Second texture pack";
    s.about = "Under the first: it fills in what the first doesn't replace. Applies at once.";
    s.kind = Kind::List; s.fallback = 0;
    s.entries_now = [] {
        std::vector<Entry> list{{"None", 0}};
        int index = 0;
        for (const std::string &name : texture_pack_names()) list.push_back({name, ++index});
        return list;
    };
    s.get_value = [] { return texture_pack_second_index(); };
    s.store = [](int v) {
        const auto &names = texture_pack_names();
        host_settings_write("rendering", "SecondTexturePack",
                            v > 0 && v <= static_cast<int>(names.size()) ? names[static_cast<std::size_t>(v - 1)] : std::string("None"));
    };
    s.take = [](int v) { texture_pack_select_second(v); };
    opts::declare(s);

    const auto lights_off = [] { return !config().rendering.lod_lights; };
    s = {};
    s.id = "rendering.LodLights"; s.tab = "Graphics"; s.group = "Distant lights"; s.title = "Distant street lights";
    s.about = "Street lights and traffic signals visible from far away, from Project2DFX by ThirteenAG.";
    s.kind = Kind::Switch; s.fallback = 1;
    s.get_value = [] { return config().rendering.lod_lights ? 1 : 0; };
    s.store = persist_bool("rendering", "LodLights");
    s.take = [](int v) { lcs_update_configuration([v](LcsConfiguration &c) { c.rendering.lod_lights = v != 0; }); };
    opts::declare(s);

    s = {};
    s.id = "rendering.LodLightsRange"; s.tab = "Graphics"; s.group = "Distant lights"; s.title = "Range";
    s.about = "How far away the lights show."; s.kind = Kind::List; s.fallback = 500;
    s.entries = {{"250", 250}, {"500", 500}, {"750", 750}, {"1000", 1000}, {"1500", 1500}, {"2000", 2000}};
    s.get_value = [] { return static_cast<int>(config().rendering.lod_lights_range); };
    s.store = persist_int("rendering", "LodLightsRange");
    s.take = [](int v) {
        lcs_update_configuration([v](LcsConfiguration &c) { c.rendering.lod_lights_range = static_cast<float>(v); });
    };
    s.held = lights_off; s.held_note = "Turn the distant lights on to change this.";
    opts::declare(s);

    s = {};
    s.id = "rendering.LodLightsRadius"; s.tab = "Graphics"; s.group = "Distant lights"; s.title = "Size";
    s.about = "How big the lights are."; s.kind = Kind::Number; s.lo = 50; s.hi = 300; s.fallback = 100;
    s.shown_as = "%d%%";
    s.get_value = [] { return static_cast<int>(std::lround(config().rendering.lod_lights_radius * 100.0f)); };
    s.store = persist_hundredths("rendering", "LodLightsRadius");
    s.take = [](int v) {
        lcs_update_configuration([v](LcsConfiguration &c) { c.rendering.lod_lights_radius = static_cast<float>(v) / 100.0f; });
    };
    s.held = lights_off; s.held_note = "Turn the distant lights on to change this.";
    opts::declare(s);

    // ---- Controls
    s = {};
    s.id = "controls.MouseSensitivity"; s.tab = "Controls"; s.group = "Camera"; s.title = "Mouse sensitivity";
    s.about = "How fast the mouse turns the camera."; s.kind = Kind::Number; s.lo = 1; s.hi = 100; s.fallback = 12;
    s.get_value = [] { return static_cast<int>(config().controls.mouse_sensitivity); };
    s.store = persist_int("controls", "MouseSensitivity");
    s.take = [](int v) {
        lcs_update_configuration([v](LcsConfiguration &c) { c.controls.mouse_sensitivity = static_cast<std::uint32_t>(v); });
    };
    opts::declare(s);

    s = {};
    s.id = "controls.CameraSmoothing"; s.tab = "Controls"; s.group = "Camera"; s.title = "Camera smoothing";
    s.about = "Softens camera motion. 0 follows the input directly."; s.kind = Kind::Number; s.lo = 0; s.hi = 100;
    s.fallback = 50;
    s.get_value = [] { return static_cast<int>(config().controls.camera_smoothing); };
    s.store = persist_int("controls", "CameraSmoothing");
    s.take = [](int v) {
        lcs_update_configuration([v](LcsConfiguration &c) { c.controls.camera_smoothing = static_cast<std::uint32_t>(v); });
    };
    opts::declare(s);

    s = {};
    s.id = "controls.InvertCameraY"; s.tab = "Controls"; s.group = "Camera"; s.title = "Invert vertical camera";
    s.about = "Moving up looks down."; s.kind = Kind::Switch;
    s.get_value = [] { return config().controls.invert_camera_y ? 1 : 0; };
    s.store = persist_bool("controls", "InvertCameraY");
    s.take = [](int v) { lcs_update_configuration([v](LcsConfiguration &c) { c.controls.invert_camera_y = v != 0; }); };
    opts::declare(s);

    s = {};
    s.id = "controls.AutoAim"; s.tab = "Controls"; s.group = "Aiming"; s.title = "Auto-aim";
    s.about = "Locks on to targets. Off aims freely with the camera.";
    s.kind = Kind::Switch; s.fallback = 1;
    s.get_value = [] { return config().controls.auto_aim ? 1 : 0; };
    s.store = persist_bool("controls", "AutoAim");
    s.take = [](int v) { lcs_update_configuration([v](LcsConfiguration &c) { c.controls.auto_aim = v != 0; }); };
    opts::declare(s);

    for (int i = 0; i < static_cast<int>(BindAction::Count); ++i) {
        const auto action = static_cast<BindAction>(i);
        Setting a;
        a.id = std::string("controls.key.") + bind_action_name(action);
        a.tab = "Controls"; a.group = "Keyboard and mouse"; a.title = bind_action_name(action);
        a.about = "Click, then press the key or mouse button to use instead. Several keys for one action: edit LCSNative.ini.";
        a.kind = Kind::Button;
        a.button_text_now = [action] { return binding_label(action); };
        a.take = [i](int) {
            g_capturing_action = i;
            g_capture_waits_for_release = true;
        };
        opts::declare(a);
    }

    // ---- Game
    s = {};
    s.id = "timing.FrameRate"; s.tab = "Game"; s.group = "Timing"; s.title = "Frame rate";
    s.about = "30 is the PSP's rate and 60 is the tested one. Above 60 is experimental: physics and missions are not "
             "fully tested there. With VSync on, don't go above your monitor's refresh rate.";
    s.kind = Kind::List; s.fallback = 60;
    s.entries = {{"30", 30}, {"60", 60}, {"74 (experimental)", 74}, {"75 (experimental)", 75},
                 {"90 (experimental)", 90}, {"100 (experimental)", 100}};
    s.get_value = [] { return static_cast<int>(config().timing.frame_rate); };
    s.store = persist_int("timing", "FrameRate");
    s.take = [](int v) { lcs_set_frame_rate(static_cast<std::uint32_t>(v)); };
    opts::declare(s);

    s = {};
    s.id = "display.ClassicPause"; s.tab = "Game"; s.group = "Pause menu"; s.title = "Use the classic pause menu";
    s.about = "The game's own pause menu, instead of this one.";
    s.kind = Kind::Switch; s.fallback = 0;
    s.get_value = [] { return config().display.classic_pause ? 1 : 0; };
    s.store = [](int v) { host_settings_write("display", "ClassicPause", v != 0 ? "true" : "false"); };
    s.take = [](int v) { lcs_update_configuration([v](LcsConfiguration &c) { c.display.classic_pause = v != 0; }); };
    opts::declare(s);
    {
        const auto game_page = [](const char *key, const char *label, const char *help, int tab) {
            Setting a;
            a.id = key; a.tab = "Game"; a.group = "The game's own pages"; a.title = label; a.about = help;
            a.kind = Kind::Button; a.button_text = "Open";
            a.held = [] { return !lcs_menu_active(); };
            a.held_note = "Only from the pause menu.";
            a.take = [tab](int) { pause_menu_open_game_tab(tab); frontend_options_close(); };
            opts::declare(a);
        };
        game_page("gamepage.Display", "Game display settings", "Brightness, subtitles, radar and HUD modes.", 7);
        game_page("gamepage.Controls", "Game controls", "The game's control layouts, for a controller.", 5);
        game_page("gamepage.Language", "Language", "The game's language.", 9);
    }

    s = {};
    s.id = "display.AutoStateMinutes"; s.tab = "Game"; s.group = "Save states"; s.title = "Automatic state";
    s.about = "Saves a state every few minutes into Auto 1-3, replacing the oldest. The pause menu's States page loads them.";
    s.kind = Kind::List; s.fallback = 0;
    s.entries = {{"Off", 0}, {"Every 2 minutes", 2}, {"Every 5 minutes", 5}, {"Every 10 minutes", 10}, {"Every 15 minutes", 15}};
    s.get_value = [] { return static_cast<int>(config().display.auto_state_minutes); };
    s.store = [](int v) { host_settings_write("display", "AutoStateMinutes", std::to_string(v)); };
    s.take = [](int v) { lcs_update_configuration([v](LcsConfiguration &c) { c.display.auto_state_minutes = static_cast<std::uint32_t>(v); }); };
    opts::declare(s);

    s = {};
    s.id = "audio.Volume"; s.tab = "Game"; s.group = "Sound"; s.title = "Master volume";
    s.about = "All game audio. Above 100 boosts it and can distort."; s.kind = Kind::Number; s.lo = 0; s.hi = 200;
    s.fallback = 100; s.shown_as = "%d%%"; s.when = When::NextLaunch;
    s.get_value = [] { return static_cast<int>(config().audio.volume); };
    s.store = persist_int("audio", "Volume");
    opts::declare(s);

}

bool initialize(ID3D12Device *device, ID3D12CommandQueue *queue, HWND window, DXGI_FORMAT format, UINT frames) {
    D3D12_DESCRIPTOR_HEAP_DESC desc{};
    desc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV;
    desc.NumDescriptors = kHeapSize;
    desc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE;
    if (FAILED(device->CreateDescriptorHeap(&desc, IID_PPV_ARGS(&g_heap)))) return false;
    g_heap_stride = device->GetDescriptorHandleIncrementSize(D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV);

    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO &io = ImGui::GetIO();
    io.IniFilename = nullptr;
    io.LogFilename = nullptr;
    // The window belongs to the game thread: leave the cursor to window_proc.
    io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange;
    ImGui::StyleColorsDark();
    // The menu's font stays the default: this one is added after it.
    g_regular_font = io.Fonts->AddFontDefault();
    std::error_code font_error;
    const char *const regular = "C:/Windows/Fonts/arialbd.ttf";
    if (std::filesystem::is_regular_file(regular, font_error)) {
        if (ImFont *loaded = io.Fonts->AddFontFromFileTTF(regular)) g_regular_font = loaded;
    }
    if (!ImGui_ImplWin32_Init(window)) return false;
    ImGui_ImplDX12_InitInfo info;
    info.Device = device;
    info.CommandQueue = queue;
    info.NumFramesInFlight = static_cast<int>(frames);
    info.RTVFormat = format;
    info.DSVFormat = DXGI_FORMAT_UNKNOWN;
    info.SrvDescriptorHeap = g_heap.Get();
    info.SrvDescriptorAllocFn = alloc_descriptor;
    info.SrvDescriptorFreeFn = free_descriptor;
    if (!ImGui_ImplDX12_Init(&info)) return false;
    register_settings();
    return true;
}

// LCS_TEST_MENU=1: opens the menu after 25 s and steps through its pages, for screenshots in unattended runs.
void test_menu_step() {
    static const bool enabled = [] {
        const char *text = std::getenv("LCS_TEST_MENU");
        return text != nullptr && *text == '1';
    }();
    if (!enabled) return;
    static const auto start = std::chrono::steady_clock::now();
    const double seconds = std::chrono::duration<double>(std::chrono::steady_clock::now() - start).count();
    if (seconds < 25.0) return;
    if (!host_settings_open()) host_settings_handle(HostSettingsKey::Toggle);
    static int shown = -1;
    const auto pages = opts::tabs();
    const int page = static_cast<int>((seconds - 25.0) / 6.0) % static_cast<int>(pages.size());
    if (page != shown) {
        shown = page;
        opts::open_menu(pages[static_cast<std::size_t>(page)]);
    }
}

bool is_input_message(UINT message) {
    return (message >= WM_MOUSEFIRST && message <= WM_MOUSELAST) || (message >= WM_KEYFIRST && message <= WM_KEYLAST) ||
           message == WM_KILLFOCUS || message == WM_SETFOCUS || message == WM_MOUSELEAVE || message == WM_INPUTLANGCHANGE;
}

}  // namespace

ImFont *imgui_menu_regular_font() noexcept { return g_regular_font; }

ImTextureID imgui_menu_upload_rgba(std::uint32_t width, std::uint32_t height, const std::vector<std::byte> &rgba) noexcept {
    if (g_device == nullptr || g_heap == nullptr || rgba.size() < static_cast<std::size_t>(width) * height * 4u) return ImTextureID{};
    const D3D12_HEAP_PROPERTIES heap = g_device->GetCustomHeapProperties(0u, D3D12_HEAP_TYPE_UPLOAD);
    D3D12_RESOURCE_DESC desc{};
    desc.Dimension = D3D12_RESOURCE_DIMENSION_TEXTURE2D;
    desc.Width = width;
    desc.Height = height;
    desc.DepthOrArraySize = 1u;
    desc.MipLevels = 1u;
    desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    desc.SampleDesc.Count = 1u;
    desc.Layout = D3D12_TEXTURE_LAYOUT_UNKNOWN;
    ComPtr<ID3D12Resource> texture;
    if (FAILED(g_device->CreateCommittedResource(&heap, D3D12_HEAP_FLAG_NONE, &desc, D3D12_RESOURCE_STATE_COMMON, nullptr, IID_PPV_ARGS(&texture)))) return ImTextureID{};
    if (FAILED(texture->Map(0u, nullptr, nullptr))) return ImTextureID{};
    const HRESULT written = texture->WriteToSubresource(0u, nullptr, rgba.data(), width * 4u, width * height * 4u);
    texture->Unmap(0u, nullptr);
    if (FAILED(written)) return ImTextureID{};
    D3D12_CPU_DESCRIPTOR_HANDLE cpu{};
    D3D12_GPU_DESCRIPTOR_HANDLE gpu{};
    alloc_descriptor(nullptr, &cpu, &gpu);
    g_device->CreateShaderResourceView(texture.Get(), nullptr, cpu);
    static std::vector<ComPtr<ID3D12Resource>> kept;
    kept.push_back(std::move(texture));
    return static_cast<ImTextureID>(gpu.ptr);
}

bool imgui_menu_note_message(HWND window, UINT message, WPARAM wparam, LPARAM lparam) noexcept {
    if ((!host_settings_open() && !frontend_menu_active() && !pause_menu_visible()) || !is_input_message(message)) return false;
    try {
        std::lock_guard lock(g_queue_mutex);
        // A menu that is not drawing cannot drain this.
        if (g_queue.size() < 4096u) g_queue.push_back({window, message, wparam, lparam});
    } catch (...) {
    }
    return (message >= WM_KEYFIRST && message <= WM_KEYLAST) || (message >= WM_MOUSEFIRST && message <= WM_MOUSELAST);
}

void imgui_menu_record(ID3D12Device *device, ID3D12CommandQueue *queue, ID3D12GraphicsCommandList *list, HWND window,
                       DXGI_FORMAT format, UINT frames_in_flight) noexcept {
    if (g_failed) return;
    static const bool test_enabled = std::getenv("LCS_TEST_MENU") != nullptr;
    const bool open = host_settings_open();
    const bool frontend = frontend_menu_active() || lcs_menu_active();
    if (!open && !g_was_open && !test_enabled && !frontend) return;
    g_device = device;
    if (!g_initialized) {
        if (!initialize(device, queue, window, format, frames_in_flight)) {
            g_failed = true;
            return;
        }
        g_initialized = true;
    }

    std::vector<QueuedMessage> messages;
    {
        std::lock_guard lock(g_queue_mutex);
        messages.swap(g_queue);
    }
    for (const QueuedMessage &m : messages) ImGui_ImplWin32_WndProcHandler(m.window, m.message, m.wparam, m.lparam);

    ImGui_ImplDX12_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();
    test_menu_step();
    const bool open_now = host_settings_open();
    opts::keys_captured = g_capturing_action >= 0;
    if (open_now || frontend_options_is_open()) {
        poll_key_capture();
    } else {
        g_capturing_action = -1;
    }
    if (open_now && !g_was_open) opts::open_menu({});
    if (!open_now && g_was_open) opts::close_menu();
    frontend_menu_draw();
    g_was_open = open_now;
    if (open_now && !opts::draw_menu()) {
        host_settings_handle(HostSettingsKey::Close);
        opts::close_menu();
        g_was_open = false;
    }
    ImGui::Render();
    ID3D12DescriptorHeap *heaps[]{g_heap.Get()};
    list->SetDescriptorHeaps(1u, heaps);
    ImGui_ImplDX12_RenderDrawData(ImGui::GetDrawData(), list);
}

}  // namespace lcs

#endif
