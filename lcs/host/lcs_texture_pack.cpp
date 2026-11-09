#include "lcs_texture_pack.hpp"

#include "lcs_render_config.hpp"
#include "lcs_texture_probe.hpp"

#include <algorithm>
#include <cctype>
#include <chrono>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <iterator>
#include <mutex>
#include <regex>
#include <sstream>
#include <thread>
#include <unordered_map>

#define STB_IMAGE_IMPLEMENTATION
#define STBI_ONLY_PNG
#define STBI_NO_STDIO
#define STBI_NO_LINEAR
#define STBI_NO_HDR
#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-function"
#pragma clang diagnostic ignored "-Wsign-compare"
#pragma clang diagnostic ignored "-Wmissing-field-initializers"
#pragma clang diagnostic ignored "-Wunused-but-set-variable"
#endif
#include "../third_party/stb/stb_image.h"
#if defined(__clang__)
#pragma clang diagnostic pop
#endif

namespace lcs {
namespace {

namespace fs = std::filesystem;

// One image file. Several hashes can share it. Decoded once, by the background thread or the first upload to need it.
struct PackFile {
    fs::path path;
    std::once_flag once;
    std::shared_ptr<TexturePackImage> image;
};

struct Pack {
    std::string name;
    TextureHash hash{TextureHash::Quick};
    std::unordered_map<std::uint64_t, std::shared_ptr<PackFile>> entries;
    std::vector<std::shared_ptr<PackFile>> files;
};

struct PackFolder {
    std::string name;
    fs::path folder;
};

std::mutex g_mutex;
std::string g_game_root;
bool g_scanned = false;
std::vector<PackFolder> g_folders;
std::vector<std::string> g_names;
int g_current = 0;
int g_second = 0;
std::shared_ptr<const Pack> g_pack;
std::atomic<std::uint32_t> g_generation{0u};
std::atomic<std::uint64_t> g_decoded_bytes{0u};

std::string lower(std::string text) {
    std::transform(text.begin(), text.end(), text.begin(), [](unsigned char c) { return static_cast<char>(std::tolower(c)); });
    return text;
}

std::string trim(const std::string &text) {
    const auto first = text.find_first_not_of(" \t\r\n");
    if (first == std::string::npos) return {};
    return text.substr(first, text.find_last_not_of(" \t\r\n") - first + 1u);
}

// A PPSSPP pack folder is named after the game's id; the name people know is the folder above it.
bool looks_like_game_id(const std::string &name) {
    if (name.size() != 9u) return false;
    for (std::size_t i = 0u; i < 9u; ++i) {
        const auto c = static_cast<unsigned char>(name[i]);
        if (i < 4u ? std::isupper(c) == 0 : std::isdigit(c) == 0) return false;
    }
    return true;
}

fs::path packs_root() {
    if (const char *text = std::getenv("LCS_TEXTURE_DIR"); text != nullptr && *text != '\0') return fs::path(text);
    return fs::path(g_game_root) / "TEXTURES";
}

void scan_locked() {
    if (g_scanned) return;
    g_scanned = true;
    std::error_code error;
    const fs::path root = packs_root();
    if (!fs::is_directory(root, error)) return;
    for (fs::recursive_directory_iterator it(root, fs::directory_options::skip_permission_denied, error), end;
         !error && it != end; it.increment(error)) {
        if (it.depth() > 4) {
            it.disable_recursion_pending();
            continue;
        }
        if (!it->is_regular_file(error) || lower(it->path().filename().string()) != "textures.ini") continue;
        const fs::path folder = it->path().parent_path();
        const std::string leaf = folder.filename().string();
        const std::string name = looks_like_game_id(leaf) && folder.parent_path() != root
            ? folder.parent_path().filename().string() : leaf;
        g_folders.push_back({name, folder});
    }
    std::sort(g_folders.begin(), g_folders.end(), [](const PackFolder &a, const PackFolder &b) { return a.name < b.name; });
    for (const PackFolder &folder : g_folders) g_names.push_back(folder.name);
    std::cerr << "[texture-pack] " << g_folders.size() << " found in " << root.string() << "\n";
}

std::shared_ptr<const Pack> load_pack(const PackFolder &folder) {
    // Pack files are written on Windows and their names don't always match the case on disk.
    std::unordered_map<std::string, fs::path> on_disk;
    std::error_code error;
    for (fs::recursive_directory_iterator it(folder.folder, fs::directory_options::skip_permission_denied, error), end;
         !error && it != end; it.increment(error)) {
        if (it->is_regular_file(error)) {
            on_disk[lower(fs::relative(it->path(), folder.folder, error).generic_string())] = it->path();
        }
    }

    auto pack = std::make_shared<Pack>();
    pack->name = folder.name;
    std::ifstream file(folder.folder / "textures.ini");
    std::string line, section, hash_kind = "quick";
    bool ignore_address = false;
    std::unordered_map<std::string, std::shared_ptr<PackFile>> by_path;
    int skipped = 0;
    while (std::getline(file, line)) {
        line = trim(line);
        if (line.empty() || line[0] == '#') continue;
        if (line[0] == '[') {
            section = lower(line);
            continue;
        }
        const auto equals = line.find('=');
        if (equals == std::string::npos) continue;
        const std::string key = lower(trim(line.substr(0u, equals)));
        std::string value = trim(line.substr(equals + 1u));
        if (section == "[options]") {
            if (key == "hash") hash_kind = lower(value);
            if (key == "ignoreaddress") ignore_address = lower(value) == "true" || value == "1";
            continue;
        }
        if (section != "[hashes]" || key.size() != 24u || value.empty()) continue;
        if (key.find_first_not_of("0123456789abcdef") != std::string::npos) continue;
        if (!ignore_address && key.compare(0u, 8u, "00000000") != 0) {
            ++skipped;  // tied to a memory address of the version it was made from
            continue;
        }
        const auto found = on_disk.find(lower(fs::path(value).generic_string()));
        if (found == on_disk.end()) {
            ++skipped;
            continue;
        }
        auto &shared = by_path[found->first];
        if (!shared) {
            shared = std::make_shared<PackFile>();
            shared->path = found->second;
            pack->files.push_back(shared);
        }
        pack->entries[std::strtoull(key.c_str() + 8u, nullptr, 16)] = shared;
    }
    if (hash_kind != "xxh64" && hash_kind != "xxh32" && hash_kind != "quick") {
        std::cerr << "[texture-pack] " << folder.name << ": hash = " << hash_kind << " isn't supported yet\n";
        return nullptr;
    }
    pack->hash = hash_kind == "xxh64" ? TextureHash::Xxh64 : hash_kind == "xxh32" ? TextureHash::Xxh32 : TextureHash::Quick;
    std::cerr << "[texture-pack] " << folder.name << ": " << pack->entries.size() << " textures, " << pack->files.size()
              << " files, " << skipped << " entries skipped\n";
    return pack;
}

std::shared_ptr<TexturePackImage> decode(PackFile &file) {
    std::call_once(file.once, [&file] {
        std::ifstream in(file.path, std::ios::binary);
        const std::vector<char> bytes((std::istreambuf_iterator<char>(in)), std::istreambuf_iterator<char>());
        int width = 0, height = 0, channels = 0;
        stbi_uc *pixels = bytes.empty() ? nullptr : stbi_load_from_memory(
            reinterpret_cast<const stbi_uc *>(bytes.data()), static_cast<int>(bytes.size()), &width, &height, &channels, 4);
        if (pixels == nullptr) {
            std::cerr << "[texture-pack] can't read " << file.path.string() << "\n";
            return;
        }
        auto image = std::make_shared<TexturePackImage>();
        image->width = static_cast<std::uint32_t>(width);
        image->height = static_cast<std::uint32_t>(height);
        const auto *start = reinterpret_cast<const std::byte *>(pixels);
        image->rgba8.assign(start, start + static_cast<std::size_t>(width) * height * 4u);
        stbi_image_free(pixels);
        file.image = std::move(image);
    });
    return file.image;
}

// Two packs become one: the first one's entries, then what the second has that the first doesn't. Both must use the
// same kind of hash, as one lookup serves them.
std::shared_ptr<const Pack> stack(std::shared_ptr<const Pack> first, std::shared_ptr<const Pack> second) {
    if (first == nullptr) return second;
    if (second == nullptr) return first;
    if (second->hash != first->hash) {
        std::cerr << "[texture-pack] " << second->name << " uses another kind of hash than " << first->name << ": not stacked\n";
        return first;
    }
    auto both = std::make_shared<Pack>(*first);
    both->name = first->name + " + " + second->name;
    std::size_t added = 0u;
    for (const auto &[key, file] : second->entries) added += both->entries.emplace(key, file).second ? 1u : 0u;
    for (const auto &file : second->files) both->files.push_back(file);
    std::cerr << "[texture-pack] " << second->name << " adds " << added << " textures under " << first->name << "\n";
    return both;
}

void select_locked(int index, int second) {
    index = std::clamp(index, 0, static_cast<int>(g_folders.size()));
    second = std::clamp(second, 0, static_cast<int>(g_folders.size()));
    if (second == index) second = 0;
    std::shared_ptr<const Pack> first_pack, second_pack;
    if (index > 0) first_pack = load_pack(g_folders[static_cast<std::size_t>(index - 1)]);
    if (first_pack == nullptr) index = 0;
    if (second > 0) second_pack = load_pack(g_folders[static_cast<std::size_t>(second - 1)]);
    if (second_pack == nullptr) second = 0;
    std::shared_ptr<const Pack> pack = stack(first_pack, second_pack);
    g_current = index;
    g_second = second;
    g_pack = pack;
    const std::uint32_t generation = g_generation.fetch_add(1u, std::memory_order_relaxed) + 1u;
    g_decoded_bytes.store(0u, std::memory_order_relaxed);
    if (pack != nullptr) {
        // Decode ahead, so that the first time a texture shows doesn't cost a frame.
        std::thread([pack, generation] {
            const auto start = std::chrono::steady_clock::now();
            std::size_t bytes = 0u;
            for (const auto &file : pack->files) {
                if (const auto image = decode(*file)) bytes += image->rgba8.size();
            }
            if (g_generation.load(std::memory_order_relaxed) == generation) g_decoded_bytes.store(bytes, std::memory_order_relaxed);
            std::cerr << "[texture-pack] " << pack->name << ": decoded " << bytes / (1024u * 1024u) << " MB in "
                      << std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - start).count()
                      << " ms\n";
        }).detach();
    }
}

// The choice in the ini is applied the first time anyone asks.
void start_locked() {
    static bool started = false;
    if (started) return;
    started = true;
    scan_locked();
    const auto index_of = [](const std::string &wanted) {
        if (wanted.empty() || lower(wanted) == "original" || lower(wanted) == "none") return 0;
        for (std::size_t i = 0u; i < g_folders.size(); ++i) {
            if (lower(g_folders[i].name) == lower(wanted)) return static_cast<int>(i) + 1;
        }
        std::cerr << "[texture-pack] \"" << wanted << "\" not found\n";
        return 0;
    };
    const int first = index_of(lcs_render_configuration().rendering.texture_pack);
    const int second = index_of(lcs_render_configuration().rendering.texture_pack2);
    if (first > 0 || second > 0) select_locked(first, second);
}

// LCS_TEST_PACK_CYCLE=<seconds>: goes through the packs and back to none, for screenshots in unattended runs.
void start_test_cycle() {
    const char *text = std::getenv("LCS_TEST_PACK_CYCLE");
    if (text == nullptr) return;
    const int seconds = std::max(1, std::atoi(text));
    std::thread([seconds] {
        std::this_thread::sleep_for(std::chrono::seconds(30));
        for (int index = 0;;) {
            std::this_thread::sleep_for(std::chrono::seconds(seconds));
            index = (index + 1) % (static_cast<int>(texture_pack_names().size()) + 1);
            texture_pack_select(index);
            std::cerr << "[texture-pack] test: now " << index << "\n";
        }
    }).detach();
}

}  // namespace

