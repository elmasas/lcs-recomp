#include "lcs_imgui_menu.hpp"

#if defined(_WIN32)

#include "display_window.hpp"
#include "lcs_display_menu.hpp"
#include "lcs_frontend_menu.hpp"
#include "lcs_menu.hpp"
#include "lcs_frontend_music.hpp"
#include "lcs_frontend_options.hpp"
#include "lcs_pause_menu.hpp"
#include "lcs_radio_wheel.hpp"
#include "lcs_render_config.hpp"
#include "lcs_texture_pack.hpp"
#include "lcs_trainer.hpp"
#include "vcs/settings.h"
#include "vcs/settings_menu.h"

#include "imgui.h"
#include "backends/imgui_impl_dx12.h"
#include "backends/imgui_impl_win32.h"

#include <wrl/client.h>

#include <algorithm>
#include <chrono>
#include <filesystem>
#include <cmath>
#include <cstdlib>
#include <mutex>
#include <string>
#include <vector>

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND, UINT, WPARAM, LPARAM);

namespace lcs {
namespace {

using Microsoft::WRL::ComPtr;
using settings::Apply;
using settings::Choice;
using settings::Spec;
using settings::Type;

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
constexpr UINT kHeapSize = 64u;
ImFont *g_regular_font = nullptr;

const LcsConfiguration &config() { return lcs_render_configuration(); }

void alloc_descriptor(ImGui_ImplDX12_InitInfo *, D3D12_CPU_DESCRIPTOR_HANDLE *cpu, D3D12_GPU_DESCRIPTOR_HANDLE *gpu) {
    const UINT index = g_heap_next++ % kHeapSize;
    *cpu = g_heap->GetCPUDescriptorHandleForHeapStart();
    *gpu = g_heap->GetGPUDescriptorHandleForHeapStart();
    cpu->ptr += static_cast<SIZE_T>(index) * g_heap_stride;
    gpu->ptr += static_cast<UINT64>(index) * g_heap_stride;
}

void free_descriptor(ImGui_ImplDX12_InitInfo *, D3D12_CPU_DESCRIPTOR_HANDLE, D3D12_GPU_DESCRIPTOR_HANDLE) {}

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
    Spec s;
    // ---- Display
    s = {};
    s.key = "display.mode"; s.page = "Display"; s.section = "Window"; s.label = "Window size";
    s.help = "The size of the game's window. Desktop follows your monitor."; s.type = Type::Choice; s.defaultValue = 0;
    s.choices = {{"Desktop", 0}, {"960x544", 2}, {"1440x816", 3}, {"1920x1088", 4}, {"2880x1632", 6}, {"3840x2176", 8}};
    s.apply = Apply::Restart;
    s.read = [] {
        const auto &d = config().display;
        return d.resolution_mode == DisplayResolutionMode::Desktop ? 0
             : d.resolution_mode == DisplayResolutionMode::Scale ? static_cast<int>(d.scale) : -1;
    };
    s.persist = [](int v) {
        host_settings_write("display", "ResolutionMode", v == 0 ? "Desktop" : "Scale");
        if (v != 0) host_settings_write("display", "Scale", std::to_string(v));
    };
    settings::add(s);

    s = {};
    s.key = "display.Fullscreen"; s.page = "Display"; s.section = "Window"; s.label = "Fullscreen";
    s.help = "Borderless fullscreen. F11 also toggles it."; s.type = Type::Toggle;
    s.read = [] { return config().display.fullscreen ? 1 : 0; };
    s.persist = persist_bool("display", "Fullscreen");
    s.onChange = [](int v) {
        lcs_set_fullscreen_setting(v != 0);
        display_window_request_fullscreen(v != 0);
    };
    settings::add(s);

    s = {};
    s.key = "display.VSync"; s.page = "Display"; s.section = "Window"; s.label = "VSync";
    s.help = "Waits for the monitor's refresh. Prevents tearing."; s.type = Type::Toggle; s.defaultValue = 1;
    s.read = [] { return config().display.vsync ? 1 : 0; };
    s.persist = persist_bool("display", "VSync");
    s.onChange = [](int v) { lcs_update_configuration([v](LcsConfiguration &c) { c.display.vsync = v != 0; }); };
    settings::add(s);

    s = {};
    s.key = "display.ShowFPS"; s.page = "Display"; s.section = "Window"; s.label = "FPS counter";
    s.help = "Shows the frame rate in a corner of the screen."; s.type = Type::Toggle;
    s.read = [] { return config().display.show_fps ? 1 : 0; };
    s.persist = persist_bool("display", "ShowFPS");
    s.onChange = [](int v) { lcs_set_show_fps(v != 0); };
    settings::add(s);

    s = {};
    s.key = "widescreen.Enabled"; s.page = "Display"; s.section = "Picture"; s.label = "Widescreen";
    s.help = "Widens the view to the window's shape instead of the PSP's."; s.type = Type::Toggle; s.defaultValue = 1;
    s.apply = Apply::Restart;
    s.read = [] { return config().widescreen.enabled ? 1 : 0; };
    s.persist = persist_bool("widescreen", "Enabled");
    settings::add(s);

    s = {};
    s.key = "display.MainMenu"; s.page = "Display"; s.section = "Main menu"; s.label = "Show the main menu";
    s.help = "At launch. Off goes straight into your save, or a new game, after the logos and the title movie.";
    s.type = Type::Toggle; s.defaultValue = 1;
    s.read = [] { return config().display.skip_main_menu ? 0 : 1; };
    s.persist = [](int v) { host_settings_write("display", "SkipMainMenu", v != 0 ? "false" : "true"); };
    s.onChange = [](int v) { lcs_update_configuration([v](LcsConfiguration &c) { c.display.skip_main_menu = v == 0; }); };
    s.apply = Apply::Restart;
    settings::add(s);

