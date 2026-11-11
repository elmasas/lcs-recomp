#include "lcs_frontend_menu.hpp"

#if defined(_WIN32)

#include "display_window.hpp"
#include "lcs_controls.hpp"
#include "lcs_display_menu.hpp"
#include "lcs_frontend_music.hpp"
#include "lcs_frontend_options.hpp"
#include "lcs_frontend_ui.hpp"
#include "lcs_imgui_menu.hpp"
#include "lcs_key_bindings.hpp"
#include "lcs_menu.hpp"
#include "lcs_pause_menu.hpp"
#include "lcs_render_config.hpp"
#include "lcs_save_slots.hpp"
#include "lcs_state.hpp"
#include "lcs_stress_test.hpp"
#include "lcs_texture_pack.hpp"
#include "lcs_texture_probe.hpp"
#include "lcs_settings.hpp"

#include "imgui.h"

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cfloat>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <iterator>
#include <mutex>
#include <random>
#include <thread>

namespace lcs {
namespace {

namespace fs = std::filesystem;

struct Painting {
    const char *file;
    const char *label;
    bool in_random;
};
// The screens with real art: of the game's 23 LOADSC files, the others are placeholders.
constexpr Painting kPaintings[] = {
    {"LOADSC0", "Man with a mustache, close up", true},
    {"LOADSC1", "Man in a suit", true},
    {"LOADSC2", "Man with a pistol", true},
    {"LOADSC3", "Woman with a pistol", true},
    {"MPLOAD0", "Detective with a magnifying glass", true},
    {"MPLOAD1", "Blue car", true},
    {"MPLOAD2", "Limousine", true},
    {"MPLOAD3", "Limousine, darker", true},
    {"MPLOAD4", "Tank", true},
    {"MPLOAD5", "Gangster with a pistol", true},
    {"MPLOAD6", "Man in a car, skyline", true},
    {"MPLOAD7", "Multiplayer art", true},
    {"SPLASH1", "Welcome to Portland", false},
    {"SPLASH2", "Welcome to Staunton", false},
    {"NEWS", "LC News", false},
    {"NEWS2", "LC News, bridge", false},
    {"NEWS3", "LC News, field", false},
};
constexpr std::uint32_t kArtWidth = 512u, kArtHeight = 256u, kArtPixels = 0xA0u;
constexpr std::uint32_t kPricedownWidth = 512u, kPricedownHeight = 256u;
constexpr std::uint32_t kPricedownData = 0xE6675823u;

enum class Stage { Starting, Open, Done, Off };
std::atomic<Stage> g_stage{Stage::Starting};
std::atomic<bool> g_hide_saves{false};
std::atomic<bool> g_pressing{false};
std::atomic<int> g_selected{0};
std::atomic<int> g_clicked{-1};
std::atomic<bool> g_font_saved{false};

struct Image {
    std::uint32_t width{}, height{};
    std::vector<std::byte> rgba;
};
std::mutex g_art_mutex;
Image g_art_pending;
Image g_font_pending;
Image g_blur_pending;
ImTextureID g_blur_texture{};
ImTextureID g_art_texture{};
ImVec2 g_art_size{};
ImTextureID g_font_texture{};
std::uint64_t g_opened_ms{};
std::uint64_t g_art_shown_ms{};

struct Glyph {
    float u0, u1;
    float advance;
};
std::array<Glyph, 128> g_glyphs{};
bool g_have_font = false;
float g_font_cell_h = 0.0f;
const char *const kRows[] = {" !\"#$%&'()*+,-./", "0123456789:abcde", "fghijklmnopqrstu", "vwxyz"};
constexpr float kRowHeight = 40.0f / 256.0f, kColumnWidth = 32.0f / 512.0f;

struct Item {
    const char *label;
    enum { Continue, Load, LoadState, NewGame, Options, Quit } action;
};
std::vector<Item> g_items;
std::string g_game_name;

std::uint64_t now_ms() {
    return static_cast<std::uint64_t>(
        std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now().time_since_epoch()).count());
}

bool any_save_exists() {
    std::error_code error;
    const fs::path root = fs::path(game_root_folder()) / "PSP" / "SAVEDATA";
    for (fs::directory_iterator it(root, error), end; !error && it != end; it.increment(error)) {
        if (fs::is_regular_file(it->path() / "DATA.BIN", error)) return true;
    }
    return false;
}

fs::path font_cache() { return fs::path(game_root_folder()) / "cache" / "menu-font.rgba"; }

std::vector<std::uint8_t> read_file(const fs::path &path) {
    std::ifstream in(path, std::ios::binary);
    return {std::istreambuf_iterator<char>(in), std::istreambuf_iterator<char>()};
}

// Loading screens: 8 bit, swizzled, with the palette right after the pixels.
bool decode_painting(const char *name, std::vector<std::uint32_t> &argb, std::vector<std::uint8_t> &raw) {
    const auto file = read_file(fs::path(game_root_folder()) / "PSP_GAME" / "USRDIR" / "TXD" / (std::string(name) + ".CHK"));
    const std::size_t pixels = kArtWidth * kArtHeight;
    if (file.size() < kArtPixels + pixels + 1024u) return false;
    raw.assign(file.begin() + kArtPixels, file.begin() + kArtPixels + pixels);
    const std::uint8_t *palette = file.data() + kArtPixels + pixels;
    argb.assign(pixels, 0u);
    std::size_t source = 0u;
    for (std::uint32_t by = 0u; by < kArtHeight; by += 8u) {
        for (std::uint32_t bx = 0u; bx < kArtWidth; bx += 16u) {
            for (std::uint32_t y = 0u; y < 8u; ++y) {
                for (std::uint32_t x = 0u; x < 16u; ++x) {
                    const std::uint8_t *entry = palette + raw[source++] * 4u;
                    argb[(by + y) * kArtWidth + bx + x] = 0xFF000000u | (static_cast<std::uint32_t>(entry[0]) << 16u) |
                                                         (static_cast<std::uint32_t>(entry[1]) << 8u) | entry[2];
                }
            }
        }
    }
    return true;
}

Image from_argb(const std::vector<std::uint32_t> &argb, std::uint32_t width, std::uint32_t height) {
    Image image{width, height, std::vector<std::byte>(argb.size() * 4u)};
    auto *out = reinterpret_cast<std::uint8_t *>(image.rgba.data());
    for (const std::uint32_t pixel : argb) {
        *out++ = static_cast<std::uint8_t>(pixel >> 16u);
        *out++ = static_cast<std::uint8_t>(pixel >> 8u);
        *out++ = static_cast<std::uint8_t>(pixel);
        *out++ = 255u;
    }
    return image;
}

constexpr const char *kImagePrefix = "file:";
// How much of an image a window must show for Random to pick it. Less is needed in height: logos and faces sit at the
// sides, so a window narrower than the image loses them first.
constexpr float kMinimumShownHeight = 0.65f, kMinimumShownWidth = 0.85f;

fs::path image_folder() { return fs::path(game_root_folder()) / "MENUART"; }

struct PlayerImage {
    std::string name;
    float aspect{};
};

// The player's own images. Only the PNG's header is read here: the sizes are all the choice needs.
const std::vector<PlayerImage> &player_images() {
    static const std::vector<PlayerImage> images = [] {
        std::vector<PlayerImage> found;
        std::error_code error;
        for (fs::directory_iterator it(image_folder(), error), end; !error && it != end; it.increment(error)) {
            std::string extension = it->path().extension().string();
            std::transform(extension.begin(), extension.end(), extension.begin(), [](unsigned char c) { return static_cast<char>(std::tolower(c)); });
            if (extension != ".png") continue;
            std::ifstream in(it->path(), std::ios::binary);
            std::array<unsigned char, 24> head{};
            in.read(reinterpret_cast<char *>(head.data()), head.size());
            if (!in || head[1] != 'P' || head[2] != 'N' || head[3] != 'G') continue;
            const auto be32 = [&](std::size_t at) { return static_cast<std::uint32_t>(head[at]) << 24u | static_cast<std::uint32_t>(head[at + 1u]) << 16u | static_cast<std::uint32_t>(head[at + 2u]) << 8u | head[at + 3u]; };
            const std::uint32_t width = be32(16u), height = be32(20u);
            if (width == 0u || height == 0u) continue;
            found.push_back({it->path().filename().string(), static_cast<float>(width) / static_cast<float>(height)});
        }
        std::sort(found.begin(), found.end(), [](const PlayerImage &a, const PlayerImage &b) { return a.name < b.name; });
        return found;
    }();
    return images;
}

// The setting's value for what to show. Random prefers the player's images, among those that suit the window's shape.
std::string chosen_art(float window_aspect) {
    const std::string &wanted = lcs_render_configuration().display.menu_art;
    if (wanted != "random") {
        if (wanted.starts_with(kImagePrefix)) {
            const std::string name = wanted.substr(std::strlen(kImagePrefix));
            for (const PlayerImage &image : player_images()) {
                if (image.name == name) return wanted;
            }
        } else {
            for (const Painting &painting : kPaintings) {
                if (wanted == painting.file) return wanted;
            }
        }
    }
    std::random_device device;
    const std::vector<PlayerImage> &images = player_images();
    if (!images.empty()) {
        std::vector<const PlayerImage *> pool;
        for (const PlayerImage &image : images) {
            const bool suits = image.aspect < window_aspect ? image.aspect / window_aspect >= kMinimumShownHeight
                                                            : window_aspect / image.aspect >= kMinimumShownWidth;
            if (suits) pool.push_back(&image);
        }
        if (pool.empty()) {
            for (const PlayerImage &image : images) pool.push_back(&image);
        }
        return kImagePrefix + pool[device() % pool.size()]->name;
    }
    std::vector<const char *> pool;
    for (const Painting &painting : kPaintings) {
        if (painting.in_random) pool.push_back(painting.file);
    }
    return pool[device() % pool.size()];
}

// A tiny copy: drawn large, it is a blur.
void make_blurred(const Image &image) {
    constexpr std::uint32_t kWidth = 96u;
    const std::uint32_t height = std::max(1u, kWidth * image.height / std::max(1u, image.width));
    Image tiny{kWidth, height, std::vector<std::byte>(static_cast<std::size_t>(kWidth) * height * 4u)};
    const auto *in = reinterpret_cast<const std::uint8_t *>(image.rgba.data());
    auto *out = reinterpret_cast<std::uint8_t *>(tiny.rgba.data());
    for (std::uint32_t y = 0u; y < height; ++y) {
        const std::uint32_t y0 = y * image.height / height, y1 = std::max(y0 + 1u, (y + 1u) * image.height / height);
        for (std::uint32_t x = 0u; x < kWidth; ++x) {
            const std::uint32_t x0 = x * image.width / kWidth, x1 = std::max(x0 + 1u, (x + 1u) * image.width / kWidth);
            std::uint64_t sum[3]{};
            std::uint64_t pixels = 0u;
            for (std::uint32_t sy = y0; sy < y1 && sy < image.height; sy += 2u) {
                for (std::uint32_t sx = x0; sx < x1 && sx < image.width; sx += 2u) {
                    const std::uint8_t *pixel = in + (static_cast<std::size_t>(sy) * image.width + sx) * 4u;
                    for (int c = 0; c < 3; ++c) sum[c] += pixel[c];
                    ++pixels;
                }
            }
            for (int c = 0; c < 3; ++c) *out++ = static_cast<std::uint8_t>(sum[c] / std::max<std::uint64_t>(pixels, 1u));
            *out++ = 255u;
        }
    }
    const std::lock_guard<std::mutex> lock(g_art_mutex);
    g_blur_pending = std::move(tiny);
}

// A player's image as it is. The game's own painting: the texture pack's version when it has one (unless Smooth is
// chosen), otherwise the painting itself, which the menu draws smoothly enlarged.
void load_art(const std::string &value) {
    std::cerr << "[main-menu] painting: " << value << "\n";
    if (value.starts_with(kImagePrefix)) {
        const auto file = read_file(image_folder() / value.substr(std::strlen(kImagePrefix)));
        const auto decoded = file.empty() ? nullptr : texture_png_decode(file.data(), file.size());
        if (!decoded) {
            std::cerr << "[main-menu] can't read that image\n";
            return;
        }
        Image image{decoded->width, decoded->height, decoded->rgba8};
        make_blurred(image);
        const std::lock_guard<std::mutex> lock(g_art_mutex);
        g_art_pending = std::move(image);
        return;
    }
    std::vector<std::uint32_t> argb;
    std::vector<std::uint8_t> raw;
    if (!decode_painting(value.c_str(), argb, raw)) return;
    const std::string quality = lcs_render_configuration().display.menu_art_quality;
    Image image;
    if (quality != "smooth") {
        if (const auto pack = texture_pack_find_data(raw.data(), raw.size())) {
            image = Image{pack->width, pack->height, pack->rgba8};
        }
    }
    if (image.rgba.empty()) image = from_argb(argb, kArtWidth, kArtHeight);
    make_blurred(image);
    const std::lock_guard<std::mutex> lock(g_art_mutex);
    g_art_pending = std::move(image);
}

// The font: a pack's, or the game's own as kept from an earlier launch. With neither, the first launch shows Dear ImGui's.
void load_font() {
    Image image;
    if (const auto pack = texture_pack_find_hash(kPricedownData)) {
        image = Image{pack->width, pack->height, pack->rgba8};
    } else {
        const auto file = read_file(font_cache());
        const std::size_t bytes = kPricedownWidth * kPricedownHeight * 4u;
        if (file.size() == bytes) {
            const auto *start = reinterpret_cast<const std::byte *>(file.data());
            image = Image{kPricedownWidth, kPricedownHeight, std::vector<std::byte>(start, start + bytes)};
        }
    }
    if (image.rgba.empty()) return;
    const float cell_w = static_cast<float>(image.width) * kColumnWidth;
    const float cell_h = static_cast<float>(image.height) * kRowHeight;
    const auto *pixels = reinterpret_cast<const std::uint8_t *>(image.rgba.data());
    for (int row = 0; row < 4; ++row) {
        const std::size_t length = std::strlen(kRows[row]);
        for (std::size_t column = 0u; column < length; ++column) {
            const auto x0 = static_cast<std::uint32_t>(cell_w * column);
            const auto x1 = static_cast<std::uint32_t>(cell_w * (column + 1u));
            const auto y0 = static_cast<std::uint32_t>(cell_h * row);
            const auto y1 = std::min(image.height, static_cast<std::uint32_t>(cell_h * (row + 1)));
            std::uint32_t low = x1, high = x0;
            for (std::uint32_t y = y0; y < y1; ++y) {
                for (std::uint32_t x = x0; x < x1 && x < image.width; ++x) {
                    if (pixels[(y * image.width + x) * 4u + 3u] > 40u) {
                        low = std::min(low, x);
                        high = std::max(high, x + 1u);
                    }
                }
            }
            Glyph glyph{};
            if (high > low) {
                glyph.u0 = static_cast<float>(low) / image.width;
                glyph.u1 = static_cast<float>(high) / image.width;
                glyph.advance = static_cast<float>(high - low) / cell_h;
            }
            g_glyphs[static_cast<unsigned char>(kRows[row][column])] = glyph;
        }
    }
    g_font_cell_h = kRowHeight;
    const std::lock_guard<std::mutex> lock(g_art_mutex);
    g_font_pending = std::move(image);
}

float glyph_row(char c) {
    for (int row = 0; row < 4; ++row) {
        if (std::strchr(kRows[row], c) != nullptr) return kRowHeight * row;
    }
    return 0.0f;
}

float text_width(const std::string &text, float height) {
    if (!g_have_font) return imgui_menu_regular_font()->CalcTextSizeA(height, FLT_MAX, 0.0f, text.c_str()).x;
    float width = 0.0f;
    for (const char raw : text) {
        const char c = static_cast<char>(std::tolower(static_cast<unsigned char>(raw)));
        width += c == ' ' ? height * 0.33f : (g_glyphs[static_cast<unsigned char>(c)].advance + 0.06f) * height;
    }
    return width;
}

void draw_text(ImDrawList *draw, ImVec2 at, const std::string &text, float height, ImU32 colour, float alpha) {
    const ImU32 shadow = IM_COL32(0, 0, 0, static_cast<int>(230.0f * alpha));
    const float outline = std::max(1.0f, height * 0.035f);
    if (!g_have_font) {
        ImFont *font = imgui_menu_regular_font();
        for (const ImVec2 d : {ImVec2(-outline, 0), ImVec2(outline, 0), ImVec2(0, -outline), ImVec2(0, outline)})
            draw->AddText(font, height, ImVec2(at.x + d.x, at.y + d.y), shadow, text.c_str());
        draw->AddText(font, height, at, colour, text.c_str());
        return;
    }
    for (int pass = 0; pass < 2; ++pass) {
        float x = at.x;
        for (const char raw : text) {
            const char c = static_cast<char>(std::tolower(static_cast<unsigned char>(raw)));
            const Glyph &glyph = g_glyphs[static_cast<unsigned char>(c)];
            if (c == ' ' || glyph.advance <= 0.0f) {
                x += height * 0.33f;
                continue;
            }
            const float row = glyph_row(c);
            const float width = glyph.advance * height;
            const auto quad = [&](float dx, float dy, ImU32 tint) {
                draw->AddImage(ImTextureRef(g_font_texture), ImVec2(x + dx, at.y + dy), ImVec2(x + dx + width, at.y + dy + height),
                               ImVec2(glyph.u0, row), ImVec2(glyph.u1, row + kRowHeight), tint);
            };
            if (pass == 0) {
                for (const ImVec2 d : {ImVec2(-outline, 0), ImVec2(outline, 0), ImVec2(0, -outline), ImVec2(0, outline),
                                       ImVec2(-outline, -outline), ImVec2(outline, outline), ImVec2(-outline, outline), ImVec2(outline, -outline)})
                    quad(d.x, d.y, shadow);
            } else {
                quad(0.0f, 0.0f, colour);
            }
            x += width + height * 0.06f;
        }
    }
}

void finish_with(bool hide_saves) {
    frontend_music_stop();
    g_hide_saves.store(hide_saves);
    g_pressing.store(true);
    g_stage.store(Stage::Done);
    opts::tab_hidden = nullptr;
    if (host_settings_open()) host_settings_handle(HostSettingsKey::Close);
}

void run_item(int index) {
    if (index < 0 || index >= static_cast<int>(g_items.size())) return;
    switch (g_items[static_cast<std::size_t>(index)].action) {
    case Item::Continue: finish_with(false); break;
    case Item::Load: save_slots_open_for_load(fs::path(game_root_folder()) / "PSP" / "SAVEDATA", g_game_name); break;
    case Item::LoadState: {
        // The newest save state replaces the game wholesale at its next safe moment, so the menu just gets out of the way.
        const int slot = lcs_state_latest_slot();
        if (slot < 0) break;
        finish_with(false);
        g_pressing.store(false);
        lcs_state_request_load(slot);
        break;
    }
    case Item::NewGame: finish_with(true); break;
    case Item::Options: frontend_options_open(); break;
    case Item::Quit:
        frontend_music_stop();
        display_window_request_close();
        break;
    }
}

void start() {
    const LcsConfiguration &config = lcs_render_configuration();
    if (stress_test_enabled() || !config.initialized || config.display.skip_main_menu ||
        std::getenv("LCS_SKIP_MAIN_MENU") != nullptr || !ge_gpu_backend_supports_host_frame()) {
        g_stage.store(Stage::Off);
        return;
    }
    if (any_save_exists()) {
        g_items.push_back({"Continue", Item::Continue});
        g_items.push_back({"Load Game", Item::Load});
    }
    if (lcs_state_latest_slot() >= 0) g_items.push_back({"Load State", Item::LoadState});
    g_items.push_back({"New Game", Item::NewGame});
    g_items.push_back({"Options", Item::Options});
    g_items.push_back({"Quit Game", Item::Quit});
    // Options shows the settings: the trainer's pages only make sense once a game is running.
    opts::tab_hidden = [](const std::string &page) {
        return page == "Player" || page == "Teleport" || page == "World";
    };
    frontend_ui_load();
    frontend_music_start(config.display.menu_music);
    g_stage.store(Stage::Open);
}

}  // namespace

