#pragma once

namespace lcs {

// Free aim's camera: over the right shoulder while aiming, easing in and out. Called after the game placed its follow
// camera each frame, with its position, view direction, field of view and the player's position. False: leave it as is.
// (The idea is Classic Axis's aim camera and Void Ultimate Aim System's shoulder offset; see lcs/CREDITS.md.)
bool lcs_free_aim_shoulder(float (&source)[3], const float (&front)[3], const float (&player)[3], float &fov) noexcept;

}  // namespace lcs
