#pragma once
// LCS_TEXTURE_PROBE=<file>: records the PPSSPP texture-pack hash of every texture the game draws.

#include <array>
#include <cstddef>
#include <cstdint>

#include "ge_gpu_backend.hpp"
#include "psprecomp/guest_memory.hpp"

namespace lcs {

[[nodiscard]] std::uint32_t xxh32(const void *data, std::size_t size, std::uint32_t seed) noexcept;
[[nodiscard]] std::uint64_t xxh64(const void *data, std::size_t size, std::uint64_t seed) noexcept;

enum class TextureHash { Xxh64, Xxh32, Quick };

// The two halves of a PPSSPP texture pack entry: dimensions and palette, then pixels.
[[nodiscard]] bool texture_palette_key(const psprecomp::GuestMemory &memory, const std::array<std::uint32_t, 256> &commands,
                                       const GeGpuDrawDescriptor &draw, std::uint32_t &key) noexcept;
[[nodiscard]] bool texture_data_key(const psprecomp::GuestMemory &memory, const GeGpuDrawDescriptor &draw,
                                    std::uint32_t rows, TextureHash kind, std::uint32_t &key) noexcept;

[[nodiscard]] bool texture_probe_enabled() noexcept;
void texture_probe_observe(const psprecomp::GuestMemory &memory, const std::array<std::uint32_t, 256> &commands,
                           const GeGpuDrawDescriptor &draw) noexcept;

}  // namespace lcs
