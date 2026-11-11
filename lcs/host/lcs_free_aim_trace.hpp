#pragma once

namespace lcs {

// A free-aim shot runs along the camera ray, so that it hits what is under the crosshair (generated unit 0021,
// crosshair_shot). Its bullet trace is drawn from the gun, as without free aim: a trace along the camera ray is seen
// end-on and barely shows. Game thread only.

// The shot's start was moved from the gun to the camera ray.
void lcs_free_aim_note_shot(const float (&gun)[3], const float (&ray_start)[3]) noexcept;

// The game adds a bullet trace (0x08824988, generated unit 0008): true, with the gun's position, when it starts where the
// last free-aim shot did.
[[nodiscard]] bool lcs_free_aim_trace_from_gun(const float (&start)[3], float (&gun)[3]) noexcept;

}  // namespace lcs
