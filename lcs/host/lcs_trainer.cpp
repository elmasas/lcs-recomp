#include "lcs_trainer.hpp"
#include "lcs_texture_pack.hpp"

#include "lcs_menu.hpp"

#include <unordered_map>
#include <filesystem>
#include <fstream>
#include <thread>
#include <algorithm>
#include <array>
#include <atomic>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iostream>
#include <iterator>
#include <mutex>
#include <span>
#include <vector>

namespace lcs {
namespace {

constexpr std::uint32_t kResumeAt = 0x089C4F34u;
constexpr std::uint32_t kPlayerSlot = 0x08B5E054u;
constexpr std::uint32_t kPlayers = 0x08B89A10u;
constexpr std::uint32_t kPlayerStride = 368u;
constexpr std::uint32_t kClockHour = 0x08B5E090u;
constexpr std::uint32_t kClockMinute = 0x08B5E091u;

// Resolved with CheatDevice Remastered's patterns.
constexpr std::uint32_t kStartNewScript = 0x089581ECu;
constexpr std::uint32_t kScriptSpace = 0x08B38C7Cu;
constexpr std::uint32_t kIdeTable = 0x08B4D2ACu;
constexpr std::uint32_t kUnlimitedSprint = 0x08B89B74u;
constexpr std::uint32_t kFreezeTimers = 0x08B923D5u;
constexpr std::uint32_t kHudOn = 0x08B59B0Au;
constexpr std::uint32_t kTrafficDensity = 0x08B4BBCCu;
constexpr std::uint32_t kPedDensity = 0x08B564D0u;
constexpr std::uint32_t kTimeScale = 0x08B5E040u;
constexpr std::uint32_t kVehiclePool = 0x08B4C430u;  // +0 objects, +4 flags, +8 count; flag bit 0x80: free
constexpr std::uint32_t kVehicleStride = 0x6E0u;

// Above the scenery buffers and the distant lights' scratch: scripts the game runs. It reads them relative to its
// script space, which can reach any address.
constexpr std::uint32_t kScriptArea = 0x0BF30000u;
constexpr std::uint32_t kScriptSlotBytes = 256u;
constexpr std::uint32_t kScriptSlots = 16u;

// Fields of the player's ped.
constexpr std::uint32_t kPosition = 0x30u;
constexpr std::uint32_t kPedInvisibleFlags = 0x19Au;
constexpr std::uint32_t kPedHealth = 0x4B8u;
constexpr std::uint32_t kPedArmor = 0x4BCu;
constexpr std::uint32_t kPedVehicle = 1332u;
constexpr std::uint32_t kPedInVehicle = 1336u;
constexpr std::uint32_t kPedFire = 0x6DCu;
constexpr std::uint32_t kPedIgnored = 0x82Eu;
constexpr std::uint32_t kPedBytes = 2400u;
// (loaded, total) per weapon slot; the grenades have only a total.
constexpr std::uint32_t kGrenades = 0x5D8u;
constexpr std::array<std::uint32_t, 7> kWeaponAmmo = {0x5F0u, 0x60Cu, 0x628u, 0x644u, 0x660u, 0x67Cu, 0x698u};

// Fields of a vehicle.
constexpr std::uint32_t kVehicleMoveZ = 0x78u;
constexpr std::uint32_t kVehicleNoDamage = 0x140u;
constexpr std::uint32_t kFreezePosition = 0x143u;
constexpr std::uint32_t kVehicleHealth = 0x268u;
constexpr std::uint32_t kVehicleDoors = 0x294u;

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

struct Teleport {
    const char *name;
    float x, y, z;
};
constexpr Teleport kTeleports[] = {
#include "cdr/teleports.inc"
};

// Models the spawner must skip (CheatDevice's list): FERRY, TRAIN, the "escape" HELI, AEROPL, "deaddodo".
constexpr std::array<int, 5> kVehicleBlacklist = {0xC0, 0xC5, 0xC6, 0xC8, 0xC9};
constexpr int kFirstVehicle = 130;
// From CheatDevice's patterns: a pointer to the handling data, whose slots a vehicle's model names, and the weapon table.
constexpr std::uint32_t kHandlingPointer = 0x08B55DD4u;
constexpr std::uint32_t kHandlingSlotBytes = 0xF0u;
constexpr std::uint32_t kWeaponTablePointer = 0x08B5E548u;
constexpr std::uint32_t kWeaponSlots = 37u;
constexpr std::uint32_t kWeaponSlotBytes = 0x70u;
constexpr int kLastVehicle = 223;

constexpr const char *kSkins[] = {
#include "cdr/skins.inc"
};
struct Pickup {
    const char *name;
    int id, type, amount;
};
constexpr Pickup kPickups[] = {
#include "cdr/pickups.inc"
};

// The game's own button cheats, entered as if on the pad.
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

constexpr std::uint32_t kPedPool = 0x08B4C42Cu;
constexpr std::uint32_t kPedStride = 0xCB0u;
constexpr std::uint32_t kCamera = 0x08B832A0u;
constexpr std::uint32_t kCameraTopDown1 = 0x0D4u;
constexpr std::uint32_t kCameraTopDown2 = 0x13Cu;
constexpr std::uint32_t kCameraCentered = 0x1AAu;
constexpr std::uint32_t kCameraBehind = 0x24Cu;
constexpr std::uint32_t kCameraUp = 0x250u;
constexpr std::uint32_t kCameraFov = 0x254u;
constexpr std::uint32_t kClockMultiplier = 0x08B5E08Cu;
constexpr std::uint32_t kWaterPointer = 0x08B35EE0u;
constexpr std::uint32_t kPickups_ = 0x08E28880u;
constexpr std::uint32_t kPickupSlots = 0x150u;
constexpr std::uint32_t kPickupSize = 0x60u;
constexpr std::uint32_t kBlips = 0x08E4A920u;
constexpr std::uint32_t kBlipSlots = 0x4Bu;
constexpr std::uint32_t kBlipSize = 0x50u;
constexpr std::uint32_t kMaxHealth = 0x08B89B77u;
constexpr std::uint32_t kMaxArmor = 0x08B89B78u;
constexpr std::uint32_t kBridgeState = 0x08B5E584u;
constexpr std::uint32_t kMainScriptSize = 0x08B5E3A4u;
constexpr std::uint32_t kCheatUsedFlag = 0x08B562F2u;
constexpr std::uint32_t kCheatUsedCount = 0x08B5E274u;

constexpr std::uint32_t kSetWantedLevel = 0x08944E84u;
constexpr std::uint32_t kSetMaxWantedLevel = 0x08ACD674u;
constexpr std::uint32_t kSetBridgeState = 0x08965674u;
constexpr std::uint32_t kSetActorSkinTo = 0x089A5228u;
constexpr std::uint32_t kLoadAllModelsNow = 0x089CB020u;
constexpr std::uint32_t kRefreshActorSkin = 0x089A52C4u;
constexpr std::uint32_t kWarpPedIntoVehicle = 0x089BD1A0u;
constexpr std::uint32_t kTaskCharWith = 0x08893114u;
constexpr std::uint32_t kTankControl = 0x088207F8u;
constexpr std::uint32_t kBlowupVehiclesInPath = 0x0880C900u;
constexpr std::uint32_t kHoverSuspension = 0x0880D138u;

// Models as the game lists them: boats 192-198, bikes 202-210, aircraft from 211; below 192, cars.
bool model_is_boat(unsigned model) { return model >= 192u && model <= 198u; }
bool model_is_car(unsigned model) { return model >= 130u && model < 192u; }

struct Task {
    std::uint32_t routine{};
    std::uint32_t a0{};
    bool has_a0{};
    std::uint32_t a1{};
    std::uint32_t a2{};
};

struct Command {
    TrainerCommand what{};
    int argument{};
};

std::mutex g_mutex;
std::deque<Task> g_tasks;
std::array<std::atomic<bool>, static_cast<std::size_t>(TrainerToggle::Count)> g_toggles{};
std::array<bool, static_cast<std::size_t>(TrainerToggle::Count)> g_applied{};
std::atomic<int> g_hold_hour{-1};
std::atomic<int> g_game_speed{100};
std::atomic<bool> g_save_position{false};
std::atomic<bool> g_return_position{false};
std::atomic<int> g_teleport{-1};
std::atomic<int> g_spawn_vehicle{-1};
struct HeldValue {
    std::atomic<int> value{kTrainerOff};
    [[nodiscard]] int load() const noexcept { return value.load(std::memory_order_relaxed); }
    void store(int v) noexcept { value.store(v, std::memory_order_relaxed); }
};
std::array<HeldValue, static_cast<std::size_t>(TrainerValue::Count)> g_values;
std::deque<Command> g_commands;
std::atomic<std::uint32_t> g_pad_held{0u};
std::atomic<std::uint32_t> g_test_pad{0u};
std::atomic<int> g_test_buttons{-1};  // LCS_TEST_TRAINER=4: the whole pad, while its script runs
std::atomic<int> g_pad_stick_x{128};
std::atomic<int> g_pad_stick_y{128};
std::atomic<bool> g_keep_on_bike{false};
std::atomic<std::uint32_t> g_player_ped{0u};
bool g_free_camera_on = false;
float g_camera_azimuth = 0.0f;
float g_camera_inclination = 1.5f;
float g_camera_step = 0.4f;
std::uint32_t g_hover_vehicle = 0u;
float g_hover_camber = 0.0f;
std::atomic<int> g_pad_cheat{-1};
int g_pad_step = 0;
std::mutex g_overlay_mutex;
std::string g_overlay;
bool g_returning_from_task = false;
std::uint32_t g_heavy_ped = 0u;
float g_heavy_ped_mass[2]{};
std::uint32_t g_heavy_vehicle = 0u;
float g_heavy_vehicle_health = 1000.0f;
std::uint32_t g_gravity_vehicle = 0u;
int g_water_applied = kTrainerOff;
int g_bridge_applied = kTrainerOff;
bool g_topdown_saved = false;
std::array<float, 4> g_topdown_backup{};
bool g_fov_applied = false;
float g_fov_backup = 70.0f;
std::atomic<psprecomp::Runtime *> g_runtime{nullptr};
std::array<std::uint32_t, 3> g_saved_position{};
bool g_has_saved_position = false;
std::uint32_t g_saved_traffic = 0u;
std::uint32_t g_saved_peds = 0u;
std::uint32_t g_locked_vehicle = 0u;
std::uint32_t g_invincible_vehicle = 0u;
std::uint32_t g_next_script_slot = 0u;
bool g_speed_applied = false;

void enqueue(Task task) noexcept {
    try {
        const std::lock_guard<std::mutex> lock(g_mutex);
        if (g_tasks.size() < 32u) g_tasks.push_back(task);
    } catch (...) {
    }
}

bool toggle(TrainerToggle which) noexcept {
    return g_toggles[static_cast<std::size_t>(which)].load(std::memory_order_relaxed);
}

// True once when a toggle has just been switched off, so what it changed can be put back.
bool just_off(TrainerToggle which) noexcept {
    const auto index = static_cast<std::size_t>(which);
    const bool on = g_toggles[index].load(std::memory_order_relaxed);
    const bool was = g_applied[index];
    g_applied[index] = on;
    return was && !on;
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

void store_float(psprecomp::GuestMemory &memory, std::uint32_t address, float value) {
    memory.store32(address, std::bit_cast<std::uint32_t>(value));
}

float load_float(psprecomp::GuestMemory &memory, std::uint32_t address) {
    return std::bit_cast<float>(memory.load32(address));
}

void teleport_to(psprecomp::Runtime &runtime, std::uint32_t ped, float x, float y, float z) {
    auto &memory = runtime.memory();
    const std::uint32_t vehicle = player_vehicle(runtime, ped);
    const std::uint32_t entity = vehicle != 0u ? vehicle : ped;
    store_float(memory, entity + kPosition, x);
    store_float(memory, entity + kPosition + 4u, y);
    // A little higher in a vehicle, so that it doesn't get stuck in the ground; and no falling speed carried over.
    store_float(memory, entity + kPosition + 8u, vehicle != 0u ? z + 1.0f : z);
    if (vehicle != 0u) store_float(memory, vehicle + kVehicleMoveZ, 0.0f);
}

template <typename Visit>
void for_each_vehicle(psprecomp::Runtime &runtime, Visit visit) {
    auto &memory = runtime.memory();
    const std::uint32_t pool = memory.load32(kVehiclePool);
    if (pool == 0u || !memory.contains(pool, 12u)) return;
    const std::uint32_t objects = memory.load32(pool);
    const std::uint32_t flags = memory.load32(pool + 4u);
    const std::uint32_t count = std::min<std::uint32_t>(memory.load32(pool + 8u), 128u);
    for (std::uint32_t i = 0u; i < count; ++i) {
        if (!memory.contains(flags + i, 1u) || (memory.load8(flags + i) & 0x80u) != 0u) continue;
        const std::uint32_t vehicle = objects + i * kVehicleStride;
        if (memory.contains(vehicle, kVehicleStride)) visit(vehicle);
    }
}

template <typename Visit>
void for_each_ped(psprecomp::Runtime &runtime, Visit visit) {
    auto &memory = runtime.memory();
    const std::uint32_t pool = memory.load32(kPedPool);
    if (pool == 0u || !memory.contains(pool, 12u)) return;
    const std::uint32_t objects = memory.load32(pool);
    const std::uint32_t count = std::min<std::uint32_t>(memory.load32(pool + 8u), 128u);
    for (std::uint32_t i = 0u; i < count; ++i) {
        const std::uint32_t ped = objects + i * kPedStride;
        // CheatDevice's test for a ped in use: its first child pointer is set.
        if (memory.contains(ped, kPedStride) && memory.contains(memory.load32(ped + 0x40u), 4u)) visit(ped);
    }
}

std::uint32_t handling_slot(psprecomp::GuestMemory &memory, unsigned model) {
    const std::uint32_t info = memory.load32(memory.load32(kIdeTable) + model * 4u);
    return memory.load32(kHandlingPointer) + 0x20u + memory.load8(info + 0x42u) * kHandlingSlotBytes;
}

void set_water_level(psprecomp::GuestMemory &memory, int tenths) {
    const std::uint32_t water = memory.load32(kWaterPointer);
    if (water == 0u || !memory.contains(water, 16u)) return;
    const std::uint32_t count = memory.load32(water);
    const std::uint32_t levels = memory.load32(water + 4u);
    if (count > 256u || !memory.contains(levels, count * 4u) || !memory.contains(water + 12u, 0x5000u)) return;
    const bool reset = tenths == kTrainerOff;
    for (std::uint32_t i = 0u; i < count; ++i) {
        // The game's own levels: the Staunton reservoir is higher than the sea.
        const float level = reset ? ((i >= 12u && i <= 17u) ? 63.2f : 0.0f) : static_cast<float>(tenths) / 10.0f;
        store_float(memory, levels + i * 4u, level);
    }
    // Cells marked empty hold 0x80: they get a level while it's changed.
    for (std::uint32_t i = 0u; i < 0x5000u; ++i) {
        const std::uint8_t cell = memory.load8(water + 12u + i);
        if (!reset && cell == 0x80u) memory.store8(water + 12u + i, 0x1Fu);
        if (reset && cell == 0x1Fu) memory.store8(water + 12u + i, 0x80u);
    }
}

void add_call(std::deque<Task> &calls, std::uint32_t routine, std::uint32_t a0 = 0u, std::uint32_t a1 = 0u, std::uint32_t a2 = 0u) {
    calls.push_back(Task{routine, a0, true, a1, a2});
}

void apply_commands(psprecomp::Runtime &runtime, std::uint32_t ped, std::deque<Task> &calls);
void explode(psprecomp::GuestMemory &memory, std::uint32_t vehicle, std::deque<Task> &calls);
void start_guest_script(psprecomp::Runtime &runtime, const std::uint8_t *bytes, std::size_t size, std::deque<Task> &calls);

// What needs the game's functions every pass.
void queue_per_frame_calls(psprecomp::Runtime &runtime, std::uint32_t ped, std::deque<Task> &calls) {
    auto &memory = runtime.memory();
    const std::uint32_t vehicle = player_vehicle(runtime, ped);
    const unsigned model = vehicle != 0u ? memory.load16(vehicle + 0x58u) : 0u;
    if (toggle(TrainerToggle::DriveOnWater) && model_is_car(model)) add_call(calls, kHoverSuspension, vehicle);
    if (toggle(TrainerToggle::Tank) && (model_is_car(model) || model_is_boat(model))) {
        add_call(calls, kTankControl, vehicle);
        add_call(calls, kBlowupVehiclesInPath, vehicle);
    }
    const int wanted = g_values[static_cast<std::size_t>(TrainerValue::WantedLevel)].load();
    if (wanted != kTrainerOff) {
        if (static_cast<int>(memory.load8(0x08B58A5Cu)) < wanted) add_call(calls, kSetMaxWantedLevel, static_cast<std::uint32_t>(wanted));
        if (static_cast<int>(memory.load32(ped + 0x830u)) != wanted) add_call(calls, kSetWantedLevel, ped, static_cast<std::uint32_t>(wanted));
    }
    const int bridge = g_values[static_cast<std::size_t>(TrainerValue::BridgeDown)].load();
    if (bridge != kTrainerOff) {
        add_call(calls, kSetBridgeState, bridge != 0 ? 6u : 0u);
    } else if (g_bridge_applied != kTrainerOff) {
        memory.store32(kBridgeState, 3u);
        add_call(calls, kSetBridgeState, 2u);
    }
    g_bridge_applied = bridge;
}

void apply_held_switches(psprecomp::Runtime &runtime, std::uint32_t ped) {
    auto &memory = runtime.memory();
    const std::uint32_t vehicle = player_vehicle(runtime, ped);
    const unsigned model = vehicle != 0u ? memory.load16(vehicle + 0x58u) : 0u;
    const std::uint32_t held = g_pad_held.load(std::memory_order_relaxed);

    // Mass: only on foot, since a very heavy ped can't get into a vehicle.
    const bool heavy_on_foot = toggle(TrainerToggle::HeavyPlayer) && vehicle == 0u;
    if (heavy_on_foot && g_heavy_ped != ped) {
        g_heavy_ped = ped;
        g_heavy_ped_mass[0] = load_float(memory, ped + 0xD0u);
        g_heavy_ped_mass[1] = load_float(memory, ped + 0xD4u);
        store_float(memory, ped + 0xD0u, g_heavy_ped_mass[0] * 10000.0f);
        store_float(memory, ped + 0xD4u, g_heavy_ped_mass[1] * 10000.0f);
    } else if (!heavy_on_foot && g_heavy_ped != 0u) {
        if (g_heavy_ped == ped) {
            store_float(memory, ped + 0xD0u, g_heavy_ped_mass[0]);
            store_float(memory, ped + 0xD4u, g_heavy_ped_mass[1]);
        }
        g_heavy_ped = 0u;
    }
    just_off(TrainerToggle::HeavyPlayer);

    if (toggle(TrainerToggle::AimOfDeath)) {
        const std::uint32_t target = memory.load32(ped + 0x6BCu);
        if (target != 0u && target != ped && memory.contains(target, kPedStride)) {
            store_float(memory, target + kPedHealth, 0.0f);
            store_float(memory, target + kPedArmor, 0.0f);
            if (memory.load8(target + 0x538u) == 1u) memory.store8(target + 0x250u, 0x10u);  // out of its vehicle
        }
    }
    just_off(TrainerToggle::AimOfDeath);

    if (toggle(TrainerToggle::KillAimingAtMe)) {
        const std::uint32_t me = vehicle != 0u ? vehicle : ped;
        for_each_ped(runtime, [&](std::uint32_t other) {
            if (other != ped && memory.load32(other + 0x6BCu) == me) {
                store_float(memory, other + kPedHealth, 0.0f);
                store_float(memory, other + kPedArmor, 0.0f);
            }
        });
    }
    just_off(TrainerToggle::KillAimingAtMe);

    // Below this height the game puts whoever falls back on the nearest land.
    if (toggle(TrainerToggle::WarpOutOfWater) && vehicle == 0u && (memory.load8(ped + 0x142u) & 0x10u) != 0u)
        store_float(memory, ped + kPosition + 8u, -200.0f);
    just_off(TrainerToggle::WarpOutOfWater);
    if (toggle(TrainerToggle::VehicleOutOfWater) && vehicle != 0u && !model_is_boat(model) && (memory.load8(vehicle + 0x142u) & 0x10u) != 0u)
        store_float(memory, vehicle + kPosition + 8u, -200.0f);
    just_off(TrainerToggle::VehicleOutOfWater);

    const bool heavy_vehicle = toggle(TrainerToggle::HeavyVehicle) && vehicle != 0u && !model_is_boat(model);
    if (heavy_vehicle && g_heavy_vehicle != vehicle) {
        store_float(memory, vehicle + 0xD0u, load_float(memory, vehicle + 0xD0u) * 1000.0f);
        store_float(memory, vehicle + 0xD4u, load_float(memory, vehicle + 0xD4u) * 1000.0f);
        g_heavy_vehicle = vehicle;
        g_heavy_vehicle_health = load_float(memory, vehicle + kVehicleHealth);
    } else if (!heavy_vehicle && g_heavy_vehicle != 0u) {
        store_float(memory, g_heavy_vehicle + 0xD0u, load_float(memory, g_heavy_vehicle + 0xD0u) / 1000.0f);
        store_float(memory, g_heavy_vehicle + 0xD4u, load_float(memory, g_heavy_vehicle + 0xD4u) / 1000.0f);
        g_heavy_vehicle = 0u;
    }
    // Collision damage grows with mass: measured, a parked car went from 999 to 0 in 8 seconds. It keeps its health.
    if (heavy_vehicle && !toggle(TrainerToggle::IndestructibleVehicle)) store_float(memory, vehicle + kVehicleHealth, g_heavy_vehicle_health);
    just_off(TrainerToggle::HeavyVehicle);

    if (toggle(TrainerToggle::PowerBrake) && vehicle != 0u && (held & kSquare) != 0u) {
        store_float(memory, vehicle + 0x70u, 0.0f);
        store_float(memory, vehicle + 0x74u, 0.0f);
    }
    just_off(TrainerToggle::PowerBrake);

    const int boost = g_values[static_cast<std::size_t>(TrainerValue::RocketBoost)].load();
    if (boost > 0 && vehicle != 0u && (held & kCross) != 0u && load_float(memory, vehicle + 0x28u) >= -0.85f && memory.load8(vehicle + 0x10Au) != 0u) {
        const float thrust = static_cast<float>(boost + 1) * 0.002f;
        for (std::uint32_t axis = 0u; axis < 3u; ++axis)
            store_float(memory, vehicle + 0x70u + axis * 4u, load_float(memory, vehicle + 0x70u + axis * 4u) + load_float(memory, vehicle + 0x10u + axis * 4u) * thrust);
    }

    // Drive on walls: with no gravity, pressed against the surface under the wheels.
    const bool walls = toggle(TrainerToggle::DriveOnWalls) && vehicle != 0u;
    const auto gravity = [&](std::uint32_t car, bool on) {
        memory.store8(car + 0x142u, static_cast<std::uint8_t>((memory.load8(car + 0x142u) & 0xF0u) | (on ? 0x2u : 0x1u)));
    };
    if (walls) {
        const bool tilted = load_float(memory, vehicle + 0x28u) < 0.5f;
        gravity(vehicle, !tilted);
        if (tilted) {
            for (std::uint32_t axis = 0u; axis < 3u; ++axis)
                store_float(memory, vehicle + 0x70u + axis * 4u, load_float(memory, vehicle + 0x70u + axis * 4u) - load_float(memory, vehicle + 0x20u + axis * 4u) * 0.01f);
        }
        g_gravity_vehicle = vehicle;
    } else if (g_gravity_vehicle != 0u) {
        gravity(g_gravity_vehicle, true);
        g_gravity_vehicle = 0u;
    }
    just_off(TrainerToggle::DriveOnWalls);

    if (toggle(TrainerToggle::FreezePeds))
        for_each_ped(runtime, [&](std::uint32_t other) { if (other != ped) memory.store8(other + kFreezePosition, 1u); });
    if (just_off(TrainerToggle::FreezePeds))
        for_each_ped(runtime, [&](std::uint32_t other) { if (other != ped) memory.store8(other + kFreezePosition, 0u); });

    const std::array<std::uint32_t, 4> topdown = {kCamera + kCameraTopDown1, kCamera + kCameraTopDown2, kCamera + kCameraBehind, kCamera + kCameraUp};
    if (toggle(TrainerToggle::CameraTopDown)) {
        if (!g_topdown_saved) {
            for (std::size_t i = 0u; i < topdown.size(); ++i) g_topdown_backup[i] = load_float(memory, topdown[i]);
            g_topdown_saved = true;
        }
        store_float(memory, topdown[0], 30.0f);
        store_float(memory, topdown[1], 30.0f);
        store_float(memory, topdown[2], -2.0f);
        store_float(memory, topdown[3], -0.03f);
    } else if (g_topdown_saved) {
        for (std::size_t i = 0u; i < topdown.size(); ++i) store_float(memory, topdown[i], g_topdown_backup[i]);
        g_topdown_saved = false;
    }
    just_off(TrainerToggle::CameraTopDown);
    if (toggle(TrainerToggle::CameraCentered) && vehicle != 0u) memory.store8(kCamera + kCameraCentered, 1u);
    just_off(TrainerToggle::CameraCentered);

    const int fov = g_values[static_cast<std::size_t>(TrainerValue::FieldOfView)].load();
    if (fov != kTrainerOff) {
        if (!g_fov_applied) g_fov_backup = load_float(memory, kCamera + kCameraFov);
        store_float(memory, kCamera + kCameraFov, static_cast<float>(fov));
        g_fov_applied = true;
    } else if (g_fov_applied) {
        store_float(memory, kCamera + kCameraFov, g_fov_backup);
        g_fov_applied = false;
    }

    const int water = g_values[static_cast<std::size_t>(TrainerValue::WaterLevel)].load();
    if (water != g_water_applied) {
        set_water_level(memory, water);
        g_water_applied = water;
    }

    if (const int value = g_values[static_cast<std::size_t>(TrainerValue::MaxHealth)].load(); value != kTrainerOff) memory.store8(kMaxHealth, static_cast<std::uint8_t>(value));
    if (const int value = g_values[static_cast<std::size_t>(TrainerValue::MaxArmor)].load(); value != kTrainerOff) memory.store8(kMaxArmor, static_cast<std::uint8_t>(value));

    // A game minute per real minute.
    if (toggle(TrainerToggle::RealTimeClock)) memory.store16(kClockMultiplier, static_cast<std::uint16_t>(60000u));
    if (just_off(TrainerToggle::RealTimeClock)) memory.store16(kClockMultiplier, static_cast<std::uint16_t>(1000u));

    g_player_ped.store(ped, std::memory_order_relaxed);
    g_keep_on_bike.store(toggle(TrainerToggle::NeverFallOffBike) && model >= 202u && model <= 210u, std::memory_order_relaxed);

    const float stick_x = static_cast<float>(g_pad_stick_x.load(std::memory_order_relaxed) - 128) / 128.0f;
    const float stick_y = static_cast<float>(g_pad_stick_y.load(std::memory_order_relaxed) - 128) / 128.0f;

    // Hover: CheatDevice's movement. No gravity; the stick pitches and rolls, Cross thrusts along the nose.
    const bool hover = toggle(TrainerToggle::Hover) && vehicle != 0u && model < 211u;
    if (g_hover_vehicle != 0u && (g_hover_vehicle != vehicle || !hover)) {
        gravity(g_hover_vehicle, true);
        if (g_hover_camber != 0.0f) store_float(memory, g_hover_vehicle + 0x618u, g_hover_camber);
        g_hover_vehicle = 0u;
    }
    if (hover) {
        if (g_hover_vehicle == 0u) {
            g_hover_vehicle = vehicle;
            g_hover_camber = model_is_car(model) ? load_float(memory, vehicle + 0x618u) : 0.0f;
        }
        gravity(vehicle, false);
        if (model_is_car(model) && load_float(memory, vehicle + 0x618u) < 3.0f) store_float(memory, vehicle + 0x618u, load_float(memory, vehicle + 0x618u) + 0.05f);
        const auto field = [&](std::uint32_t offset) { return load_float(memory, vehicle + offset); };
        const float vx = field(0x70u), vy = field(0x74u), vz = field(0x78u);
        const float speed = std::sqrt(vx * vx + vy * vy + vz * vz);
        const float xy_speed = std::sqrt(vx * vx + vy * vy);
        const float pitch = -(field(0x18u) - stick_y / 2.0f) * 0.1f;
        const float roll = (field(0x08u) + stick_x / 2.0f) * 0.1f;
        store_float(memory, vehicle + 0x80u, field(0x00u) * pitch + field(0x10u) * roll);
        store_float(memory, vehicle + 0x84u, field(0x04u) * pitch + field(0x14u) * roll);
        store_float(memory, vehicle + 0x88u, -0.04f * stick_x);
        const bool fast_turn = (held & kR) != 0u;
        if ((held & kUp) != 0u && (xy_speed < 0.1f || fast_turn)) store_float(memory, vehicle + 0x98u, field(0x98u) + 0.02f);
        if ((held & kDown) != 0u && (xy_speed < 0.1f || fast_turn)) store_float(memory, vehicle + 0x98u, field(0x98u) - 0.02f);
        if (!fast_turn && xy_speed > 0.1f) {
            const float way = memory.load8(vehicle + 0x270u) > 0u ? speed : -speed;
            for (std::uint32_t axis = 0u; axis < 3u; ++axis) store_float(memory, vehicle + 0x70u + axis * 4u, field(0x10u + axis * 4u) * way);
        }
        if ((held & kCross) != 0u) {
            store_float(memory, vehicle + 0x70u, field(0x70u) + field(0x10u) * 0.01f);
            store_float(memory, vehicle + 0x74u, field(0x74u) + field(0x14u) * 0.01f);
            store_float(memory, vehicle + 0x78u, field(0x78u) + field(0x18u) * 0.022f);
        }
        if ((held & kSquare) != 0u) {
            for (std::uint32_t axis = 0u; axis < 3u; ++axis) store_float(memory, vehicle + 0x70u + axis * 4u, field(0x70u + axis * 4u) - field(0x10u + axis * 4u) * 0.02f);
        }
    }
    just_off(TrainerToggle::Hover);

    // Free camera: unbound from the player; the stick looks, the d-pad moves, Square with the d-pad rises and sinks, L and R set the speed.
    const bool free_camera = toggle(TrainerToggle::FreeCamera);
    if (free_camera != g_free_camera_on) {
        memory.store8(ped + 0x560u, free_camera ? 1u : 0u);
        store_float(memory, kCamera + 0xCCu, free_camera ? 4.0f : 2.0f);
        if (free_camera) {
            g_camera_azimuth = std::atan2(load_float(memory, kCamera + 0x334u), load_float(memory, kCamera + 0x330u));
            g_camera_inclination = std::acos(std::clamp(load_float(memory, kCamera + 0x338u), -1.0f, 1.0f));
        }
        g_free_camera_on = free_camera;
    }
    if (free_camera) {
        const std::uint32_t keys = held | g_test_pad.load(std::memory_order_relaxed);
        g_camera_azimuth -= stick_x * 0.05f;
        g_camera_inclination = std::clamp(g_camera_inclination + stick_y * 0.05f, 0.2f, 3.0f);
        const float si = std::sin(g_camera_inclination), ci = std::cos(g_camera_inclination);
        const float sa = std::sin(g_camera_azimuth), ca = std::cos(g_camera_azimuth);
        const std::array<float, 3> forward = {si * ca, si * sa, ci};
        const std::array<float, 3> up = {-ci * ca, -ci * sa, si};
        if ((keys & kL) != 0u && g_camera_step > 0.02f) g_camera_step -= 0.01f;
        if ((keys & kR) != 0u && g_camera_step < 5.0f) g_camera_step += 0.01f;
        const std::uint32_t position = memory.load8(kCamera + 0x6Bu) == 1u ? kCamera + 0x9C0u : kCamera + 0x340u;
        std::array<float, 3> at = {load_float(memory, position), load_float(memory, position + 4u), load_float(memory, position + 8u)};
        if ((keys & kSquare) != 0u) {
            if ((keys & kUp) != 0u) at[2] += g_camera_step;
            if ((keys & kDown) != 0u) at[2] -= g_camera_step;
        } else {
            const float along = ((keys & kUp) != 0u ? 1.0f : 0.0f) - ((keys & kDown) != 0u ? 1.0f : 0.0f);
            const float side = ((keys & kRight) != 0u ? 1.0f : 0.0f) - ((keys & kLeft) != 0u ? 1.0f : 0.0f);
            at[0] += (forward[0] * along + forward[1] * side) * g_camera_step;
            at[1] += (forward[1] * along - forward[0] * side) * g_camera_step;
            at[2] += forward[2] * along * g_camera_step;
        }
        for (std::uint32_t axis = 0u; axis < 3u; ++axis) {
            store_float(memory, position + axis * 4u, at[axis]);
            store_float(memory, kCamera + 0x330u + axis * 4u, forward[axis]);
            store_float(memory, kCamera + 0x360u + axis * 4u, up[axis]);
        }
    }
    just_off(TrainerToggle::FreeCamera);

    std::string overlay;
    const std::uint32_t where = vehicle != 0u ? vehicle : ped;
    if (toggle(TrainerToggle::ShowCoordinates)) {
        char text[96];
        std::snprintf(text, sizeof(text), "X %.1f  Y %.1f  Z %.1f", load_float(memory, where + kPosition), load_float(memory, where + kPosition + 4u), load_float(memory, where + kPosition + 8u));
        overlay += text;
    }
    if (toggle(TrainerToggle::ShowSpeed) && vehicle != 0u) {
        const float x = load_float(memory, vehicle + 0x70u), y = load_float(memory, vehicle + 0x74u), z = load_float(memory, vehicle + 0x78u);
        char text[48];
        // Speed units per step at 30 steps a second, and the game's metres.
        std::snprintf(text, sizeof(text), "%s%.0f km/h", overlay.empty() ? "" : "\n", std::sqrt(x * x + y * y + z * z) * 50.0f * 3.6f);
        overlay += text;
    }
    {
        const std::lock_guard<std::mutex> lock(g_overlay_mutex);
        g_overlay = std::move(overlay);
    }

    if (toggle(TrainerToggle::GodMode)) {
        // CheatDevice's values: an explosion takes more than a full bar in one hit.
        store_float(memory, ped + kPedHealth, 9999.0f);
        store_float(memory, ped + kPedArmor, 9999.0f);
        memory.store32(ped + kPedFire, 0u);  // puts out a fire on the player
    }
    if (just_off(TrainerToggle::GodMode)) {
        store_float(memory, ped + kPedHealth, static_cast<float>(memory.load8(kMaxHealth)));
        store_float(memory, ped + kPedArmor, static_cast<float>(memory.load8(kMaxArmor)));
    }

    if (toggle(TrainerToggle::UnlimitedAmmo)) {
        memory.store32(ped + kGrenades, 99999u);
        for (const std::uint32_t slot : kWeaponAmmo) {
            memory.store32(ped + slot, 10000u);
            memory.store32(ped + slot + 4u, 99999u);
        }
    }
    just_off(TrainerToggle::UnlimitedAmmo);

    if (toggle(TrainerToggle::Invisible)) memory.store8(ped + kPedInvisibleFlags, memory.load8(ped + kPedInvisibleFlags) | 0x80u);
    if (just_off(TrainerToggle::Invisible)) memory.store8(ped + kPedInvisibleFlags, memory.load8(ped + kPedInvisibleFlags) & 0x7Fu);

    if (toggle(TrainerToggle::IgnoredByEveryone)) memory.store8(ped + kPedIgnored, 2u);
    if (just_off(TrainerToggle::IgnoredByEveryone)) memory.store8(ped + kPedIgnored, 0u);

    if (toggle(TrainerToggle::UnlimitedSprint)) memory.store8(kUnlimitedSprint, 1u);
    if (just_off(TrainerToggle::UnlimitedSprint)) memory.store8(kUnlimitedSprint, 0u);

    if (toggle(TrainerToggle::IndestructibleVehicle)) {
        if (vehicle != 0u) {
            g_invincible_vehicle = vehicle;
            store_float(memory, vehicle + kVehicleHealth, 1000000.0f);
            memory.store8(vehicle + kVehicleNoDamage, 0u);
        } else if (g_invincible_vehicle != 0u) {
            store_float(memory, g_invincible_vehicle + kVehicleHealth, 1000.0f);
            g_invincible_vehicle = 0u;
        }
    }
    if (just_off(TrainerToggle::IndestructibleVehicle) && g_invincible_vehicle != 0u) {
        store_float(memory, g_invincible_vehicle + kVehicleHealth, 1000.0f);
        g_invincible_vehicle = 0u;
    }

    if (toggle(TrainerToggle::LockDoors)) {
        if (vehicle != 0u) {
            g_locked_vehicle = vehicle;
            memory.store8(vehicle + kVehicleDoors, 2u);
        } else if (g_locked_vehicle != 0u) {
            memory.store8(g_locked_vehicle + kVehicleDoors, 1u);
            g_locked_vehicle = 0u;
        }
    }
    if (just_off(TrainerToggle::LockDoors) && g_locked_vehicle != 0u) {
        memory.store8(g_locked_vehicle + kVehicleDoors, 1u);
        g_locked_vehicle = 0u;
    }

    if (toggle(TrainerToggle::AutoFlip) && vehicle != 0u && load_float(memory, vehicle + 0x28u) < -0.85f) {
        // The up vector points down: turn the car over by inverting its right and up vectors.
        for (const std::uint32_t row : {0x00u, 0x20u})
            for (std::uint32_t axis = 0u; axis < 3u; ++axis)
                store_float(memory, vehicle + row + axis * 4u, -load_float(memory, vehicle + row + axis * 4u));
        store_float(memory, vehicle + kPosition + 8u, load_float(memory, vehicle + kPosition + 8u) + 1.0f);
    }
    just_off(TrainerToggle::AutoFlip);

    if (toggle(TrainerToggle::NoTraffic)) {
        if (!g_applied[static_cast<std::size_t>(TrainerToggle::NoTraffic)]) g_saved_traffic = memory.load32(kTrafficDensity);
        memory.store32(kTrafficDensity, 0u);
    }
    if (just_off(TrainerToggle::NoTraffic)) memory.store32(kTrafficDensity, g_saved_traffic);

    if (toggle(TrainerToggle::NoPeds)) {
        if (!g_applied[static_cast<std::size_t>(TrainerToggle::NoPeds)]) g_saved_peds = memory.load32(kPedDensity);
        memory.store32(kPedDensity, 0u);
    }
    if (just_off(TrainerToggle::NoPeds)) memory.store32(kPedDensity, g_saved_peds);

    if (toggle(TrainerToggle::FreezeTraffic)) {
        for_each_vehicle(runtime, [&](std::uint32_t other) {
            if (other != vehicle) memory.store8(other + kFreezePosition, 1u);
        });
    }
    if (just_off(TrainerToggle::FreezeTraffic))
        for_each_vehicle(runtime, [&](std::uint32_t other) { memory.store8(other + kFreezePosition, 0u); });

    if (toggle(TrainerToggle::FreezeMissionTimers)) memory.store8(kFreezeTimers, 1u);
    if (just_off(TrainerToggle::FreezeMissionTimers)) memory.store8(kFreezeTimers, 0u);

    if (toggle(TrainerToggle::HideHud)) memory.store8(kHudOn, 0u);
    if (just_off(TrainerToggle::HideHud)) memory.store8(kHudOn, 1u);

    if (const int hour = g_hold_hour.load(std::memory_order_relaxed); hour >= 0) {
        memory.store8(kClockHour, static_cast<std::uint8_t>(hour));
        memory.store8(kClockMinute, 0u);
    }
    const int speed = g_game_speed.load(std::memory_order_relaxed);
    if (speed != 100) {
        store_float(memory, kTimeScale, static_cast<float>(speed) / 100.0f);
        g_speed_applied = true;
    } else if (g_speed_applied) {
        store_float(memory, kTimeScale, 1.0f);
        g_speed_applied = false;
    }

    const std::uint32_t entity = vehicle != 0u ? vehicle : ped;
    if (g_save_position.exchange(false)) {
        for (std::uint32_t i = 0u; i < 3u; ++i) g_saved_position[i] = memory.load32(entity + kPosition + i * 4u);
        g_has_saved_position = true;
    }
    if (g_return_position.exchange(false) && g_has_saved_position) {
        teleport_to(runtime, ped, std::bit_cast<float>(g_saved_position[0]), std::bit_cast<float>(g_saved_position[1]),
                    std::bit_cast<float>(g_saved_position[2]));
    }
    const int index = g_teleport.exchange(-1);
    if (index >= 0 && index < static_cast<int>(std::size(kTeleports))) {
        const Teleport &place = kTeleports[index];
        teleport_to(runtime, ped, place.x, place.y, place.z);
    }
}

void start_guest_script(psprecomp::Runtime &runtime, const std::uint8_t *bytes, std::size_t size, std::deque<Task> &calls) {
    auto &memory = runtime.memory();
    // A slot of its own each time: the game may still be reading the last one.
    const std::uint32_t address = kScriptArea + (g_next_script_slot++ % kScriptSlots) * kScriptSlotBytes;
    memory.copy_in(address, std::span<const std::uint8_t>(bytes, size));
    add_call(calls, kStartNewScript, address - memory.load32(kScriptSpace));
}

// Where the marker, or a mission's objective, is: CheatDevice's reading of the radar blips.
void for_each_blip(psprecomp::Runtime &runtime, const std::function<bool(std::uint32_t)> &visit) {
    auto &memory = runtime.memory();
    for (std::uint32_t i = 0u; i < kBlipSlots; ++i) {
        const std::uint32_t blip = kBlips + i * kBlipSize;
        if (memory.load8(blip + 0x33u) != 0u && visit(blip)) return;
    }
}

std::uint32_t pool_object(psprecomp::GuestMemory &memory, std::uint32_t pool_pointer, std::uint32_t stride, std::int32_t slot) {
    const std::uint32_t pool = memory.load32(pool_pointer);
    if (slot < 0 || pool == 0u || !memory.contains(pool, 12u) || static_cast<std::uint32_t>(slot) >= memory.load32(pool + 8u)) return 0u;
    const std::uint32_t object = memory.load32(pool) + static_cast<std::uint32_t>(slot) * stride;
    return memory.contains(object, stride) ? object : 0u;
}

bool vehicle_in_use(psprecomp::GuestMemory &memory, std::uint32_t vehicle) {
    return memory.load16(vehicle + 0x62u) != 0xFFFFu && memory.load32(vehicle + 0x1Cu) == 0u;
}

bool ped_in_use(psprecomp::GuestMemory &memory, std::uint32_t ped) { return memory.contains(memory.load32(ped + 0x40u), 4u); }

std::int32_t blip_slot(psprecomp::GuestMemory &memory, std::uint32_t blip) {
    const std::uint32_t handle = memory.load32(blip + 8u);
    return handle != 0u ? static_cast<std::int32_t>(handle) >> 8 : -1;
}

// The objective's position now: a blip can follow a car or a person, whose own position is what counts.
bool blip_position(psprecomp::GuestMemory &memory, std::uint32_t blip, float &x, float &y) {
    const std::uint32_t type = memory.load32(blip + 4u);
    const std::int32_t slot = blip_slot(memory, blip);
    if (type == 1u) {
        const std::uint32_t car = pool_object(memory, kVehiclePool, kVehicleStride, slot);
        if (car == 0u || !vehicle_in_use(memory, car)) return false;
        x = load_float(memory, car + kPosition);
        y = load_float(memory, car + kPosition + 4u);
        return true;
    }
    if (type == 2u) {
        const std::uint32_t other = pool_object(memory, kPedPool, kPedStride, slot);
        if (other == 0u || !ped_in_use(memory, other)) return false;
        x = load_float(memory, other + kPosition);
        y = load_float(memory, other + kPosition + 4u);
        return true;
    }
    x = load_float(memory, blip + 0xCu);
    y = load_float(memory, blip + 0x10u);
    return true;
}

void explode(psprecomp::GuestMemory &memory, std::uint32_t vehicle, std::deque<Task> &calls) {
    const std::uint32_t table = memory.load32(vehicle + 0x5Cu);  // the object's virtual functions
    if (memory.contains(table + 0x11Cu, 4u)) add_call(calls, memory.load32(table + 0x11Cu), vehicle);
}

void apply_commands(psprecomp::Runtime &runtime, std::uint32_t ped, std::deque<Task> &calls) {
    auto &memory = runtime.memory();
    std::deque<Command> commands;
    {
        const std::lock_guard<std::mutex> lock(g_mutex);
        commands.swap(g_commands);
    }
    for (const Command &command : commands) {
        const std::uint32_t vehicle = player_vehicle(runtime, ped);
        switch (command.what) {
        case TrainerCommand::Repair:
            if (vehicle != 0u) store_float(memory, vehicle + kVehicleHealth, 1000.0f);
            break;
        case TrainerCommand::Explode:
            if (vehicle != 0u) explode(memory, vehicle, calls);
            break;
        case TrainerCommand::PrimaryColor:
            if (vehicle != 0u) memory.store8(vehicle + 0x1F0u, static_cast<std::uint8_t>(command.argument));
            break;
        case TrainerCommand::SecondaryColor:
            if (vehicle != 0u) memory.store8(vehicle + 0x1F1u, static_cast<std::uint8_t>(command.argument));
            break;
        case TrainerCommand::TeleportMarker:
            for_each_blip(runtime, [&](std::uint32_t blip) {
                if (memory.load8(blip + 0x40u) != 49u) return false;
                // So far below the ground that the game puts the player back on top of it.
                teleport_to(runtime, ped, load_float(memory, blip + 0xCu), load_float(memory, blip + 0x10u), -150.0f);
                return true;
            });
            break;
        case TrainerCommand::TeleportMission:
            for_each_blip(runtime, [&](std::uint32_t blip) {
                const unsigned icon = memory.load8(blip + 0x40u);
                if (memory.load32(blip + 4u) != 5u || icon < 31u || icon > 40u || load_float(memory, blip + 0x14u) == 0.0f) return false;
                teleport_to(runtime, ped, load_float(memory, blip + 0xCu), load_float(memory, blip + 0x10u), load_float(memory, blip + 0x14u) + 1.0f);
                return true;
            });
            break;
        case TrainerCommand::TeleportObjective:
            for_each_blip(runtime, [&](std::uint32_t blip) {
                if (memory.load8(blip + 0x3Eu) == 0u || memory.load8(blip + 0x40u) != 0u) return false;
                const std::uint32_t type = memory.load32(blip + 4u);
                const std::int32_t slot = blip_slot(memory, blip);
                if (type == 1u) {
                    const std::uint32_t car = pool_object(memory, kVehiclePool, kVehicleStride, slot);
                    if (car == 0u || !vehicle_in_use(memory, car)) return false;
                    if (memory.load32(car + 0x1F8u) == 0u) {  // no driver: get in
                        add_call(calls, kTaskCharWith, ped, 0x12u, car);
                        add_call(calls, kWarpPedIntoVehicle, ped, car);
                    } else {
                        teleport_to(runtime, ped, load_float(memory, car + kPosition), load_float(memory, car + kPosition + 4u), load_float(memory, car + kPosition + 8u) + 2.0f);
                    }
                    return true;
                }
                if (type == 2u) {
                    const std::uint32_t other = pool_object(memory, kPedPool, kPedStride, slot);
                    if (other == 0u || !ped_in_use(memory, other)) return false;
                    teleport_to(runtime, ped, load_float(memory, other + kPosition), load_float(memory, other + kPosition + 4u), load_float(memory, other + kPosition + 8u));
                    return true;
                }
                if (load_float(memory, blip + 0x14u) == 0.0f) return false;
                teleport_to(runtime, ped, load_float(memory, blip + 0xCu), load_float(memory, blip + 0x10u), load_float(memory, blip + 0x14u) + 1.0f);
                return true;
            });
            break;
        case TrainerCommand::StepThroughWall:
            if (vehicle == 0u) {
                const float heading = load_float(memory, ped + 0x4E0u) + 1.5707963f;
                store_float(memory, ped + kPosition, load_float(memory, ped + kPosition) + std::cos(heading) * 1.2f);
                store_float(memory, ped + kPosition + 4u, load_float(memory, ped + kPosition + 4u) + std::sin(heading) * 1.2f);
            }
            break;
        case TrainerCommand::KillTargets:
        case TrainerCommand::FreezeTargets: {
            const bool kill = command.what == TrainerCommand::KillTargets;
            for_each_blip(runtime, [&](std::uint32_t blip) {
                if (memory.load8(blip + 0x40u) != 0u || memory.load32(blip) != 0u) return false;
                const std::uint32_t type = memory.load32(blip + 4u);
                const std::int32_t slot = blip_slot(memory, blip);
                if (type == 1u) {
                    const std::uint32_t car = pool_object(memory, kVehiclePool, kVehicleStride, slot);
                    if (car != 0u && vehicle_in_use(memory, car)) {
                        if (kill) {
                            store_float(memory, car + kVehicleHealth, 0.0f);
                            explode(memory, car, calls);
                        } else {
                            memory.store8(car + kFreezePosition, 1u);
                        }
                    }
                } else if (type == 2u) {
                    const std::uint32_t other = pool_object(memory, kPedPool, kPedStride, slot);
                    if (other != 0u && ped_in_use(memory, other)) {
                        if (kill) {
                            store_float(memory, other + kPedHealth, 0.0f);
                            store_float(memory, other + kPedArmor, 0.0f);
                        } else {
                            memory.store8(other + kFreezePosition, 1u);
                        }
                    }
                }
                return false;
            });
            break;
        }
        case TrainerCommand::KillPeds:
            for_each_ped(runtime, [&](std::uint32_t other) {
                if (other == ped) return;
                store_float(memory, other + kPedHealth, 0.0f);
                store_float(memory, other + kPedArmor, 0.0f);
            });
            break;
        case TrainerCommand::SpawnPickup:
            if (command.argument >= 0 && command.argument < static_cast<int>(std::size(kPickups))) {
                const Pickup &pickup = kPickups[command.argument];
                const float heading = load_float(memory, ped + 0x4E0u) + 1.5707963f;
                for (std::uint32_t i = 0u; i < kPickupSlots; ++i) {
                    const std::uint32_t slot = kPickups_ + i * kPickupSize;
                    if (memory.load8(slot + 0x32u) != 0u) continue;
                    const auto type = static_cast<std::uint8_t>(pickup.id == 0x20A ? 0x8 : 0x3);
                    store_float(memory, slot, load_float(memory, ped + kPosition) + std::cos(heading) * 2.0f);
                    store_float(memory, slot + 4u, load_float(memory, ped + kPosition + 4u) + std::sin(heading) * 2.0f);
                    store_float(memory, slot + 8u, load_float(memory, ped + kPosition + 8u));
                    memory.store16(slot + 0x1Cu, static_cast<std::uint16_t>(pickup.amount));
                    memory.store16(slot + 0x26u, static_cast<std::uint16_t>(pickup.id));
                    memory.store8(slot + 0x32u, type);
                    memory.store32(slot + 0xCu, 0u);
                    memory.store8(slot + 0x33u, 0u);
                    memory.store8(slot + 0x50u, 0xFFu);
                    if (type == 0x8u) {  // money
                        store_float(memory, slot + 0xCu, 1.0f);
                        for (std::uint32_t c = 0u; c < 3u; ++c) memory.store8(slot + 0x20u + c, 0x88u);
                    }
                    break;
                }
            }
            break;
        case TrainerCommand::SetSkin:
            if (vehicle == 0u && command.argument >= 0 && command.argument < static_cast<int>(std::size(kSkins))) {
                const std::string name = kSkins[command.argument];
                const std::uint32_t text = kScriptArea + (g_next_script_slot++ % kScriptSlots) * kScriptSlotBytes;
                for (std::size_t i = 0u; i <= name.size(); ++i) memory.store8(text + static_cast<std::uint32_t>(i), static_cast<std::uint8_t>(i < name.size() ? name[i] : '\0'));
                add_call(calls, kSetActorSkinTo, ped, text);
                add_call(calls, kLoadAllModelsNow, 0u);
                add_call(calls, kRefreshActorSkin, ped);
            }
            break;
        case TrainerCommand::MissionSelector: {
            // A jump into the main script's own "LEVSKIP" code.
            const std::uint32_t space = memory.load32(kScriptSpace);
            const std::uint32_t size = memory.load32(kMainScriptSize);
            if (!memory.contains(space, size)) break;
            for (std::uint32_t at = 0u; at + 8u < size; ++at) {
                if (memory.load8(space + at) != 'L' || memory.load8(space + at + 1u) != 'E') continue;
                const char word[] = "LEVSKIP";
                bool same = true;
                for (std::uint32_t i = 0u; i < 8u && same; ++i) same = memory.load8(space + at + i) == static_cast<std::uint8_t>(word[i]);
                if (!same) continue;
                const std::uint32_t target = at - 2u;  // before the opcode that holds the text
                const std::uint8_t script[] = {0x02u, 0x00u, 0x06u, static_cast<std::uint8_t>(target), static_cast<std::uint8_t>(target >> 8),
                                               static_cast<std::uint8_t>(target >> 16), static_cast<std::uint8_t>(target >> 24)};
                start_guest_script(runtime, script, sizeof(script), calls);
                break;
            }
            break;
        }
        case TrainerCommand::ButtonCheat:
            if (command.argument >= 0 && command.argument < static_cast<int>(std::size(kButtonCheats))) {
                g_pad_step = 0;
                g_pad_cheat.store(command.argument);
            }
            break;
        case TrainerCommand::ClearCheatRecord:
            memory.store8(kCheatUsedFlag, 0u);
            memory.store32(kCheatUsedCount, 0u);
            break;
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
                memory.store8(kClockMultiplier + 6u, static_cast<std::uint8_t>(local.tm_sec));
            }
            break;
        }
        }
    }
}

// A script the game runs like its own. CheatDevice's "become vehicle": $PLAYER_CHAR is global 0x18CE on this version.
//   request_model, load_all_models_now, get player coordinates and heading, ground z, create_car, set_car_heading,
//   warp_char_into_car, mark_car_as_no_longer_needed, terminate_this_script
bool start_spawn_script(psprecomp::Runtime &runtime, std::uint32_t ped, int model) {
    if (player_vehicle(runtime, ped) != 0u) {
        std::cerr << "[trainer] spawn refused: already in a vehicle\n";
        return false;
    }
    const auto low = static_cast<std::uint8_t>(model & 0xFF);
    const auto high = static_cast<std::uint8_t>((model >> 8) & 0xFF);
    const std::uint8_t script[] = {
        0x4C, 0x02, 0x08, low, high,               // request_model
        0x90, 0x03,                                // load_all_models_now
        0x54, 0x00, 0xCE, 0x18, 0x0C, 0x0D, 0x0E,  // get_player_coordinates to 0@ 1@ 2@
        0x75, 0x01, 0xCE, 0x18, 0x0F,              // get_player_heading to 3@
        0xD3, 0x02, 0x0C, 0x0D, 0x0E, 0x10,        // get_ground_z_for_3d_coord to 4@
        0xA5, 0x00, 0x08, low, high, 0x0C, 0x0D, 0x10, 0x11,  // create_car at 0@ 1@ 4@ to 5@
        0x7A, 0x01, 0x11, 0x0F,                    // set_car_heading
        0x6E, 0x03, 0xCE, 0x18, 0x11,              // warp_player_into_car
        0xC8, 0x01, 0x11,                          // mark_car_as_no_longer_needed
        0x4E, 0x00,                                // terminate_this_script
    };
    std::deque<Task> calls;
    start_guest_script(runtime, script, sizeof(script), calls);
    enqueue(calls.front());
    return true;
}

}  // namespace

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
    float nearest = 1e18f;
    bool marker = false;
    for_each_blip(runtime, [&](std::uint32_t blip) {
        const unsigned icon = memory.load8(blip + 0x40u);
        if (icon == 49u) {
            info.has_destination = true;
            marker = true;
            info.destination_x = load_float(memory, blip + 0xCu);
            info.destination_y = load_float(memory, blip + 0x10u);
            info.colour = memory.load32(blip);
            return true;
        }
        if (icon != 0u || memory.load8(blip + 0x3Eu) == 0u) return false;
        float x = 0.0f, y = 0.0f;
        if (!blip_position(memory, blip, x, y)) return false;
        const float distance = (x - info.player_x) * (x - info.player_x) + (y - info.player_y) * (y - info.player_y);
        if (distance < nearest) {
            nearest = distance;
            info.has_destination = true;
            info.destination_x = x;
            info.destination_y = y;
            info.colour = memory.load32(blip);
        }
        return false;
    });
    (void)marker;
    return info;
}

