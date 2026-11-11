// Declarations of every thunk named in decomp_functions.def.
#pragma once

#include "guest.hpp"

namespace lcs::decomp {

// A thunk calls this, before it has changed anything, to leave this call to
// the recompiled original (used where the C++ would have to enter guest code
// that can block the PSP thread).
void decline() noexcept;

}  // namespace lcs::decomp

namespace lcs::decomp::thunk {

#define DECOMP_FN(address, name, result, regions) void name(Runtime &runtime, Context &ctx);
#include "decomp_functions.def"
#undef DECOMP_FN

}  // namespace lcs::decomp::thunk