void texture_pack_set_root(std::string game_folder) {
    const std::lock_guard<std::mutex> lock(g_mutex);
    g_game_root = std::move(game_folder);
}

std::shared_ptr<const TexturePackImage> texture_png_decode(const std::uint8_t *data, std::size_t size) {
    int width = 0, height = 0, channels = 0;
    stbi_uc *pixels = stbi_load_from_memory(data, static_cast<int>(size), &width, &height, &channels, 4);
    if (pixels == nullptr) return nullptr;
    auto image = std::make_shared<TexturePackImage>();
    image->width = static_cast<std::uint32_t>(width);
    image->height = static_cast<std::uint32_t>(height);
    const auto *start = reinterpret_cast<const std::byte *>(pixels);
    image->rgba8.assign(start, start + static_cast<std::size_t>(width) * height * 4u);
    stbi_image_free(pixels);
    return image;
}

std::string game_root_folder() {
    const std::lock_guard<std::mutex> lock(g_mutex);
    return g_game_root;
}

const std::vector<std::string> &texture_pack_names() {
    const std::lock_guard<std::mutex> lock(g_mutex);
    start_locked();
    return g_names;
}

int texture_pack_current_index() {
    const std::lock_guard<std::mutex> lock(g_mutex);
    start_locked();
    return g_current;
}