bool frontend_menu_active() noexcept {
    const Stage stage = g_stage.load();
    return stage == Stage::Starting || stage == Stage::Open || save_slots_open() || frontend_options_is_open();
}

bool frontend_menu_tick(psprecomp::Runtime &runtime, std::uint32_t parameter) {
    if (g_stage.load() == Stage::Starting) {
        for (std::uint32_t i = 0u; i < 13u; ++i) {
            const char c = static_cast<char>(runtime.memory().load8(parameter + 0x3Cu + i));
            if (c == '\0') break;
            g_game_name.push_back(c);
        }
        start();
    }
    if (g_stage.load() != Stage::Open) return false;
    static std::uint32_t previous = 0xFFFFFFFFu;
    if (save_slots_open()) {
        const SlotOutcome outcome = save_slots_step_for_load(runtime);
        previous = 0xFFFFFFFFu;  // what ended the list doesn't act on the menu
        if (outcome == SlotOutcome::Proceed) {
            finish_with(false);
            return false;
        }
        return true;
    }
    display_window_pump();
    if (display_window_closed()) {
        runtime.stop("Display window closed");
        return true;
    }
    const HostInputState input = display_window_input();
    if (frontend_options_is_open()) {
        previous = 0xFFFFFFFFu;  // what closes Options doesn't act on the menu
        if (!ge_gpu_backend_present_host_frame()) std::this_thread::sleep_for(std::chrono::milliseconds(16));
        return true;
    }
    const std::uint32_t pressed = input.buttons & ~previous;
    previous = input.buttons;
    if (!host_settings_open()) {
        const int count = static_cast<int>(g_items.size());
        int selected = g_selected.load();
        if ((pressed & kPspUp) != 0u) selected = (selected + count - 1) % count;
        if ((pressed & kPspDown) != 0u) selected = (selected + 1) % count;
        g_selected.store(selected);
        if ((pressed & kPspCross) != 0u) run_item(selected);
        const int clicked = g_clicked.exchange(-1);
        if (clicked >= 0 && g_stage.load() == Stage::Open) run_item(clicked);
    }
    if (g_stage.load() != Stage::Open) return false;
    if (!ge_gpu_backend_present_host_frame()) std::this_thread::sleep_for(std::chrono::milliseconds(16));
    return true;
}

