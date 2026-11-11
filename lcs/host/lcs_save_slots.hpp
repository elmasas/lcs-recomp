#pragma once
// The list of saves. The game asks the PSP's system to show one, so the player picks one of its slots, and then goes on
// with the name the system hands back. This draws that list. Where there is no way to draw it (the stress modes, other
// platforms), the game gets the name it suggested, as a single slot.

#include <cstdint>
#include <filesystem>
#include <string>

#include "psprecomp/runtime.hpp"

namespace lcs {

enum class SlotOutcome { Waiting, Proceed, Cancelled };

// Game thread, from the save utility's update. Waiting: keep the utility open. Proceed: run the operation, with the
// chosen name now in the request. Cancelled: end the utility with the system's cancel result.
[[nodiscard]] SlotOutcome save_slots_utility(psprecomp::Runtime &runtime, std::uint32_t parameter);

// The main menu's Load Game: the list on its own, before a game has started. The save chosen is the one the game's
// automatic load then gets.
void save_slots_open_for_load(const std::filesystem::path &saves_root, const std::string &game);
[[nodiscard]] SlotOutcome save_slots_step_for_load(psprecomp::Runtime &runtime);

// True while the list is on screen.
[[nodiscard]] bool save_slots_open() noexcept;
// Render thread, in Dear ImGui's frame.
void save_slots_draw();

// After a save: keeps what the system would have shown for it, and marks its folder as the newest.
void save_slots_note_saved(psprecomp::Runtime &runtime, std::uint32_t parameter, const std::filesystem::path &directory);

}  // namespace lcs