void texture_pack_select(int index) {
    const std::lock_guard<std::mutex> lock(g_mutex);
    start_locked();
    select_locked(index, g_second);
}

int texture_pack_second_index() {
    const std::lock_guard<std::mutex> lock(g_mutex);
    start_locked();
    return g_second;
}

void texture_pack_select_second(int index) {
    const std::lock_guard<std::mutex> lock(g_mutex);
    start_locked();
    select_locked(g_current, index);
}

std::uint32_t texture_pack_generation() noexcept {
    return g_generation.load(std::memory_order_relaxed);
}

std::uint64_t texture_pack_decoded_bytes() noexcept {
    return g_decoded_bytes.load(std::memory_order_relaxed);
}

std::shared_ptr<const TexturePackImage> texture_pack_find_hash(std::uint32_t data_key) {
    std::shared_ptr<const Pack> pack;
    {
        const std::lock_guard<std::mutex> lock(g_mutex);
        start_locked();
        pack = g_pack;
    }
    if (pack == nullptr) return nullptr;
    for (const auto &[key, file] : pack->entries) {
        if (static_cast<std::uint32_t>(key) == data_key) return decode(*file);
    }
    return nullptr;
}

std::shared_ptr<const TexturePackImage> texture_pack_find_data(const std::uint8_t *data, std::size_t size) {
    std::shared_ptr<const Pack> pack;
    {
        const std::lock_guard<std::mutex> lock(g_mutex);
        start_locked();
        pack = g_pack;
    }
    if (pack == nullptr || pack->hash == TextureHash::Quick) return nullptr;
    constexpr std::uint32_t kSeed = 0xBACD7814u;
    const std::uint32_t hash = pack->hash == TextureHash::Xxh32 ? xxh32(data, size, kSeed)
                                                                : static_cast<std::uint32_t>(xxh64(data, size, kSeed));
    return texture_pack_find_hash(hash);
}