void frontend_ui_load() {
    static std::atomic<bool> started{false};
    if (started.exchange(true)) return;
    g_opened_ms = now_ms();
    std::thread(load_font).detach();
}

float frontend_ui_text_width(const std::string &text, float height) { return text_width(text, height); }

void frontend_ui_text(ImDrawList *draw, ImVec2 at, const std::string &text, float height, ImU32 colour) {
    draw_text(draw, at, text, height, colour, std::clamp(static_cast<float>(now_ms() - g_opened_ms) / 400.0f, 0.0f, 1.0f));
}

namespace {

// Render thread: what has finished loading goes up to the GPU.
void update_textures() {
    // Which image suits the window can only be known from here.
    static bool art_started = false;
    const ImVec2 window = ImGui::GetIO().DisplaySize;
    if (!art_started && window.x > 0.0f && window.y > 0.0f) {
        art_started = true;
        std::thread([value = chosen_art(window.x / window.y)] { load_art(value); }).detach();
    }
    const std::lock_guard<std::mutex> lock(g_art_mutex);
    if (!g_blur_pending.rgba.empty() && g_blur_texture == ImTextureID{}) {
        g_blur_texture = imgui_menu_upload_rgba(g_blur_pending.width, g_blur_pending.height, g_blur_pending.rgba);
        g_blur_pending = {};
    }
        if (!g_art_pending.rgba.empty() && g_art_texture == ImTextureID{}) {
            g_art_texture = imgui_menu_upload_rgba(g_art_pending.width, g_art_pending.height, g_art_pending.rgba);
            g_art_size = ImVec2(static_cast<float>(g_art_pending.width), static_cast<float>(g_art_pending.height));
            g_art_shown_ms = now_ms();
            g_art_pending = {};
        }
        if (!g_font_pending.rgba.empty() && g_font_texture == ImTextureID{}) {
            g_font_texture = imgui_menu_upload_rgba(g_font_pending.width, g_font_pending.height, g_font_pending.rgba);
            g_have_font = g_font_texture != ImTextureID{};
            g_font_pending = {};
        }
}

// Cover the window, keeping the painted logo, which sits high in the image.
void cover(ImDrawList *draw, ImTextureID texture, ImU32 tint) {
    const ImVec2 size = ImGui::GetIO().DisplaySize;
    const float scale = std::max(size.x / g_art_size.x, size.y / g_art_size.y);
    const float u = size.x / (g_art_size.x * scale), v = size.y / (g_art_size.y * scale);
    const float u0 = (1.0f - u) * 0.5f, v0 = (1.0f - v) * 0.2f;
    draw->AddImage(ImTextureRef(texture), ImVec2(0, 0), size, ImVec2(u0, v0), ImVec2(u0 + u, v0 + v), tint);
}

}  // namespace

