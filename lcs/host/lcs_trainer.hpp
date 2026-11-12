// The trainer: a few helpers for play and for unattended test runs, built only on the game itself. The cheats are the
// game's own routines and button codes; the rest reads and writes fields of the game's player, clock and radar, each
// confirmed in the game's own code (the generated units) or in a test run. Addresses are for ULUS-10041 v1.05.
#pragma once

#include "psprecomp/runtime.hpp"

#include <string>
#include <utility>
#include <vector>

namespace lcs {

// The game's own cheat routines.
enum class TrainerAction : int {
    WeaponsA,
    WeaponsB,
    Money,
    Armor,
    Health,
    WantedUp,
    WantedClear,
    WeatherSunny,
    WeatherCloudy,
    WeatherRainy,
    WeatherFoggy,
    WeatherExtraSunny,
    Count,
};

// Switches the trainer holds, applied on every pass through the main loop. None of them is saved.
enum class TrainerToggle : int {
    GodMode,
    ShowCoordinates,
    Count,
};

// One-off commands. The argument is the entry of the matching list.
enum class TrainerCommand : int {
    TeleportMarker,
    TeleportObjective,
    TeleportNearestRoad,
    ButtonCheat,
    ClockFromComputer,
    SpawnVehicle,  // the argument is a model id from trainer_vehicles()
};

// Any thread: runs at the next pass through the game's main loop, while a game is in progress.
void trainer_request(TrainerAction action) noexcept;
void trainer_set_toggle(TrainerToggle toggle, bool on) noexcept;
[[nodiscard]] bool trainer_toggle(TrainerToggle toggle) noexcept;
// -1: the game's own clock.
void trainer_set_hold_hour(int hour) noexcept;
[[nodiscard]] int trainer_hold_hour() noexcept;
// 100 is normal.
void trainer_set_game_speed(int percent) noexcept;
[[nodiscard]] int trainer_game_speed() noexcept;
void trainer_save_position() noexcept;
void trainer_return_to_position() noexcept;
void trainer_command(TrainerCommand command, int argument = 0) noexcept;

// For the menu.
[[nodiscard]] std::vector<std::pair<std::string, int>> trainer_button_cheats();
// Cars SpawnVehicle can make: name and model id.
[[nodiscard]] std::vector<std::pair<std::string, int>> trainer_vehicles();

// The pad as the game reads it: adds the presses of a button cheat being entered, and a test run's scripted buttons.
[[nodiscard]] std::uint32_t trainer_pad_buttons(std::uint32_t held, std::uint8_t &analog_x, std::uint8_t &analog_y) noexcept;

// Where the player is and is going, for the GPS: the marker they placed, or else the nearest mission objective.
struct TrainerRouteInfo {
    bool player_known{};
    bool in_vehicle{};
    float player_x{}, player_y{};
    bool has_destination{};
    float destination_x{}, destination_y{};
    std::uint32_t colour{};
};
[[nodiscard]] TrainerRouteInfo trainer_route_info(psprecomp::Runtime &runtime);
// The vehicle the player is in, or 0.
[[nodiscard]] std::uint32_t trainer_player_vehicle(psprecomp::Runtime &runtime);
// What the on-screen readout shows; empty when it is off.
[[nodiscard]] std::string trainer_overlay_text();

// Called from the game's main loop (generated code, 0x089C4F34), a registered entry right after a call and before one
// that takes no arguments. True when it has pointed the context at a guest routine, which returns to that same place:
// the caller returns to the dispatcher, and the next pass through carries on.
[[nodiscard]] bool trainer_frame(psprecomp::Runtime &runtime, psprecomp::AllegrexContext &ctx);

}  // namespace lcs