namespace {

// LCS_TEST_TRAINER=1: steps through the features on disposable saves and logs what changed, without playing.
struct TrainerTest {
    int step{-1};
    std::chrono::steady_clock::time_point due{};
};
TrainerTest g_test;

void trainer_test_step(psprecomp::Runtime &runtime, std::uint32_t ped) {
    // LCS_TEST_GOD: unattended runs stay alive, under a clear sky, so what they film is comparable.
    static const bool test_god = std::getenv("LCS_TEST_GOD") != nullptr;
    static bool test_god_set = false;
    // LCS_TEST_HOUR_HOLD=<0-23>: the time of day held, in normal runs too.
    static const int hold_hour = [] {
        const char *text = std::getenv("LCS_TEST_HOUR_HOLD");
        return text != nullptr && *text != '\0' ? std::atoi(text) : -1;
    }();
    if (hold_hour >= 0) {
        runtime.memory().store8(kClockHour, static_cast<std::uint8_t>(hold_hour));
        runtime.memory().store8(kClockHour + 1u, 0u);
    }
    if (test_god && !test_god_set) {
        test_god_set = true;
        trainer_set_toggle(TrainerToggle::GodMode, true);
        trainer_request(TrainerAction::WeatherSunny);
    }
    static const bool enabled = [] {
        const char *text = std::getenv("LCS_TEST_TRAINER");
        return text != nullptr && *text >= '1' && *text <= '8';
    }();
    if (!enabled) return;
    const auto now = std::chrono::steady_clock::now();
    if (g_test.due == std::chrono::steady_clock::time_point{}) g_test.due = now + std::chrono::seconds(25);
    if (now < g_test.due) return;
    g_test.due = now + std::chrono::seconds(4);
    auto &memory = runtime.memory();
    const std::uint32_t vehicle = player_vehicle(runtime, ped);
    const std::uint32_t entity = vehicle != 0u ? vehicle : ped;
    // LCS_TEST_TRAINER=8: outdoors in a car, driving, for what only shows there: the radar, the GPS, the radio wheel.
    static const bool outdoors_test = [] {
        const char *text = std::getenv("LCS_TEST_TRAINER");
        return text != nullptr && text[0] == '8';
    }();
    if (outdoors_test) {
        static int step = 0;
        const std::uint32_t car = player_vehicle(runtime, ped);
        const std::uint32_t where = car != 0u ? car : ped;
        std::cerr << "[outdoors] step " << step << " pos=" << load_float(memory, where + kPosition) << "," << load_float(memory, where + kPosition + 4u)
                  << " radio=" << (car != 0u ? int(memory.load8(car + 0x2A0u)) : -1) << " scale=" << load_float(memory, kTimeScale) << "\n";
        if (step == 0) {
            trainer_teleport(3);
            trainer_set_toggle(TrainerToggle::GodMode, true);
            trainer_set_toggle(TrainerToggle::IndestructibleVehicle, true);
        } else if (step == 1) {
            const char *model = std::getenv("LCS_TEST_VEHICLE");  // a vehicle model to test, 205 a bike
            trainer_set_toggle(TrainerToggle::NeverFallOffBike, true);
            if (std::getenv("LCS_TEST_ONFOOT") == nullptr)  // LCS_TEST_ONFOOT: outdoors, but on foot
                trainer_spawn_vehicle(model != nullptr ? std::atoi(model) : 172);
        } else if (step == 2 && std::getenv("LCS_TEST_VEHICLE") == nullptr && std::getenv("LCS_TEST_ONFOOT") == nullptr) {
            g_test_buttons.store(static_cast<int>(kCross));
        } else if (step == 5) {
            g_test_buttons.store(-1);
        }
        ++step;
        g_test.due = now + std::chrono::seconds(2);
        return;
    }
    // LCS_TEST_TRAINER=7: a loaded game starts on the save disc, which only acts when the player comes to it. Steps away
    // and comes back, to open the game's save list in unattended runs.
    static const bool disc_test = [] {
        const char *text = std::getenv("LCS_TEST_TRAINER");
        return text != nullptr && text[0] == '7';
    }();
    if (disc_test) {
        static int step = 0;
        static float spawn[3]{};
        if (step == 0) {
            for (std::uint32_t c = 0u; c < 3u; ++c) spawn[c] = load_float(memory, ped + kPosition + c * 4u);
            store_float(memory, ped + kPosition, spawn[0] + 4.0f);
            std::cerr << "[disc-test] stepping away\n";
        } else if (step == 2) {
            for (std::uint32_t c = 0u; c < 3u; ++c) store_float(memory, ped + kPosition + c * 4u, spawn[c]);
            std::cerr << "[disc-test] back at the disc\n";
        }
        ++step;
        return;
    }
    std::cerr << "[trainer-test] pos=" << load_float(memory, entity + kPosition) << ','
              << load_float(memory, entity + kPosition + 4u) << ',' << load_float(memory, entity + kPosition + 8u)
              << " vehicle=" << (vehicle != 0u ? memory.load16(vehicle + 0x58u) : 0u)
              << " veh_health=" << (vehicle != 0u ? load_float(memory, vehicle + kVehicleHealth) : 0.0f)
              << " invisible=" << ((memory.load8(ped + kPedInvisibleFlags) & 0x80u) != 0u)
              << " ignored=" << unsigned(memory.load8(ped + kPedIgnored))
              << " handgun_total=" << memory.load32(ped + kWeaponAmmo[0] + 4u)
              << " sprint=" << unsigned(memory.load8(kUnlimitedSprint))
              << " traffic=" << memory.load32(kTrafficDensity) << " peds=" << memory.load32(kPedDensity)
              << " timers=" << unsigned(memory.load8(kFreezeTimers)) << " hud=" << unsigned(memory.load8(kHudOn))
              << " scale=" << load_float(memory, kTimeScale) << " doors=" << (vehicle != 0u ? unsigned(memory.load8(vehicle + kVehicleDoors)) : 0u)
              << " game_ms=" << memory.load32(0x08B5E02Cu) << "\n";
    const auto say = [](const char *text) { std::cerr << "[trainer-test] >> " << text << "\n"; };
    static const bool tuning_test = [] {
        const char *text = std::getenv("LCS_TEST_TRAINER");
        return text != nullptr && text[0] == '5';
    }();
    if (tuning_test) {
        const auto speed = [&](std::uint32_t what) {
            return std::sqrt(load_float(memory, what + 0x70u) * load_float(memory, what + 0x70u) + load_float(memory, what + 0x74u) * load_float(memory, what + 0x74u));
        };
        std::cerr << "[tune-test] speed=" << speed(entity) << " z=" << load_float(memory, entity + kPosition + 8u)
                  << " gear=" << (vehicle != 0u ? unsigned(memory.load8(vehicle + 0x270u)) : 0u) << " radio=" << (vehicle != 0u ? unsigned(memory.load8(vehicle + 0x2A0u)) : 0u) << "\n";
        if (vehicle != 0u) {
            const std::uint32_t slot = handling_slot(memory, memory.load16(vehicle + 0x58u));
            std::cerr << "[tune-test] handling mass=" << load_float(memory, slot) << " vehicle mass=" << load_float(memory, vehicle + 0xD0u) << " accel=" << load_float(memory, slot + 0x84u)
                      << " top=" << load_float(memory, slot + 0x8Cu) << " brake=" << load_float(memory, slot + 0x9Cu) << " grip=" << load_float(memory, slot + 0x08u) << " steer=" << load_float(memory, slot + 0xA8u) << "\n";
        }
        const std::uint32_t weapons = memory.load32(memory.load32(kWeaponTablePointer) + 4u);
        if (memory.contains(weapons, kWeaponSlots * kWeaponSlotBytes)) {
            std::cerr << "[tune-test] damage:";
            for (std::uint32_t i = 0u; i < 8u; ++i) std::cerr << ' ' << memory.load32(weapons + i * kWeaponSlotBytes + 0x14u);
            std::cerr << "\n";
        }
        static int step = -1;
        const auto drive = [](int buttons) { g_test_buttons.store(buttons); };
        switch (++step) {
        case 0:
            say("outdoors");
            trainer_teleport(3);
            trainer_set_toggle(TrainerToggle::GodMode, true);
            trainer_set_toggle(TrainerToggle::IndestructibleVehicle, true);
            for (const auto &[name, id] : trainer_vehicles()) std::cerr << "[tune-test] vehicle " << id << ' ' << name << "\n";
            break;
        case 1: say("car"); trainer_spawn_vehicle(172); break;
        case 2: say("accelerate, normal"); drive(kCross); break;
        case 3: case 4: say("still"); break;
        case 5: say("stop, back to the start"); drive(0); store_float(memory, vehicle + 0x70u, 0.0f); store_float(memory, vehicle + 0x74u, 0.0f); trainer_teleport(3); break;
        case 6: say("accelerate, tuned"); trainer_set_value(TrainerValue::TuneAcceleration, 300); trainer_set_value(TrainerValue::TuneTopSpeed, 200); trainer_set_value(TrainerValue::TuneBrakes, 200); trainer_set_value(TrainerValue::TuneTraction, 150); trainer_set_value(TrainerValue::TuneSteering, 150); drive(kCross); break;
        case 7: case 8: say("still"); break;
        case 9: say("tuning off, must restore"); drive(0); trainer_set_value(TrainerValue::TuneAcceleration, kTrainerOff); trainer_set_value(TrainerValue::TuneTopSpeed, kTrainerOff); trainer_set_value(TrainerValue::TuneBrakes, kTrainerOff); trainer_set_value(TrainerValue::TuneTraction, kTrainerOff); trainer_set_value(TrainerValue::TuneSteering, kTrainerOff); store_float(memory, vehicle + 0x70u, 0.0f); store_float(memory, vehicle + 0x74u, 0.0f); break;
        case 10: say("nitro: accelerate"); trainer_set_toggle(TrainerToggle::Nitro, true); drive(kCross); break;
        case 11: say("nitro: press"); drive(kCross | kCircle); break;
        case 12: say("still"); drive(kCross); break;
        case 13: say("nitro off; radio; damage x5; untouchable; touching"); drive(0); trainer_set_toggle(TrainerToggle::Nitro, false); trainer_set_value(TrainerValue::DefaultRadio, 3); trainer_set_value(TrainerValue::WeaponDamagePercent, 500); trainer_set_toggle(TrainerToggle::Untouchable, true); trainer_set_value(TrainerValue::TouchVehicle, 1); trainer_set_value(TrainerValue::TouchPed, 0); break;
        case 14: {
            int stations = 0, others = 0;
            for_each_vehicle(runtime, [&](std::uint32_t other) { if (other != vehicle) { ++others; stations += memory.load8(other + 0x2A0u) == 3u ? 1 : 0; } });
            std::cerr << "[tune-test] other vehicles " << others << ", on Rise FM " << stations << "\n";
            say("all off; out of the car");
            trainer_set_value(TrainerValue::DefaultRadio, kTrainerOff); trainer_set_value(TrainerValue::WeaponDamagePercent, kTrainerOff); trainer_set_toggle(TrainerToggle::Untouchable, false); trainer_set_value(TrainerValue::TouchVehicle, kTrainerOff); trainer_set_value(TrainerValue::TouchPed, kTrainerOff);
            drive(kTriangle);
            break;
        }
        case 15: say("on foot; power jump"); drive(0); trainer_set_toggle(TrainerToggle::PowerJump, true); store_float(memory, entity + kPosition + 8u, load_float(memory, entity + kPosition + 8u) + 15.0f); drive(kSquare); break;
        case 16: case 17: say("still rising?"); break;
        case 18: say("released"); drive(-1); trainer_set_toggle(TrainerToggle::PowerJump, false); break;
        case 19: say("done"); break;
        default: g_test.due = now + std::chrono::hours(24); break;
        }
        return;
    }
    static const bool tour = [] {
        const char *text = std::getenv("LCS_TEST_TRAINER");
        return text != nullptr && text[0] == '6';
    }();
    if (tour) {
        // Loads the whole city, to fill the texture cache: a new teleport every 4 s.
        static int next = 0;
        if (next == 0) trainer_set_toggle(TrainerToggle::GodMode, true);
        trainer_teleport(next);
        next = (next + 1) % static_cast<int>(trainer_teleports().size());
        return;
    }
    static const bool textures = [] {
        const char *text = std::getenv("LCS_TEST_TRAINER");
        return text != nullptr && text[0] == '4';
    }();
    if (textures) {
        // For LCS_TEXTURE_PROBE: shows every weapon, the aiming reticle, every radio station and the pause menu pages.
        static bool started = false;
        if (!started) {
            started = true;
            say("god mode and weapons");
            trainer_set_toggle(TrainerToggle::GodMode, true);
            trainer_request(TrainerAction::WeaponsA);
            trainer_request(TrainerAction::WeaponsB);
            std::thread([] {
                constexpr int kStart = 0x0008;
                const auto press = [](int buttons, int hold_ms, int after_ms) {
                    g_test_buttons.store(buttons);
                    std::this_thread::sleep_for(std::chrono::milliseconds(hold_ms));
                    g_test_buttons.store(-1);
                    std::this_thread::sleep_for(std::chrono::milliseconds(after_ms));
                };
                const auto note = [](const char *text) { std::cerr << "[trainer-test] >> " << text << "\n"; };
                std::this_thread::sleep_for(std::chrono::seconds(2));
                note("weapons");
                for (int i = 0; i < 14; ++i) {
                    press(kRight, 150, 900);
                    press(kR, 700, 300);
                }
                note("car and radio");
                trainer_spawn_vehicle(172);
                std::this_thread::sleep_for(std::chrono::seconds(3));
                for (int i = 0; i < 12; ++i) press(kRight, 150, 2200);
                note("pause menu");
                press(kStart, 150, 3000);
                for (int page = 0; page < 7; ++page) {
                    press(kCross, 150, 3500);
                    press(kUp, 150, 700);
                    press(kRight, 150, 700);
                    press(kDown, 150, 700);
                    press(kLeft, 150, 1500);
                    press(kCircle, 150, 1500);
                    press(kDown, 150, 1200);
                }
                press(kStart, 150, 3000);
                note("done");
                g_test_buttons.store(-1);
            }).detach();
        }
        return;
    }
    static const bool focused = [] {
        const char *text = std::getenv("LCS_TEST_TRAINER");
        return text != nullptr && text[0] == '2';
    }();
    static const bool third = [] {
        const char *text = std::getenv("LCS_TEST_TRAINER");
        return text != nullptr && text[0] == '3';
    }();
    if (third) {
        const auto camera = [&] {
            std::cerr << "[trainer-test] camera " << load_float(memory, kCamera + 0x340u) << ',' << load_float(memory, kCamera + 0x344u) << ',' << load_float(memory, kCamera + 0x348u) << " alt " << load_float(memory, kCamera + 0x9C0u) << " mode=" << unsigned(memory.load8(kCamera + 0x6Bu)) << " fall=" << load_float(memory, entity + 0x78u) << "\n";
        };
        camera();
        switch (++g_test.step) {
        case 0: say("outdoors, god mode"); trainer_teleport(3); trainer_set_toggle(TrainerToggle::GodMode, true); break;
        case 1: say("gravity 10%, up 60"); trainer_set_value(TrainerValue::GravityPercent, 10); store_float(memory, entity + kPosition + 8u, load_float(memory, entity + kPosition + 8u) + 60.0f); break;
        case 2: say("still falling slowly?"); break;
        case 3: say("gravity back, up 60"); trainer_set_value(TrainerValue::GravityPercent, kTrainerOff); store_float(memory, entity + kPosition + 8u, load_float(memory, entity + kPosition + 8u) + 60.0f); break;
        case 4: say("player speed 300"); trainer_set_value(TrainerValue::PlayerSpeedPercent, 300); break;
        case 5: say("player speed normal; free camera forward"); trainer_set_value(TrainerValue::PlayerSpeedPercent, kTrainerOff); trainer_set_toggle(TrainerToggle::FreeCamera, true); g_test_pad.store(kUp); break;
        case 6: case 7: say("camera still going"); break;
        case 8: say("free camera off"); g_test_pad.store(0u); trainer_set_toggle(TrainerToggle::FreeCamera, false); break;
        case 9: say("car"); trainer_spawn_vehicle(172); break;
        case 10: say("hover"); trainer_set_toggle(TrainerToggle::Hover, true); break;
        case 11: case 12: say("hover still"); break;
        case 13: say("hover off"); trainer_set_toggle(TrainerToggle::Hover, false); break;
        case 14: say("no fall; blow up"); trainer_set_toggle(TrainerToggle::NeverFallOffBike, true); trainer_command(TrainerCommand::Explode); break;
        case 15: case 16: say("waiting"); break;
        case 17: say("bike"); trainer_spawn_vehicle(205); break;
        case 18: case 19: case 20: say("riding, no falling off"); break;
        default: g_test.due = now + std::chrono::hours(24); say("done"); break;
        }
        return;
    }
    if (focused) {
        int rhinos = 0;
        for_each_vehicle(runtime, [&](std::uint32_t other) { rhinos += memory.load16(other + 0x58u) == 162u ? 1 : 0; });
        std::cerr << "[trainer-test] rhinos=" << rhinos << " mission=" << unsigned(memory.load8(memory.load32(kScriptSpace) + memory.load32(0x08B5E374u))) << "\n";
        const auto fresh_car = [&] {
            trainer_set_toggle(TrainerToggle::GodMode, true);
            if (vehicle == 0u) trainer_spawn_vehicle(172);
            trainer_command(TrainerCommand::Repair);
        };
        switch (++g_test.step) {
        case 0: say("to a flat road"); trainer_teleport(3); trainer_set_toggle(TrainerToggle::GodMode, true); break;
        case 1: say("car"); fresh_car(); break;
        case 2: case 3: case 4: say("nothing on (control)"); fresh_car(); break;
        case 5: say("walls"); fresh_car(); trainer_set_toggle(TrainerToggle::DriveOnWalls, true); break;
        case 6: case 7: case 8: say("walls still"); break;
        case 9: say("tank"); trainer_set_toggle(TrainerToggle::DriveOnWalls, false); fresh_car(); trainer_set_toggle(TrainerToggle::Tank, true); break;
        case 10: case 11: case 12: say("tank still"); break;
        case 13: say("heavy"); trainer_set_toggle(TrainerToggle::Tank, false); fresh_car(); trainer_set_toggle(TrainerToggle::HeavyVehicle, true); break;
        case 14: case 15: case 16: say("heavy still"); break;
        case 17: say("all off; blow up the car with god mode on"); trainer_set_toggle(TrainerToggle::HeavyVehicle, false); trainer_command(TrainerCommand::Explode); break;
        case 18: say("button cheat: rhino"); trainer_command(TrainerCommand::ButtonCheat, 1); break;
        case 19: case 20: say("watching"); break;
        case 21: say("mission selector"); trainer_command(TrainerCommand::MissionSelector); break;
        case 22: case 23: case 24: case 25: say("watching"); break;
        default: g_test.due = now + std::chrono::hours(24); say("done"); break;
        }
        return;
    }
    switch (++g_test.step) {
    case 0: say("toggles on"); trainer_set_toggle(TrainerToggle::UnlimitedAmmo, true); trainer_set_toggle(TrainerToggle::Invisible, true); trainer_set_toggle(TrainerToggle::IgnoredByEveryone, true); trainer_set_toggle(TrainerToggle::UnlimitedSprint, true); trainer_set_toggle(TrainerToggle::NoTraffic, true); trainer_set_toggle(TrainerToggle::NoPeds, true); trainer_set_toggle(TrainerToggle::FreezeMissionTimers, true); trainer_set_toggle(TrainerToggle::HideHud, true); break;
    case 1: say("toggles off"); trainer_set_toggle(TrainerToggle::Invisible, false); trainer_set_toggle(TrainerToggle::IgnoredByEveryone, false); trainer_set_toggle(TrainerToggle::UnlimitedSprint, false); trainer_set_toggle(TrainerToggle::NoTraffic, false); trainer_set_toggle(TrainerToggle::NoPeds, false); trainer_set_toggle(TrainerToggle::FreezeMissionTimers, false); trainer_set_toggle(TrainerToggle::HideHud, false); break;
    case 2: say("save position"); trainer_save_position(); break;
    case 3: say("teleport to the first place"); trainer_teleport(1); break;
    case 4: say("return to the saved position"); trainer_return_to_position(); break;
    case 5: say("teleport outdoors"); trainer_teleport(3); break;
    case 6: say("game speed 50"); trainer_set_game_speed(50); break;
    case 7: say("game speed 100"); trainer_set_game_speed(100); break;
    case 8: say("spawn a vehicle: model 172"); trainer_spawn_vehicle(172); break;
    case 9: say("indestructible and lock doors"); trainer_set_toggle(TrainerToggle::IndestructibleVehicle, true); trainer_set_toggle(TrainerToggle::LockDoors, true); break;
    case 10: say("indestructible and lock doors off"); trainer_set_toggle(TrainerToggle::IndestructibleVehicle, false); trainer_set_toggle(TrainerToggle::LockDoors, false); break;
    case 11: {
        const auto vehicles = trainer_vehicles();
        std::cerr << "[trainer-test] " << vehicles.size() << " vehicles:";
        for (const auto &[name, id] : vehicles) std::cerr << ' ' << id << '=' << name;
        std::cerr << "\n";
        break;
    }
    case 12: say("colours 3 and 7"); trainer_command(TrainerCommand::PrimaryColor, 3); trainer_command(TrainerCommand::SecondaryColor, 7); break;
    case 13: std::cerr << "[trainer-test] colours " << (vehicle != 0u ? unsigned(memory.load8(vehicle + 0x1F0u)) : 999u) << ' ' << (vehicle != 0u ? unsigned(memory.load8(vehicle + 0x1F1u)) : 999u) << " fov@254=" << load_float(memory, kCamera + 0x254u) << " fov@244=" << load_float(memory, kCamera + 0x244u) << " gear@270=" << unsigned(vehicle != 0u ? memory.load8(vehicle + 0x270u) : 0u) << " gear@26C=" << unsigned(vehicle != 0u ? memory.load8(vehicle + 0x26Cu) : 0u) << " max=" << unsigned(memory.load8(kMaxHealth)) << ',' << unsigned(memory.load8(kMaxArmor)) << " bridge=" << memory.load32(kBridgeState) << " wantedmax=" << unsigned(memory.load8(0x08B58A5Cu)) << "\n"; say("wanted 2, walls, heavy, tank"); trainer_set_value(TrainerValue::WantedLevel, 2); trainer_set_toggle(TrainerToggle::DriveOnWalls, true); trainer_set_toggle(TrainerToggle::HeavyVehicle, true); trainer_set_toggle(TrainerToggle::Tank, true); break;
    case 14: std::cerr << "[trainer-test] wanted=" << memory.load32(ped + 0x830u) << " mass=" << (vehicle != 0u ? load_float(memory, vehicle + 0xD0u) : 0.f) << "\n"; say("off; explode nothing yet; fov 100; water up"); trainer_set_value(TrainerValue::WantedLevel, 0); trainer_set_toggle(TrainerToggle::DriveOnWalls, false); trainer_set_toggle(TrainerToggle::HeavyVehicle, false); trainer_set_toggle(TrainerToggle::Tank, false); trainer_set_value(TrainerValue::FieldOfView, 100); trainer_set_value(TrainerValue::WaterLevel, 50); break;
    case 15: std::cerr << "[trainer-test] wanted=" << memory.load32(ped + 0x830u) << " mass=" << (vehicle != 0u ? load_float(memory, vehicle + 0xD0u) : 0.f) << " fov=" << load_float(memory, kCamera + kCameraFov) << "\n"; say("defaults back; topdown; centered; button cheat: spawn rhino"); trainer_set_value(TrainerValue::WantedLevel, kTrainerOff); trainer_set_value(TrainerValue::FieldOfView, kTrainerOff); trainer_set_value(TrainerValue::WaterLevel, kTrainerOff); trainer_set_toggle(TrainerToggle::CameraTopDown, true); trainer_command(TrainerCommand::ButtonCheat, 1); break;
    case 16: say("topdown off; repair; drive on water; heavy player; coordinates; speed"); trainer_set_toggle(TrainerToggle::CameraTopDown, false); trainer_command(TrainerCommand::Repair); trainer_set_toggle(TrainerToggle::DriveOnWater, true); trainer_set_toggle(TrainerToggle::ShowCoordinates, true); trainer_set_toggle(TrainerToggle::ShowSpeed, true); break;
    case 17: say("explode the vehicle (god mode on)"); trainer_set_toggle(TrainerToggle::DriveOnWater, false); trainer_set_toggle(TrainerToggle::GodMode, true); trainer_command(TrainerCommand::Explode); break;
    case 18: say("skin casual; pickups; kill peds; freeze peds; aim of death"); trainer_command(TrainerCommand::SetSkin, 2); trainer_command(TrainerCommand::SpawnPickup, 15); trainer_command(TrainerCommand::SpawnPickup, 36); trainer_command(TrainerCommand::KillPeds); trainer_set_toggle(TrainerToggle::FreezePeds, true); trainer_set_toggle(TrainerToggle::AimOfDeath, true); trainer_set_toggle(TrainerToggle::KillAimingAtMe, true); trainer_set_toggle(TrainerToggle::HeavyPlayer, true); break;
    case 19: say("those off; bridge down"); trainer_set_toggle(TrainerToggle::FreezePeds, false); trainer_set_toggle(TrainerToggle::AimOfDeath, false); trainer_set_toggle(TrainerToggle::KillAimingAtMe, false); trainer_set_toggle(TrainerToggle::HeavyPlayer, false); trainer_set_value(TrainerValue::BridgeDown, 1); break;
    case 20: std::cerr << "[trainer-test] bridge=" << memory.load32(kBridgeState) << "\n"; say("bridge released; mission teleports; targets; clock; cheat record"); trainer_set_value(TrainerValue::BridgeDown, kTrainerOff); trainer_command(TrainerCommand::TeleportMission); trainer_command(TrainerCommand::TeleportObjective); trainer_command(TrainerCommand::TeleportMarker); trainer_command(TrainerCommand::KillTargets); trainer_command(TrainerCommand::FreezeTargets); trainer_command(TrainerCommand::ClockFromComputer); trainer_command(TrainerCommand::ClearCheatRecord); break;
    case 21: std::cerr << "[trainer-test] cheat flag=" << unsigned(memory.load8(kCheatUsedFlag)) << " count=" << memory.load32(kCheatUsedCount) << "\n"; say("mission selector"); trainer_command(TrainerCommand::MissionSelector); break;
    default: g_test.due = now + std::chrono::hours(24); say("done"); break;
    }
}

}  // namespace