void frontend_ui_backdrop_dim(ImDrawList *draw) {
    update_textures();
    const ImVec2 size = ImGui::GetIO().DisplaySize;
    draw->AddRectFilled(ImVec2(0, 0), size, IM_COL32(8, 8, 10, 255));
    if (g_blur_texture != ImTextureID{} && g_art_size.x > 0.0f) cover(draw, g_blur_texture, IM_COL32(52, 52, 52, 255));
}

void frontend_ui_backdrop(ImDrawList *draw, float panel) {
    update_textures();
    const ImVec2 size = ImGui::GetIO().DisplaySize;
    draw->AddRectFilled(ImVec2(0, 0), size, IM_COL32(8, 8, 10, 255));
    const float fade = std::clamp(static_cast<float>(now_ms() - g_art_shown_ms) / 500.0f, 0.0f, 1.0f);
    if (g_art_texture != ImTextureID{}) cover(draw, g_art_texture, IM_COL32(255, 255, 255, static_cast<int>(255.0f * fade)));
    const ImU32 clear = IM_COL32(0, 0, 0, 0), dark = IM_COL32(0, 0, 0, 215), darker = IM_COL32(0, 0, 0, 235);
    const float solid = panel + (1.0f - panel) * 0.47f;
    draw->AddRectFilledMultiColor(ImVec2(size.x * panel, 0), ImVec2(size.x * solid, size.y), clear, dark, dark, clear);
    draw->AddRectFilledMultiColor(ImVec2(size.x * solid, 0), size, dark, darker, darker, dark);
}