    {
        static const std::array<const char *, 4> tracks = {"intro", "finale", "ending", "off"};
        Spec m;
        m.key = "display.MenuMusic"; m.page = "Display"; m.section = "Main menu"; m.label = "Music";
        m.help = "From your game's files. Follows the master volume.";
        m.type = Type::Choice; m.defaultValue = 0;
        m.choices = {{"Opening theme", 0}, {"Finale", 1}, {"Ending", 2}, {"Off", 3}};
        m.read = [] {
            const std::string &wanted = config().display.menu_music;
            for (std::size_t i = 0u; i < tracks.size(); ++i) {
                if (wanted == tracks[i]) return static_cast<int>(i);
            }
            return 0;
        };
        const auto stored = [](int v) { return std::string(tracks[static_cast<std::size_t>(std::clamp(v, 0, 3))]); };
        m.persist = [stored](int v) { host_settings_write("display", "MenuMusic", stored(v)); };
        m.onChange = [stored](int v) {
            lcs_update_configuration([&](LcsConfiguration &c) { c.display.menu_music = stored(v); });
            frontend_music_select(stored(v));
        };
        settings::add(m);
    }
    {
        Spec a;
        a.key = "display.MenuArt"; a.page = "Display"; a.section = "Main menu"; a.label = "Painting";
        a.help = "Your own images, from the game folder's MENUART, then the game's. Random uses yours if you have any, among those that suit the window's shape.";
        a.type = Type::Choice; a.defaultValue = 0;
        a.dynamicChoices = [] {
            std::vector<Choice> list{{"Random each start", 0}};
            int index = 0;
            for (const FrontendArtChoice &choice : frontend_art_choices()) list.push_back({choice.label, ++index});
            return list;
        };
        a.read = [] {
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
        a.persist = [stored](int v) { host_settings_write("display", "MenuArt", stored(v)); };
        a.onChange = [stored](int v) { lcs_update_configuration([&](LcsConfiguration &c) { c.display.menu_art = stored(v); }); };
        a.apply = Apply::Restart;
        settings::add(a);

        Spec q;
        q.key = "display.MenuArtQuality"; q.page = "Display"; q.section = "Main menu"; q.label = "Painting quality";
        q.help = "For the game's own paintings. Automatic uses your texture pack's version when it has one, and otherwise xBRZ, which keeps the lines sharp.";
        q.type = Type::Choice; q.defaultValue = 0;
        q.choices = {{"Automatic", 0}, {"xBRZ", 1}, {"Smooth", 2}};
        q.read = [] {
            const std::string &wanted = config().display.menu_art_quality;
            return wanted == "xbrz" ? 1 : wanted == "smooth" ? 2 : 0;
        };
        const auto quality = [](int v) { return std::string(v == 1 ? "xbrz" : v == 2 ? "smooth" : "auto"); };
        q.persist = [quality](int v) { host_settings_write("display", "MenuArtQuality", quality(v)); };
        q.onChange = [quality](int v) { lcs_update_configuration([&](LcsConfiguration &c) { c.display.menu_art_quality = quality(v); }); };
        q.apply = Apply::Restart;
        settings::add(q);
    }

    s = {};
    s.key = "display.HudAtEdges"; s.page = "Display"; s.section = "Picture"; s.label = "HUD at screen edges";
    s.help = "On a wide screen the HUD normally stays in the middle 16:9. This moves it out to the sides.";
    s.type = Type::Toggle; s.defaultValue = 0;
    s.read = [] { return config().display.hud_at_edges ? 1 : 0; };
    s.persist = persist_bool("display", "HudAtEdges");
    s.onChange = [](int v) { lcs_update_configuration([v](LcsConfiguration &c) { c.display.hud_at_edges = v != 0; }); };
    settings::add(s);

    s = {};
    s.key = "display.HudScale"; s.page = "Display"; s.section = "Picture"; s.label = "HUD size";
    s.help = "The size of the radar, weapon, health and money."; s.type = Type::Integer; s.min = 25; s.max = 100;
    s.defaultValue = 75; s.format = "%d%%"; s.apply = Apply::Restart;
    s.read = [] { return static_cast<int>(std::lround(config().display.hud_scale * 100.0f)); };
    s.persist = persist_hundredths("display", "HudScale");
    settings::add(s);

    s = {};
    s.key = "display.ButtonPrompts"; s.page = "Display"; s.section = "Picture"; s.label = "Button icons";
    s.help = "Xbox and keyboard icons need the packs the launcher builds from your disc."; s.type = Type::Choice;
    s.choices = {{"PlayStation", 0}, {"Xbox", 1}, {"Keyboard and mouse", 2}}; s.apply = Apply::Restart;
    s.read = [] {
        const std::string &style = config().display.prompt_style;
        return style == "xbox" ? 1 : style == "kb" ? 2 : 0;
    };
    s.persist = [](int v) { host_settings_write("display", "ButtonPrompts", v == 1 ? "xbox" : v == 2 ? "kb" : "Original"); };
    settings::add(s);

    // ---- Graphics
    s = {};
    s.key = "rendering.resolution"; s.page = "Graphics"; s.section = "Quality"; s.label = "Internal resolution";
    s.help = "What the game renders at. Higher is sharper and heavier. Desktop matches your monitor.";
    s.type = Type::Choice; s.defaultValue = 3; s.apply = Apply::Restart;
    s.choices = {{"Desktop", 0},    {"480x272", 1},   {"960x544", 2},   {"1440x816", 3}, {"1920x1088", 4},
                 {"2400x1360", 5}, {"2880x1632", 6}, {"3360x1904", 7}, {"3840x2176", 8}};
    s.read = [] {
        const auto &r = config().rendering;
        return r.internal_resolution_mode == InternalResolutionMode::Desktop ? 0
             : r.internal_resolution_mode == InternalResolutionMode::Scale ? static_cast<int>(r.internal_scale) : -1;
    };
    s.persist = [](int v) {
        host_settings_write("rendering", "InternalResolutionMode", v == 0 ? "Desktop" : "Scale");
        if (v != 0) host_settings_write("rendering", "InternalScale", std::to_string(v));
    };
    settings::add(s);

    s = {};
    s.key = "rendering.MSAA"; s.page = "Graphics"; s.section = "Quality"; s.label = "Anti-aliasing (MSAA)";
    s.help = "Smooths jagged edges. Higher is heavier on the GPU."; s.type = Type::Choice; s.defaultValue = 1;
    s.choices = {{"Off", 1}, {"2x", 2}, {"4x", 4}, {"8x", 8}}; s.apply = Apply::Restart;
    s.read = [] { return static_cast<int>(config().rendering.msaa); };
    s.persist = persist_int("rendering", "MSAA");
    settings::add(s);

    s = {};
    s.key = "rendering.AnisotropicFiltering"; s.page = "Graphics"; s.section = "Quality"; s.label = "Anisotropic filtering";
    s.help = "Keeps textures sharp at shallow angles, such as roads."; s.type = Type::Choice; s.defaultValue = 1;
    s.choices = {{"Off", 1}, {"2x", 2}, {"4x", 4}, {"8x", 8}, {"16x", 16}}; s.apply = Apply::Restart;
    s.read = [] { return static_cast<int>(config().rendering.anisotropic_filtering); };
    s.persist = persist_int("rendering", "AnisotropicFiltering");
    settings::add(s);

    s = {};
    s.key = "rendering.TextureLodBias"; s.page = "Graphics"; s.section = "Quality"; s.label = "Texture sharpness";
    s.help = "Negative keeps distant textures sharper, but they can shimmer."; s.type = Type::Integer; s.min = -8; s.max = 8;
    s.apply = Apply::Restart;
    s.read = [] { return static_cast<int>(std::lround(config().rendering.texture_lod_bias)); };
    s.persist = persist_int("rendering", "TextureLodBias");
    settings::add(s);

    s = {};
    s.key = "rendering.ViewDistance"; s.page = "Graphics"; s.section = "World"; s.label = "View distance";
    s.help = "How far the world draws. 1 is the original, and 2 and up also use detailed scenery from nearby sectors.";
    s.type = Type::Choice; s.defaultValue = 100;
    s.choices = {{"1 (original)", 100}, {"1.25", 125}, {"1.5", 150}, {"1.75", 175}, {"2", 200}, {"2.5", 250}, {"3", 300}, {"4", 400}};
    s.read = [] { return static_cast<int>(std::lround(view_distance_scale() * 100.0f)); };
    s.persist = persist_hundredths("rendering", "ViewDistance");
    s.onChange = [](int v) { lcs_set_view_distance(static_cast<float>(v) / 100.0f); };
    settings::add(s);

    s = {};
    s.key = "rendering.TexturePack"; s.page = "Graphics"; s.section = "Textures"; s.label = "Texture pack";
    s.help = "PPSSPP texture packs from the game's TEXTURES folder. Applies at once.";
    s.type = Type::Choice; s.defaultValue = 0;
    s.dynamicChoices = [] {
        std::vector<Choice> list{{"Original", 0}};
        int index = 0;
        for (const std::string &name : texture_pack_names()) list.push_back({name, ++index});
        return list;
    };
    s.read = [] { return texture_pack_current_index(); };
    s.persist = [](int v) {
        const auto &names = texture_pack_names();
        host_settings_write("rendering", "TexturePack",
                            v > 0 && v <= static_cast<int>(names.size()) ? names[static_cast<std::size_t>(v - 1)] : std::string("Original"));
    };
    s.onChange = [](int v) { texture_pack_select(v); };
    settings::add(s);

    s = {};
    s.key = "rendering.SecondTexturePack"; s.page = "Graphics"; s.section = "Textures"; s.label = "Second texture pack";
    s.help = "Under the first: it fills in what the first doesn't replace. Applies at once.";
    s.type = Type::Choice; s.defaultValue = 0;
    s.dynamicChoices = [] {
        std::vector<Choice> list{{"None", 0}};
        int index = 0;
        for (const std::string &name : texture_pack_names()) list.push_back({name, ++index});
        return list;
    };
    s.read = [] { return texture_pack_second_index(); };
    s.persist = [](int v) {
        const auto &names = texture_pack_names();
        host_settings_write("rendering", "SecondTexturePack",
                            v > 0 && v <= static_cast<int>(names.size()) ? names[static_cast<std::size_t>(v - 1)] : std::string("None"));
    };
    s.onChange = [](int v) { texture_pack_select_second(v); };
    settings::add(s);

    const auto lights_off = [] { return !config().rendering.lod_lights; };
    s = {};
    s.key = "rendering.LodLights"; s.page = "Graphics"; s.section = "Distant lights"; s.label = "Distant street lights";
    s.help = "Street lights and traffic signals visible from far away, from Project2DFX by ThirteenAG.";
    s.type = Type::Toggle; s.defaultValue = 1;
    s.read = [] { return config().rendering.lod_lights ? 1 : 0; };
    s.persist = persist_bool("rendering", "LodLights");
    s.onChange = [](int v) { lcs_update_configuration([v](LcsConfiguration &c) { c.rendering.lod_lights = v != 0; }); };
    settings::add(s);

    s = {};
    s.key = "rendering.LodLightsRange"; s.page = "Graphics"; s.section = "Distant lights"; s.label = "Range";
    s.help = "How far away the lights show."; s.type = Type::Choice; s.defaultValue = 500;
    s.choices = {{"250", 250}, {"500", 500}, {"750", 750}, {"1000", 1000}, {"1500", 1500}, {"2000", 2000}};
    s.read = [] { return static_cast<int>(config().rendering.lod_lights_range); };
    s.persist = persist_int("rendering", "LodLightsRange");
    s.onChange = [](int v) {
        lcs_update_configuration([v](LcsConfiguration &c) { c.rendering.lod_lights_range = static_cast<float>(v); });
    };
    s.locked = lights_off; s.lockedNote = "Turn the distant lights on to change this.";
    settings::add(s);

    s = {};
    s.key = "rendering.LodLightsRadius"; s.page = "Graphics"; s.section = "Distant lights"; s.label = "Size";
    s.help = "How big the lights are."; s.type = Type::Integer; s.min = 50; s.max = 300; s.defaultValue = 150;
    s.format = "%d%%";
    s.read = [] { return static_cast<int>(std::lround(config().rendering.lod_lights_radius * 100.0f)); };
    s.persist = persist_hundredths("rendering", "LodLightsRadius");
    s.onChange = [](int v) {
        lcs_update_configuration([v](LcsConfiguration &c) { c.rendering.lod_lights_radius = static_cast<float>(v) / 100.0f; });
    };
    s.locked = lights_off; s.lockedNote = "Turn the distant lights on to change this.";
    settings::add(s);

    // ---- Controls
    s = {};
    s.key = "controls.MouseSensitivity"; s.page = "Controls"; s.section = "Camera"; s.label = "Mouse sensitivity";
    s.help = "How fast the mouse turns the camera."; s.type = Type::Integer; s.min = 1; s.max = 100; s.defaultValue = 12;
    s.read = [] { return static_cast<int>(config().controls.mouse_sensitivity); };
    s.persist = persist_int("controls", "MouseSensitivity");
    s.onChange = [](int v) {
        lcs_update_configuration([v](LcsConfiguration &c) { c.controls.mouse_sensitivity = static_cast<std::uint32_t>(v); });
    };
    settings::add(s);

    s = {};
    s.key = "controls.CameraSmoothing"; s.page = "Controls"; s.section = "Camera"; s.label = "Camera smoothing";
    s.help = "Softens camera motion. 0 follows the input directly."; s.type = Type::Integer; s.min = 0; s.max = 100;
    s.defaultValue = 50;
    s.read = [] { return static_cast<int>(config().controls.camera_smoothing); };
    s.persist = persist_int("controls", "CameraSmoothing");
    s.onChange = [](int v) {
        lcs_update_configuration([v](LcsConfiguration &c) { c.controls.camera_smoothing = static_cast<std::uint32_t>(v); });
    };
    settings::add(s);

    s = {};
    s.key = "controls.InvertCameraY"; s.page = "Controls"; s.section = "Camera"; s.label = "Invert vertical camera";
    s.help = "Moving up looks down."; s.type = Type::Toggle;
    s.read = [] { return config().controls.invert_camera_y ? 1 : 0; };
    s.persist = persist_bool("controls", "InvertCameraY");
    s.onChange = [](int v) { lcs_update_configuration([v](LcsConfiguration &c) { c.controls.invert_camera_y = v != 0; }); };
    settings::add(s);

    s = {};
    s.key = "controls.AutoAim"; s.page = "Controls"; s.section = "Aiming"; s.label = "Auto-aim";
    s.help = "Locks on to targets. Off aims freely with the camera.";
    s.type = Type::Toggle; s.defaultValue = 1;
    s.read = [] { return config().controls.auto_aim ? 1 : 0; };
    s.persist = persist_bool("controls", "AutoAim");
    s.onChange = [](int v) { lcs_update_configuration([v](LcsConfiguration &c) { c.controls.auto_aim = v != 0; }); };
    settings::add(s);

    for (int i = 0; i < static_cast<int>(BindAction::Count); ++i) {
        const auto action = static_cast<BindAction>(i);
        Spec a;
        a.key = std::string("controls.key.") + bind_action_name(action);
        a.page = "Controls"; a.section = "Keyboard and mouse"; a.label = bind_action_name(action);
        a.help = "Click, then press the key or mouse button to use instead. Several keys for one action: edit LCSNative.ini.";
        a.type = Type::Action;
        a.buttonText = [action] { return binding_label(action); };
        a.onChange = [i](int) {
            g_capturing_action = i;
            g_capture_waits_for_release = true;
        };
        settings::add(a);
    }

    // ---- Game
    s = {};
    s.key = "timing.FrameRate"; s.page = "Game"; s.section = "Timing"; s.label = "Frame rate";
    s.help = "30 is the PSP's rate and 60 is the tested one. Above 60 is experimental: physics and missions are not "
             "fully tested there. With VSync on, don't go above your monitor's refresh rate.";
    s.type = Type::Choice; s.defaultValue = 60;
    s.choices = {{"30", 30}, {"60", 60}, {"74 (experimental)", 74}, {"75 (experimental)", 75},
                 {"90 (experimental)", 90}, {"100 (experimental)", 100}};
    s.read = [] { return static_cast<int>(config().timing.frame_rate); };
    s.persist = persist_int("timing", "FrameRate");
    s.onChange = [](int v) { lcs_set_frame_rate(static_cast<std::uint32_t>(v)); };
    settings::add(s);

    s = {};
    s.key = "display.ClassicPause"; s.page = "Game"; s.section = "Pause menu"; s.label = "Use the classic pause menu";
    s.help = "The game's own pause menu, instead of this one.";
    s.type = Type::Toggle; s.defaultValue = 0;
    s.read = [] { return config().display.classic_pause ? 1 : 0; };
    s.persist = [](int v) { host_settings_write("display", "ClassicPause", v != 0 ? "true" : "false"); };
    s.onChange = [](int v) { lcs_update_configuration([v](LcsConfiguration &c) { c.display.classic_pause = v != 0; }); };
    settings::add(s);
    {
        const auto game_page = [](const char *key, const char *label, const char *help, int tab) {
            Spec a;
            a.key = key; a.page = "Game"; a.section = "The game's own pages"; a.label = label; a.help = help;
            a.type = Type::Action; a.button = "Open";
            a.locked = [] { return !lcs_menu_active(); };
            a.lockedNote = "Only from the pause menu.";
            a.onChange = [tab](int) { pause_menu_open_game_tab(tab); frontend_options_close(); };
            settings::add(a);
        };
        game_page("gamepage.Display", "Game display settings", "Brightness, subtitles, radar and HUD modes.", 7);
        game_page("gamepage.Controls", "Game controls", "The game's control layouts, for a controller.", 5);
        game_page("gamepage.Language", "Language", "The game's language.", 9);
    }

    s = {};
    s.key = "display.RadioWheelSlowMotion"; s.page = "Game"; s.section = "Radio"; s.label = "Slow motion in the radio wheel";
    s.help = "Slows the game while the radio wheel is open. Hold Tab, or the right stick's button, in a vehicle.";
    s.type = Type::Toggle; s.defaultValue = 1;
    s.read = [] { return config().display.radio_wheel_slow_motion ? 1 : 0; };
    s.persist = [](int v) { host_settings_write("display", "RadioWheelSlowMotion", v != 0 ? "true" : "false"); };
    s.onChange = [](int v) { lcs_update_configuration([v](LcsConfiguration &c) { c.display.radio_wheel_slow_motion = v != 0; }); };
    settings::add(s);

    s = {};
    s.key = "display.Gps"; s.page = "Game"; s.section = "GPS"; s.label = "GPS line on the radar";
    s.help = "In a vehicle, a line along the roads to your marker or the mission's objective.";
    s.type = Type::Toggle; s.defaultValue = 1;
    s.read = [] { return config().display.gps ? 1 : 0; };
    s.persist = [](int v) { host_settings_write("display", "Gps", v != 0 ? "true" : "false"); };
    s.onChange = [](int v) { lcs_update_configuration([v](LcsConfiguration &c) { c.display.gps = v != 0; }); };
    settings::add(s);

    s = {};
    s.key = "display.AutoStateMinutes"; s.page = "Game"; s.section = "Save states"; s.label = "Automatic state";
    s.help = "Saves a state every few minutes into Auto 1-3, replacing the oldest. The pause menu's States page loads them.";
    s.type = Type::Choice; s.defaultValue = 5;
    s.choices = {{"Off", 0}, {"Every 2 minutes", 2}, {"Every 5 minutes", 5}, {"Every 10 minutes", 10}, {"Every 15 minutes", 15}};
    s.read = [] { return static_cast<int>(config().display.auto_state_minutes); };
    s.persist = [](int v) { host_settings_write("display", "AutoStateMinutes", std::to_string(v)); };
    s.onChange = [](int v) { lcs_update_configuration([v](LcsConfiguration &c) { c.display.auto_state_minutes = static_cast<std::uint32_t>(v); }); };
    settings::add(s);

    s = {};
    s.key = "display.GpsWidth"; s.page = "Game"; s.section = "GPS"; s.label = "GPS line width";
    s.help = "How thick the line is."; s.type = Type::Integer; s.min = 1; s.max = 6; s.defaultValue = 2;
    s.read = [] { return static_cast<int>(config().display.gps_width); };
    s.persist = [](int v) { host_settings_write("display", "GpsWidth", std::to_string(v)); };
    s.onChange = [](int v) { lcs_update_configuration([v](LcsConfiguration &c) { c.display.gps_width = static_cast<std::uint32_t>(v); }); };
    settings::add(s);

    s = {};
    s.key = "audio.Volume"; s.page = "Game"; s.section = "Sound"; s.label = "Master volume";
    s.help = "All game audio. Above 100 boosts it and can distort."; s.type = Type::Integer; s.min = 0; s.max = 200;
    s.defaultValue = 100; s.format = "%d%%"; s.apply = Apply::Restart;
    s.read = [] { return static_cast<int>(config().audio.volume); };
    s.persist = persist_int("audio", "Volume");
    settings::add(s);

    // ---- Trainer. Features from CheatDevice Remastered by Freakler. Nothing here is saved: every start is the original game.
    const auto action = [](const char *key, const char *page, const char *section, const char *label, const char *button,
                           const char *help, TrainerAction what) {
        Spec a;
        a.key = key; a.page = page; a.section = section; a.label = label; a.button = button; a.help = help;
        a.type = Type::Action;
        a.onChange = [what](int) { trainer_request(what); };
        settings::add(a);
    };
    const auto hold = [](const char *key, const char *page, const char *section, const char *label, const char *help,
                         TrainerToggle what) {
        Spec a;
        a.key = key; a.page = page; a.section = section; a.label = label; a.help = help; a.type = Type::Toggle;
        a.read = [what] { return trainer_toggle(what) ? 1 : 0; };
        a.onChange = [what](int v) { trainer_set_toggle(what, v != 0); };
        settings::add(a);
    };
    const auto button = [](const char *key, const char *page, const char *section, const char *label, const char *text,
                           const char *help, std::function<void(int)> run) {
        Spec a;
        a.key = key; a.page = page; a.section = section; a.label = label; a.button = text; a.help = help;
        a.type = Type::Action;
        a.onChange = std::move(run);
        settings::add(a);
    };

    hold("trainer.god", "Player", "Health", "God mode", "Very high health and armor, and no fire. It doesn't stop every instant death: you still die with a vehicle that blows up around you.", TrainerToggle::GodMode);
    action("trainer.health", "Player", "Health", "Health", "Fill", "The game's health cheat.", TrainerAction::Health);
    action("trainer.armor", "Player", "Health", "Armor", "Fill", "The game's armor cheat.", TrainerAction::Armor);
    action("trainer.money", "Player", "Money", "Money", "Add $250,000", "The game's money cheat.", TrainerAction::Money);
    action("trainer.wantedup", "Player", "Police", "Wanted level", "Raise", "The game's wanted level cheat.", TrainerAction::WantedUp);
    action("trainer.wantedclear", "Player", "Police", "Wanted level", "Clear", "The game's cheat that clears the wanted level.", TrainerAction::WantedClear);
    hold("trainer.ignored", "Player", "Police", "Ignored by everyone", "Peds and police leave you alone.", TrainerToggle::IgnoredByEveryone);
    action("trainer.weaponsa", "Player", "Weapons", "Weapon set 1", "Give", "The game's first weapons cheat.", TrainerAction::WeaponsA);
    action("trainer.weaponsb", "Player", "Weapons", "Weapon set 2", "Give", "The game's second weapons cheat.", TrainerAction::WeaponsB);
    hold("trainer.ammo", "Player", "Weapons", "Unlimited ammo", "Keeps every weapon full, with no reloading.", TrainerToggle::UnlimitedAmmo);
    hold("trainer.invisible", "Player", "Body", "Invisible", "The player isn't drawn.", TrainerToggle::Invisible);
    hold("trainer.sprint", "Player", "Body", "Unlimited sprint", "Never gets tired.", TrainerToggle::UnlimitedSprint);
    hold("trainer.heavy", "Player", "Body", "Heavy player", "Peds and light things can't push you. On foot only.", TrainerToggle::HeavyPlayer);
    hold("trainer.aim", "Player", "Weapons", "Aim of death", "Whoever you aim at dies.", TrainerToggle::AimOfDeath);
    hold("trainer.killaiming", "Player", "Weapons", "Kill whoever aims at you", "Enemies die as soon as they aim at you.", TrainerToggle::KillAimingAtMe);
    hold("trainer.water", "Player", "Body", "Out of the water automatically", "The game puts you back on land when you fall in.", TrainerToggle::WarpOutOfWater);
    const auto number = [](const char *key, const char *page, const char *section, const char *label, const char *help, int lo, int hi, int start, const char *format, TrainerValue what) {
        Spec a;
        a.key = key; a.page = page; a.section = section; a.label = label; a.help = help;
        a.type = Type::Integer; a.min = lo; a.max = hi; a.defaultValue = start; a.format = format;
        a.onChange = [what](int v) { trainer_set_value(what, v); };
        settings::add(a);
    };
    const auto list = [](const char *key, const char *page, const char *section, const char *label, const char *help, std::function<std::vector<std::pair<std::string, int>>()> entries) {
        Spec a;
        a.key = key; a.page = page; a.section = section; a.label = label; a.help = help;
        a.type = Type::Choice; a.defaultValue = -1;
        a.dynamicChoices = [entries = std::move(entries)] {
            std::vector<Choice> out;
            for (const auto &[name, id] : entries()) out.push_back({name, id});
            return out;
        };
        settings::add(a);
    };
    const auto choice_value = [](const char *key) { return settings::value(key); };
    {
        Spec a;
        a.key = "trainer.wanted"; a.page = "Player"; a.section = "Police"; a.label = "Hold wanted level"; a.help = "Keeps it at this level. Never: no police at all.";
        a.type = Type::Choice; a.defaultValue = kTrainerOff;
        a.choices = {{"Off", kTrainerOff}, {"Never wanted", 0}, {"1 star", 1}, {"2 stars", 2}, {"3 stars", 3}, {"4 stars", 4}, {"5 stars", 5}, {"6 stars", 6}};
        a.onChange = [](int v) { trainer_set_value(TrainerValue::WantedLevel, v); };
        settings::add(a);
    }
    number("trainer.maxhealth", "Player", "Health", "Maximum health", "The game's limit for health, in percent.", 100, 255, 100, "%d%%", TrainerValue::MaxHealth);
    number("trainer.maxarmor", "Player", "Health", "Maximum armor", "The game's limit for armor, in percent.", 100, 255, 100, "%d%%", TrainerValue::MaxArmor);
    list("trainer.skin", "Player", "Appearance", "Character model", "Names are the game's model names. Only on foot.", trainer_skins);
    button("trainer.skinapply", "Player", "Appearance", "Change model", "Change", "Changes the player to the chosen model.",
           [choice_value](int) { if (const int v = choice_value("trainer.skin"); v >= 0) trainer_command(TrainerCommand::SetSkin, v); });
    button("trainer.step", "Player", "Body", "Step through wall", "Step", "Moves you 1.2 m forward, through whatever is in front.", [](int) { trainer_command(TrainerCommand::StepThroughWall); });

    s = {};
    s.key = "trainer.vehicle"; s.page = "Vehicles"; s.section = "Spawner"; s.label = "Vehicle";
    s.help = "Names are the game's internal ones, read from your game. Load a game first, or the list is empty.";
    s.type = Type::Choice; s.defaultValue = 0;
    s.dynamicChoices = [] {
        std::vector<Choice> list;
        for (const auto &[name, id] : trainer_vehicles()) list.push_back({name, id});
        return list;
    };
    settings::add(s);
    button("trainer.spawn", "Vehicles", "Spawner", "Spawn and get in", "Spawn", "Creates it where you stand and puts you inside. Only on foot.",
           [](int) { if (const int id = settings::value("trainer.vehicle"); id != 0) trainer_spawn_vehicle(id); });
    hold("trainer.indestructible", "Vehicles", "Current vehicle", "Indestructible", "Your vehicle can't be destroyed while you're in it.", TrainerToggle::IndestructibleVehicle);
    hold("trainer.lock", "Vehicles", "Current vehicle", "Lock doors when inside", "Nobody can pull you out.", TrainerToggle::LockDoors);
    hold("trainer.flip", "Vehicles", "Current vehicle", "Automatic flip over", "Turns the vehicle back over when it lands on its roof.", TrainerToggle::AutoFlip);
    button("trainer.repair", "Vehicles", "Current vehicle", "Repair", "Repair", "Restores its health. Visible damage stays.", [](int) { trainer_command(TrainerCommand::Repair); });
    button("trainer.explode", "Vehicles", "Current vehicle", "Blow up", "Blow up", "Blows up the vehicle you are in, and you with it, even in god mode.", [](int) { trainer_command(TrainerCommand::Explode); });
    {
        Spec a;
        a.key = "trainer.color1"; a.page = "Vehicles"; a.section = "Current vehicle"; a.label = "Primary color"; a.help = "An entry of the game's color table.";
        a.type = Type::Integer; a.min = 0; a.max = 127; a.defaultValue = 0; a.format = "%d";
        a.onChange = [](int v) { trainer_command(TrainerCommand::PrimaryColor, v); };
        settings::add(a);
        a.key = "trainer.color2"; a.label = "Secondary color";
        a.onChange = [](int v) { trainer_command(TrainerCommand::SecondaryColor, v); };
        settings::add(a);
    }
    hold("trainer.heavyveh", "Vehicles", "Handling", "Heavy vehicle", "1000 times its mass: pushes everything away. Its health doesn't change while this is on.", TrainerToggle::HeavyVehicle);
    hold("trainer.brake", "Vehicles", "Handling", "Power brake", "The brake button (Square) stops the vehicle at once.", TrainerToggle::PowerBrake);
    number("trainer.rocket", "Vehicles", "Handling", "Rocket boost", "Extra thrust while accelerating (Cross). 0: off.", 0, 50, 0, "%d", TrainerValue::RocketBoost);
    hold("trainer.walls", "Vehicles", "Handling", "Drive on walls", "Stays on whatever surface is under the wheels.", TrainerToggle::DriveOnWalls);
    hold("trainer.onwater", "Vehicles", "Handling", "Drive on water", "Cars float on the water.", TrainerToggle::DriveOnWater);
    hold("trainer.tank", "Vehicles", "Handling", "Behave like a tank", "Blows up the vehicles it runs into.", TrainerToggle::Tank);
    hold("trainer.hover", "Vehicles", "Handling", "Hover", "Flies: the stick steers, Cross thrusts, the d-pad climbs and dives, Square brakes.", TrainerToggle::Hover);
    hold("trainer.nofall", "Vehicles", "Handling", "Never fall off a bike", "Crashes don't throw you off.", TrainerToggle::NeverFallOffBike);
    hold("trainer.vehwater", "Vehicles", "Handling", "Out of the water automatically", "The game puts the vehicle back on land when it falls in.", TrainerToggle::VehicleOutOfWater);
    hold("trainer.nitro", "Vehicles", "Handling", "N.O.S.", "Circle gives 2 seconds of extra thrust while accelerating, from second gear up.", TrainerToggle::Nitro);
    hold("trainer.untouchable", "Vehicles", "Traffic", "Untouchable", "Vehicles within 15 m are pushed away from you.", TrainerToggle::Untouchable);
    const auto choose = [](const char *key, const char *page, const char *section, const char *label, const char *help, std::vector<Choice> choices, TrainerValue what, int off) {
        Spec a;
        a.key = key; a.page = page; a.section = section; a.label = label; a.help = help;
        a.type = Type::Choice; a.defaultValue = off; a.choices = std::move(choices);
        a.onChange = [what, off](int v) { trainer_set_value(what, v == off ? kTrainerOff : v); };
        settings::add(a);
    };
    choose("trainer.touchveh", "Vehicles", "Traffic", "Touching a vehicle", "What happens to a vehicle when you touch it.",
           {{"Nothing", -1}, {"Float away", 0}, {"Set on fire", 1}, {"Explode", 2}, {"Disappear", 3}, {"Lock its doors", 4}, {"Unlock its doors", 5}, {"Freeze", 6}, {"Unfreeze", 7}},
           TrainerValue::TouchVehicle, -1);
    choose("trainer.radio", "Vehicles", "Traffic", "Radio of other vehicles", "The station every other vehicle plays, so it's already on when you get in.",
           {{"Leave it to the game", -1}, {"Head Radio", 0}, {"Double Clef FM", 1}, {"K-Jah", 2}, {"Rise FM", 3}, {"Lips 106", 4}, {"Radio Del Mundo", 5}, {"MSX 98", 6}, {"Flashback FM", 7}, {"The Liberty Jam", 8}, {"LCFR", 9}, {"Radio off", 10}},
           TrainerValue::DefaultRadio, -1);
    choose("trainer.touchped", "World", "People", "Touching a ped", "What happens to a pedestrian when you touch them.",
           {{"Nothing", -1}, {"Kill", 0}, {"Heal", 1}, {"Freeze", 2}, {"Unfreeze", 3}, {"Disappear", 4}},
           TrainerValue::TouchPed, -1);
    hold("trainer.powerjump", "Player", "Body", "Power jump", "In the air, hold Square to rise and steer with the stick.", TrainerToggle::PowerJump);
    number("trainer.tuneaccel", "Tuning", "Current vehicle's model", "Acceleration", "Applies to this model of vehicle while you are in it, and goes back when you leave.", 25, 500, 100, "%d%%", TrainerValue::TuneAcceleration);
    number("trainer.tunespeed", "Tuning", "Current vehicle's model", "Top speed", "Applies to this model of vehicle while you are in it, and goes back when you leave.", 25, 500, 100, "%d%%", TrainerValue::TuneTopSpeed);
    number("trainer.tunebrake", "Tuning", "Current vehicle's model", "Brakes", "Applies to this model of vehicle while you are in it, and goes back when you leave.", 25, 500, 100, "%d%%", TrainerValue::TuneBrakes);
    number("trainer.tunegrip", "Tuning", "Current vehicle's model", "Grip", "Applies to this model of vehicle while you are in it, and goes back when you leave.", 25, 500, 100, "%d%%", TrainerValue::TuneTraction);
    number("trainer.tunesteer", "Tuning", "Current vehicle's model", "Steering", "Applies to this model of vehicle while you are in it, and goes back when you leave.", 25, 300, 100, "%d%%", TrainerValue::TuneSteering);
    number("trainer.damage", "Tuning", "Weapons", "Damage", "All weapons, for everyone who uses them.", 10, 1000, 100, "%d%%", TrainerValue::WeaponDamagePercent);
    hold("trainer.notraffic", "Vehicles", "Traffic", "Disable traffic", "No new traffic appears.", TrainerToggle::NoTraffic);
    hold("trainer.freezetraffic", "Vehicles", "Traffic", "Freeze traffic", "Other vehicles stop where they are.", TrainerToggle::FreezeTraffic);

    s = {};
    s.key = "trainer.place"; s.page = "Teleport"; s.section = "Locations"; s.label = "Location";
    s.help = "Locations from CheatDevice Remastered."; s.type = Type::Choice; s.defaultValue = 0;
    s.dynamicChoices = [] {
        std::vector<Choice> list;
        for (const auto &[name, id] : trainer_teleports()) list.push_back({name, id});
        return list;
    };
    settings::add(s);
    button("trainer.go", "Teleport", "Locations", "Teleport", "Go", "Takes you there, with your vehicle if you drive one.",
           [](int) { if (const int place = settings::value("trainer.place"); place != 0) trainer_teleport(place); });
    button("trainer.marker", "Teleport", "Map", "Map marker", "Go", "To the marker you set on the map.", [](int) { trainer_command(TrainerCommand::TeleportMarker); });
    button("trainer.objective", "Teleport", "Map", "Next objective", "Go", "To the current mission's next objective.", [](int) { trainer_command(TrainerCommand::TeleportObjective); });
    button("trainer.nextmission", "Teleport", "Map", "Next mission", "Go", "To the next mission's start.", [](int) { trainer_command(TrainerCommand::TeleportMission); });
    button("trainer.save", "Teleport", "Saved position", "Save position", "Save", "Remembers where you are.", [](int) { trainer_save_position(); });
    button("trainer.return", "Teleport", "Saved position", "Return to position", "Return", "Back to the saved position.", [](int) { trainer_return_to_position(); });

    s = {};
    s.key = "trainer.hour"; s.page = "World"; s.section = "Time"; s.label = "Hold time of day";
    s.help = "Stops the clock at this hour."; s.type = Type::Choice; s.defaultValue = -1;
    s.choices = {{"Off", -1}, {"06:00", 6}, {"09:00", 9}, {"12:00", 12}, {"15:00", 15}, {"18:00", 18}, {"21:00", 21}, {"00:00", 0}, {"03:00", 3}};
    s.read = [] { return trainer_hold_hour(); };
    s.onChange = [](int v) { trainer_set_hold_hour(v); };
    settings::add(s);
    s = {};
    s.key = "trainer.speed"; s.page = "World"; s.section = "Time"; s.label = "Game speed";
    s.help = "Slows down or speeds up the whole game."; s.type = Type::Integer; s.min = 10; s.max = 300; s.defaultValue = 100; s.format = "%d%%";
    s.read = [] { return trainer_game_speed(); };
    s.onChange = [](int v) { trainer_set_game_speed(v); };
    settings::add(s);
    hold("trainer.timers", "World", "Time", "Freeze mission timers", "Mission countdowns stop.", TrainerToggle::FreezeMissionTimers);
    action("trainer.sunny", "World", "Weather", "Sunny", "Set", "Forces this weather.", TrainerAction::WeatherSunny);
    action("trainer.extrasunny", "World", "Weather", "Extra sunny", "Set", "Forces this weather.", TrainerAction::WeatherExtraSunny);
    action("trainer.cloudy", "World", "Weather", "Cloudy", "Set", "Forces this weather.", TrainerAction::WeatherCloudy);
    action("trainer.rainy", "World", "Weather", "Rainy", "Set", "Forces this weather.", TrainerAction::WeatherRainy);
    action("trainer.foggy", "World", "Weather", "Foggy", "Set", "Forces this weather.", TrainerAction::WeatherFoggy);
    {
        Spec a;
        a.key = "trainer.gravity"; a.page = "World"; a.section = "Physics"; a.label = "Gravity"; a.help = "100%: the game's. Below 100 you float; below 0 everything falls up.";
        a.type = Type::Integer; a.min = -1100; a.max = 2900; a.defaultValue = 100; a.format = "%d%%";
        a.onChange = [](int v) { trainer_set_value(TrainerValue::GravityPercent, v == 100 ? kTrainerOff : v); };
        settings::add(a);
        Spec w;
        w.key = "trainer.walkspeed"; w.page = "Player"; w.section = "Body"; w.label = "Walking speed"; w.help = "How far your character moves per step. 100%: the game's.";
        w.type = Type::Integer; w.min = 10; w.max = 1000; w.defaultValue = 100; w.format = "%d%%";
        w.onChange = [](int v) { trainer_set_value(TrainerValue::PlayerSpeedPercent, v == 100 ? kTrainerOff : v); };
        settings::add(w);
        Spec p;
        p.key = "trainer.pedspeed"; p.page = "World"; p.section = "People"; p.label = "Pedestrian walking speed"; p.help = "How far everyone else moves per step. 100%: the game's.";
        p.type = Type::Integer; p.min = 10; p.max = 1000; p.defaultValue = 100; p.format = "%d%%";
        p.onChange = [](int v) { trainer_set_value(TrainerValue::PedSpeedPercent, v == 100 ? kTrainerOff : v); };
        settings::add(p);
    }
    hold("trainer.nopeds", "World", "People", "Disable peds", "No new pedestrians appear.", TrainerToggle::NoPeds);
    hold("trainer.hud", "World", "Screen", "Hide HUD", "Radar, weapon, health and money.", TrainerToggle::HideHud);
    hold("trainer.coords", "World", "Screen", "Show coordinates", "Your position, on screen.", TrainerToggle::ShowCoordinates);
    hold("trainer.speedo", "World", "Screen", "Speedometer", "Your vehicle's speed, on screen.", TrainerToggle::ShowSpeed);
    hold("trainer.realclock", "World", "Time", "Real-time clock", "A game minute lasts a real minute.", TrainerToggle::RealTimeClock);
    button("trainer.clocknow", "World", "Time", "Set clock to this computer's", "Set", "Sets the game's time to your local time.", [](int) { trainer_command(TrainerCommand::ClockFromComputer); });
    hold("trainer.freezepeds", "World", "People", "Freeze peds", "Pedestrians stop where they are.", TrainerToggle::FreezePeds);
    button("trainer.killpeds", "World", "People", "Kill everyone nearby", "Kill", "Every pedestrian around you dies.", [](int) { trainer_command(TrainerCommand::KillPeds); });
    {
        Spec a;
        a.key = "trainer.bridge"; a.page = "World"; a.section = "Places"; a.label = "Staunton bridge lift"; a.help = "Holds the lift of the Callahan Point bridge.";
        a.type = Type::Choice; a.defaultValue = kTrainerOff;
        a.choices = {{"The game's", kTrainerOff}, {"Down", 1}, {"Up", 0}};
        a.onChange = [](int v) { trainer_set_value(TrainerValue::BridgeDown, v); };
        settings::add(a);
        Spec w;
        w.key = "trainer.waterlevel"; w.page = "World"; w.section = "Places"; w.label = "Water level"; w.help = "In tenths of a metre. Lowers or floods the city; 0 is the sea's normal height.";
        w.type = Type::Integer; w.min = -1000; w.max = 1500; w.defaultValue = 0; w.format = "%d";
        w.onChange = [](int v) { trainer_set_value(TrainerValue::WaterLevel, v == 0 ? kTrainerOff : v); };
        settings::add(w);
    }

    hold("trainer.freecam", "Camera", "Free camera", "Free camera", "Takes the controls from the player. Stick: look. D-pad: move. Square with the d-pad: rise and sink. L, R: speed. Turn this off to play again.", TrainerToggle::FreeCamera);
    hold("trainer.topdown", "Camera", "View", "Classic top-down view", "The view of the first GTA games.", TrainerToggle::CameraTopDown);
    hold("trainer.centered", "Camera", "View", "Always centered behind the vehicle", "The camera doesn't wander while driving.", TrainerToggle::CameraCentered);
    {
        Spec a;
        a.key = "trainer.fov"; a.page = "Camera"; a.section = "View"; a.label = "Field of view"; a.help = "Off: the game's own. Replaces its view angle while set.";
        a.type = Type::Choice; a.defaultValue = kTrainerOff;
        a.choices = {{"Off", kTrainerOff}, {"50", 50}, {"60", 60}, {"70", 70}, {"80", 80}, {"90", 90}, {"100", 100}, {"110", 110}, {"120", 120}};
        a.onChange = [](int v) { trainer_set_value(TrainerValue::FieldOfView, v); };
        settings::add(a);
    }

    button("trainer.selector", "Missions", "Missions", "Mission selector", "Open", "The game's own developer list of missions. It can break the progress of a save.", [](int) { trainer_command(TrainerCommand::MissionSelector); });
    button("trainer.killtargets", "Missions", "Targets", "Kill or destroy all targets", "Do it", "Everything marked in red on the radar.", [](int) { trainer_command(TrainerCommand::KillTargets); });
    button("trainer.freezetargets", "Missions", "Targets", "Freeze all targets", "Do it", "Everything marked in red stops where it is.", [](int) { trainer_command(TrainerCommand::FreezeTargets); });

    list("trainer.pickup", "Spawn", "Pickups", "Pickup", "Weapons, health, armor, money and more.", trainer_pickups);
    button("trainer.pickupgo", "Spawn", "Pickups", "Spawn in front of you", "Spawn", "Creates the chosen pickup two metres ahead.",
           [choice_value](int) { if (const int v = choice_value("trainer.pickup"); v >= 0) trainer_command(TrainerCommand::SpawnPickup, v); });
    list("trainer.buttoncheat", "Spawn", "The game's button cheats", "Cheat", "Entered as if typed on the pad. The game counts it as cheating in its statistics.", trainer_button_cheats);
    button("trainer.buttoncheatgo", "Spawn", "The game's button cheats", "Enter it", "Enter", "Takes about a second: don't press anything meanwhile.",
           [choice_value](int) { if (const int v = choice_value("trainer.buttoncheat"); v >= 0) trainer_command(TrainerCommand::ButtonCheat, v); });
    button("trainer.clearcheats", "Spawn", "The game's button cheats", "Forget the cheats used", "Clear", "Clears the game's record of cheats used.", [](int) { trainer_command(TrainerCommand::ClearCheatRecord); });
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
    const auto pages = settings::pages();
    const int page = static_cast<int>((seconds - 25.0) / 6.0) % static_cast<int>(pages.size());
    if (page != shown) {
        shown = page;
        ui::openSettingsMenu(pages[static_cast<std::size_t>(page)]);
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
    const std::string overlay = trainer_overlay_text();
    const bool frontend = frontend_menu_active() || radio_wheel_open() || lcs_menu_active();
    if (!open && !g_was_open && !test_enabled && overlay.empty() && !frontend) return;
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
    settings::inputCaptured = g_capturing_action >= 0;
    if (open_now || frontend_options_is_open()) {
        poll_key_capture();
    } else {
        g_capturing_action = -1;
    }
    if (open_now && !g_was_open) ui::openSettingsMenu({});
    if (!open_now && g_was_open) ui::closeSettingsMenu();
    frontend_menu_draw();
    radio_wheel_draw();
    g_was_open = open_now;
    if (open_now && !ui::drawSettingsMenu()) {
        host_settings_handle(HostSettingsKey::Close);
        ui::closeSettingsMenu();
        g_was_open = false;
    }
    if (!overlay.empty()) {
        ImGui::SetNextWindowPos(ImVec2(ImGui::GetIO().DisplaySize.x * 0.5f, 12.0f), ImGuiCond_Always, ImVec2(0.5f, 0.0f));
        ImGui::SetNextWindowBgAlpha(0.45f);
        ImGui::Begin("##trainer-overlay", nullptr,
                     ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoInputs |
                         ImGuiWindowFlags_NoNav | ImGuiWindowFlags_NoFocusOnAppearing);
        ImGui::TextUnformatted(overlay.c_str());
        ImGui::End();
    }
    ImGui::Render();
    ID3D12DescriptorHeap *heaps[]{g_heap.Get()};
    list->SetDescriptorHeaps(1u, heaps);
    ImGui_ImplDX12_RenderDrawData(ImGui::GetDrawData(), list);
}

}  // namespace lcs

#endif