void trainer_request(TrainerAction action) noexcept {
    enqueue(Task{kRoutines[static_cast<std::size_t>(action)], 0u, false});
}

void trainer_set_toggle(TrainerToggle which, bool on) noexcept { g_toggles[static_cast<std::size_t>(which)].store(on); }
bool trainer_toggle(TrainerToggle which) noexcept { return toggle(which); }
void trainer_set_hold_hour(int hour) noexcept { g_hold_hour.store(hour); }
int trainer_hold_hour() noexcept { return g_hold_hour.load(); }
void trainer_set_game_speed(int percent) noexcept { g_game_speed.store(percent); }
int trainer_game_speed() noexcept { return g_game_speed.load(); }
void trainer_save_position() noexcept { g_save_position.store(true); }
void trainer_return_to_position() noexcept { g_return_position.store(true); }
void trainer_teleport(int index) noexcept { g_teleport.store(index); }
void trainer_spawn_vehicle(int model) noexcept { g_spawn_vehicle.store(model); }
void trainer_set_value(TrainerValue which, int value) noexcept { g_values[static_cast<std::size_t>(which)].store(value); }
int trainer_value(TrainerValue which) noexcept { return g_values[static_cast<std::size_t>(which)].load(); }

void trainer_command(TrainerCommand command, int argument) noexcept {
    try {
        const std::lock_guard<std::mutex> lock(g_mutex);
        if (g_commands.size() < 32u) g_commands.push_back(Command{command, argument});
    } catch (...) {
    }
}