void frontend_menu_draw() {
    if (save_slots_open()) {
        save_slots_draw();
        return;
    }
    if (frontend_options_is_open()) {
        frontend_options_draw();
        return;
    }
    pause_menu_draw();
    if (g_stage.load() != Stage::Open) return;
    ImDrawList *draw = ImGui::GetBackgroundDrawList();
    const ImVec2 size = ImGui::GetIO().DisplaySize;
    const float fade = std::clamp(static_cast<float>(now_ms() - g_opened_ms) / 400.0f, 0.0f, 1.0f);

    const float height = size.y * 0.075f;
    // The dark side only as wide as the words need, to hide as little of the painting as possible.
    float widest = 0.0f;
    for (const Item &item : g_items) widest = std::max(widest, text_width(item.label, height));
    frontend_ui_backdrop(draw, std::clamp((size.x * 0.95f - widest - size.y * 0.24f) / size.x, 0.4f, 0.8f));
    const float step = height * 1.2f;
    const float right = size.x * 0.95f;
    float y = size.y * 0.36f;
    const ImVec2 mouse = ImGui::GetIO().MousePos;
    static ImVec2 last_mouse = mouse;
    const bool mouse_moved = mouse.x != last_mouse.x || mouse.y != last_mouse.y;
    last_mouse = mouse;
    for (int i = 0; i < static_cast<int>(g_items.size()); ++i) {
        const std::string text = g_items[static_cast<std::size_t>(i)].label;
        const float width = text_width(text, height);
        const bool over = !host_settings_open() && mouse.x >= right - width && mouse.x <= right && mouse.y >= y && mouse.y < y + step;
        if (over && mouse_moved) g_selected.store(i);
        if (over && ImGui::IsMouseClicked(ImGuiMouseButton_Left)) g_clicked.store(i);
        const bool active = g_selected.load() == i;
        draw_text(draw, ImVec2(right - width, y), text, height,
                  active ? IM_COL32(250, 215, 90, 255) : IM_COL32(245, 245, 245, 255), fade);
        y += step;
    }
    const std::string footer = "Enter select";
    const float footer_height = size.y * 0.024f;
    draw_text(draw, ImVec2(size.x * 0.975f - text_width(footer, footer_height), size.y * 0.95f), footer, footer_height, IM_COL32(205, 205, 205, 255), fade);
}

