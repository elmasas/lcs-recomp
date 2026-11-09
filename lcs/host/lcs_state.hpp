#pragma once
// Save states: a snapshot of the emulated console (the game's memory, the CPU state of its threads, the kernel's
// bookkeeping), written to lcs/game/STATES and independent of the game's own save slots. A request can come from any
// thread; the game thread carries it out at its next safe moment (lcs_profile.cpp, the periodic outer-loop hook).

namespace lcs {

void lcs_state_request_save(int slot) noexcept;
void lcs_state_request_load(int slot) noexcept;

// Keys: F5 saves into the chosen slot, F6 picks the next slot (1 to 5), F7 loads the chosen slot. Each shows a message.
// The slot whose state file is newest, or -1 when there is none.
[[nodiscard]] int lcs_state_latest_slot() noexcept;
void lcs_state_hotkey_save() noexcept;
void lcs_state_hotkey_next_slot() noexcept;
void lcs_state_hotkey_load() noexcept;

}  // namespace lcs
