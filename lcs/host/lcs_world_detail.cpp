#include "lcs_world_detail.hpp"
#include "lcs_render_config.hpp"
#include "psprecomp/runtime.hpp"

#include <algorithm>
#include <array>
#include <bit>
#include <cmath>
#include <cstring>
#include <fstream>
#include <iostream>
#include <map>
#include <set>
#include <stdexcept>

namespace lcs {
namespace {
using Bytes = std::vector<std::uint8_t>;
using Instance = std::array<std::uint8_t, 68>;

template<class T> T read(const Bytes &b, std::size_t at) {
    if (at > b.size() || sizeof(T) > b.size() - at)
        throw std::runtime_error("world sector offset outside chunk");
    T value{};
    for (std::size_t i = 0; i < sizeof(T); ++i) value |= T(b[at + i]) << (8 * i);
    return value;
}
template<class T> void write(Bytes &b, std::size_t at, T value) {
    if (at > b.size() || sizeof(T) > b.size() - at)
        throw std::runtime_error("world sector write outside chunk");
    for (std::size_t i = 0; i < sizeof(T); ++i) b[at + i] = (value >> (8 * i)) & 255;
}
template<class T> void append(Bytes &b, T value) {
    const auto at = b.size(); b.resize(at + sizeof(T)); write(b, at, value);
}
std::uint32_t u32(const Bytes &b, std::size_t at) { return read<std::uint32_t>(b, at); }
std::uint16_t u16(const Bytes &b, std::size_t at) { return read<std::uint16_t>(b, at); }

std::array<float, 2> origin(const WorldSectorSource &s) {
    // Only differences matter: the PSP world uses staggered 125 x 108.25 cells.
    return {125.0f * s.x - 62.5f * (s.y & 1), 108.25f * s.y};
}

// The guest can read another original chunk before calling the expansion hook.
constexpr std::uint32_t kRawLoadReserve = 0x106800u;

void validate_source(const WorldSectorSource &source) {
    const auto &raw = source.data;
    if (source.data_size < 80 || source.data_size - 32 > raw.size())
        throw std::runtime_error("invalid world sector data size");
    std::set<std::uint32_t> seen_relocations;
    for (auto at : source.relocations) {
        if (!seen_relocations.insert(at).second)
            throw std::runtime_error("duplicate world relocation");
        if (at < 32 || at > source.data_size - 4)
            throw std::runtime_error("invalid world relocation");
        const auto pointer = u32(raw, at - 32);
        if (pointer && (pointer < 32 || pointer > source.data_size))
            throw std::runtime_error("invalid world resource pointer");
    }
    for (unsigned p = 0; p < 7; ++p) {
        const auto begin = u32(raw, 8 + p * 4), end = u32(raw, 12 + p * 4);
        if (begin < 32 || end < begin || end > source.data_size || (end - begin) % 68)
            throw std::runtime_error("invalid world instance list");
        for (auto relocation : source.relocations)
            if (relocation >= begin && relocation < end)
                throw std::runtime_error("unsupported pointer inside world instance");
        for (auto at = begin; at < end; at += 68)
            for (unsigned axis = 0; axis < 2; ++axis)
                if ((u32(raw, at - 32 + 52 + axis * 4) >> 24) != 0x3B)
                    throw std::runtime_error("unsupported world matrix");
    }
    for (const auto [pointer, count, stride] : {
             std::array<std::uint32_t, 3>{u32(raw, 0), u16(raw, 4), 8},
             std::array<std::uint32_t, 3>{u32(raw, 44), u16(raw, 40), 4}})
        if (count && (pointer < 32 || pointer > source.data_size ||
                      count > (source.data_size - pointer) / stride))
            throw std::runtime_error("invalid world resource list");
    const auto overlays = u32(raw, 0);
    for (unsigned i = 0; i < u16(raw, 4); ++i) {
        const auto pointer = u32(raw, overlays - 32 + i * 8 + 4);
        if (pointer < 32 || pointer >= source.data_size)
            throw std::runtime_error("invalid world overlay pointer");
    }
}

struct LoadedSector {
    std::uint32_t world{}, address{};
    std::array<std::uint32_t, 8> original{}, detailed{};
    std::uint32_t original_swaps{}, detailed_swaps{};
    std::uint16_t original_count{}, detailed_count{};
};
std::map<std::uint32_t, LoadedSector> loaded;
std::set<std::uint32_t> pending_refresh;
}

DetailedWorldSector merge_world_sectors(const std::vector<WorldSectorSource> &sources) {
    if (sources.empty()) throw std::runtime_error("no world sectors to merge");
    DetailedWorldSector result;
    auto &data = result.data;
    if (sources.front().data.size() < 48) throw std::runtime_error("short world sector");
    data.assign(sources.front().data.begin(), sources.front().data.begin() + 48);
    // The guest renderer merges active sectors by masked instance ID; keep that order.
    std::array<std::map<std::uint32_t, Instance>, 7> passes;
    std::vector<std::array<std::set<std::uint32_t>, 7>> membership(sources.size());
    std::map<std::uint32_t, std::uint32_t> resources;
    std::set<std::uint32_t> swaps;
    const auto target_origin = origin(sources.front());
    for (const auto &source : sources) validate_source(source);
    for (std::size_t n = 0; n < sources.size(); ++n) {
        const auto &source = sources[n];
        const auto &raw = source.data;
        if (source.data_size < 80 || source.data_size - 32 > raw.size())
            throw std::runtime_error("invalid world sector data size");
        data.resize((data.size() + 15) & ~std::size_t(15));
        const auto delta = static_cast<std::uint32_t>(data.size());
        if (data.size() + source.data_size > kWorldBufferSize)
            throw std::runtime_error("detailed world sector exceeds scenery buffer");
        data.insert(data.end(), raw.begin(), raw.begin() + source.data_size - 32);
        for (auto at : source.relocations) {
            if (at < 32 || at > source.data_size - 4) throw std::runtime_error("invalid world relocation");
            const auto pointer = u32(raw, at - 32);
            if (pointer && (pointer < 32 || pointer > source.data_size))
                throw std::runtime_error("invalid world resource pointer");
            write(data, delta + at - 32, pointer ? pointer + delta : 0u);
            if (pointer) result.relocations.push_back(delta + at);
        }
        if (n == 0) {
            for (unsigned p = 0; p < 8; ++p) result.original_passes[p] = u32(raw, 8 + p * 4) + delta;
            result.original_swap_count = u16(raw, 40);
            result.original_swaps = u32(raw, 44) ? u32(raw, 44) + delta : 0u;
        }
        const auto source_origin = origin(source);
        for (unsigned p = 0; p < 7; ++p) {
            const auto begin = u32(raw, 8 + p * 4), end = u32(raw, 12 + p * 4);
            if (begin < 32 || end < begin || end > source.data_size || (end - begin) % 68)
                throw std::runtime_error("invalid world instance list");
            for (auto relocation : source.relocations)
                if (relocation >= begin && relocation < end)
                    throw std::runtime_error("unsupported pointer inside world instance");
            for (auto at = begin; at < end; at += 68) {
                const auto id = u16(raw, at - 32), resource = u16(raw, at - 30);
                const std::uint32_t key = (std::uint32_t(id & 32767) << 16) | resource;
                membership[n][p].insert(key);
                // Extend opaque scenery only. Keep the target's distant and
                // blended passes, including their original membership.
                if ((n && (p < 2 || p >= 4)) || passes[p].contains(key)) continue;
                if (n && std::any_of(passes.begin(), passes.end(),
                                     [&](const auto &pass) { return pass.contains(key); })) continue;
                Instance instance{};
                std::copy_n(raw.begin() + at - 32, 68, instance.begin());
                // Translation is encoded as three GE MTXDATA commands, not floats.
                Bytes matrix(instance.begin(), instance.end());
                for (unsigned axis = 0; axis < 2; ++axis) {
                    const auto word = u32(matrix, 52 + axis * 4);
                    if ((word >> 24) != 0x3B) throw std::runtime_error("unsupported world matrix");
                    const float value = std::bit_cast<float>((word & 0xFFFFFFu) << 8);
                    const float translated = value + (source_origin[axis] - target_origin[axis]);
                    write(matrix, 52 + axis * 4, 0x3B000000u | (std::bit_cast<std::uint32_t>(translated) >> 8));
                }
                std::copy(matrix.begin(), matrix.end(), instance.begin());
                passes[p].emplace(key, instance);
            }
        }
        const auto overlays = u32(raw, 0);
        for (unsigned i = 0; i < u16(raw, 4); ++i) {
            const auto at = overlays - 32 + i * 8;
            resources.try_emplace(u32(raw, at), u32(raw, at + 4) + delta);
        }
        const auto swap_data = u32(raw, 44);
        for (unsigned i = 0; i < u16(raw, 40); ++i) swaps.insert(u32(raw, swap_data - 32 + i * 4));
    }
    // A missing LOD alone says nothing about replacement: it may be outside a
    // donor's visibility range. Require an opaque detailed model with the same
    // world-space bounds in a donor that actually omits the coarse model.
    auto bounds = [](const Instance &instance) {
        std::array<float, 4> sphere{};
        for (unsigned i = 0; i < 4; ++i) {
            const auto half = std::uint16_t(instance[4 + i * 2]) |
                              (std::uint16_t(instance[5 + i * 2]) << 8);
            sphere[i] = std::bit_cast<float>(psprecomp::AllegrexContext::vfpu_expand_half_bits(half));
        }
        return sphere;
    };
    auto replaced = [&](std::uint32_t key, const Instance &coarse) {
        const auto a = bounds(coarse);
        if (!std::isfinite(a[3]) || a[3] <= 0) return false;
        for (unsigned high_pass : {2u, 3u}) for (const auto &[high_key, high] : passes[high_pass]) {
            const auto b = bounds(high);
            const float dx = a[0] - b[0], dy = a[1] - b[1], dz = a[2] - b[2];
            const float tolerance = a[3] * 0.1f;
            if (!(std::abs(a[3] - b[3]) <= tolerance &&
                  dx * dx + dy * dy + dz * dz <= tolerance * tolerance)) continue;
            for (const auto &donor : membership)
                if (!donor[0].contains(key) && !donor[1].contains(key) &&
                    donor[high_pass].contains(high_key)) {
                    bool blended = false;
                    const auto n = &donor - membership.data();
                    const auto &raw = sources[n].data;
                    for (unsigned p = 4; p < 7 && !blended; ++p)
                        for (auto at = u32(raw, 8 + p * 4); at < u32(raw, 12 + p * 4); at += 68) {
                            Instance part{};
                            std::copy_n(raw.begin() + at - 32, 68, part.begin());
                            const auto c = bounds(part);
                            const float x = a[0] - c[0], y = a[1] - c[1], z = a[2] - c[2];
                            if (x * x + y * y + z * z <= tolerance * tolerance &&
                                std::abs(a[3] - c[3]) <= tolerance) { blended = true; break; }
                        }
                    if (!blended) return true;
                }
        }
        return false;
    };
    data.resize((data.size() + 15) & ~std::size_t(15));
    for (unsigned p = 0; p < 8; ++p) {
        write(data, 8 + p * 4, static_cast<std::uint32_t>(data.size() + 32));
        result.relocations.push_back(40 + p * 4);
        if (p == 7) break;
        for (const auto &[key, instance] : passes[p]) {
            if (p < 2 && replaced(key, instance)) continue;
            data.insert(data.end(), instance.begin(), instance.end());
        }
    }
    if (swaps.size() > 32767 || resources.size() > 65535) throw std::runtime_error("too many world resources");
    write(data, 40, static_cast<std::uint16_t>(swaps.size()));
    write(data, 44, static_cast<std::uint32_t>(data.size() + 32));
    result.relocations.push_back(76);
    for (auto swap : swaps) append(data, swap);
    write(data, 0, static_cast<std::uint32_t>(data.size() + 32));
    write(data, 4, static_cast<std::uint16_t>(resources.size()));
    result.relocations.push_back(32);
    for (const auto &[id, pointer] : resources) {
        append(data, id);
        result.relocations.push_back(static_cast<std::uint32_t>(data.size() + 32));
        append(data, pointer);
    }
    if (data.size() + 32 > kWorldBufferSize) throw std::runtime_error("detailed world sector exceeds scenery buffer");
    return result;
}

void reset_world_detail() { loaded.clear(); pending_refresh.clear(); }

bool expand_world_sector(psprecomp::Runtime &runtime, std::uint32_t world,
                         std::uint32_t header, std::uint32_t address) {
    auto &memory = runtime.memory();
    if (address < kWorldBufferBase || address >= kWorldBufferEnd) return false;
    const auto buffer = kWorldBufferBase + (address - kWorldBufferBase) / kWorldBufferSize * kWorldBufferSize;
    std::erase_if(loaded, [&](const auto &entry) {
        return entry.first >= address && entry.first < buffer + kWorldBufferSize;
    });
    const auto level = memory.load32(world + 16);
    if (!level || memory.load32(header) != 0x57524C44u) return false;
    if (memory.load32(header + 4) || memory.load32(header + 28)) return false;
    try {
        std::vector<std::array<std::uint32_t, 3>> neighbours;
        int x = -1, y = -1;
        for (int row = 0; row < 36; ++row) {
            const auto begin = memory.load32(level + 4 + row * 8);
            const auto end = memory.load32(level + 12 + row * 8);
            if (header >= begin && header < end && (header - begin) % 32 == 0) {
                y = row; x = memory.load32(level + 8 + row * 8) + (header - begin) / 32; break;
            }
        }
        if (x < 0) return false; // Interior and mission chunks retain their own layout.
        neighbours.push_back({header, static_cast<std::uint32_t>(x), static_cast<std::uint32_t>(y)});
        for (int row = std::max(0, y - 1); row <= std::min(35, y + 1); ++row) {
            const auto begin = memory.load32(level + 4 + row * 8);
            const auto end = memory.load32(level + 12 + row * 8);
            const int first = memory.load32(level + 8 + row * 8);
            for (int col = x - 1; col <= x + 1; ++col) {
                if (col < first || begin + (col - first) * 32 >= end) continue;
                const auto h = begin + (col - first) * 32;
                if (h != header) neighbours.push_back({h, static_cast<std::uint32_t>(col), static_cast<std::uint32_t>(row)});
            }
        }
        const auto island = memory.load32(world + 12);
        constexpr const char *names[]{"", "INDUST.IMG", "COMMER.IMG", "SUBURB.IMG", "UNDERG.IMG"};
        if (island < 1 || island > 4) return false;
        std::ifstream image(runtime.game_root() / "PSP_GAME/USRDIR/MODELS" / names[island], std::ios::binary);
        if (!image) return false;
        std::vector<WorldSectorSource> sources;
        const auto available = buffer + kWorldBufferSize - address;
        std::size_t total = 48;
        for (const auto &neighbour : neighbours) {
          try {
            const auto h = neighbour[0], size = memory.load32(h + 8);
            if (memory.load32(h) != 0x57524C44u || memory.load32(h + 4) || memory.load32(h + 28))
                throw std::runtime_error("unsupported world chunk format");
            if (size < 80 || size > kWorldBufferSize) throw std::runtime_error("invalid world chunk size");
            // Leave room for the merged lists. A large sector keeps fewer donors.
            if (!sources.empty() && total + size + 512u * 1024u + kRawLoadReserve > available) continue;
            WorldSectorSource source;
            source.x = neighbour[1]; source.y = neighbour[2];
            source.data_size = memory.load32(h + 12);
            source.data.resize(size - 32);
            image.seekg(memory.load32(h + 24));
            image.read(reinterpret_cast<char *>(source.data.data()), source.data.size());
            if (!image) throw std::runtime_error("could not read detailed world neighbour");
            const auto relocation = memory.load32(h + 16), count = memory.load32(h + 20);
            for (unsigned i = 0; i < count; ++i) source.relocations.push_back(u32(source.data, relocation - 32 + i * 4));
            validate_source(source);
            total += source.data_size;
            sources.push_back(std::move(source));
          } catch (const std::exception &) {
            if (neighbour[0] == header) throw;
            image.clear(); // A bad donor must not discard the valid target and neighbours.
          }
        }
        auto sector = merge_world_sectors(sources);
        const auto buffer_end = kWorldBufferBase + ((address - kWorldBufferBase) / kWorldBufferSize + 1) * kWorldBufferSize;
        const auto next = (address + sector.data.size() + 32 + 15) & ~15u;
        if (address < kWorldBufferBase || next >= buffer_end || buffer_end - next < kRawLoadReserve || buffer_end > kWorldBufferEnd)
            throw std::runtime_error("detailed world data would overflow scenery buffer");
        LoadedSector state{world, address};
        for (unsigned p = 0; p < 8; ++p) {
            state.original[p] = address - 32 + sector.original_passes[p];
            state.detailed[p] = address - 32 + u32(sector.data, 8 + p * 4);
        }
        state.original_swaps = sector.original_swaps ? address - 32 + sector.original_swaps : 0;
        state.original_count = sector.original_swap_count;
        state.detailed_swaps = address - 32 + u32(sector.data, 44);
        state.detailed_count = u16(sector.data, 40);
        for (auto at : sector.relocations) write(sector.data, at - 32, u32(sector.data, at - 32) + address - 32);
        memory.copy_in(address, sector.data);
        memory.store32(world + 124, next);
        loaded[address] = state;
        const bool detailed = view_distance_scale() >= 2.0f;
        for (unsigned p = 0; p < 8; ++p)
            memory.store32(address + 8 + p * 4, detailed ? state.detailed[p] : state.original[p]);
        memory.store16(address + 40, detailed ? state.detailed_count : state.original_count);
        memory.store32(address + 44, detailed ? state.detailed_swaps : state.original_swaps);
        std::cerr << "[world-detail] island=" << island << " sector=" << x << ',' << y
                  << " donors=" << sources.size() << " bytes=" << sector.data.size() << '\n';
        return true;
    } catch (const std::exception &error) {
        std::cerr << "[world-detail] original sector retained: " << error.what() << '\n';
        return false;
    }
}

static bool update_world_detail(psprecomp::Runtime &runtime, std::uint32_t world, bool apply) {
    const bool detailed = view_distance_scale() >= 2.0f;
    auto &memory = runtime.memory();
    // Activation initializes only the first current sector's instances. Other
    // current chunks and fading previous sectors keep their initialized lists.
    const auto begin = memory.load32(world + 32), end = memory.load32(world + 36);
    if (end <= begin || end - begin > 512 * 4) return false;
    const auto address = memory.load32(begin);
    const auto found = loaded.find(address);
    if (found == loaded.end() || found->second.world != world) return false;
    const auto &state = found->second;
    const auto &passes = detailed ? state.detailed : state.original;
    const auto count = detailed ? state.detailed_count : state.original_count;
    const auto swaps = detailed ? state.detailed_swaps : state.original_swaps;
    bool changed = false;
    for (unsigned p = 0; p < 8; ++p) {
        changed |= memory.load32(address + 8 + p * 4) != passes[p];
        if (apply) memory.store32(address + 8 + p * 4, passes[p]);
    }
    changed |= memory.load16(address + 40) != count || memory.load32(address + 44) != swaps;
    if (apply) {
        memory.store16(address + 40, count);
        memory.store32(address + 44, swaps);
    }
    return changed;
}

bool select_world_detail(psprecomp::Runtime &runtime, std::uint32_t world) {
    return update_world_detail(runtime, world, true);
}

bool request_world_detail_refresh(psprecomp::Runtime &runtime, std::uint32_t world, std::uint32_t render_pass) {
    if (render_pass != 0 || !update_world_detail(runtime, world, false)) return false;
    pending_refresh.insert(world);
    return true;
}

bool begin_world_detail_refresh(psprecomp::Runtime &runtime, std::uint32_t world, std::uint32_t stack) {
    if (!pending_refresh.erase(world)) return false;
    // The ordinary activation path computes these origins while swapping sectors.
    // A detail-only refresh rebuilds the current sector in place instead.
    auto &memory = runtime.memory();
    const auto x = static_cast<std::int32_t>(memory.load32(world + 44));
    const auto y = static_cast<std::int32_t>(memory.load32(world + 48));
    memory.store32(stack + 16, std::bit_cast<std::uint32_t>(125.f * x - 62.5f * (y & 1) - 1937.5f));
    memory.store32(stack + 20, std::bit_cast<std::uint32_t>(108.25f * y - 1945.875f));
    memory.store32(stack + 24, memory.load32(world + 52));
    return true;
}

}
