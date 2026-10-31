// Button prompt pictures of the HUD are the game's own textures, so a different
// controller style means repainting those textures as they are uploaded. The
// launcher writes the replacement RGBA8 files; this picks them by the content
// hash the GE renderer already computes for every texture.

#include "lcs_prompt_textures.hpp"

#include "lcs_render_config.hpp"

#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <mutex>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace lcs {
namespace {

std::string signature_name(std::uint64_t signature) {
    char buffer[17];
    std::snprintf(buffer, sizeof buffer, "%016llx",
                  static_cast<unsigned long long>(signature));
    return buffer;
}

std::string lowercase(std::string value) {
    for (char &c : value) c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
    return value;
}

std::filesystem::path configuration_root() {
    const LcsConfiguration &config = lcs_render_configuration();
    if (config.source_path.has_parent_path()) return config.source_path.parent_path();
    return config.executable_directory;
}

std::uint32_t mip_dimension(std::uint32_t value, std::uint32_t level) {
    return std::max<std::uint32_t>(1u, value >> level);
}

std::size_t chain_bytes(std::uint32_t width, std::uint32_t height, std::uint32_t levels) {
    std::size_t total = 0u;
    for (std::uint32_t level = 0u; level < levels; ++level)
        total += static_cast<std::size_t>(mip_dimension(width, level)) *
                 mip_dimension(height, level) * 4u;
    return total;
}

struct OverrideCache {
    std::mutex mutex;
    std::unordered_map<std::uint64_t, std::vector<std::byte>> loaded;
    std::unordered_set<std::uint64_t> missing;
};

OverrideCache &override_cache() {
    static OverrideCache cache;
    return cache;
}

std::vector<std::byte> read_rgba_file(const std::filesystem::path &path,
                                      std::size_t expected_bytes) {
    std::ifstream stream(path, std::ios::binary | std::ios::ate);
    if (!stream) return {};
    const std::streamoff size = stream.tellg();
    if (size < 0 || static_cast<std::size_t>(size) != expected_bytes) return {};
    std::vector<std::byte> pixels(static_cast<std::size_t>(size));
    stream.seekg(0);
    if (!stream.read(reinterpret_cast<char *>(pixels.data()),
                     static_cast<std::streamsize>(pixels.size())))
        return {};
    return pixels;
}

// The game ships the mip chain it wants, so a repainted mip 0 has to keep
// matching it.
void rebuild_mip_chain(std::span<std::byte> rgba8, std::uint32_t width, std::uint32_t height,
                       std::uint32_t levels) {
    std::size_t offset = 0u;
    for (std::uint32_t level = 0u; level + 1u < levels; ++level) {
        const std::uint32_t source_width = mip_dimension(width, level);
        const std::uint32_t source_height = mip_dimension(height, level);
        const std::size_t source_bytes =
            static_cast<std::size_t>(source_width) * source_height * 4u;
        const std::uint32_t target_width = mip_dimension(width, level + 1u);
        const std::uint32_t target_height = mip_dimension(height, level + 1u);
        const std::size_t target_bytes =
            static_cast<std::size_t>(target_width) * target_height * 4u;
        const std::size_t target_offset = offset + source_bytes;
        offset = target_offset;
        if (target_offset + target_bytes > rgba8.size()) return;
        const auto *source = reinterpret_cast<const std::uint8_t *>(rgba8.data() +
                                                                    (target_offset - source_bytes));
        auto *target = reinterpret_cast<std::uint8_t *>(rgba8.data() + target_offset);
        for (std::uint32_t y = 0u; y < target_height; ++y) {
            for (std::uint32_t x = 0u; x < target_width; ++x) {
                const std::uint32_t x0 = std::min(x * 2u + 0u, source_width - 1u);
                const std::uint32_t x1 = std::min(x * 2u + 1u, source_width - 1u);
                const std::uint32_t y0 = std::min(y * 2u + 0u, source_height - 1u);
                const std::uint32_t y1 = std::min(y * 2u + 1u, source_height - 1u);
                const std::uint8_t *a = source + (y0 * source_width + x0) * 4u;
                const std::uint8_t *b = source + (y0 * source_width + x1) * 4u;
                const std::uint8_t *c = source + (y1 * source_width + x0) * 4u;
                const std::uint8_t *d = source + (y1 * source_width + x1) * 4u;
                std::uint8_t *out = target + (y * target_width + x) * 4u;
                for (std::uint32_t channel = 0u; channel < 4u; ++channel)
                    out[channel] = static_cast<std::uint8_t>(
                        (a[channel] + b[channel] + c[channel] + d[channel] + 2u) / 4u);
            }
        }
    }
}

struct DumpState {
    std::mutex mutex;
    std::unordered_set<std::uint64_t> seen;
    std::filesystem::path directory;
    bool enabled{false};
    bool screen_space_only{true};
};

bool fill_dump_state(DumpState &state) {
    const char *text = std::getenv("LCS_TEXTURE_DUMP");
    if (text == nullptr || *text == '\0' || std::strcmp(text, "0") == 0) return true;
    std::filesystem::path directory;
    if (std::strcmp(text, "1") == 0) directory = configuration_root() / "textures_dump";
    else if (std::strcmp(text, "all") == 0) directory = configuration_root() / "textures_dump";
    else directory = std::filesystem::path(text);
    state.screen_space_only = std::strcmp(text, "all") != 0;
    std::error_code error;
    std::filesystem::create_directories(directory, error);
    if (error) return true;
    state.directory = directory;
    state.enabled = true;
    return true;
}

DumpState &dump_state() {
    static DumpState state;
    static const bool initialized = fill_dump_state(state);
    (void)initialized;
    return state;
}

}