std::uint32_t trainer_gravity_high() noexcept {
    const int percent = g_values[static_cast<std::size_t>(TrainerValue::GravityPercent)].load();
    if (percent == kTrainerOff) return 0x3C03u;  // the game's 0.008
    return std::bit_cast<std::uint32_t>(static_cast<float>(percent) / 100.0f * 0.008f) >> 16u;
}

bool trainer_keep_on_bike() noexcept { return g_keep_on_bike.load(std::memory_order_relaxed); }

void trainer_update_position(psprecomp::Runtime &runtime, std::uint32_t ped) noexcept {
    const int player = g_values[static_cast<std::size_t>(TrainerValue::PlayerSpeedPercent)].load();
    const int others = g_values[static_cast<std::size_t>(TrainerValue::PedSpeedPercent)].load();
    if (player == kTrainerOff && others == kTrainerOff) return;
    const int percent = ped == g_player_ped.load(std::memory_order_relaxed) ? player : others;
    if (percent == kTrainerOff) return;
    auto &memory = runtime.memory();
    const float scale = static_cast<float>(percent) / 100.0f;
    store_float(memory, ped + 0x4D8u, load_float(memory, ped + 0x4D8u) * scale);
    store_float(memory, ped + 0x4DCu, load_float(memory, ped + 0x4DCu) * scale);
}

