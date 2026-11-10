#pragma once
// Texture packs in PPSSPP's format (a folder with a textures.ini), kept in <game>/TEXTURES.
// Replaces a texture when it is uploaded, so nothing runs per draw and nothing runs with no pack chosen.

#include <array>
#include <atomic>
#include <cstddef>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "ge_gpu_backend.hpp"
#include "psprecomp/guest_memory.hpp"

namespace lcs {

struct TexturePackImage {
    std::uint32_t width{};
    std::uint32_t height{};
    std::vector<std::byte> rgba8;
};

void texture_pack_set_root(std::string game_folder);
[[nodiscard]] std::string game_root_folder();

// Pack names found, in menu order. The menu's value is an index here plus one; 0 is the game's own textures.
[[nodiscard]] const std::vector<std::string> &texture_pack_names();
[[nodiscard]] int texture_pack_current_index();
void texture_pack_select(int index);
// The second pack, with the same indexes: where both replace a texture, the first one's is used.
[[nodiscard]] int texture_pack_second_index();
void texture_pack_select_second(int index);

// Part of the renderer's texture cache key: choosing another pack makes every texture upload again.
[[nodiscard]] std::uint32_t texture_pack_generation() noexcept;
// The chosen packs' images once decoded, in bytes; 0 before that. The renderer's texture cache makes room for them.
[[nodiscard]] std::uint64_t texture_pack_decoded_bytes() noexcept;

// The chosen packs' images of at least min_bytes, once all are decoded (empty before that). The renderer puts them on
// the graphics card ahead of their first use: a 4096x4096 image is 64 MB, too much to upload in one frame.
[[nodiscard]] std::vector<std::shared_ptr<const TexturePackImage>> texture_pack_large_images(std::size_t min_bytes);

// The pack's image for pixel data outside a draw, whatever its palette (xxh64 and xxh32 packs).
[[nodiscard]] std::shared_ptr<const TexturePackImage> texture_pack_find_data(const std::uint8_t *data, std::size_t size);
[[nodiscard]] std::shared_ptr<const TexturePackImage> texture_pack_find_hash(std::uint32_t data_key);

// A PNG in memory. Null if it can't be read.
[[nodiscard]] std::shared_ptr<const TexturePackImage> texture_png_decode(const std::uint8_t *data, std::size_t size);

// Called on upload. Null: keep the game's texture.
[[nodiscard]] std::shared_ptr<const TexturePackImage> texture_pack_find(
    const psprecomp::GuestMemory &memory, const std::array<std::uint32_t, 256> &commands,
    const GeGpuDrawDescriptor &draw);

}  // namespace lcs
