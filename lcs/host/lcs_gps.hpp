#pragma once
// A line on the radar along the roads to where you're going: the marker you placed, or the mission's objective. The idea
// is GPS Redux's for San Andreas (juicermv); none of its code is used here. The route is an A* over the game's own road
// nodes, and the line goes through the game's own radar functions, so it follows the radar's rotation, zoom and place
// on screen, and the pause menu's map too.

#include "psprecomp/runtime.hpp"

#include <cstdint>

namespace lcs {

// Called from CRadar::DrawBlips (generated code, 0x0896C1F4) on the game thread. The caller's context is left untouched.
void gps_draw(psprecomp::Runtime &runtime, const psprecomp::AllegrexContext &caller);

// The game's 2D drawing stores whole PSP pixels, which makes a slanted line look stepped. The line's shapes are kept
// here with their exact corners: when the renderer meets one of them (a four-corner, untextured shape of the line's
// colour, each corner within a pixel), it takes the exact corners instead. Called from the renderer; any thread.
bool gps_refine_quad(float (&x)[4], float (&y)[4], std::uint8_t r, std::uint8_t g, std::uint8_t b);

}  // namespace lcs
