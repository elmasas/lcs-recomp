#include "lcs_display_menu.hpp"

#include "display_window.hpp"
#include "host_font_5x7.hpp"
#include "lcs_render_config.hpp"

#include <algorithm>
#include <atomic>
#include <cctype>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iterator>
#include <mutex>
#include <string>

namespace lcs {
namespace {

struct ResolutionChoice {
    InternalResolutionMode mode;
    std::uint32_t scale;
    const char *label;
};

constexpr ResolutionChoice kResolutions[] = {
    {InternalResolutionMode::Scale, 1u, "480x272"},
    {InternalResolutionMode::Scale, 2u, "960x544 ~540p"},
    {InternalResolutionMode::Scale, 3u, "1440x816"},
    {InternalResolutionMode::Scale, 4u, "1920x1088 ~1080p"},
    {InternalResolutionMode::Scale, 5u, "2400x1360"},
    {InternalResolutionMode::Scale, 6u, "2880x1632"},
    {InternalResolutionMode::Scale, 7u, "3360x1904"},
    {InternalResolutionMode::Scale, 8u, "3840x2176 ~2160p"},
    {InternalResolutionMode::Desktop, 2u, "Desktop"},
};

constexpr float kDistances[] = {1.0f, 1.25f, 1.5f, 1.75f, 2.0f, 2.5f, 3.0f, 4.0f};
constexpr std::uint32_t kFrameRates[] = {30u, 60u};
constexpr int kRowCount = 5;

std::atomic<bool> g_open{false};  // the window thread toggles it, the render thread reads it
std::mutex g_ini_mutex;
int g_selected = 0;
bool g_applied_ready = false;
InternalResolutionMode g_applied_mode{InternalResolutionMode::Scale};
std::uint32_t g_applied_scale{2u};
std::uint32_t g_applied_width{960u};
std::uint32_t g_applied_height{544u};

void remember_applied_resolution() noexcept {
    if (g_applied_ready) return;
    const RenderingConfiguration &rendering = lcs_render_configuration().rendering;
    g_applied_mode = rendering.internal_resolution_mode;
    g_applied_scale = rendering.internal_scale;
    g_applied_width = rendering.internal_width;
    g_applied_height = rendering.internal_height;
    g_applied_ready = true;
}

int preset_index() noexcept {
    const RenderingConfiguration &rendering = lcs_render_configuration().rendering;
    for (int index = 0; index < static_cast<int>(std::size(kResolutions)); ++index) {
        const ResolutionChoice &choice = kResolutions[index];
        if (choice.mode != rendering.internal_resolution_mode) continue;
        if (choice.mode == InternalResolutionMode::Desktop || choice.scale == rendering.internal_scale)
            return index;
    }
    return -1;
}

bool resolution_pending() noexcept {
    remember_applied_resolution();
    const RenderingConfiguration &rendering = lcs_render_configuration().rendering;
    if (rendering.internal_resolution_mode != g_applied_mode) return true;
    if (rendering.internal_resolution_mode == InternalResolutionMode::Scale &&
        rendering.internal_scale != g_applied_scale)
        return true;
    if (rendering.internal_resolution_mode == InternalResolutionMode::Custom &&
        (rendering.internal_width != g_applied_width || rendering.internal_height != g_applied_height))
        return true;
    return false;
}

void format_resolution_label(char *text, std::size_t text_size) noexcept {
    const int index = preset_index();
    if (index >= 0) {
        std::snprintf(text, text_size, "%s", kResolutions[index].label);
        return;
    }
    const RenderingConfiguration &rendering = lcs_render_configuration().rendering;
    if (rendering.internal_resolution_mode == InternalResolutionMode::PspNative)
        std::snprintf(text, text_size, "480x272");
    else if (rendering.internal_resolution_mode == InternalResolutionMode::Custom)
        std::snprintf(text, text_size, "%ux%u", rendering.internal_width, rendering.internal_height);
    else if (rendering.internal_resolution_mode == InternalResolutionMode::Desktop)
        std::snprintf(text, text_size, "Desktop");
    else
        std::snprintf(text, text_size, "Custom");
}

int distance_index() noexcept {
    const float current = view_distance_scale();
    int closest = 0;
    float best = 100.0f;
    for (int index = 0; index < static_cast<int>(std::size(kDistances)); ++index) {
        const float gap = std::abs(kDistances[index] - current);
        if (gap < best) {
            best = gap;
            closest = index;
        }
    }
    return closest;
}

int step_index(int index, int count, int direction) noexcept {
    int next = index + direction;
    if (next < 0) next = count - 1;
    if (next >= count) next = 0;
    return next;
}

void format_distance(char *text, std::size_t text_size, float value) noexcept {
    char number[16];
    std::snprintf(number, sizeof(number), "%.2f", value);
    char *end = number + std::strlen(number);
    while (end > number && end[-1] == '0') --end;
    if (end > number && end[-1] == '.') --end;
    *end = '\0';
    std::snprintf(text, text_size, "%s", number);
}

std::string lowercase_copy(std::string text) {
    for (char &ch : text) ch = static_cast<char>(std::tolower(static_cast<unsigned char>(ch)));
    return text;
}

bool upsert_ini_line(std::string &file, const std::string &section, const std::string &key,
                     const std::string &value) {
    const std::string section_lower = lowercase_copy(section);
    const std::string key_lower = lowercase_copy(key);
    bool in_section = false;
    bool section_found = false;
    std::size_t section_insert = file.size();
    std::size_t cursor = 0u;
    while (cursor < file.size()) {
        const std::size_t end = file.find('\n', cursor);
        const std::size_t line_end = end == std::string::npos ? file.size() : end;
        std::string line = file.substr(cursor, line_end - cursor);
        if (!line.empty() && line.back() == '\r') line.pop_back();
        std::size_t start = 0u;
        while (start < line.size() && std::isspace(static_cast<unsigned char>(line[start]))) ++start;
        const std::string trimmed = line.substr(start);
        if (!trimmed.empty() && trimmed.front() == '[') {
            const std::size_t close = trimmed.find(']');
            std::string name = trimmed.substr(1, close == std::string::npos ? std::string::npos : close - 1);
            name = lowercase_copy(name);
            if (in_section) section_insert = cursor;
            in_section = name == section_lower;
            if (in_section) section_found = true;
        } else if (in_section) {
            const std::size_t separator = trimmed.find('=');
            if (separator != std::string::npos) {
                std::string found = trimmed.substr(0, separator);
                while (!found.empty() && std::isspace(static_cast<unsigned char>(found.back()))) found.pop_back();
                if (lowercase_copy(found) == key_lower) {
                    file.replace(cursor, line_end - cursor, key + "=" + value);
                    return true;
                }
            }
            section_insert = line_end == file.size() ? file.size() : line_end + 1u;
        }
        if (end == std::string::npos) break;
        cursor = end + 1u;
    }
    std::string addition = key + "=" + value + "\n";
    if (!section_found) {
        if (!file.empty() && file.back() != '\n') file.push_back('\n');
        std::string header = section;
        if (!header.empty())
            header[0] = static_cast<char>(std::toupper(static_cast<unsigned char>(header[0])));
        file += "[" + header + "]\n" + addition;
        return true;
    }
    if (section_insert > 0u && file[section_insert - 1u] != '\n') addition.insert(0, 1, '\n');
    file.insert(section_insert, addition);
    return true;
}

void save_settings() {
    const LcsConfiguration &config = lcs_render_configuration();
    if (config.source_path.empty()) return;
    const std::lock_guard<std::mutex> guard(g_ini_mutex);
    std::ifstream input(config.source_path);
    if (!input) return;
    std::string file((std::istreambuf_iterator<char>(input)), std::istreambuf_iterator<char>());
    char distance[16];
    std::snprintf(distance, sizeof(distance), "%.2f", view_distance_scale());
    const RenderingConfiguration &rendering = config.rendering;
    upsert_ini_line(file, "display", "Fullscreen", config.display.fullscreen ? "true" : "false");
    upsert_ini_line(file, "rendering", "ViewDistance", distance);
    upsert_ini_line(file, "rendering", "InternalResolutionMode",
                    internal_resolution_mode_name(rendering.internal_resolution_mode));
    upsert_ini_line(file, "rendering", "InternalScale", std::to_string(rendering.internal_scale));
    if (rendering.internal_resolution_mode == InternalResolutionMode::Custom) {
        upsert_ini_line(file, "rendering", "InternalWidth", std::to_string(rendering.internal_width));
        upsert_ini_line(file, "rendering", "InternalHeight", std::to_string(rendering.internal_height));
    }
    upsert_ini_line(file, "display", "ShowFPS", config.display.show_fps ? "true" : "false");
    upsert_ini_line(file, "timing", "FrameRate", std::to_string(config.timing.frame_rate));
    std::ofstream output(config.source_path, std::ios::trunc);
    if (output) output << file;
}

void change_selected(int direction) noexcept {
    if (g_selected == 0) {
        const int count = static_cast<int>(std::size(kDistances));
        lcs_set_view_distance(kDistances[step_index(distance_index(), count, direction)]);
    } else if (g_selected == 1) {
        const bool enabled = !lcs_render_configuration().display.fullscreen;
        lcs_set_fullscreen_setting(enabled);
        display_window_request_fullscreen(enabled);
    } else if (g_selected == 2) {
        const int count = static_cast<int>(std::size(kResolutions));
        int index = preset_index();
        if (index < 0) index = direction < 0 ? count - 1 : 0;
        else index = step_index(index, count, direction);
        const ResolutionChoice &choice = kResolutions[index];
        lcs_set_internal_resolution(choice.mode, choice.scale);
    } else if (g_selected == 3) {
        lcs_set_show_fps(!lcs_render_configuration().display.show_fps);
    } else {
        const int index = lcs_render_configuration().timing.frame_rate == 30u ? 0 : 1;
        lcs_set_frame_rate(kFrameRates[step_index(index, static_cast<int>(std::size(kFrameRates)), direction)]);
    }
    save_settings();
}

}  // namespace

bool host_settings_open() noexcept { return g_open.load(); }

void host_settings_write(const std::string &section, const std::string &key, const std::string &value) {
    const LcsConfiguration &config = lcs_render_configuration();
    if (config.source_path.empty()) return;
    const std::lock_guard<std::mutex> guard(g_ini_mutex);
    std::ifstream input(config.source_path);
    if (!input) return;
    std::string file((std::istreambuf_iterator<char>(input)), std::istreambuf_iterator<char>());
    input.close();
    upsert_ini_line(file, section, key, value);
    std::ofstream output(config.source_path, std::ios::trunc);
    if (output) output << file;
}

void host_settings_note_fullscreen(bool enabled) noexcept {
    lcs_set_fullscreen_setting(enabled);
    save_settings();
}

bool host_settings_handle(HostSettingsKey key) noexcept {
    remember_applied_resolution();
    if (key == HostSettingsKey::Toggle) {
        g_open.store(!g_open.load());
        return true;
    }
    if (!g_open) return false;
    if (key == HostSettingsKey::Close) {
        g_open = false;
        return true;
    }
    if (key == HostSettingsKey::Up) g_selected = step_index(g_selected, kRowCount, -1);
    else if (key == HostSettingsKey::Down) g_selected = step_index(g_selected, kRowCount, 1);
    else if (key == HostSettingsKey::Left) change_selected(-1);
    else if (key == HostSettingsKey::Right) change_selected(1);
    return true;
}

Win32HostKeyDecision classify_win32_host_key(std::uint32_t message, std::uint32_t wparam,
                                            bool repeat) noexcept {
    Win32HostKeyDecision decision{};
    if (message == kWin32SysCommand && (wparam & 0xFFF0u) == kWin32ScKeyMenu) {
        decision.consume = true;
        return decision;
    }
    const bool f10 = wparam == kWin32VkF10;
    const bool down = message == kWin32KeyDown || message == kWin32SysKeyDown;
    const bool up = message == kWin32KeyUp || message == kWin32SysKeyUp;
    if (!f10 || (!down && !up)) return decision;
    decision.consume = true;
    decision.toggle_settings = down && !repeat;
    return decision;
}

Dx12FramePresentDecision decide_dx12_frame_present(bool direct_presentation_possible) noexcept {
    Dx12FramePresentDecision decision{};
    decision.composite_settings = host_settings_open();
    if (decision.composite_settings) decision.settings = host_settings_view();
    decision.composite_fps = lcs_render_configuration().display.show_fps;
    decision.present_directly = direct_presentation_possible;
    decision.map_full_frame_readback = !direct_presentation_possible;
    return decision;
}

namespace {

void overlay_fill(std::uint8_t *rgba, std::uint32_t width, std::uint32_t height,
                  int x0, int y0, int x1, int y1,
                  std::uint8_t r, std::uint8_t g, std::uint8_t b, std::uint8_t a) noexcept {
    if (x0 < 0) x0 = 0;
    if (y0 < 0) y0 = 0;
    if (x1 > static_cast<int>(width)) x1 = static_cast<int>(width);
    if (y1 > static_cast<int>(height)) y1 = static_cast<int>(height);
    for (int y = y0; y < y1; ++y) {
        std::uint8_t *row = rgba + (static_cast<std::size_t>(y) * width + static_cast<std::size_t>(x0)) * 4u;
        for (int x = x0; x < x1; ++x) {
            row[0] = r;
            row[1] = g;
            row[2] = b;
            row[3] = a;
            row += 4;
        }
    }
}

void overlay_text(std::uint8_t *rgba, std::uint32_t width, std::uint32_t height,
                  int origin_x, int origin_y, int scale, const char *text,
                  std::uint8_t r, std::uint8_t g, std::uint8_t b) noexcept {
    if (text == nullptr || scale < 1) return;
    for (int column = 0; text[column] != '\0'; ++column) {
        const unsigned char code = static_cast<unsigned char>(text[column]);
        const int index = code < 128u ? kGlyphIndex[code] : -1;
        const std::array<std::uint8_t, 7> &rows =
            index >= 0 ? kGlyph5x7[static_cast<std::size_t>(index)] : kGlyph5x7[0];
        for (int glyph_row = 0; glyph_row < 7; ++glyph_row) {
            const std::uint8_t bits = rows[static_cast<std::size_t>(glyph_row)];
            for (int bit = 0; bit < 5; ++bit) {
                if ((bits & (0x10 >> bit)) == 0) continue;
                overlay_fill(rgba, width, height,
                             origin_x + (column * 6 + bit) * scale,
                             origin_y + glyph_row * scale,
                             origin_x + (column * 6 + bit) * scale + scale,
                             origin_y + glyph_row * scale + scale,
                             r, g, b, 255u);
            }
        }
    }
}

std::chrono::steady_clock::time_point g_fps_window_start{};
std::uint32_t g_fps_window_frames{};
double g_host_fps{};

}  // namespace

void host_fps_note_presented_frame() noexcept {
    const auto now = std::chrono::steady_clock::now();
    if (g_fps_window_start.time_since_epoch().count() == 0) g_fps_window_start = now;
    ++g_fps_window_frames;
    const double seconds = std::chrono::duration<double>(now - g_fps_window_start).count();
    if (seconds < 0.5) return;
    g_host_fps = static_cast<double>(g_fps_window_frames) / seconds;
    g_fps_window_frames = 0u;
    g_fps_window_start = now;
}

void host_fps_format(char *label, std::size_t size) noexcept {
    if (label == nullptr || size == 0u) return;
    if (g_host_fps > 0.0)
        std::snprintf(label, size, "FPS %.0f", std::clamp(g_host_fps, 0.0, 999.0));
    else
        std::snprintf(label, size, "FPS --");
}

void rasterize_settings_overlay(const HostSettingsView &view, std::uint8_t *rgba,
                                std::uint32_t width, std::uint32_t height) noexcept {
    if (rgba == nullptr || width == 0u || height == 0u) return;
    std::memset(rgba, 0, static_cast<std::size_t>(width) * height * 4u);
    constexpr int scale = 2;
    const int line = 12 * scale;
    overlay_fill(rgba, width, height, 0, 0, static_cast<int>(width), static_cast<int>(height),
                 8u, 12u, 28u, 230u);
    overlay_text(rgba, width, height, 8 * scale, 6 * scale, scale, "HOST SETTINGS", 180u, 200u, 230u);
    overlay_text(rgba, width, height, 8 * scale, 6 * scale + line, scale, "F10 CLOSE", 180u, 200u, 230u);
    for (int row = 0; row < 5; ++row) {
        const int y = 6 * scale + line * (2 + row);
        if (row == view.selected)
            overlay_fill(rgba, width, height, 4 * scale, y - scale,
                         static_cast<int>(width) - 4 * scale, y + 9 * scale,
                         40u, 70u, 120u, 255u);
        const std::uint8_t tone = row == view.selected ? 255u : 170u;
        overlay_text(rgba, width, height, 8 * scale, y, scale, view.rows[row], tone,
                     row == view.selected ? 255u : 190u, row == view.selected ? 255u : 220u);
    }
    if (view.resolution_pending) {
        overlay_text(rgba, width, height, 8 * scale, 6 * scale + line * 7, scale,
                     "RESTART TO APPLY", 220u, 180u, 80u);
    }
}

void rasterize_fps_overlay(std::uint8_t *rgba, std::uint32_t width,
                           std::uint32_t height) noexcept {
    if (rgba == nullptr || width == 0u || height == 0u) return;
    std::memset(rgba, 0, static_cast<std::size_t>(width) * height * 4u);
    overlay_fill(rgba, width, height, 0, 0, static_cast<int>(width), static_cast<int>(height),
                 8u, 12u, 28u, 210u);
    char label[24];
    host_fps_format(label, sizeof(label));
    overlay_text(rgba, width, height, 8, 12, 3, label, 232u, 248u, 255u);
}

HostSettingsView host_settings_view() noexcept {
    remember_applied_resolution();
    HostSettingsView view{};
    view.selected = g_selected;
    view.resolution_pending = resolution_pending();
    char distance[16];
    format_distance(distance, sizeof(distance), kDistances[distance_index()]);
    std::snprintf(view.rows[0], sizeof(view.rows[0]), "View distance   %s", distance);
    std::snprintf(view.rows[1], sizeof(view.rows[1]), "Fullscreen      %s",
                  lcs_render_configuration().display.fullscreen ? "On" : "Off");
    char resolution[40];
    format_resolution_label(resolution, sizeof(resolution));
    std::snprintf(view.rows[2], sizeof(view.rows[2]), "Resolution      %s%s", resolution,
                  view.resolution_pending ? " *" : "");
    std::snprintf(view.rows[3], sizeof(view.rows[3]), "FPS counter     %s",
                  lcs_render_configuration().display.show_fps ? "On" : "Off");
    std::snprintf(view.rows[4], sizeof(view.rows[4]), "Frame rate      %u",
                  lcs_render_configuration().timing.frame_rate);
    return view;
}

}  // namespace lcs
