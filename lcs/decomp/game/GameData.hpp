// Guest globals and the parts of other game classes the decompiled code reads.
// Only the members that are actually used are declared; everything else stays
// behind raw offsets until the owning class is decompiled.
#pragma once

#include "../guest.hpp"

namespace lcs::game {

using namespace lcs::decomp;

namespace address {
inline constexpr uint32 Pads = 0x08B89CA0u;                       // CPad Pads[2]
inline constexpr uint32 PadDeviceInstance = 0x08B5AE54u;          // CPadDevice *
inline constexpr uint32 CreatePadDevice = 0x08AFA6DCu;            // allocates and constructs it
inline constexpr uint32 TimeInMilliseconds = 0x08B5E02Cu;         // CTimer::m_snTimeInMilliseconds
inline constexpr uint32 PlayerInFocus = 0x08B5E054u;              // CWorld::PlayerInFocus (uint8)
inline constexpr uint32 Players = 0x08B89A10u;                    // CWorld::Players[]
inline constexpr uint32 TheCamera = 0x08B832A0u;
inline constexpr uint32 FrontEndMenuManager = 0x08B8ED20u;

inline constexpr uint32 bSwapNubAndDPad = 0x08B562F4u;            // controller setup option
inline constexpr uint32 bInvertLook = 0x08B562F3u;                // controller setup option
inline constexpr uint32 bFlipControls = 0x08B33580u;              // negates the nub, swaps Up/Down and Triangle/Cross
inline constexpr uint32 fStickExponent = 0x08B562E8u;             // nub response curve
inline constexpr uint32 fStickIdleThreshold = 0x08B562ECu;        // nub movement that counts as activity
inline constexpr uint32 bDisplayNoControllerMessage = 0x08B5E824u;
inline constexpr uint32 bOldDisplayNoControllerMessage = 0x08B5E825u;
inline constexpr uint32 bObsoleteControllerMessage = 0x08B5E826u;
inline constexpr uint32 byte_08B58CAC = 0x08B58CACu;              // cleared while no "no controller" message shows
inline constexpr uint32 int_08B58CB0 = 0x08B58CB0u;               // non-zero blocks look-behind on foot
inline constexpr uint32 byte_08B562F0 = 0x08B562F0u;
inline constexpr uint32 byte_08B562F1 = 0x08B562F1u;
inline constexpr uint32 StickFlickLast = 0x08B56308u;             // int16[4]: up, down, left, right
}  // namespace address

inline constexpr uint32 kPlayerInfoSize = 0x170u;
inline constexpr uint32 kCamSize = 0x290u;

// CPlayerPed members read by CPad.
namespace ped {
inline constexpr uint32 ModelIndex = 0x58u;     // int16 (CEntity)
inline constexpr uint32 PedState = 0x34Cu;      // int32
inline constexpr uint32 field_354 = 0x354u;     // int32
inline constexpr uint32 MyVehicle = 0x534u;     // CVehicle *
inline constexpr uint32 bInVehicle = 0x538u;    // uint8
inline constexpr uint32 field_C9D = 0xC9Du;     // uint8
}  // namespace ped

// CCamera members read by CPad.
namespace camera {
inline constexpr uint32 ActiveCam = 0x7Fu;          // uint8
inline constexpr uint32 Cam0Mode = 0x1ACu;          // int16, Cams[n].Mode at + n * kCamSize
inline constexpr uint32 PlayerWeaponMode = 0x954u;  // int16
}  // namespace camera

enum {
    MODE_SNIPER = 7,
    MODE_ROCKETLAUNCHER = 8,
    MODE_1STPERSON = 16,
    MODE_M16_1STPERSON = 34,
    MODE_HELICANNON_1STPERSON = 45,
    MODE_CAMERA = 46,
};

enum {
    PED_STATE_16 = 0x10,
    PED_STATE_17 = 0x11,
};

// Vehicles whose turret is aimed with the look buttons while firing.
enum {
    MI_TURRET_VEHICLE_A = 0x8A,
    MI_TURRET_VEHICLE_B = 0xA2,
};

[[nodiscard]] inline int32 TimeInMilliseconds() { return guest_ref<int32>(address::TimeInMilliseconds); }

[[nodiscard]] inline uint32 PlayerInfoAddress() {
    return address::Players + guest_ref<uint8>(address::PlayerInFocus) * kPlayerInfoSize;
}
// CWorld::Players[PlayerInFocus].m_pPed (0x089D596C).
[[nodiscard]] inline uint32 FindPlayerPed() { return guest_ref<uint32>(PlayerInfoAddress()); }
[[nodiscard]] inline uint32 PlayerRemoteVehicle() { return guest_ref<uint32>(PlayerInfoAddress() + 4u); }
// The vehicle the player is in, or 0 (0x089D5870).
[[nodiscard]] inline uint32 FindPlayerVehicle() {
    const uint32 player = FindPlayerPed();
    if (player == 0u || guest_ref<uint8>(player + ped::bInVehicle) == 0u) return 0u;
    return guest_ref<uint32>(player + ped::MyVehicle);
}
[[nodiscard]] inline int16 ActiveCamMode() {
    const uint32 active = guest_ref<uint8>(address::TheCamera + camera::ActiveCam);
    return guest_ref<int16>(address::TheCamera + camera::Cam0Mode + active * kCamSize);
}
[[nodiscard]] inline int16 PlayerWeaponCamMode() {
    return guest_ref<int16>(address::TheCamera + camera::PlayerWeaponMode);
}

}  // namespace lcs::game