bool frontend_hide_saves() noexcept { return g_hide_saves.load(std::memory_order_relaxed); }

std::uint32_t frontend_boot_pad(std::uint32_t held) noexcept {
    if (!g_pressing.load(std::memory_order_relaxed)) return held;
    if (lcs_camera_in_use()) {
        g_pressing.store(false);
        g_hide_saves.store(false);
        return held;
    }
    const std::uint64_t phase = now_ms() % 400u;
    return phase < 120u ? (held | kPspCross) : held;
}

void frontend_note_texture(const psprecomp::GuestMemory &memory, const std::array<std::uint32_t, 256> &,
                           const GeGpuDrawDescriptor &draw, std::span<const std::byte> rgba) noexcept {
    if (g_font_saved.load(std::memory_order_relaxed)) return;
    if (draw.texture_width != kPricedownWidth || draw.texture_height != kPricedownHeight || draw.texture_format != 4u) return;
    if (rgba.size() < kPricedownWidth * kPricedownHeight * 4u) return;
    std::uint32_t data = 0u;
    if (!texture_data_key(memory, draw, kPricedownHeight, TextureHash::Xxh64, data) || data != kPricedownData) return;
    g_font_saved.store(true);
    try {
        const fs::path path = font_cache();
        std::error_code error;
        if (fs::exists(path, error)) return;
        fs::create_directories(path.parent_path(), error);
        std::ofstream out(path, std::ios::binary);
        out.write(reinterpret_cast<const char *>(rgba.data()), kPricedownWidth * kPricedownHeight * 4u);
    } catch (...) {
    }
}

const std::vector<FrontendArtChoice> &frontend_art_choices() {
    static const std::vector<FrontendArtChoice> choices = [] {
        std::vector<FrontendArtChoice> out;
        for (const PlayerImage &image : player_images()) {
            out.push_back({fs::path(image.name).stem().string(), kImagePrefix + image.name});
        }
        for (const Painting &painting : kPaintings) out.push_back({painting.label, painting.file});
        return out;
    }();
    return choices;
}

}  // namespace lcs

#else

namespace lcs {

bool frontend_menu_active() noexcept { return false; }
bool frontend_menu_tick(psprecomp::Runtime &, std::uint32_t) { return false; }
void frontend_menu_draw() {}
bool frontend_hide_saves() noexcept { return false; }
std::uint32_t frontend_boot_pad(std::uint32_t held) noexcept { return held; }
void frontend_note_texture(const psprecomp::GuestMemory &, const std::array<std::uint32_t, 256> &, const GeGpuDrawDescriptor &,
                           std::span<const std::byte>) noexcept {}
const std::vector<FrontendArtChoice> &frontend_art_choices() {
    static const std::vector<FrontendArtChoice> none;
    return none;
}

}  // namespace lcs

#endif
