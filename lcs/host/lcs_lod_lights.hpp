// Distant street lights, ported from ThirteenAG's Project2DFX (MIT; see lcs/CREDITS.md and host/thirteenag/LICENSE).
// Rendering.LodLights turns them on. They hand over to the game's own coronas near each lamp.
#pragma once

#include "psprecomp/runtime.hpp"

namespace lcs {

// Called from CCoronas::Render (generated code, 0x089FB220) on the game thread. The caller's context is left untouched.
void lod_lights_render(psprecomp::Runtime &runtime, const psprecomp::AllegrexContext &caller);

// True when the lights above will draw: the game's own coronas must then keep their original range.
[[nodiscard]] bool lod_lights_enabled() noexcept;

}  // namespace lcs