std::shared_ptr<const TexturePackImage> texture_pack_find(const psprecomp::GuestMemory &memory,
                                                          const std::array<std::uint32_t, 256> &commands,
                                                          const GeGpuDrawDescriptor &draw) {
    std::shared_ptr<const Pack> pack;
    {
        const std::lock_guard<std::mutex> lock(g_mutex);
        start_locked();
        static std::once_flag test_once;
        std::call_once(test_once, start_test_cycle);
        pack = g_pack;
    }
    if (pack == nullptr || pack->entries.empty()) return nullptr;
    if (draw.texture_format > 10u || draw.texture_width == 0u || draw.texture_height == 0u) return nullptr;
    std::uint32_t key = 0u;
    if (!texture_palette_key(memory, commands, draw, key)) return nullptr;

    const auto look_up = [&](std::uint32_t rows) -> std::shared_ptr<const TexturePackImage> {
        std::uint32_t hash = 0u;
        if (!texture_data_key(memory, draw, rows, pack->hash, hash)) return nullptr;
        auto found = pack->entries.find((static_cast<std::uint64_t>(key) << 32u) | hash);
        if (found == pack->entries.end()) found = pack->entries.find(hash);  // a key of zero stands for any palette
        return found != pack->entries.end() ? decode(*found->second) : nullptr;
    };
    const std::uint32_t h = draw.texture_height;
    if (auto image = look_up(h)) return image;
    // PPSSPP hashes a 512-tall texture only as far down as it was drawn, from 272 rows up.
    if (h == 512u && draw.through && !(draw.texture_swizzled && draw.texture_format == 4u)) {
        for (std::uint32_t rows = 272u; rows < h; ++rows) {
            if (auto image = look_up(rows)) return image;
        }
    }
    return nullptr;
}

}  // namespace lcs