const std::string &prompt_texture_style() {
    static std::string style;
    const std::string configured = lowercase(lcs_render_configuration().display.prompt_style);
    if (configured.empty() || configured == "original" || configured == "psp" ||
        configured == "playstation" || configured == "off" || configured == "none")
        style.clear();
    else
        style = configured;
    return style;
}

std::filesystem::path find_override_file(const std::string &style, std::uint64_t signature,
                                         std::uint32_t width, std::uint32_t height) {
    const std::string name = signature_name(signature) + ".rgba";
    const LcsConfiguration &config = lcs_render_configuration();
    std::vector<std::filesystem::path> roots;
    roots.push_back(configuration_root());
    if (!config.executable_directory.empty()) {
        roots.push_back(config.executable_directory);
        roots.push_back(config.executable_directory / "config");
        if (config.executable_directory.has_parent_path())
            roots.push_back(config.executable_directory.parent_path() / "config");
    }
    const std::size_t expected = static_cast<std::size_t>(width) * height * 4u;
    for (const auto &root : roots) {
        const auto path = root / "textures" / style / name;
        std::vector<std::byte> probe = read_rgba_file(path, expected);
        if (!probe.empty()) return path;
    }
    return {};
}

void blit_spacebar_cell(std::span<std::byte> rgba8, std::uint32_t width, std::uint32_t col,
                        std::uint32_t row) {
    const std::uint32_t cell = 16u;
    const std::uint32_t x0 = col * cell;
    const std::uint32_t y0 = row * cell;
    if ((x0 + cell) > width) return;
    const std::size_t need = static_cast<std::size_t>(width) * (y0 + cell) * 4u;
    if (rgba8.size() < need) return;
    auto *base = reinterpret_cast<std::uint8_t *>(rgba8.data());
    for (std::uint32_t y = 0; y < cell; ++y) {
        for (std::uint32_t x = 0; x < cell; ++x) {
            std::uint8_t *px = base + ((y0 + y) * width + (x0 + x)) * 4u;
            px[0] = px[1] = px[2] = px[3] = 0;
        }
    }
    const int y_top = 7;
    const int y_bot = 11;
    for (int y = y_top; y <= y_bot; ++y) {
        for (int x = 1; x <= 14; ++x) {
            const bool edge = y == y_top || y == y_bot || x == 1 || x == 14;
            if (!edge) continue;
            std::uint8_t *px = base + ((y0 + static_cast<std::uint32_t>(y)) * width +
                                       (x0 + static_cast<std::uint32_t>(x))) *
                                          4u;
            px[0] = px[1] = px[2] = px[3] = 255;
        }
    }
}

