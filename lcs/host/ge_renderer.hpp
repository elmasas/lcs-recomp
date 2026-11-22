#pragma once

#include "psprecomp/guest_memory.hpp"

#include <array>
#include <cstdint>
#include <string>

namespace lcs {

struct GeTransformState {
    std::array<float, 96> bones{};
    std::array<float, 12> world{};
    std::array<float, 12> view{};
    std::array<float, 16> projection{};
    std::array<float, 12> texture{};
    std::array<float, 8> morph_weights{};
    std::uint32_t bone_cursor{};
    std::uint32_t world_cursor{};
    std::uint32_t view_cursor{};
    std::uint32_t projection_cursor{};
    std::uint32_t texture_cursor{};
};

void reset_ge_transform_state(GeTransformState &state) noexcept;
void update_ge_transform_state(GeTransformState &state, std::uint32_t command,
                               std::uint32_t data) noexcept;
std::array<float, 16> ge_model_to_clip(const std::array<std::uint32_t, 256> &commands,
                                      const GeTransformState &transform);

struct GeBoundingBoxResult {
    bool visible{};
    std::uint32_t next_vertex_address{};
    std::uint32_t next_index_address{};
};

struct GeRenderStats {
    std::uint32_t next_vertex_address{};
    std::uint32_t next_index_address{};
};

bool test_ge_bounding_box(const psprecomp::GuestMemory &memory,
                          const std::array<std::uint32_t, 256> &commands,
                          const GeTransformState &transform,
                          std::uint32_t vertex_address,
                          std::uint32_t index_address,
                          std::uint32_t count,
                          GeBoundingBoxResult &result,
                          std::string &error);

bool render_ge_primitive(psprecomp::GuestMemory &memory,
                         const std::array<std::uint32_t, 256> &commands,
                         const GeTransformState &transform,
                         std::uint32_t vertex_address,
                         std::uint32_t index_address,
                         std::uint32_t primitive_data,
                         GeRenderStats &stats,
                         std::string &error,
                         std::uint32_t logical_primitive_count = 1u,
                         std::uint64_t draw_state_revision = 0u,
                         std::uint64_t camera_state_revision = 0u,
                         std::uint64_t lighting_state_revision = 0u);

// Draw the same packed 10-byte mesh again. The world matrix is read from the
// current commands. Texture and pixel fields are refreshed only when one of
// those registers changed. False leaves every backend counter untouched.
bool ge_try_packed_repeat(psprecomp::GuestMemory &memory,
                          const std::array<std::uint32_t, 256> &commands,
                          const GeTransformState &transform,
                          std::uint32_t vertex_address,
                          std::uint32_t primitive_data,
                          std::uint64_t draw_state_revision,
                          std::uint32_t &next_vertex_address);

void ge_disarm_packed_repeat() noexcept;
void ge_set_pipeline_revision(std::uint64_t revision) noexcept;

// Bumped only when a texture or pixel register value changes. The packed
// repeat compares this with the revision its descriptor was filled from.
inline std::uint64_t &ge_material_revision_slot() noexcept {
    static thread_local std::uint64_t revision = 1u;
    return revision;
}

inline void ge_bump_material_revision() noexcept {
    std::uint64_t &revision = ge_material_revision_slot();
    if (++revision == 0u) revision = 1u;
}

inline std::uint64_t ge_material_revision() noexcept {
    return ge_material_revision_slot();
}

struct GeGpuDrawDescriptor;
// Writes texture and pixel fields when applied is not the current material
// revision. Returns that revision. A matching revision leaves draw unchanged.
std::uint64_t ge_sync_packed_material(const std::array<std::uint32_t, 256> &commands,
                                     GeGpuDrawDescriptor &draw,
                                     std::uint64_t applied) noexcept;
void ge_invalidate_clut_checksum() noexcept;
std::uint32_t ge_cached_clut_checksum(const psprecomp::GuestMemory &memory,
                                     GeGpuDrawDescriptor &draw) noexcept;

void flush_ge_deferred_rasterization(psprecomp::GuestMemory &memory);

}