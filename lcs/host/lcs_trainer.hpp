// The trainer's connection to the game. Features come from CheatDevice Remastered by Freakler (GPL-3.0-or-later, see
// lcs/VCS_IMPORT.md), rewritten for a recompiled game: what the plugin does in guest memory still works here, what calls
// the game's functions or scripts runs on the game's thread through its normal dispatch, and what patches MIPS code
// does not apply (that code is compiled C++), so those features need changes in the generated code instead.
// Addresses are for ULUS-10041 v1.05, resolved with the plugin's own instruction patterns.
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
    UnlimitedAmmo,
    Invisible,
    IgnoredByEveryone,
    UnlimitedSprint,
    IndestructibleVehicle,
    LockDoors,
    AutoFlip,
    NoTraffic,
    NoPeds,
    FreezeTraffic,
    FreezeMissionTimers,
    HideHud,
    HeavyPlayer,
    AimOfDeath,
    KillAimingAtMe,
    WarpOutOfWater,
    HeavyVehicle,
    PowerBrake,
    DriveOnWalls,
    DriveOnWater,
    Tank,
    VehicleOutOfWater,
    FreezePeds,
    CameraTopDown,
    CameraCentered,
    RealTimeClock,
    ShowCoordinates,
    ShowSpeed,
    FreeCamera,
    Hover,
    NeverFallOffBike,
    Nitro,
    PowerJump,
    Untouchable,
    Count,
};

// Numbers the trainer holds. kTrainerOff: leave it to the game.
enum class TrainerValue : int {
    WantedLevel,
    MaxHealth,
    MaxArmor,
    FieldOfView,
    WaterLevel,
    RocketBoost,
    BridgeDown,
    GravityPercent,
    PlayerSpeedPercent,
    PedSpeedPercent,
    TouchVehicle,
    TouchPed,
    DefaultRadio,
    TuneAcceleration,
    TuneTopSpeed,
    TuneBrakes,
    TuneTraction,
    TuneSteering,
    WeaponDamagePercent,
    Count,
};
inline constexpr int kTrainerOff = -100000;

// One-off commands. The argument is the entry of the matching list, or a colour.
enum class TrainerCommand : int {
    Repair,
    Explode,
    PrimaryColor,
    SecondaryColor,
    TeleportMarker,
    TeleportObjective,
    TeleportMission,
    StepThroughWall,
    KillTargets,
    FreezeTargets,
    KillPeds,
    SpawnPickup,
    SetSkin,
    MissionSelector,
    ButtonCheat,
    ClearCheatRecord,
    ClockFromComputer,
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
void trainer_teleport(int index) noexcept;
void trainer_spawn_vehicle(int model) noexcept;
void trainer_set_value(TrainerValue which, int value) noexcept;
[[nodiscard]] int trainer_value(TrainerValue which) noexcept;
void trainer_command(TrainerCommand command, int argument = 0) noexcept;

// For the menu. Vehicles come from the game's tables: empty until a game is loaded.
[[nodiscard]] std::vector<std::pair<std::string, int>> trainer_vehicles();
[[nodiscard]] std::vector<std::pair<std::string, int>> trainer_teleports();
[[nodiscard]] std::vector<std::pair<std::string, int>> trainer_skins();
[[nodiscard]] std::vector<std::pair<std::string, int>> trainer_pickups();
[[nodiscard]] std::vector<std::pair<std::string, int>> trainer_button_cheats();

// The pad as the game reads it: notes what the player holds for the features that use it, adds the presses of a button
// cheat being entered, and keeps everything from the game while the free camera has the controls.
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

// From generated code. The features CheatDevice gets by patching MIPS instructions:
// the upper half of the gravity constant (0x08A0E994),
[[nodiscard]] std::uint32_t trainer_gravity_high() noexcept;
// whether to skip the call that knocks a rider off (0x088E2FCC, 0x08A41D20),
[[nodiscard]] bool trainer_keep_on_bike() noexcept;
// and the start of a ped's position update (0x089AC978), which scales how far its animation moves it.
void trainer_update_position(psprecomp::Runtime &runtime, std::uint32_t ped) noexcept;
// What the on-screen readouts show; empty when they are off.
[[nodiscard]] std::string trainer_overlay_text();

// Called from the game's main loop (generated code, 0x089C4F34), a registered entry right after a call and before one
// that takes no arguments. True when it has pointed the context at a guest routine, which returns to that same place:
// the caller returns to the dispatcher, and the next pass through carries on.
[[nodiscard]] bool trainer_frame(psprecomp::Runtime &runtime, psprecomp::AllegrexContext &ctx);

}  // namespace lcs
