#include "lcs_texture_probe.hpp"

#include <algorithm>
#include <bit>
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <atomic>
#include <mutex>
#include <unordered_map>
#include <unordered_set>

namespace lcs {
namespace {

constexpr std::uint32_t P32_1 = 2654435761u, P32_2 = 2246822519u, P32_3 = 3266489917u, P32_4 = 668265263u,
                        P32_5 = 374761393u;
constexpr std::uint64_t P64_1 = 11400714785074694791ull, P64_2 = 14029467366897019727ull,
                        P64_3 = 1609587929392839161ull, P64_4 = 9650029242287828579ull,
                        P64_5 = 2870177450012600261ull;

std::uint32_t read32(const std::uint8_t *p) noexcept {
    std::uint32_t value;
    std::memcpy(&value, p, 4u);
    return value;
}
std::uint64_t read64(const std::uint8_t *p) noexcept {
    std::uint64_t value;
    std::memcpy(&value, p, 8u);
    return value;
}
std::uint32_t round32(std::uint32_t acc, std::uint32_t input) noexcept {
    return std::rotl(acc + input * P32_2, 13) * P32_1;
}
std::uint64_t round64(std::uint64_t acc, std::uint64_t input) noexcept {
    return std::rotl(acc + input * P64_2, 31) * P64_1;
}
std::uint64_t merge64(std::uint64_t acc, std::uint64_t value) noexcept {
    return (acc ^ round64(0u, value)) * P64_1 + P64_4;
}

// Bits per pixel by GE texture format, as PPSSPP's textureBitsPerPixel.
constexpr std::uint32_t kBits[11] = {16u, 16u, 16u, 32u, 4u, 8u, 16u, 32u, 4u, 8u, 8u};

// PPSSPP's StableQuickTexHash, whose result depends on the pointer's alignment.
std::uint32_t quick_hash(const std::uint8_t *data, std::uint32_t size, bool aligned) noexcept {
    std::uint32_t check = 0u;
    if (aligned && (size & 0x3Fu) == 0u) {
        std::array<std::uint16_t, 8> cursor2 = {0xC00Bu, 0x9BD9u, 0x4B73u, 0xB651u, 0x4D9Bu, 0x4309u, 0x0083u, 0x0001u};
        std::array<std::uint16_t, 8> cursor{};
        const auto lanes = [](const std::uint8_t *from) {
            std::array<std::uint16_t, 8> out;
            std::memcpy(out.data(), from, 16u);
            return out;
        };
        for (std::uint32_t i = 0u; i < size / 16u; i += 4u) {
            const std::uint8_t *block = data + i * 16u;
            auto a = lanes(block);
            for (std::size_t j = 0u; j < 8u; ++j) cursor[j] = static_cast<std::uint16_t>(cursor[j] + a[j] * cursor2[j]);
            std::array<std::uint32_t, 4> wide;
            std::memcpy(wide.data(), cursor.data(), 16u);
            for (std::uint32_t j = 0u; j < 4u; ++j) {
                wide[j] ^= read32(block + 16u + j * 4u);
                wide[j] += read32(block + 32u + j * 4u);
            }
            std::memcpy(cursor.data(), wide.data(), 16u);
            a = lanes(block + 48u);
            for (std::size_t j = 0u; j < 8u; ++j) cursor[j] = static_cast<std::uint16_t>(cursor[j] ^ static_cast<std::uint16_t>(a[j] * cursor2[j]));
            for (std::size_t j = 0u; j < 8u; ++j) cursor2[j] = static_cast<std::uint16_t>(cursor2[j] + 0x2455u);
        }
        std::array<std::uint32_t, 4> wide, wide2;
        std::memcpy(wide.data(), cursor.data(), 16u);
        std::memcpy(wide2.data(), cursor2.data(), 16u);
        for (std::size_t j = 0u; j < 4u; ++j) check += wide[j] + wide2[j];
    } else {
        for (std::uint32_t i = 0u; i < size / 8u; ++i) {
            check += read32(data + i * 8u);
            check ^= read32(data + i * 8u + 4u);
        }
    }
    return check;
}

// The hash TextureReplacer::ComputeHash makes.
std::uint32_t data_hash(const std::uint8_t *data, std::uint32_t bits, std::uint32_t bufw, std::uint32_t w,
                        std::uint32_t h, TextureHash kind, bool aligned) noexcept {
    constexpr std::uint32_t kSeed = 0xBACD7814u;
    const auto hash = [kind, aligned](const std::uint8_t *from, std::uint32_t size) {
        if (kind == TextureHash::Quick) return quick_hash(from, size, aligned);
        return kind == TextureHash::Xxh32 ? xxh32(from, size, kSeed) : static_cast<std::uint32_t>(xxh64(from, size, kSeed));
    };
    if (bufw <= w) {
        const std::uint32_t pixels = bufw * h + (w - bufw);
        return hash(data, bits * pixels / 8u);
    }
    const std::uint32_t line = bits * w / 8u;
    const std::uint32_t stride = bits * bufw / 8u;
    std::uint32_t result = 0u;
    for (std::uint32_t y = 0u; y < h; ++y) {
        result = (result * 11u) ^ hash(data, line);
        data += stride;
    }
    return result;
}

}  // namespace

std::uint32_t xxh32(const void *data, std::size_t size, std::uint32_t seed) noexcept {
    const auto *p = static_cast<const std::uint8_t *>(data);
    const std::uint8_t *const end = p + size;
    std::uint32_t h;
    if (size >= 16u) {
        std::uint32_t v1 = seed + P32_1 + P32_2, v2 = seed + P32_2, v3 = seed, v4 = seed - P32_1;
        const std::uint8_t *const limit = end - 16;
        do {
            v1 = round32(v1, read32(p));
            v2 = round32(v2, read32(p + 4));
            v3 = round32(v3, read32(p + 8));
            v4 = round32(v4, read32(p + 12));
            p += 16;
        } while (p <= limit);
        h = std::rotl(v1, 1) + std::rotl(v2, 7) + std::rotl(v3, 12) + std::rotl(v4, 18);
    } else {
        h = seed + P32_5;
    }
    h += static_cast<std::uint32_t>(size);
    while (p + 4 <= end) {
        h = std::rotl(h + read32(p) * P32_3, 17) * P32_4;
        p += 4;
    }
    while (p < end) {
        h = std::rotl(h + *p * P32_5, 11) * P32_1;
        ++p;
    }
    h ^= h >> 15;
    h *= P32_2;
    h ^= h >> 13;
    h *= P32_3;
    return h ^ (h >> 16);
}

std::uint64_t xxh64(const void *data, std::size_t size, std::uint64_t seed) noexcept {
    const auto *p = static_cast<const std::uint8_t *>(data);
    const std::uint8_t *const end = p + size;
    std::uint64_t h;
    if (size >= 32u) {
        std::uint64_t v1 = seed + P64_1 + P64_2, v2 = seed + P64_2, v3 = seed, v4 = seed - P64_1;
        const std::uint8_t *const limit = end - 32;
        do {
            v1 = round64(v1, read64(p));
            v2 = round64(v2, read64(p + 8));
            v3 = round64(v3, read64(p + 16));
            v4 = round64(v4, read64(p + 24));
            p += 32;
        } while (p <= limit);
        h = std::rotl(v1, 1) + std::rotl(v2, 7) + std::rotl(v3, 12) + std::rotl(v4, 18);
        h = merge64(h, v1);
        h = merge64(h, v2);
        h = merge64(h, v3);
        h = merge64(h, v4);
    } else {
        h = seed + P64_5;
    }
    h += static_cast<std::uint64_t>(size);
    while (p + 8 <= end) {
        h = std::rotl(h ^ round64(0u, read64(p)), 27) * P64_1 + P64_4;
        p += 8;
    }
    if (p + 4 <= end) {
        h = std::rotl(h ^ (static_cast<std::uint64_t>(read32(p)) * P64_1), 23) * P64_2 + P64_3;
        p += 4;
    }
    while (p < end) {
        h = std::rotl(h ^ (*p * P64_5), 11) * P64_1;
        ++p;
    }
    h ^= h >> 33;
    h *= P64_2;
    h ^= h >> 29;
    h *= P64_3;
    return h ^ (h >> 32);
}

bool texture_palette_key(const psprecomp::GuestMemory &memory, const std::array<std::uint32_t, 256> &commands,
                         const GeGpuDrawDescriptor &draw, std::uint32_t &key) noexcept {
    key = commands[0xB8u] & 0x0F0Fu;
    if (draw.texture_format < 4u || draw.texture_format > 7u) return true;
    // PPSSPP hashes what the last palette load read, plus the start offset, up to the largest load so far.
    // That is at least 512 bytes by the time the game runs, and only matters for a palette with an offset.
    static std::atomic<std::uint32_t> last_load{0u};
    const std::uint32_t blocks = commands[0xC4u] & 0x3Fu;
    if (blocks != 0u) last_load.store(blocks * 32u, std::memory_order_relaxed);
    const std::uint32_t loaded = last_load.load(std::memory_order_relaxed);
    const std::uint32_t base_bytes = draw.clut_start * (draw.clut_format == 3u ? 4u : 2u);
    const std::uint32_t bytes = std::min(loaded + base_bytes, std::max(loaded, 512u));
    const std::uint8_t *clut = bytes != 0u ? memory.raw_pointer(draw.clut_address, bytes) : nullptr;
    if (clut == nullptr) return false;
    key ^= xxh32(clut, bytes, 0xC0108888u) ^ (0xC5000000u | (commands[0xC5u] & 0x00FFFFFFu));
    return true;
}

bool texture_data_key(const psprecomp::GuestMemory &memory, const GeGpuDrawDescriptor &draw, std::uint32_t rows,
                      TextureHash kind, std::uint32_t &key) noexcept {
    const std::uint32_t w = draw.texture_width, bufw = draw.texture_buffer_width;
    const std::uint32_t bits = kBits[draw.texture_format];
    const std::size_t span = static_cast<std::size_t>(bits) * std::max(bufw, w) * rows / 8u;
    const std::uint8_t *data = memory.raw_pointer(draw.texture_address, span);
    if (data == nullptr) return false;
    key = data_hash(data, bits, bufw, w, rows, kind, (draw.texture_address & 0xFu) == 0u);
    return true;
}

bool texture_probe_enabled() noexcept {
    static const bool enabled = std::getenv("LCS_TEXTURE_PROBE") != nullptr;
    return enabled;
}

void texture_probe_observe(const psprecomp::GuestMemory &memory, const std::array<std::uint32_t, 256> &commands,
                           const GeGpuDrawDescriptor &draw) noexcept {
    if (!draw.texture_enabled || draw.clear_mode || draw.texture_format > 10u) return;
    static std::mutex mutex;
    const std::lock_guard<std::mutex> lock(mutex);
    static std::ofstream out = [] {
        std::ofstream file(std::getenv("LCS_TEXTURE_PROBE"));
        const bool ok = xxh32("", 0u, 0u) == 0x02CC5D05u && xxh32("abc", 3u, 0u) == 0x32D153FFu &&
                        xxh64("", 0u, 0u) == 0xEF46DB3751D8E999ull && xxh64("abc", 3u, 0u) == 0x44BC2CF5AD770999ull;
        std::cerr << "[texprobe] hash self-test " << (ok ? "ok" : "FAILED") << "\n";
        file << "key format width height bufw address through swizzled clut_start rows\n";
        return file;
    }();
    static std::unordered_map<std::uint64_t, std::chrono::steady_clock::time_point> checked;
    static std::unordered_set<std::uint64_t> seen;

    const std::uint32_t dim = commands[0xB8u] & 0x0F0Fu;
    const std::uint32_t clut_format = 0xC5000000u | (commands[0xC5u] & 0x00FFFFFFu);
    const bool indexed = draw.texture_format >= 4u && draw.texture_format <= 7u;
    const std::uint64_t id = (static_cast<std::uint64_t>(draw.texture_address) << 32u) ^
                             (static_cast<std::uint64_t>(dim) << 20u) ^ (indexed ? draw.clut_address : 0u) ^
                             (static_cast<std::uint64_t>(draw.texture_format) << 60u) ^
                             (indexed ? static_cast<std::uint64_t>(clut_format) << 8u : 0u);
    const auto now = std::chrono::steady_clock::now();
    auto &due = checked[id];
    if (now < due) return;
    due = now + std::chrono::milliseconds(500);

    std::uint32_t key = 0u;
    if (!texture_palette_key(memory, commands, draw, key)) return;

    const std::uint32_t w = draw.texture_width, h = draw.texture_height, bufw = draw.texture_buffer_width;
    // PPSSPP hashes a 512-tall texture only to the highest V drawn so far, at least 272, in through mode.
    const bool partial = h == 512u && draw.through && !(draw.texture_swizzled && draw.texture_format == 4u);
    for (std::uint32_t rows = partial ? 272u : h; rows <= h; ++rows) {
        std::uint32_t hash = 0u;
        static const TextureHash kind = std::getenv("LCS_TEXTURE_PROBE_QUICK") != nullptr ? TextureHash::Quick : TextureHash::Xxh64;
        if (!texture_data_key(memory, draw, rows, kind, hash)) continue;
        const std::uint64_t full = (static_cast<std::uint64_t>(key) << 32u) | hash;
        if (!seen.insert(full).second) continue;
        char name[32];
        std::snprintf(name, sizeof(name), "00000000%08x%08x", key, hash);
        out << name << ' ' << draw.texture_format << ' ' << w << ' ' << h << ' ' << bufw << " 0x" << std::hex
            << draw.texture_address << std::dec << ' ' << (draw.through ? 1 : 0) << ' '
            << (draw.texture_swizzled ? 1 : 0) << ' ' << draw.clut_start << ' ' << rows << '\n';
    }
    out.flush();
}

}  // namespace lcs
