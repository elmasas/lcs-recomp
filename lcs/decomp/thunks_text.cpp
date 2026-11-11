// Guest calling convention to C++ for the hint text functions in decomp_functions.def.
#include "thunks.hpp"

#include "game/ControlText.hpp"

namespace lcs::decomp::thunk {

// a0 = "~TOKEN~..." past "~k~ ", a1 = output buffer; v0 = characters used.
void ResolveControlToken(Runtime &, Context &ctx) {
    const int32 consumed = lcs::game::ResolveControlToken(ctx.gpr[4], ctx.gpr[5]);
    if (consumed < 0) return decline();  // original PSP text, or a token not in the table
    ctx.gpr[2] = static_cast<uint32>(consumed);
}

}  // namespace lcs::decomp::thunk
