#pragma once
// Save states: a snapshot of the emulated console (the game's memory, the CPU state of its threads, the kernel's
// bookkeeping), written to lcs/game/STATES and independent of the game's own save slots. A request can come from any
// thread; the game thread carries it out at its next safe moment (lcs_profile.cpp, the periodic outer-loop hook).

#include <cstdint>
#include <string>

namespace lcs {

// Slots 0-4 are the player's (F5/F6/F7 and the pause menu's States page). Slots 5-7 are automatic: every few minutes of
// play (Display.AutoStateMinutes) the oldest of them is replaced, so a crash costs at most that much.
inline constexpr int kStateManualSlots = 5;
inline constexpr int kStateAutoSlots = 3;
inline constexpr int kStateSlotCount = kStateManualSlots + kStateAutoSlots;
[[nodiscard]] inline bool lcs_state_slot_is_auto(int slot) noexcept { return slot >= kStateManualSlots; }

struct StateSlotInfo {
    bool used{};
    std::int64_t saved_unix{};  // when it was saved, seconds since 1970 (UTC)
};
[[nodiscard]] StateSlotInfo lcs_state_slot_info(int slot) noexcept;
// "Slot 2", "Auto 1".
[[nodiscard]] std::string lcs_state_slot_label(int slot);

void lcs_state_request_save(int slot) noexcept;
void lcs_state_request_load(int slot) noexcept;

// Keys: F5 saves into the chosen slot, F6 picks the next slot (1 to 5), F7 loads the chosen slot. Each shows a message.
// The slot whose state file is newest, or -1 when there is none.
[[nodiscard]] int lcs_state_latest_slot() noexcept;
void lcs_state_hotkey_save() noexcept;
void lcs_state_hotkey_next_slot() noexcept;
void lcs_state_hotkey_load() noexcept;

}  // namespace lcs