std::uint32_t trainer_pad_buttons(std::uint32_t held, std::uint8_t &analog_x, std::uint8_t &analog_y) noexcept {
    g_pad_held.store(held, std::memory_order_relaxed);
    g_pad_stick_x.store(analog_x, std::memory_order_relaxed);
    g_pad_stick_y.store(analog_y, std::memory_order_relaxed);
    // LCS_TEST_PAUSE_EVERY=<seconds>: opens the pause menu, which shows the map, and closes it 6 s later.
    static const int pause_every = [] {
        const char *value = std::getenv("LCS_TEST_PAUSE_EVERY");
        return value != nullptr ? std::atoi(value) : 0;
    }();
    if (pause_every > 0) {
        static const auto start = std::chrono::steady_clock::now();
        const auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - start).count();
        const auto phase = elapsed % (pause_every * 1000);
        if (elapsed >= pause_every * 1000 && (phase < 200 || (phase >= 6000 && phase < 6200))) return 0x0008u;
    }
    if (const int scripted = g_test_buttons.load(std::memory_order_relaxed); scripted >= 0) {
        analog_x = 128u;
        analog_y = 128u;
        return static_cast<std::uint32_t>(scripted);
    }
    if (toggle(TrainerToggle::FreeCamera)) {
        analog_x = 128u;
        analog_y = 128u;
        return 0u;
    }
    const int cheat = g_pad_cheat.load(std::memory_order_relaxed);
    if (cheat < 0) return held;
    const auto &keys = kButtonCheats[cheat].keys;
    // Pressed for some frames, then released: what the game's input history counts as one press.
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