void patch_kb_letter_r(std::uint64_t signature, std::uint32_t width, std::uint32_t height,
                       std::span<std::byte> rgba8) {
    if (width != 256u || height != 256u) return;
    // 5ff05f6c2afa636b and 37bf52ac7d5c44c4 HUD fonts.
    if (signature != 0x5ff05f6c2afa636bull && signature != 0x37bf52ac7d5c44c4ull) return;
    blit_spacebar_cell(rgba8, width, 2u, 3u);   // ASCII 'R'
    if (signature == 0x37bf52ac7d5c44c4ull)
        blit_spacebar_cell(rgba8, width, 5u, 15u);  // last-row R button
}

void prompt_texture_apply(std::uint64_t signature, std::uint32_t width, std::uint32_t height,
                          std::uint32_t mip_levels, std::span<std::byte> rgba8) {
    if (signature == 0u || width == 0u || height == 0u || rgba8.empty()) return;
    const std::string &style = prompt_texture_style();
    if (style.empty()) return;
    OverrideCache &cache = override_cache();
    std::vector<std::byte> pixels;
    {
        std::lock_guard<std::mutex> lock(cache.mutex);
        const auto found = cache.loaded.find(signature);
        if (found != cache.loaded.end()) {
            pixels = found->second;
        } else {
            const auto path = find_override_file(style, signature, width, height);
            if (!path.empty()) {
                pixels = read_rgba_file(path, static_cast<std::size_t>(width) * height * 4u);
                if (!pixels.empty()) cache.loaded.insert({signature, pixels});
            }
        }
    }
    const std::size_t mip0_bytes = static_cast<std::size_t>(width) * height * 4u;
    if (!pixels.empty()) {
        const std::size_t copy_bytes = std::min(mip0_bytes, rgba8.size());
        std::memcpy(rgba8.data(), pixels.data(), copy_bytes);
    }
    if (style == "kb") patch_kb_letter_r(signature, width, height, rgba8);
    if (mip_levels > 1u && rgba8.size() >= chain_bytes(width, height, mip_levels))
        rebuild_mip_chain(rgba8, width, height, mip_levels);
}

void prompt_texture_dump(std::uint64_t signature, std::uint32_t width, std::uint32_t height,
                         std::uint32_t address, std::uint32_t format, bool screen_space,
                         std::span<const std::byte> rgba8) {
    DumpState &state = dump_state();
    if (!state.enabled || signature == 0u || width == 0u || height == 0u) return;
    if (state.screen_space_only && !screen_space) return;
    const std::size_t mip0_bytes = static_cast<std::size_t>(width) * height * 4u;
    if (rgba8.size() < mip0_bytes) return;
    std::lock_guard<std::mutex> lock(state.mutex);
    if (!state.seen.insert(signature).second) return;
    const std::string name = signature_name(signature) + "_" + std::to_string(width) + "x" +
                             std::to_string(height);
    std::ofstream image(state.directory / (name + ".rgba"), std::ios::binary);
    if (image)
        image.write(reinterpret_cast<const char *>(rgba8.data()),
                    static_cast<std::streamsize>(mip0_bytes));
    std::ofstream manifest(state.directory / "manifest.txt", std::ios::app);
    if (manifest)
        manifest << name << " address=0x" << std::hex << address << std::dec
                 << " format=" << format << '\n';
}

}
