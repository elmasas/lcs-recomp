#pragma once
// The main menu's music, from the player's own game files. It has its own thread and audio output, so it can't affect
// the game's audio or its timing, and if a file can't be read the menu is simply quiet.

#include <string>

namespace lcs {

// Starts the music, once. `track` is a value of the Display.MenuMusic setting.
void frontend_music_start(const std::string &track);
// Changes the track while it plays. "off" is silence.
void frontend_music_select(const std::string &track);
// Fades out and ends.
void frontend_music_stop();

}  // namespace lcs
