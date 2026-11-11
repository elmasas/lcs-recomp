#pragma once
#include "lcs_state_io.hpp"
#include "psprecomp/guest_memory.hpp"

#include <cstdint>

namespace lcs {

void execute_ge_list_rendered(psprecomp::GuestMemory &memory, std::uint32_t list_address);

struct GeListPrescan {
    bool finished{};
    std::uint32_t finish_argument{};
};
GeListPrescan prescan_ge_list(psprecomp::GuestMemory &memory, std::uint32_t list_address);

// Save states: the graphics engine's command registers and transform matrices. Parse first (nothing changes), commit
// once the rest has loaded.
void ge_exec_write_state(state::Writer &out);
bool ge_exec_parse_state(state::Reader &in);
void ge_exec_commit_state();

bool rendered_list_finished();
std::uint32_t rendered_finish_argument();
std::uint32_t rendered_render_target();
std::uint32_t rendered_render_stride();

}
