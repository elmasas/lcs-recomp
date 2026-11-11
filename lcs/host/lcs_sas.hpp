#pragma once
#include "lcs_state_io.hpp"
#include "psprecomp/runtime.hpp"

namespace lcs {

void register_sas_hle(psprecomp::Runtime &runtime);

// Save states: the sound chip's voices and reverb. Parse first (nothing changes), commit once the rest has loaded.
void sas_write_state(state::Writer &out);
bool sas_parse_state(state::Reader &in);
void sas_commit_state();

}
