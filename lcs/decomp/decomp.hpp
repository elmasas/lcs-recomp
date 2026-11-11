// Entry hooks that route recompiled guest functions to hand-written C++.
//
// decomp_functions.def lists every replaced guest function. The generated
// units call run<Address>() at that function's entry label (inserted by
// tools/decomp/apply_hooks.py). When the hook handles the call the generated
// code returns to the guest caller straight away.
//
// LCS_DECOMP=on      run the C++ replacements (default)
// LCS_DECOMP=off     run the original recompiled code
// LCS_DECOMP=verify  run both, compare results, keep the original's result
// LCS_DECOMP_SKIP=08A97F64,...  leave these functions as recompiled code
#pragma once

#include "psprecomp/allegrex_context.hpp"
#include "psprecomp/runtime.hpp"

#include <cstddef>
#include <cstdint>

namespace lcs::decomp {

inline constexpr std::uint32_t kHookAddresses[] = {
#define DECOMP_FN(address, name, result, regions) address,
#include "decomp_functions.def"
#undef DECOMP_FN
};
inline constexpr std::size_t kHookCount = sizeof(kHookAddresses) / sizeof(kHookAddresses[0]);

[[nodiscard]] constexpr std::size_t hook_index(std::uint32_t address) noexcept {
    for (std::size_t index = 0; index < kHookCount; ++index)
        if (kHookAddresses[index] == address) return index;
    return kHookCount;
}

// Non-zero while the hook at that index is active.
extern std::uint8_t g_hook_active[kHookCount];

bool run_hook(std::size_t index, psprecomp::Runtime &runtime, psprecomp::AllegrexContext &ctx);

template <std::uint32_t Address>
[[nodiscard]] inline bool run(psprecomp::Runtime &runtime, psprecomp::AllegrexContext &ctx) {
    constexpr std::size_t index = hook_index(Address);
    static_assert(index < kHookCount, "address is not listed in decomp_functions.def");
    return g_hook_active[index] != 0u && run_hook(index, runtime, ctx);
}

// True while verify mode is re-running the original of a hooked function.
// The controller import replays its last sample then, so both runs see the
// same input.
[[nodiscard]] bool verify_reference_running() noexcept;

// Called once from install_profile().
void install(psprecomp::Runtime &runtime);

}  // namespace lcs::decomp
