#pragma once

#include <cstdint>
#include <vector>

namespace psprecomp { class Runtime; }

namespace lcs {
// Keep these buffers outside the PSP's original 32 MiB allocation arena.
inline constexpr std::uint32_t kWorldBufferBase = 0x0A000000u;
inline constexpr std::uint32_t kWorldBufferSize = 10u * 1024u * 1024u;
inline constexpr std::uint32_t kWorldBufferEnd = kWorldBufferBase + 3u * kWorldBufferSize;
constexpr bool is_world_buffer(std::uint32_t address) {
    return address >= kWorldBufferBase && address < kWorldBufferEnd &&
           (address - kWorldBufferBase) % kWorldBufferSize == 0;
}

struct WorldSectorSource {
    int x{}, y{};
    std::uint32_t data_size{};
    std::vector<std::uint8_t> data;
    std::vector<std::uint32_t> relocations;
};

struct DetailedWorldSector {
    std::vector<std::uint8_t> data;
    std::vector<std::uint32_t> relocations;
    std::uint32_t original_passes[8]{};
    std::uint32_t original_swaps{};
    std::uint16_t original_swap_count{};
};

// The first source supplies the sector origin and original rendering lists.
DetailedWorldSector merge_world_sectors(const std::vector<WorldSectorSource> &sources);
bool expand_world_sector(psprecomp::Runtime &, std::uint32_t world,
                         std::uint32_t header, std::uint32_t data);
// Apply during activation, immediately before the game initializes instance flags.
bool select_world_detail(psprecomp::Runtime &, std::uint32_t world);
// Request only at the first render pass; leave live lists intact until activation.
bool request_world_detail_refresh(psprecomp::Runtime &, std::uint32_t world, std::uint32_t render_pass);
bool begin_world_detail_refresh(psprecomp::Runtime &, std::uint32_t world, std::uint32_t stack);
void reset_world_detail();
}
