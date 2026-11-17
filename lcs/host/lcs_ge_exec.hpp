#pragma once
#include "psprecomp/guest_memory.hpp"

#include <array>
#include <cstdint>

namespace psprecomp {
class Runtime;
}

namespace lcs {

void execute_ge_list_rendered(psprecomp::GuestMemory &memory, std::uint32_t list_address);

// The enqueue path. A second list in the same frame does not submit the GPU.
void execute_ge_list_frame(psprecomp::Runtime &runtime, std::uint32_t list_address,
                           std::uint64_t vblank);

struct GeListPrescan {
    bool finished{};
    std::uint32_t finish_argument{};
};
GeListPrescan prescan_ge_list(psprecomp::GuestMemory &memory, std::uint32_t list_address);

bool rendered_list_finished();
std::uint32_t rendered_finish_argument();
std::uint32_t rendered_render_target();
std::uint32_t rendered_render_stride();
float rendered_world_element(std::uint32_t index);
float rendered_bone_element(std::uint32_t index);
float rendered_view_element(std::uint32_t index);
float rendered_projection_element(std::uint32_t index);
float rendered_texture_matrix_element(std::uint32_t index);
float rendered_morph_weight(std::uint32_t index);
std::uint32_t rendered_vertex_address();
const std::array<std::uint32_t, 256> &rendered_ge_commands() noexcept;

}
