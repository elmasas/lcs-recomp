// See lcs_trainer.hpp. Where each address comes from is noted next to it: "code" means the generated units read or write
// it the way it's used here.
#include "lcs_trainer.hpp"

#include "lcs_display_menu.hpp"
#include "lcs_gps.hpp"
#include "lcs_menu.hpp"

#include <algorithm>
#include <array>
#include <atomic>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <functional>
#include <iostream>
#include <iterator>
#include <mutex>
#include <span>
#include <thread>
#include <vector>

namespace lcs {
namespace {

// The registered entry in the main loop that trainer_frame runs from, and where a started routine returns.
constexpr std::uint32_t kResumeAt = 0x089C4F34u;
// The player: CWorld::Players[slot].m_pPed, 368-byte entries (code; as lcs_controls.hpp reads it).
constexpr std::uint32_t kPlayerSlot = 0x08B5E054u;
constexpr std::uint32_t kPlayers = 0x08B89A10u;
constexpr std::uint32_t kPlayerStride = 368u;
// The clock: the hour byte, compared with 22 and 6 in the code that picks the time of day's lighting, then the minute.
constexpr std::uint32_t kClockHour = 0x08B5E090u;
constexpr std::uint32_t kClockMinute = 0x08B5E091u;
// The time step's scale, a float the frame update multiplies by (code).
constexpr std::uint32_t kTimeScale = 0x08B5E040u;
// The pools: +0 objects, +4 one flag byte per slot (bit 7: free), +8 size (code: CPools).
constexpr std::uint32_t kPedPool = 0x08B4C42Cu;
constexpr std::uint32_t kVehiclePool = 0x08B4C430u;
constexpr std::uint32_t kPedStride = 0xCB0u;
constexpr std::uint32_t kVehicleStride = 0x6E0u;
// The radar's blips, 0x50 bytes each, 75 of them (code: the radar's draw loop). Fields as the radar reads them: colour
// +0x00, kind +0x04 (1 vehicle, 2 ped, others a place), handle +0x08 (slot << 8), position +0x0C, in use +0x33,
// shown bright +0x3E, icon +0x40 (49: the player's marker).
constexpr std::uint32_t kBlips = 0x08E4A920u;
constexpr std::uint32_t kBlipSlots = 75u;
constexpr std::uint32_t kBlipSize = 0x50u;
constexpr unsigned kMarkerIcon = 49u;

// Fields of a ped and a vehicle (code).
constexpr std::uint32_t kPosition = 0x30u;  // the matrix's position
constexpr std::uint32_t kPedHealth = 0x4B8u;
constexpr std::uint32_t kPedArmor = 0x4BCu;
constexpr std::uint32_t kPedVehicle = 1332u;
constexpr std::uint32_t kPedInVehicle = 1336u;
constexpr std::uint32_t kPedBytes = 2400u;
constexpr std::uint32_t kVehicleSpeedZ = 0x78u;

// The game's cheat routines: what its own cheat-code check (0x08A99868, generated unit 0165) calls for each code.
constexpr std::array<std::uint32_t, static_cast<std::size_t>(TrainerAction::Count)> kRoutines = {
    0x08A93C00u,  // weapon set 1
    0x08A93E38u,  // weapon set 2
    0x08A94EE8u,  // $250,000
    0x08A94FC8u,  // armour
    0x08A942F4u,  // health
    0x08A95090u,  // wanted level up
    0x08A95168u,  // wanted level cleared
    0x08A95220u,  // weather 0
    0x08A95378u,  // weather 1
    0x08A95424u,  // weather 2
    0x08A954D0u,  // weather 3
    0x08A952CCu,  // weather 4
};

// The game's vehicle cheat (code: the Rhino and Trashmaster cheats load their model id into a0 and jump here). It loads
// the model, builds a car at the road node nearest the player, and counts as a cheat, as those two do. It builds a
// CAutomobile, so only cars: bikes, boats and aircraft would come out wrong.
constexpr std::uint32_t kSpawnVehicle = 0x08A94468u;
// A road node with a vehicle this close (metres) gets no new one.
constexpr float kSpawnClearance = 6.0f;
// Below this speed (the move speed's x and y, per 1/50 s: 0.04 is 2 m/s) a vehicle there stands still.
constexpr float kStandingSpeed = 0.04f;
// Model ids as the game's model table names them (US v1.05).
struct Vehicle {
    const char *name;
    int model;
};
constexpr Vehicle kVehicles[] = {
    {"Banshee", 160},  {"Cheetah", 146},   {"Infernus", 142}, {"Stinger", 133},    {"Stallion", 167}, {"Sentinel", 136},
    {"Kuruma", 152},   {"Esperanto", 150}, {"Taxi", 151},     {"Police car", 157}, {"Patriot", 137},  {"Hearse", 156},
};

// The game's own button cheats, as printed in its guides, entered as if on the pad.
enum : std::uint32_t {
    kUp = 0x0010u, kRight = 0x0020u, kDown = 0x0040u, kLeft = 0x0080u, kL = 0x0100u, kR = 0x0200u,
    kTriangle = 0x1000u, kCircle = 0x2000u, kCross = 0x4000u, kSquare = 0x8000u,
};
struct ButtonCheat {
    const char *name;
    std::array<std::uint32_t, 8> keys;
};
constexpr ButtonCheat kButtonCheats[] = {
    {"Weapon set 3", {kUp, kCross, kCross, kDown, kLeft, kCross, kCross, kRight}},
    {"Spawn a Rhino", {kL, kL, kLeft, kL, kL, kRight, kTriangle, kCircle}},
    {"Cars drive on water", {kCircle, kCross, kDown, kCircle, kCross, kUp, kL, kL}},
    {"Blow up nearby vehicles", {kL, kL, kLeft, kL, kL, kRight, kCross, kSquare}},
    {"Perfect traction and jumping", {kL, kUp, kLeft, kR, kTriangle, kCircle, kDown, kCross}},
    {"Bubble heads", {kDown, kDown, kDown, kCircle, kCircle, kCross, kL, kR}},
    {"Peds have weapons", {kR, kR, kL, kR, kR, kL, kRight, kCircle}},
    {"Peds attack you", {kL, kL, kR, kL, kL, kR, kUp, kTriangle}},
    {"Peds riot", {kL, kL, kR, kL, kL, kR, kLeft, kSquare}},
    {"Aggressive drivers", {kSquare, kSquare, kR, kCross, kCross, kL, kCircle, kCircle}},
    {"Chrome vehicles", {kTriangle, kR, kL, kDown, kDown, kR, kR, kTriangle}},
    {"Play the credits", {kL, kR, kL, kR, kUp, kDown, kL, kR}},
};
constexpr int kPadFramesPerStep = 3;

// God mode keeps health and armour this high: well over what one explosion takes.
constexpr float kGodHealth = 5000.0f;

struct Command {
    TrainerCommand what{};
    int argument{};
};

// A guest routine to run, with its one argument (a0) when it takes one.
struct Routine {
    std::uint32_t address{};
    std::uint32_t a0{};
    bool has_a0{};
};

std::mutex g_mutex;
std::deque<Routine> g_routines;  // routines to run, one per pass
std::deque<Command> g_commands;
std::array<std::atomic<bool>, static_cast<std::size_t>(TrainerToggle::Count)> g_toggles{};
bool g_god_was_on = false;
// The player's own health and armour when god mode went on, put back when it goes off.
std::uint32_t g_god_ped = 0u;
float g_god_health = 100.0f, g_god_armor = 0.0f;
std::atomic<int> g_hold_hour{-1};
std::atomic<int> g_game_speed{100};
bool g_speed_applied = false;
std::atomic<bool> g_save_position{false};
std::atomic<bool> g_return_position{false};
std::array<float, 3> g_saved_position{};
bool g_has_saved_position = false;
std::atomic<int> g_test_buttons{-1};  // a test run's whole pad, while it's set
std::atomic<int> g_pad_cheat{-1};
int g_pad_step = 0;
std::mutex g_overlay_mutex;
std::string g_overlay;
bool g_returning_from_routine = false;
// A vehicle being spawned: the vehicle pool's slots in use before, to find the new car once the routine has run.
std::vector<bool> g_slots_before;
bool g_spawn_pending = false;

bool toggle(TrainerToggle which) noexcept {
    return g_toggles[static_cast<std::size_t>(which)].load(std::memory_order_relaxed);
}

float load_float(const psprecomp::GuestMemory &memory, std::uint32_t address) {
    return std::bit_cast<float>(memory.load32(address));
}

void store_float(psprecomp::GuestMemory &memory, std::uint32_t address, float value) {
    memory.store32(address, std::bit_cast<std::uint32_t>(value));
}

std::uint32_t player_ped(psprecomp::Runtime &runtime) {
    auto &memory = runtime.memory();
    const auto slot = memory.load8(kPlayerSlot);
    if (slot > 1u) return 0u;
    const auto ped = memory.load32(kPlayers + slot * kPlayerStride);
    return ped != 0u && memory.contains(ped, kPedBytes) ? ped : 0u;
}

std::uint32_t player_vehicle(psprecomp::Runtime &runtime, std::uint32_t ped) {
    auto &memory = runtime.memory();
    if (memory.load8(ped + kPedInVehicle) == 0u) return 0u;
    const std::uint32_t vehicle = memory.load32(ped + kPedVehicle);
    return vehicle != 0u && memory.contains(vehicle, kVehicleStride) ? vehicle : 0u;
}

// Moves the player, or the vehicle they drive. A vehicle goes a little higher so it lands on its wheels.
void teleport_to(psprecomp::Runtime &runtime, std::uint32_t ped, float x, float y, float z) {
    auto &memory = runtime.memory();
    const std::uint32_t vehicle = player_vehicle(runtime, ped);
    const std::uint32_t entity = vehicle != 0u ? vehicle : ped;
    store_float(memory, entity + kPosition, x);
    store_float(memory, entity + kPosition + 4u, y);
    store_float(memory, entity + kPosition + 8u, vehicle != 0u ? z + 1.0f : z);
    if (vehicle != 0u) store_float(memory, vehicle + kVehicleSpeedZ, 0.0f);
}

// A pool's object in a slot, if the slot is in use.
std::uint32_t pool_object(const psprecomp::GuestMemory &memory, std::uint32_t pool_pointer, std::uint32_t stride,
                          std::int32_t slot) {
    const std::uint32_t pool = memory.load32(pool_pointer);
    if (slot < 0 || pool == 0u || !memory.contains(pool, 12u)) return 0u;
    if (static_cast<std::uint32_t>(slot) >= memory.load32(pool + 8u)) return 0u;
    const std::uint32_t flags = memory.load32(pool + 4u) + static_cast<std::uint32_t>(slot);
    if (!memory.contains(flags, 1u) || (memory.load8(flags) & 0x80u) != 0u) return 0u;
    const std::uint32_t object = memory.load32(pool) + static_cast<std::uint32_t>(slot) * stride;
    return memory.contains(object, stride) ? object : 0u;
}

template <typename Visit>
void for_each_blip(const psprecomp::GuestMemory &memory, Visit visit) {
    for (std::uint32_t i = 0u; i < kBlipSlots; ++i) {
        const std::uint32_t blip = kBlips + i * kBlipSize;
        if (memory.load8(blip + 0x33u) != 0u && visit(blip)) return;
    }
}

// Where a blip is now: one on a vehicle or a person follows it.
bool blip_position(const psprecomp::GuestMemory &memory, std::uint32_t blip, float (&out)[3]) {
    const std::uint32_t kind = memory.load32(blip + 4u);
    const std::uint32_t handle = memory.load32(blip + 8u);
    const std::int32_t slot = handle != 0u ? static_cast<std::int32_t>(handle >> 8u) : -1;
    std::uint32_t source = blip + 0x0Cu;
    if (kind == 1u || kind == 2u) {
        const std::uint32_t object = kind == 1u ? pool_object(memory, kVehiclePool, kVehicleStride, slot)
                                                : pool_object(memory, kPedPool, kPedStride, slot);
        if (object == 0u) return false;
        source = object + kPosition;
    }
    for (std::uint32_t i = 0u; i < 3u; ++i) out[i] = load_float(memory, source + i * 4u);
    return true;
}

void apply_commands(psprecomp::Runtime &runtime, std::uint32_t ped) {
    auto &memory = runtime.memory();
    std::deque<Command> commands;
    {
        const std::lock_guard<std::mutex> lock(g_mutex);
        commands.swap(g_commands);
    }
    for (const Command &command : commands) {
        switch (command.what) {
        case TrainerCommand::TeleportMarker:
            for_each_blip(memory, [&](std::uint32_t blip) {
                if (memory.load8(blip + 0x40u) != kMarkerIcon) return false;
                // The marker has no height. Below the ground, the game itself puts the player back on top of it.
                teleport_to(runtime, ped, load_float(memory, blip + 0x0Cu), load_float(memory, blip + 0x10u), -150.0f);
                return true;
            });
            break;
        case TrainerCommand::TeleportObjective:
            for_each_blip(memory, [&](std::uint32_t blip) {
                if (memory.load8(blip + 0x3Eu) == 0u || memory.load8(blip + 0x40u) != 0u) return false;
                float at[3];
                if (!blip_position(memory, blip, at)) return false;
                teleport_to(runtime, ped, at[0], at[1], at[2] != 0.0f ? at[2] + 2.0f : -150.0f);
                return true;
            });
            break;
        case TrainerCommand::TeleportNearestRoad: {
            const std::uint32_t vehicle = player_vehicle(runtime, ped);
            const std::uint32_t entity = vehicle != 0u ? vehicle : ped;
            float road[3];
            if (gps_nearest_road(memory, load_float(memory, entity + kPosition), load_float(memory, entity + kPosition + 4u),
                                 road))
                teleport_to(runtime, ped, road[0], road[1], road[2] + 1.0f);
            break;
        }
        case TrainerCommand::ButtonCheat:
            if (command.argument >= 0 && command.argument < static_cast<int>(std::size(kButtonCheats))) {
                g_pad_step = 0;
                g_pad_cheat.store(command.argument);
            }
            break;
        case TrainerCommand::SpawnVehicle: {
            if (std::none_of(std::begin(kVehicles), std::end(kVehicles),
                             [&](const Vehicle &v) { return v.model == command.argument; }))
                break;
            // The game puts every car on the road node nearest the player: a second one there lands on the first, and
            // the pile catches fire. Not while one is on its way, nor while another vehicle stands on that node.
            if (g_spawn_pending) break;
            const std::uint32_t vehicle = player_vehicle(runtime, ped);
            const std::uint32_t entity = vehicle != 0u ? vehicle : ped;
            float road[3];
            if (!gps_nearest_road(memory, load_float(memory, entity + kPosition),
                                  load_float(memory, entity + kPosition + 4u), road))
                break;
            const std::uint32_t pool = memory.load32(kVehiclePool);
            const std::uint32_t slots = pool != 0u && memory.contains(pool, 12u) ? memory.load32(pool + 8u) : 0u;
            g_slots_before.assign(std::min<std::uint32_t>(slots, 4096u), false);
            bool blocked = false;
            for (std::uint32_t i = 0u; i < g_slots_before.size(); ++i) {
                const std::uint32_t other =
                    pool_object(memory, kVehiclePool, kVehicleStride, static_cast<std::int32_t>(i));
                g_slots_before[i] = other != 0u;
                if (other == 0u) continue;
                const float dx = load_float(memory, other + kPosition) - road[0];
                const float dy = load_float(memory, other + kPosition + 4u) - road[1];
                // Traffic passing through is gone by the time the car is built: only a vehicle standing still counts.
                const float vx = load_float(memory, other + kVehicleSpeedZ - 8u);
                const float vy = load_float(memory, other + kVehicleSpeedZ - 4u);
                const bool standing = vx * vx + vy * vy < kStandingSpeed * kStandingSpeed;
                if (standing && dx * dx + dy * dy < kSpawnClearance * kSpawnClearance) blocked = true;
            }
            if (blocked) {
                host_toast("Drive off first: a car is there");
                break;
            }
            g_spawn_pending = true;
            const std::lock_guard<std::mutex> lock(g_mutex);
            g_routines.push_back(Routine{kSpawnVehicle, static_cast<std::uint32_t>(command.argument), true});
            break;
        }
        case TrainerCommand::ClockFromComputer: {
            const std::time_t now = std::time(nullptr);
            std::tm local{};
#ifdef _WIN32
            if (localtime_s(&local, &now) == 0) {
#else
            if (localtime_r(&now, &local) != nullptr) {
#endif
                memory.store8(kClockHour, static_cast<std::uint8_t>(local.tm_hour));
                memory.store8(kClockMinute, static_cast<std::uint8_t>(local.tm_min));
            }
            break;
        }
        }
    }
}

// After the spawn routine: the car is wherever the nearest road node was, maybe out of sight. The player goes to it,
// beside the driver's door (the car's left, against its matrix's first row).
void place_beside_spawned(psprecomp::Runtime &runtime, std::uint32_t ped) {
    auto &memory = runtime.memory();
    g_spawn_pending = false;
    if (player_vehicle(runtime, ped) != 0u) return;
    for (std::uint32_t i = 0u; i < g_slots_before.size(); ++i) {
        if (g_slots_before[i]) continue;
        const std::uint32_t car = pool_object(memory, kVehiclePool, kVehicleStride, static_cast<std::int32_t>(i));
        if (car == 0u) continue;
        float right[3], at[3];
        for (std::uint32_t c = 0u; c < 3u; ++c) {
            right[c] = load_float(memory, car + c * 4u);
            at[c] = load_float(memory, car + kPosition + c * 4u);
        }
        const float length = std::sqrt(right[0] * right[0] + right[1] * right[1]);
        const bool sane = length > 0.5f && length < 1.5f;
        const float side_x = sane ? right[0] / length : 1.0f;
        const float side_y = sane ? right[1] / length : 0.0f;
        teleport_to(runtime, ped, at[0] - side_x * 2.2f, at[1] - side_y * 2.2f, at[2]);
        return;
    }
}

void apply_switches(psprecomp::Runtime &runtime, std::uint32_t ped) {
    auto &memory = runtime.memory();
    if (g_spawn_pending) place_beside_spawned(runtime, ped);
    const std::uint32_t vehicle = player_vehicle(runtime, ped);
    const std::uint32_t entity = vehicle != 0u ? vehicle : ped;

    if (g_save_position.exchange(false)) {
        for (std::uint32_t i = 0u; i < 3u; ++i) g_saved_position[i] = load_float(memory, entity + kPosition + i * 4u);
        g_has_saved_position = true;
    }
    if (g_return_position.exchange(false) && g_has_saved_position)
        teleport_to(runtime, ped, g_saved_position[0], g_saved_position[1], g_saved_position[2]);

    const bool god = toggle(TrainerToggle::GodMode);
    if (god) {
        if (!g_god_was_on) {
            g_god_ped = ped;
            g_god_health = load_float(memory, ped + kPedHealth);
            g_god_armor = load_float(memory, ped + kPedArmor);
        }
        store_float(memory, ped + kPedHealth, kGodHealth);
        store_float(memory, ped + kPedArmor, kGodHealth);
    } else if (g_god_was_on) {
        // Back to what the player had; a new player (after a load) gets full health.
        const bool same = ped == g_god_ped && std::isfinite(g_god_health) && g_god_health > 0.0f && g_god_health < kGodHealth;
        store_float(memory, ped + kPedHealth, same ? g_god_health : 100.0f);
        store_float(memory, ped + kPedArmor, same && std::isfinite(g_god_armor) && g_god_armor >= 0.0f && g_god_armor < kGodHealth ? g_god_armor : 0.0f);
    }
    g_god_was_on = god;

    if (const int hour = g_hold_hour.load(std::memory_order_relaxed); hour >= 0 && hour < 24) {
        memory.store8(kClockHour, static_cast<std::uint8_t>(hour));
        memory.store8(kClockMinute, 0u);
    }
    const int speed = g_game_speed.load(std::memory_order_relaxed);
    if (speed != 100) {
        store_float(memory, kTimeScale, static_cast<float>(std::clamp(speed, 10, 300)) / 100.0f);
        g_speed_applied = true;
    } else if (g_speed_applied) {
        store_float(memory, kTimeScale, 1.0f);
        g_speed_applied = false;
    }

    std::string overlay;
    if (toggle(TrainerToggle::ShowCoordinates)) {
        char text[96];
        std::snprintf(text, sizeof(text), "%.1f, %.1f, %.1f", load_float(memory, entity + kPosition),
                      load_float(memory, entity + kPosition + 4u), load_float(memory, entity + kPosition + 8u));
        overlay = text;
    }
    const std::lock_guard<std::mutex> lock(g_overlay_mutex);
    g_overlay = std::move(overlay);
}

// Unattended test runs: what they need from the trainer, switched on by environment variables.
void trainer_test_step(psprecomp::Runtime &runtime, std::uint32_t ped) {
    auto &memory = runtime.memory();
    // LCS_TEST_GOD: unattended runs stay alive, under a clear sky, so what they film is comparable.
    static const bool test_god = std::getenv("LCS_TEST_GOD") != nullptr;
    static bool test_god_set = false;
    if (test_god && !test_god_set) {
        test_god_set = true;
        trainer_set_toggle(TrainerToggle::GodMode, true);
        trainer_request(TrainerAction::WeatherSunny);
    }
    // LCS_TEST_HOUR_HOLD=<0-23>: the time of day held, in normal runs too.
    static const int hold_hour = [] {
        const char *text = std::getenv("LCS_TEST_HOUR_HOLD");
        return text != nullptr && *text != '\0' ? std::atoi(text) : -1;
    }();
    if (hold_hour >= 0 && hold_hour < 24) {
        memory.store8(kClockHour, static_cast<std::uint8_t>(hold_hour));
        memory.store8(kClockMinute, 0u);
    }
    static const char mode = [] {
        const char *text = std::getenv("LCS_TEST_TRAINER");
        return text != nullptr ? text[0] : '\0';
    }();
    if (mode == '\0') return;
    static auto due = std::chrono::steady_clock::time_point{};
    const auto now = std::chrono::steady_clock::now();
    if (due == std::chrono::steady_clock::time_point{}) due = now + std::chrono::seconds(25);
    if (now < due) return;
    due = now + std::chrono::seconds(2);
    static int step = 0;
    const std::uint32_t vehicle = player_vehicle(runtime, ped);
    const std::uint32_t entity = vehicle != 0u ? vehicle : ped;
    std::cerr << "[trainer-test] step " << step << " pos=" << load_float(memory, entity + kPosition) << ','
              << load_float(memory, entity + kPosition + 4u) << ',' << load_float(memory, entity + kPosition + 8u)
              << " health=" << load_float(memory, ped + kPedHealth) << " armor=" << load_float(memory, ped + kPedArmor)
              << " vehicle=" << (vehicle != 0u) << " hour=" << unsigned(memory.load8(kClockHour)) << ':'
              << unsigned(memory.load8(kClockMinute)) << " scale=" << load_float(memory, kTimeScale) << "\n";
    const auto say = [](const char *text) { std::cerr << "[trainer-test] >> " << text << "\n"; };

    if (mode == '8') {
        // Outdoors, for what only shows there: on the nearest road, god mode on. LCS_TEST_WEAPONS=A or B gives a weapon
        // set; LCS_TEST_RHINO=1 enters the game's tank cheat and drives forward, for the radar, the GPS and the radio.
        // LCS_TEST_CAR=<model> spawns that car (trainer_vehicles) and gets in; the driving is left to LCS_TEST_KEYS.
        static const int test_car = [] {
            const char *text = std::getenv("LCS_TEST_CAR");
            return text != nullptr ? std::atoi(text) : 0;
        }();
        if (test_car > 0 && step >= 1 && step <= 4) {
            if (step == 1) {
                if (const char *set = std::getenv("LCS_TEST_WEAPONS"))
                    trainer_request(set[0] == 'B' ? TrainerAction::WeaponsB : TrainerAction::WeaponsA);
                say("spawning a car");
                trainer_command(TrainerCommand::SpawnVehicle, test_car);
            } else if (step == 3) {
                say("into the car");
                g_test_buttons.store(static_cast<int>(kTriangle));
            } else if (step == 4) {
                g_test_buttons.store(-1);
            }
            ++step;
            return;
        }
        if (step == 0) {
            say("outdoors: the nearest road");
            trainer_set_toggle(TrainerToggle::GodMode, true);
            trainer_command(TrainerCommand::TeleportNearestRoad);
        } else if (step == 1) {
            if (const char *set = std::getenv("LCS_TEST_WEAPONS"))
                trainer_request(set[0] == 'B' ? TrainerAction::WeaponsB : TrainerAction::WeaponsA);
            if (std::getenv("LCS_TEST_RHINO") != nullptr) trainer_command(TrainerCommand::ButtonCheat, 1);
        } else if (step == 4 && std::getenv("LCS_TEST_RHINO") != nullptr) {
            say("into the tank");
            g_test_buttons.store(static_cast<int>(kTriangle));
        } else if (step == 5 && std::getenv("LCS_TEST_RHINO") != nullptr) {
            g_test_buttons.store(-1);
        } else if (step == 7 && std::getenv("LCS_TEST_RHINO") != nullptr) {
            say("driving");
            g_test_buttons.store(static_cast<int>(kCross));
        } else if (step == 12) {
            g_test_buttons.store(-1);
        }
        ++step;
        return;
    }
    if (mode == '7') {
        // A loaded game starts on the save disc, which only acts when the player comes to it. Steps away and back, to
        // open the game's save list in unattended runs.
        static float spawn[3]{};
        if (step == 0) {
            for (std::uint32_t c = 0u; c < 3u; ++c) spawn[c] = load_float(memory, ped + kPosition + c * 4u);
            store_float(memory, ped + kPosition, spawn[0] + 4.0f);
            say("stepping away from the disc");
        } else if (step == 2) {
            for (std::uint32_t c = 0u; c < 3u; ++c) store_float(memory, ped + kPosition + c * 4u, spawn[c]);
            say("back at the disc");
        }
        ++step;
        return;
    }
    if (mode == '1') {
        // Every feature once, logging what changed.
        switch (step++) {
        case 0: say("god mode, coordinates"); trainer_set_toggle(TrainerToggle::GodMode, true); trainer_set_toggle(TrainerToggle::ShowCoordinates, true); break;
        case 1: say("nearest road"); trainer_command(TrainerCommand::TeleportNearestRoad); break;
        case 2: say("save position; 30 m east"); trainer_save_position(); store_float(memory, entity + kPosition, load_float(memory, entity + kPosition) + 30.0f); break;
        case 3: say("return to the saved position"); trainer_return_to_position(); break;
        case 4: say("hold 21:00, game speed 50"); trainer_set_hold_hour(21); trainer_set_game_speed(50); break;
        case 5: say("clock free, game speed 100"); trainer_set_hold_hour(-1); trainer_set_game_speed(100); break;
        case 6: say("weapons, money, armour; wanted up"); trainer_request(TrainerAction::WeaponsA); trainer_request(TrainerAction::Money); trainer_request(TrainerAction::Armor); trainer_request(TrainerAction::WantedUp); break;
        case 7: say("wanted cleared; rain"); trainer_request(TrainerAction::WantedClear); trainer_request(TrainerAction::WeatherRainy); break;
        case 8: say("button cheat: Rhino"); trainer_command(TrainerCommand::ButtonCheat, 1); break;
        case 9: case 10: say("watching"); break;
        case 11: say("god mode off; sunny; marker; objective"); trainer_set_toggle(TrainerToggle::GodMode, false); trainer_request(TrainerAction::WeatherSunny); trainer_command(TrainerCommand::TeleportMarker); trainer_command(TrainerCommand::TeleportObjective); break;
        case 12: say("clock from this computer"); trainer_command(TrainerCommand::ClockFromComputer); break;
        default: due = now + std::chrono::hours(24); say("done"); break;
        }
    }
}

}  // namespace

void trainer_request(TrainerAction action) noexcept {
    try {
        const std::lock_guard<std::mutex> lock(g_mutex);
        if (g_routines.size() < 32u) g_routines.push_back(Routine{kRoutines[static_cast<std::size_t>(action)]});
    } catch (...) {
    }
}

void trainer_set_toggle(TrainerToggle which, bool on) noexcept { g_toggles[static_cast<std::size_t>(which)].store(on); }
bool trainer_toggle(TrainerToggle which) noexcept { return toggle(which); }
void trainer_set_hold_hour(int hour) noexcept { g_hold_hour.store(hour); }
int trainer_hold_hour() noexcept { return g_hold_hour.load(); }
void trainer_set_game_speed(int percent) noexcept { g_game_speed.store(percent); }
int trainer_game_speed() noexcept { return g_game_speed.load(); }
void trainer_save_position() noexcept { g_save_position.store(true); }
void trainer_return_to_position() noexcept { g_return_position.store(true); }

void trainer_command(TrainerCommand command, int argument) noexcept {
    try {
        const std::lock_guard<std::mutex> lock(g_mutex);
        if (g_commands.size() < 32u) g_commands.push_back(Command{command, argument});
    } catch (...) {
    }
}

std::vector<std::pair<std::string, int>> trainer_button_cheats() {
    std::vector<std::pair<std::string, int>> out;
    for (int i = 0; i < static_cast<int>(std::size(kButtonCheats)); ++i) out.emplace_back(kButtonCheats[i].name, i);
    return out;
}

std::vector<std::pair<std::string, int>> trainer_vehicles() {
    std::vector<std::pair<std::string, int>> out;
    for (const Vehicle &vehicle : kVehicles) out.emplace_back(vehicle.name, vehicle.model);
    return out;
}

std::uint32_t trainer_pad_buttons(std::uint32_t held, std::uint8_t &analog_x, std::uint8_t &analog_y) noexcept {
    if (const int scripted = g_test_buttons.load(std::memory_order_relaxed); scripted >= 0) {
        analog_x = 128u;
        analog_y = 128u;
        return static_cast<std::uint32_t>(scripted);
    }
    const int cheat = g_pad_cheat.load(std::memory_order_relaxed);
    if (cheat < 0) return held;
    const auto &keys = kButtonCheats[cheat].keys;
    // Each key held for a few frames, then released: what the game's input history counts as one press.
    const int key = g_pad_step / (kPadFramesPerStep * 2);
    if (key >= static_cast<int>(keys.size())) {
        g_pad_cheat.store(-1, std::memory_order_relaxed);
        return held;
    }
    const bool down = g_pad_step % (kPadFramesPerStep * 2) < kPadFramesPerStep;
    ++g_pad_step;
    return down ? keys[static_cast<std::size_t>(key)] : 0u;
}

std::string trainer_overlay_text() {
    const std::lock_guard<std::mutex> lock(g_overlay_mutex);
    return g_overlay;
}

std::uint32_t trainer_player_vehicle(psprecomp::Runtime &runtime) {
    const std::uint32_t ped = player_ped(runtime);
    return ped != 0u ? player_vehicle(runtime, ped) : 0u;
}

TrainerRouteInfo trainer_route_info(psprecomp::Runtime &runtime) {
    TrainerRouteInfo info;
    auto &memory = runtime.memory();
    const std::uint32_t ped = player_ped(runtime);
    if (ped == 0u) return info;
    const std::uint32_t vehicle = player_vehicle(runtime, ped);
    const std::uint32_t entity = vehicle != 0u ? vehicle : ped;
    info.player_known = true;
    info.in_vehicle = vehicle != 0u;
    info.player_x = load_float(memory, entity + kPosition);
    info.player_y = load_float(memory, entity + kPosition + 4u);
    // The player's own marker first; otherwise the nearest bright blip without an icon, which is a mission's objective.
    float nearest = 1e18f;
    for_each_blip(memory, [&](std::uint32_t blip) {
        const unsigned icon = memory.load8(blip + 0x40u);
        if (icon == kMarkerIcon) {
            info.has_destination = true;
            info.destination_x = load_float(memory, blip + 0x0Cu);
            info.destination_y = load_float(memory, blip + 0x10u);
            info.colour = memory.load32(blip);
            return true;
        }
        if (icon != 0u || memory.load8(blip + 0x3Eu) == 0u) return false;
        float at[3];
        if (!blip_position(memory, blip, at)) return false;
        const float dx = at[0] - info.player_x, dy = at[1] - info.player_y;
        if (dx * dx + dy * dy < nearest) {
            nearest = dx * dx + dy * dy;
            info.has_destination = true;
            info.destination_x = at[0];
            info.destination_y = at[1];
            info.colour = memory.load32(blip);
        }
        return false;
    });
    return info;
}

bool trainer_frame(psprecomp::Runtime &runtime, psprecomp::AllegrexContext &ctx) {
    if (lcs_menu_active()) return false;
    const std::uint32_t ped = player_ped(runtime);
    if (ped == 0u) return false;
    // A routine this function started has just come back here: on with the next one, not with a new pass.
    if (!g_returning_from_routine) {
        trainer_test_step(runtime, ped);
        apply_switches(runtime, ped);
        apply_commands(runtime, ped);
    }
    Routine routine;
    {
        const std::lock_guard<std::mutex> lock(g_mutex);
        if (g_routines.empty()) {
            g_returning_from_routine = false;
            return false;
        }
        routine = g_routines.front();
        g_routines.pop_front();
    }
    g_returning_from_routine = true;
    if (routine.has_a0) ctx.gpr[4] = routine.a0;
    ctx.gpr[31] = kResumeAt;
    ctx.pc = routine.address;
    return true;
}

}  // namespace lcs