std::vector<std::pair<std::string, int>> trainer_skins() {
    std::vector<std::pair<std::string, int>> out;
    for (int i = 0; i < static_cast<int>(std::size(kSkins)); ++i) out.emplace_back(kSkins[i], i);
    return out;
}

std::vector<std::pair<std::string, int>> trainer_pickups() {
    std::vector<std::pair<std::string, int>> out;
    for (int i = 0; i < static_cast<int>(std::size(kPickups)); ++i) out.emplace_back(kPickups[i].name, i);
    return out;
}

std::vector<std::pair<std::string, int>> trainer_button_cheats() {
    std::vector<std::pair<std::string, int>> out;
    for (int i = 0; i < static_cast<int>(std::size(kButtonCheats)); ++i) out.emplace_back(kButtonCheats[i].name, i);
    return out;
}

std::vector<std::pair<std::string, int>> trainer_teleports() {
    std::vector<std::pair<std::string, int>> out;
    for (int i = 0; i < static_cast<int>(std::size(kTeleports)); ++i)
        if (kTeleports[i].name[0] != '\0') out.emplace_back(kTeleports[i].name, i);
    return out;
}

namespace {

// The second batch of switches from CheatDevice: same fields, with its own limits.
struct TunedField {
    std::uint32_t offset;
    TrainerValue value;
};
constexpr TunedField kTunedFields[] = {
    {0x84u, TrainerValue::TuneAcceleration},
    {0x8Cu, TrainerValue::TuneTopSpeed},
    {0x90u, TrainerValue::TuneTopSpeed},  // the top speed over 1.2, kept next to it
    {0x9Cu, TrainerValue::TuneBrakes},
    {0x08u, TrainerValue::TuneTraction},
    {0xA8u, TrainerValue::TuneSteering},
};
std::uint32_t g_tuned_slot = 0u;
std::array<float, std::size(kTunedFields)> g_tuned_original{};
std::vector<std::uint32_t> g_weapon_damage;
std::uint32_t g_touched_last = 0u;
std::uint32_t g_nitro_until = 0u;
bool g_nitro_was_pressed = false;

float value_scale(TrainerValue what) {
    const int percent = g_values[static_cast<std::size_t>(what)].load();
    return percent == kTrainerOff ? 1.0f : static_cast<float>(percent) / 100.0f;
}

void apply_tuning(psprecomp::GuestMemory &memory, std::uint32_t vehicle) {
    const std::uint32_t slot = vehicle != 0u ? handling_slot(memory, memory.load16(vehicle + 0x58u)) : 0u;
    if (slot != g_tuned_slot && g_tuned_slot != 0u) {
        for (std::size_t i = 0u; i < std::size(kTunedFields); ++i) store_float(memory, g_tuned_slot + kTunedFields[i].offset, g_tuned_original[i]);
        g_tuned_slot = 0u;
    }
    if (slot == 0u || !memory.contains(slot, kHandlingSlotBytes)) return;
    if (g_tuned_slot == 0u) {
        g_tuned_slot = slot;
        for (std::size_t i = 0u; i < std::size(kTunedFields); ++i) g_tuned_original[i] = load_float(memory, slot + kTunedFields[i].offset);
    }
    for (std::size_t i = 0u; i < std::size(kTunedFields); ++i) store_float(memory, slot + kTunedFields[i].offset, g_tuned_original[i] * value_scale(kTunedFields[i].value));
}

void apply_weapon_damage(psprecomp::GuestMemory &memory) {
    const int percent = g_values[static_cast<std::size_t>(TrainerValue::WeaponDamagePercent)].load();
    if (percent == kTrainerOff && g_weapon_damage.empty()) return;
    const std::uint32_t weapons = memory.load32(memory.load32(kWeaponTablePointer) + 4u);
    if (!memory.contains(weapons, kWeaponSlots * kWeaponSlotBytes)) return;
    if (g_weapon_damage.empty()) {
        for (std::uint32_t i = 0u; i < kWeaponSlots; ++i) g_weapon_damage.push_back(memory.load32(weapons + i * kWeaponSlotBytes + 0x14u));
    }
    const float scale = percent == kTrainerOff ? 1.0f : static_cast<float>(percent) / 100.0f;
    for (std::uint32_t i = 0u; i < kWeaponSlots; ++i)
        memory.store32(weapons + i * kWeaponSlotBytes + 0x14u, static_cast<std::uint32_t>(static_cast<float>(g_weapon_damage[i]) * scale));
    if (percent == kTrainerOff) g_weapon_damage.clear();
}

void apply_touch(psprecomp::Runtime &runtime, std::uint32_t ped, std::uint32_t vehicle, std::deque<Task> &calls) {
    auto &memory = runtime.memory();
    const int on_vehicle = g_values[static_cast<std::size_t>(TrainerValue::TouchVehicle)].load();
    const int on_ped = g_values[static_cast<std::size_t>(TrainerValue::TouchPed)].load();
    if (on_vehicle == kTrainerOff && on_ped == kTrainerOff) return;
    const std::uint32_t touched = memory.load32((vehicle != 0u ? vehicle : ped) + 0x12Cu);
    if (touched == 0u || touched == vehicle || touched == ped) {
        g_touched_last = 0u;
        return;
    }
    if (touched == g_touched_last) return;  // once per touch
    g_touched_last = touched;
    bool hit = false;
    if (on_vehicle != kTrainerOff) {
        for_each_vehicle(runtime, [&](std::uint32_t other) { hit = hit || other == touched; });
        if (hit) {
            switch (on_vehicle) {
            case 0: memory.store8(touched + 0x142u, static_cast<std::uint8_t>((memory.load8(touched + 0x142u) & 0xF0u) | 0x1u)); break;
            case 1: store_float(memory, touched + kVehicleHealth, 0.0f); break;
            case 2: explode(memory, touched, calls); break;
            case 3: memory.store8(touched + 0x48u, 1u); break;
            case 4: memory.store8(touched + kVehicleDoors, 2u); break;
            case 5: memory.store8(touched + kVehicleDoors, 1u); break;
            case 6: memory.store8(touched + kFreezePosition, 1u); break;
            case 7: memory.store8(touched + kFreezePosition, 0u); break;
            default: break;
            }
            return;
        }
    }
    if (on_ped != kTrainerOff) {
        for_each_ped(runtime, [&](std::uint32_t other) { hit = hit || other == touched; });
        if (hit) {
            switch (on_ped) {
            case 0: store_float(memory, touched + kPedHealth, 0.0f); store_float(memory, touched + kPedArmor, 0.0f); break;
            case 1: store_float(memory, touched + kPedHealth, 100.0f); store_float(memory, touched + kPedArmor, 100.0f); break;
            case 2: memory.store8(touched + kFreezePosition, 1u); break;
            case 3: memory.store8(touched + kFreezePosition, 0u); break;
            case 4: memory.store8(touched + 0x48u, 1u); break;
            default: break;
            }
        }
    }
}

// The names the game shows, from its own text file. The trainer lists the internal name if this can't be read.
const std::string &vehicle_display_name(const std::string &internal) {
    static const std::unordered_map<std::string, std::string> names = [] {
        std::unordered_map<std::string, std::string> found;
        std::ifstream file(std::filesystem::path(game_root_folder()) / "PSP_GAME" / "USRDIR" / "TEXT" / "ENGLISH.GXT", std::ios::binary);
        const std::vector<char> data((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
        const auto find = [&data](const char *tag) {
            return std::search(data.begin(), data.end(), tag, tag + 4);
        };
        const auto keys = find("TKEY");
        const auto text = find("TDAT");
        if (keys == data.end() || text == data.end()) return found;
        const auto read = [&data](std::size_t at) {
            std::uint32_t value = 0u;
            if (at + 4u <= data.size()) std::memcpy(&value, data.data() + at, 4u);
            return value;
        };
        const std::size_t key_start = static_cast<std::size_t>(keys - data.begin()) + 8u;
        const std::size_t text_start = static_cast<std::size_t>(text - data.begin()) + 8u;
        const std::size_t key_bytes = read(key_start - 4u);
        for (std::size_t at = key_start; at + 12u <= key_start + key_bytes && at + 12u <= data.size(); at += 12u) {
            std::string shown;
            for (std::size_t c = text_start + read(at); c + 2u <= data.size(); c += 2u) {
                const auto low = static_cast<unsigned char>(data[c]);
                if (low == 0u && data[c + 1u] == 0) break;
                shown.push_back(low < 128u ? static_cast<char>(low) : '?');
            }
            std::string key(data.data() + at + 4u, 8u);
            key.resize(std::strlen(key.c_str()));
            found.emplace(std::move(key), std::move(shown));
        }
        std::cerr << "[trainer] " << found.size() << " names from the game's text\n";
        return found;
    }();
    static const std::string none;
    const auto entry = names.find(internal);
    return entry != names.end() ? entry->second : none;
}

void apply_second_batch(psprecomp::Runtime &runtime, std::uint32_t ped, std::deque<Task> &calls) {
    auto &memory = runtime.memory();
    const std::uint32_t vehicle = player_vehicle(runtime, ped);
    const std::uint32_t held = g_pad_held.load(std::memory_order_relaxed);
    apply_tuning(memory, vehicle);
    apply_weapon_damage(memory);
    apply_touch(runtime, ped, vehicle, calls);

    if (const int station = g_values[static_cast<std::size_t>(TrainerValue::DefaultRadio)].load(); station != kTrainerOff) {
        for_each_vehicle(runtime, [&](std::uint32_t other) { if (other != vehicle) memory.store8(other + 0x2A0u, static_cast<std::uint8_t>(station)); });
    }

    if (toggle(TrainerToggle::Nitro) && vehicle != 0u) {
        const std::uint32_t now = memory.load32(0x08B5E02Cu);
        const bool pressed = (held & kCircle) != 0u;
        if (pressed && !g_nitro_was_pressed && memory.load8(vehicle + 0x270u) >= 2u) g_nitro_until = now + 2000u;
        g_nitro_was_pressed = pressed;
        if (now < g_nitro_until && (held & kCross) != 0u && memory.load8(vehicle + 0x10Au) != 0u && load_float(memory, vehicle + 0x28u) >= -0.85f) {
            for (std::uint32_t axis = 0u; axis < 3u; ++axis)
                store_float(memory, vehicle + 0x70u + axis * 4u, load_float(memory, vehicle + 0x70u + axis * 4u) + load_float(memory, vehicle + 0x10u + axis * 4u) * 0.015f);
        }
    }

    if (toggle(TrainerToggle::PowerJump) && vehicle == 0u && memory.load8(ped + 0x10Au) == 0u) {
        const float moving = std::sqrt(load_float(memory, ped + 0x70u) * load_float(memory, ped + 0x70u) + load_float(memory, ped + 0x74u) * load_float(memory, ped + 0x74u));
        store_float(memory, ped + 0x70u, -load_float(memory, ped + 4u) * moving);
        store_float(memory, ped + 0x74u, load_float(memory, ped) * moving);
        if ((held & kSquare) != 0u) store_float(memory, ped + 0x98u, load_float(memory, ped + 0x98u) + 0.02f);
        const float stick = static_cast<float>(g_pad_stick_x.load(std::memory_order_relaxed) - 128) / 128.0f;
        store_float(memory, ped + 0x88u, -0.02f * stick);
        store_float(memory, ped + 0x4E0u, load_float(memory, ped + 0x4E4u));
    }

    if (toggle(TrainerToggle::Untouchable)) {
        constexpr float kRadius = 15.0f;
        const std::uint32_t me = vehicle != 0u ? vehicle : ped;
        const float x = load_float(memory, me + kPosition), y = load_float(memory, me + kPosition + 4u), z = load_float(memory, me + kPosition + 8u);
        for_each_vehicle(runtime, [&](std::uint32_t other) {
            if (other == vehicle || memory.load16(other + 0x62u) == 0xFFFFu || memory.load32(other + 0x1Cu) != 0u) return;
            const float dx = load_float(memory, other + kPosition) - x, dy = load_float(memory, other + kPosition + 4u) - y, dz = load_float(memory, other + kPosition + 8u) - z;
            const float distance = std::sqrt(dx * dx + dy * dy + dz * dz);
            if (distance >= kRadius || distance < 0.01f) return;
            memory.store32(other + 0x44u, (memory.load32(other + 0x44u) & 0xFFFFFE0Fu) | 0x30u);
            const float force = distance * 100.0f / kRadius;
            store_float(memory, other + 0x70u, load_float(memory, other + 0x70u) + dx / force);
            store_float(memory, other + 0x74u, load_float(memory, other + 0x74u) + dy / force);
        });
    }
}

}  // namespace

std::vector<std::pair<std::string, int>> trainer_vehicles() {
    std::vector<std::pair<std::string, int>> out;
    psprecomp::Runtime *runtime = g_runtime.load();
    if (runtime == nullptr) return out;
    auto &memory = runtime->memory();
    const std::uint32_t table = memory.load32(kIdeTable);
    if (table == 0u || !memory.contains(table, 4u * (kLastVehicle + 1))) return out;
    for (int id = kFirstVehicle; id <= kLastVehicle; ++id) {
        if (std::find(kVehicleBlacklist.begin(), kVehicleBlacklist.end(), id) != kVehicleBlacklist.end()) continue;
        const std::uint32_t info = memory.load32(table + static_cast<std::uint32_t>(id) * 4u);
        if (info == 0u || !memory.contains(info + 0x2Eu, 16u)) continue;
        std::string name;
        for (std::uint32_t i = 0u; i < 15u; ++i) {
            const auto c = static_cast<char>(memory.load8(info + 0x2Eu + i));
            if (c == '\0') break;
            if (c < 32 || c > 126) {
                name.clear();
                break;
            }
            name.push_back(c);
        }
        if (name.empty()) continue;
        const std::string &shown = vehicle_display_name(name);
        out.emplace_back(shown.empty() ? name : shown, id);
    }
    std::sort(out.begin(), out.end());
    return out;
}

bool trainer_frame(psprecomp::Runtime &runtime, psprecomp::AllegrexContext &ctx) {
    g_runtime.store(&runtime);
    if (lcs_menu_active()) return false;
    const std::uint32_t ped = player_ped(runtime);
    if (ped == 0u) return false;
    // A routine this function started has just come back here: on with the list, not with a new pass.
    if (!g_returning_from_task) {
        trainer_test_step(runtime, ped);
        apply_held_switches(runtime, ped);
        if (const int model = g_spawn_vehicle.exchange(-1); model >= 0) start_spawn_script(runtime, ped, model);
        std::deque<Task> calls;
        apply_commands(runtime, ped, calls);
        queue_per_frame_calls(runtime, ped, calls);
        apply_second_batch(runtime, ped, calls);
        const std::lock_guard<std::mutex> lock(g_mutex);
        g_tasks.insert(g_tasks.end(), calls.begin(), calls.end());
    }
    Task task;
    {
        const std::lock_guard<std::mutex> lock(g_mutex);
        if (g_tasks.empty()) {
            g_returning_from_task = false;
            return false;
        }
        task = g_tasks.front();
        g_tasks.pop_front();
    }
    g_returning_from_task = true;
    if (task.has_a0) {
        ctx.gpr[4] = task.a0;
        ctx.gpr[5] = task.a1;
        ctx.gpr[6] = task.a2;
    }
    ctx.gpr[31] = kResumeAt;
    ctx.pc = task.routine;
    return true;
}

}  // namespace lcs
