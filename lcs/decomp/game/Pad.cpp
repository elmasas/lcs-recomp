#include "Pad.hpp"

#include "GameData.hpp"
#include "PadDevice.hpp"

#include "lcs_controls.hpp"

#include <cmath>
#include <cstring>

namespace lcs::game {

namespace {

constexpr uint32 kNidKernelPowerTick = 0x090CCB3Fu;  // sceSuspendForUser

bool SwapNubAndDPad() { return guest_ref<uint8>(address::bSwapNubAndDPad) != 0u; }
bool InvertLook() { return guest_ref<uint8>(address::bInvertLook) != 0u; }

// What the compiler emitted for `(int16)(value / 2)`.
int16 HalfOf(int32 value) { return static_cast<int16>(value / 2); }

int16 AbsS16(int16 value) { return static_cast<int16>(value < 0 ? -static_cast<int32>(value) : value); }

int16 ButtonValue(uint32 buttons, uint32 mask) { return (buttons & mask) != 0u ? 255 : 0; }

// Nub position 0..1 through the response curve; the game does this on the VFPU.
float StickCurve(float magnitude, float exponent) { return std::exp2(exponent * std::log2(magnitude)); }

int16 StickToAxis(float value, float exponent) {
    if (value <= 0.0f) return static_cast<int16>(fpu_trunc(fpu_mul(-StickCurve(-value, exponent), 128.0f)));
    return static_cast<int16>(fpu_trunc(fpu_mul(StickCurve(value, exponent), 128.0f)));
}

// The first-person camera owns the look buttons while a remote vehicle is driven.
bool LookButtonsTakenByCamera() { return PlayerRemoteVehicle() != 0u && ActiveCamMode() == MODE_1STPERSON; }

// The player ped is in the stance where L+R recentres the aim instead of looking behind.
bool PlayerPedAimingStance() {
    const uint32 player = FindPlayerPed();
    if (guest_ref<int32>(player + ped::field_354) != 1) return false;
    const int32 state = guest_ref<int32>(player + ped::PedState);
    return state == PED_STATE_16 || state == PED_STATE_17;
}

// Host: mouse look feeds the camera through the same axis the nub uses.
int16 HostCameraAxisX(int16 game_value) {
    if (lcs_camera_hook_enabled() && game_value == 0) return static_cast<int16>(lcs_camera_axis_x());
    return game_value;
}
int16 HostCameraAxisY(int16 game_value) {
    if (lcs_camera_hook_enabled() && game_value == 0) return static_cast<int16>(lcs_camera_axis_y());
    return game_value;
}

bool HostPlayerDriving() {
    const uint32 player = FindPlayerPed();
    return player != 0u && guest_ref<uint8>(player + ped::bInVehicle) != 0u;
}

// Host: the keyboard LookLeft / LookRight keys (Q / E) look out of the side
// window without holding L, so steering keeps working and Attack (Circle)
// fires a drive-by. Both held is look behind.
bool HostLookLeft() { return HostPlayerDriving() && lcs_host_look_left() && !lcs_host_look_right(); }
bool HostLookRight() { return HostPlayerDriving() && lcs_host_look_right() && !lcs_host_look_left(); }
bool HostLookBehind() { return HostPlayerDriving() && lcs_host_look_left() && lcs_host_look_right(); }

}  // namespace

// 0x08A96348
void CControllerState::Clear() {
    LeftStickX = LeftStickY = RightStickX = RightStickY = 0;
    LeftShoulder1 = LeftShoulder2 = RightShoulder1 = RightShoulder2 = 0;
    DPadUp = DPadDown = DPadLeft = DPadRight = 0;
    Start = Select = 0;
    Square = Triangle = Cross = Circle = 0;
    LeftShock = RightShock = 0;
    NubUp = NubDown = NubLeft = NubRight = 0;
}

// 0x08A964B8
CPad *CPad::GetPad(int32 pad) { return guest_ptr<CPad>(address::Pads + static_cast<uint32>(pad) * sizeof(CPad)); }

// 0x08A963AC
void CPad::Initialise(Context &ctx) {
    // debug("Initialising CPad...\n");
    CPadDevice::Instance(ctx)->Open(ctx);

    for (int32 i = 0; i < 2; ++i) {
        CPad *pad = GetPad(i);
        pad->Clear(true);
        pad->Mode = 2;
        guest_ref<uint8>(address::bSwapNubAndDPad) = 0u;
    }
    guest_ref<uint8>(address::bObsoleteControllerMessage) = 0u;
    guest_ref<uint8>(address::bOldDisplayNoControllerMessage) = 0u;
    guest_ref<uint8>(address::bDisplayNoControllerMessage) = 0u;
    guest_ref<uint8>(address::byte_08B562F0) = 0u;
    guest_ref<uint8>(address::byte_08B562F1) = 0u;
    GetPad(0)->LookSpeedScaleLHeld = 0.5f;
    GetPad(0)->LookSpeedScale = 1.0f;
    // debug("CPad ready\n");
}

// 0x08A964D4
void CPad::UpdatePads(Context &ctx) {
    GetPad(0)->Update(ctx, 0);
    GetPad(1)->NewState.Clear();
    GetPad(1)->OldState.Clear();
}

// 0x08A96544
void CPad::UpdatePadsAndShake(Context &ctx) {
    UpdatePads(ctx);
    if (guest_ref<uint8>(address::bObsoleteControllerMessage) != 0u) {
        GetPad(0)->ShakeDur = 0;
        guest_ref<uint8>(address::bObsoleteControllerMessage) = 0u;
    }
}

// 0x08A96BF4
void CPad::Clear(bool bResetPlayerControls) {
    LookAroundHoldFrames = 0;
    NewState.Clear();
    OldState.Clear();
    ShakeDur = 0;
    ShakeFreq = 0;
    field_84 = 0;
    for (int16 &steer : SteeringLeftRightBuffer) steer = 0;
    DrunkDrivingBufferUsed = 0;
    if (bResetPlayerControls) DisablePlayerControls = 0;
    JustOutOfFrontEnd = 0;
    bApplyBrakes = 0;
    for (bool8 &horn : bHornHistory) horn = 0;
    iCurrHornHistory = 0;
    for (char &c : CheatString) c = ' ';
    LastTimeTouched = TimeInMilliseconds();
    AverageWeapon = 0;
    AverageEntries = 0;
    TimeJumpDownPrevious = -10000;
    TimeJumpDown = -10000;
}

// 0x08A98F38
void CPad::Update(Context &ctx, int16 pad) {
    OldState = NewState;

    if (pad != 0) return;
    guest_ref<uint8>(address::bObsoleteControllerMessage) = 0u;

    CPadDevice *device = CPadDevice::Instance(ctx);
    device->Update(ctx);
    const CPspPad &input = device->pad;

    float stick_x = input.fAnalog[0];
    float stick_y = input.fAnalog[1];
    const float idle = guest_ref<float>(address::fStickIdleThreshold);
    if (!(std::fabs(stick_x) <= idle && std::fabs(stick_y) <= idle))
        guest_import(ctx, "sceSuspendForUser", kNidKernelPowerTick, {0u});  // keep the screen awake

    NewState.Hold = ButtonValue(input.nButtons, PSP_CTRL_HOLD);
    const bool flip = guest_ref<uint8>(address::bFlipControls) != 0u;
    const float exponent = guest_ref<float>(address::fStickExponent);
    if (NewState.Hold != 0) {
        stick_x = 0.0f;
        stick_y = 0.0f;
    }
    if (flip) {
        stick_x = -stick_x;
        stick_y = -stick_y;
    }
    NewState.LeftStickX = StickToAxis(stick_x, exponent);
    NewState.LeftStickY = StickToAxis(stick_y, exponent);
    NewState.RightStickX = static_cast<int16>(fpu_trunc(fpu_mul(input.fAnalog[2], 128.0f)));
    NewState.RightStickY = static_cast<int16>(fpu_trunc(fpu_mul(input.fAnalog[3], 128.0f)));

    NewState.NubDown = NewState.LeftStickY >= 100 ? 255 : 0;
    NewState.NubUp = NewState.LeftStickY < -99 ? 255 : 0;
    NewState.NubLeft = NewState.LeftStickX < -99 ? 255 : 0;
    NewState.NubRight = NewState.LeftStickX >= 100 ? 255 : 0;

    const uint32 buttons = input.nButtons;
    NewState.LeftShoulder1 = ButtonValue(buttons, PSP_CTRL_LTRIGGER);
    NewState.RightShoulder1 = ButtonValue(buttons, PSP_CTRL_RTRIGGER);
    NewState.LeftShoulder2 = 0;
    NewState.RightShoulder2 = 0;
    NewState.DPadUp = ButtonValue(buttons, PSP_CTRL_UP);
    NewState.DPadDown = ButtonValue(buttons, PSP_CTRL_DOWN);
    NewState.DPadLeft = ButtonValue(buttons, PSP_CTRL_LEFT);
    NewState.DPadRight = ButtonValue(buttons, PSP_CTRL_RIGHT);
    NewState.Start = ButtonValue(buttons, PSP_CTRL_START);
    NewState.Select = ButtonValue(buttons, PSP_CTRL_SELECT);
    NewState.Square = ButtonValue(buttons, PSP_CTRL_SQUARE);
    NewState.Triangle = ButtonValue(buttons, PSP_CTRL_TRIANGLE);
    NewState.Cross = ButtonValue(buttons, PSP_CTRL_CROSS);
    NewState.Circle = ButtonValue(buttons, PSP_CTRL_CIRCLE);
    if (flip) {
        const int16 triangle = NewState.Triangle;
        NewState.Triangle = NewState.Cross;
        NewState.Cross = triangle;
        const int16 up = NewState.DPadUp;
        NewState.DPadUp = NewState.DPadDown;
        NewState.DPadDown = up;
    }
    NewState.LeftShock = 0;
    NewState.RightShock = 0;

    // Counts frames while L stays held after LookAroundBlocksTarget() armed it.
    if (LookAroundHoldFrames > 0) {
        if (LookAroundHoldFrames < LOOKAROUND_HOLD_FRAMES) {
            if (OldState.LeftShoulder1 != 0 || NewState.LeftShoulder1 != 0)
                ++LookAroundHoldFrames;
            else
                LookAroundHoldFrames = 0;
        } else if (NewState.LeftShoulder1 == 0) {
            LookAroundHoldFrames = 0;
        }
    }

    if (NewState.RightStickX || NewState.RightStickY || NewState.LeftStickX || NewState.LeftStickY ||
        NewState.DPadUp || NewState.DPadDown || NewState.DPadLeft || NewState.DPadRight ||
        NewState.Triangle || NewState.Cross || NewState.Circle || NewState.Square ||
        NewState.Start || NewState.Select ||
        NewState.LeftShoulder1 || NewState.LeftShoulder2 || NewState.RightShoulder1 || NewState.RightShoulder2 ||
        NewState.LeftShock || NewState.RightShock)
        LastTimeTouched = TimeInMilliseconds();

    iCurrHornHistory = static_cast<uint8>(iCurrHornHistory + 1);
    if (iCurrHornHistory >= HORNHISTORY_SIZE) iCurrHornHistory = 0;
    bHornHistory[iCurrHornHistory] = GetHorn();

    for (int32 i = STEERINGBUFFERLENGTH - 2; i >= 0; --i)
        SteeringLeftRightBuffer[i + 1] = SteeringLeftRightBuffer[i];

    if (guest_ref<uint8>(address::bDisplayNoControllerMessage) == 0u)
        guest_ref<uint8>(address::byte_08B58CAC) = 0u;

    if (JustOutOfFrontEnd != 0) --JustOutOfFrontEnd;
}

// 0x08A96CDC
int32 CPad::InputHowLongAgo() { return TimeInMilliseconds() - LastTimeTouched; }

// 0x08A96CF0
void CPad::SetDrunkInputDelay(int32 delay) { DrunkDrivingBufferUsed = delay; }

// 0x08A98F08
void CPad::ResetAverageWeapon() {
    AverageWeapon = GetWeapon();
    AverageEntries = 1;
}

// ---------------------------------------------------------------------------
// Analog nub and d-pad
// ---------------------------------------------------------------------------

// 0x08A96D10
int16 CPad::GetStickX() {
    if (SwapNubAndDPad()) return HalfOf(NewState.DPadRight - NewState.DPadLeft);
    return NewState.LeftStickX;
}

// 0x08A96D54
int16 CPad::GetStickY() {
    if (SwapNubAndDPad()) return HalfOf(NewState.DPadDown - NewState.DPadUp);
    return NewState.LeftStickY;
}

// 0x08A96D98
int16 CPad::GetDPadUp() { return SwapNubAndDPad() ? NewState.NubUp : NewState.DPadUp; }
// 0x08A96DBC
int16 CPad::GetDPadDown() { return SwapNubAndDPad() ? NewState.NubDown : NewState.DPadDown; }
// 0x08A96DE0
int16 CPad::GetDPadLeft() { return SwapNubAndDPad() ? NewState.NubLeft : NewState.DPadLeft; }
// 0x08A96E04
int16 CPad::GetDPadRight() { return SwapNubAndDPad() ? NewState.NubRight : NewState.DPadRight; }

// 0x08A96E28
bool CPad::DPadUpJustDown() {
    if (SwapNubAndDPad()) return NewState.NubUp && !OldState.NubUp;
    return NewState.DPadUp && !OldState.DPadUp;
}

// 0x08A96E84
bool CPad::DPadDownJustDown() {
    if (SwapNubAndDPad()) return NewState.NubDown && !OldState.NubDown;
    return NewState.DPadDown && !OldState.DPadDown;
}

// 0x08A96EE0
bool CPad::DPadLeftJustDown() {
    if (SwapNubAndDPad()) return NewState.NubLeft && !OldState.NubLeft;
    return NewState.DPadLeft && !OldState.DPadLeft;
}

// 0x08A96F3C
bool CPad::DPadLeftJustUp() {
    if (SwapNubAndDPad()) return !NewState.NubLeft && OldState.NubLeft;
    return !NewState.DPadLeft && OldState.DPadLeft;
}

// 0x08A96F98
bool CPad::DPadRightJustDown() {
    if (SwapNubAndDPad()) return NewState.NubRight && !OldState.NubRight;
    return NewState.DPadRight && !OldState.DPadRight;
}

// 0x08A96FF4
bool CPad::DPadRightJustUp() {
    if (SwapNubAndDPad()) return !NewState.NubRight && OldState.NubRight;
    return !NewState.DPadRight && OldState.DPadRight;
}

// ---------------------------------------------------------------------------
// Menu navigation
// ---------------------------------------------------------------------------

// The four flick detectors remember the previous nub reading in a static each.

// 0x08A986EC
bool CPad::StickUpJustDown() {
    int16 &last = guest_ref<int16>(address::StickFlickLast + 0u);
    const int16 y = GetPad(0)->GetStickY();
    const bool flicked = y < -15 && !(last < -5);
    last = y;
    return flicked;
}

// 0x08A98744
bool CPad::StickDownJustDown() {
    int16 &last = guest_ref<int16>(address::StickFlickLast + 2u);
    const int16 y = GetPad(0)->GetStickY();
    const bool flicked = y >= 16 && last < 6;
    last = y;
    return flicked;
}

// 0x08A9879C
bool CPad::StickLeftJustDown() {
    int16 &last = guest_ref<int16>(address::StickFlickLast + 4u);
    const int16 x = GetPad(0)->GetStickX();
    const bool flicked = x < -25 && !(last < -20);
    last = x;
    return flicked;
}

// 0x08A987F4
bool CPad::StickRightJustDown() {
    int16 &last = guest_ref<int16>(address::StickFlickLast + 6u);
    const int16 x = GetPad(0)->GetStickX();
    const bool flicked = x >= 26 && last < 21;
    last = x;
    return flicked;
}

// 0x08A97050
bool CPad::NavLeftJustDown() { return StickLeftJustDown() || DPadLeftJustDown(); }
// 0x08A97098
bool CPad::NavRightJustDown() { return StickRightJustDown() || DPadRightJustDown(); }
// 0x08A970E0
bool CPad::NavUpJustDown() { return StickUpJustDown() || DPadUpJustDown(); }
// 0x08A97128
bool CPad::NavDownJustDown() { return StickDownJustDown() || DPadDownJustDown(); }

// 0x08A97170
bool CPad::GetCross() { return NewState.Cross != 0; }

// 0x08A9717C
bool CPad::GetCircleOrTriangle() { return (NewState.Circle | NewState.Triangle) != 0; }

// 0x08A97190
bool CPad::CircleOrTriangleJustUp() {
    const bool circle = !NewState.Circle && OldState.Circle;
    const bool triangle = !NewState.Triangle && OldState.Triangle;
    return circle || triangle;
}

// 0x08A971DC
bool CPad::CrossJustDown() { return NewState.Cross && !OldState.Cross; }

// ---------------------------------------------------------------------------
// Vehicle
// ---------------------------------------------------------------------------

// 0x08A972E0
int16 CPad::GetSteeringLeftRight() {
    if (DisablePlayerControls) return 0;
    switch (Mode) {
    case 0:
    case 1:
        SteeringLeftRightBuffer[0] = GetStickX();
        return SteeringLeftRightBuffer[DrunkDrivingBufferUsed];
    case 2:
    case 3:
        SteeringLeftRightBuffer[0] = GetStickX();
        if (NewState.LeftShoulder1) return 0;  // L held: the nub looks around instead
        return SteeringLeftRightBuffer[DrunkDrivingBufferUsed];
    }
    return 0;
}

// 0x08A97388
int16 CPad::GetSteeringUpDown() {
    if (DisablePlayerControls) return 0;
    switch (Mode) {
    case 0:
    case 1:
        return GetStickY();
    case 2:
    case 3:
        if (NewState.LeftShoulder1) return 0;
        return GetStickY();
    }
    return 0;
}

// 0x08A97404
int16 CPad::GetCarGunLeftRight(bool bUseDPad) {
    if (DisablePlayerControls) return 0;
    if (bUseDPad) {
        const int16 right = GetDPadRight();
        const int16 left = GetDPadLeft();
        return HalfOf(right - left);
    }
    if (!GetCarGunFired()) return 0;
    return HalfOf(NewState.RightShoulder1 - NewState.LeftShoulder1);
}

// 0x08A974B0
int16 CPad::GetCarGunUpDown() {
    if (DisablePlayerControls) return 0;
    if (!GetCarGunFired()) return 0;
    if (!ModeValid()) return 0;
    return GetStickY();
}

// 0x08A9777C
bool CPad::GetLookLeft() {
    if (DisablePlayerControls) return false;
    if (LookButtonsTakenByCamera()) return false;

    const uint32 vehicle = FindPlayerVehicle();
    if (vehicle != 0u) {
        const int16 model = guest_ref<int16>(vehicle + ped::ModelIndex);
        if ((model == MI_TURRET_VEHICLE_A || model == MI_TURRET_VEHICLE_B) && GetPad(0)->GetCarGunFired())
            return false;
    }
    if (HostLookLeft()) return true;

    switch (Mode) {
    case 0:
    case 1: {
        const bool l_just_down = NewState.LeftShoulder1 && !OldState.LeftShoulder1;
        if (l_just_down) return false;
        const bool r_just_up = !NewState.RightShoulder1 && OldState.RightShoulder1;
        if (r_just_up) return false;
        return NewState.LeftShoulder1 && !NewState.RightShoulder1;
    }
    case 2:
    case 3:
        if (!NewState.LeftShoulder1) return false;
        return GetStickX() < -10;
    }
    return false;
}

// 0x08A97950
bool CPad::GetLookRight() {
    if (DisablePlayerControls) return false;
    if (LookButtonsTakenByCamera()) return false;

    const uint32 vehicle = FindPlayerVehicle();
    if (vehicle != 0u) {
        const int16 model = guest_ref<int16>(vehicle + ped::ModelIndex);
        if ((model == MI_TURRET_VEHICLE_A || model == MI_TURRET_VEHICLE_B) && GetPad(0)->GetCarGunFired())
            return false;
    }
    if (HostLookRight()) return true;

    switch (Mode) {
    case 0:
    case 1: {
        const bool r_just_down = NewState.RightShoulder1 && !OldState.RightShoulder1;
        if (r_just_down) return false;
        const bool l_just_up = !NewState.LeftShoulder1 && OldState.LeftShoulder1;
        if (l_just_up) return false;
        return NewState.RightShoulder1 && !NewState.LeftShoulder1;
    }
    case 2:
    case 3:
        if (!NewState.LeftShoulder1) return false;
        return GetStickX() > 10;
    }
    return false;
}

// 0x08A97B28
bool CPad::GetLookBehindForCar() {
    if (DisablePlayerControls) return false;
    if (LookButtonsTakenByCamera()) return false;
    if (HostLookBehind()) return true;

    switch (Mode) {
    case 0:
    case 1: {
        const bool l = NewState.LeftShoulder1 || (!NewState.LeftShoulder1 && OldState.LeftShoulder1);
        const bool r = NewState.RightShoulder1 || (!NewState.RightShoulder1 && OldState.RightShoulder1);
        return l && r;
    }
    case 2:
    case 3:
        if (!NewState.LeftShoulder1) return false;
        if (AbsS16(GetStickX()) >= 30) return false;
        return GetStickY() > 10;  // L held, nub pulled back
    }
    return false;
}

// 0x08A97D38
bool CPad::GetHorn() {
    if (DisablePlayerControls) return false;
    switch (Mode) {
    case 0:
    case 2:
        return GetDPadDown() != 0;
    case 1:
    case 3:
        return GetDPadUp() != 0;
    }
    return false;
}

// 0x08A97DBC
bool CPad::HornJustDown() {
    if (DisablePlayerControls) return false;
    switch (Mode) {
    case 0:
    case 2:
        return DPadDownJustDown();
    case 1:
    case 3:
        return DPadUpJustDown();
    }
    return false;
}

// 0x08A97200  Horn button pressed without L, ignoring disabled controls.
// Out-of-range modes behave like 1 and 3 here.
bool CPad::HornJustDownNoL() {
    if (Mode == 0 || Mode == 2) {
        if (NewState.LeftShoulder1) return false;
        return DPadDownJustDown();
    }
    if (NewState.LeftShoulder1) return false;
    return DPadUpJustDown();
}

// 0x08A97278  The d-pad direction the horn is not on.
bool CPad::GetHornOppositeDPad() {
    switch (Mode) {
    case 0:
    case 2:
        return GetDPadUp() != 0;
    case 1:
    case 3:
        return GetDPadDown() != 0;
    }
    return false;
}

// 0x08A97E40
bool CPad::GetCarGunFired() {
    if (DisablePlayerControls) return false;
    return NewState.Circle != 0;
}

// 0x08A97E64
bool CPad::CarGunJustDown() {
    if (DisablePlayerControls) return false;
    return NewState.Circle && !OldState.Circle;
}

// 0x08A97EA8
bool CPad::CarGunJustUp() {
    if (DisablePlayerControls) return false;
    return !NewState.Circle && OldState.Circle;
}

// 0x08A97EEC
int16 CPad::GetHandBrake() {
    if (DisablePlayerControls) return 0;
    switch (Mode) {
    case 0:
    case 1:
        return NewState.Cross && NewState.Square ? 1 : 0;
    case 2:
    case 3:
        return NewState.RightShoulder1;
    }
    return 0;
}

// 0x08A97F64
int16 CPad::GetBrake() {
    if (DisablePlayerControls) return 0;
    // Host: while driving, the brake can sit on another pad button or come
    // from the keyboard / trigger pressure.
    const bool driving = HostPlayerDriving();
    if (driving) lcs_note_vehicle_control_read();
    int16 brake = NewState.Square;
    if (driving) {
        std::memcpy(&brake, reinterpret_cast<const uint8 *>(this) + lcs_brake_pad_offset(), sizeof(brake));
        if (brake == 0) brake = lcs_host_brake();
    }
    return brake;
}

// 0x08A980DC
int16 CPad::GetAccelerate() {
    if (DisablePlayerControls) return 0;
    const bool driving = HostPlayerDriving();
    if (driving) lcs_note_vehicle_control_read();
    int16 accelerate = NewState.Cross;
    if (driving) {
        std::memcpy(&accelerate, reinterpret_cast<const uint8 *>(this) + lcs_accelerate_pad_offset(),
                    sizeof(accelerate));
        if (accelerate == 0) accelerate = lcs_host_accelerate();
    }
    return accelerate;
}

// 0x08A97F84
bool CPad::GetExitVehicle() {
    if (DisablePlayerControls) return false;
    if (bBlockExitVehicle) return false;
    if (JustOutOfFrontEnd) return false;
    return NewState.Triangle != 0;
}

// 0x08A97FC8
bool CPad::GetTriangle() { return NewState.Triangle != 0; }

// 0x08A97FD4
bool CPad::ExitVehicleJustDown() {
    if (DisablePlayerControls) return false;
    if (JustOutOfFrontEnd) return false;
    if (bBlockExitVehicle) return false;
    return NewState.Triangle && !OldState.Triangle;
}

// 0x08A98258
bool CPad::ChangeStationDownJustDown() {
    if (DisablePlayerControls) return false;
    if (!ModeValid()) return false;
    return DPadLeftJustDown();
}

// 0x08A982A4
bool CPad::ChangeStationUpJustDown() {
    if (DisablePlayerControls) return false;
    if (!ModeValid()) return false;
    return DPadRightJustDown();
}

// 0x08A98B08  Camera orbit around the vehicle, left/right.
int16 CPad::GetVehicleLookLeftRight() {
    if (!ModeValid()) return 0;
    const int16 x = HostCameraAxisX(GetStickX());
    if (!GetPad(0)->NewState.LeftShoulder1) {
        if (PlayerWeaponCamMode() == MODE_HELICANNON_1STPERSON)
            return static_cast<int16>(fpu_trunc(fpu_mul(static_cast<float>(x), LookSpeedScale)));
        return x;
    }
    if (PlayerWeaponCamMode() == MODE_HELICANNON_1STPERSON)
        return static_cast<int16>(fpu_trunc(fpu_mul(static_cast<float>(x), LookSpeedScaleLHeld)));
    return static_cast<int16>(fpu_trunc(fpu_mul(static_cast<float>(x), 0.4f)));
}

// 0x08A98C0C  Camera orbit around the vehicle, up/down.
int16 CPad::GetVehicleLookUpDown() {
    if (!ModeValid()) return 0;
    if (!GetPad(0)->NewState.LeftShoulder1) {
        float y = static_cast<float>(HostCameraAxisY(GetPad(0)->GetStickY()));
        if (InvertLook()) y = -y;
        if (PlayerWeaponCamMode() == MODE_HELICANNON_1STPERSON) return static_cast<int16>(fpu_trunc(fpu_mul(y, LookSpeedScale)));
        return static_cast<int16>(fpu_trunc(y));
    }
    float y = static_cast<float>(HostCameraAxisY(GetStickY()));
    if (InvertLook()) y = -y;
    if (PlayerWeaponCamMode() == MODE_HELICANNON_1STPERSON)
        return static_cast<int16>(fpu_trunc(fpu_mul(y, LookSpeedScaleLHeld)));
    return static_cast<int16>(fpu_trunc(fpu_mul(y, 0.4f)));
}

// ---------------------------------------------------------------------------
// On foot
// ---------------------------------------------------------------------------

// 0x08A9751C  Whichever of the nub and the d-pad is pushed further.
int16 CPad::GetStickOrDPadLeftRight() {
    if (!ModeValid()) return 0;
    const int16 stick = GetStickX();
    const int16 right = GetDPadRight();
    const int16 left = GetDPadLeft();
    const int16 dpad = HalfOf(right - left);
    return AbsS16(dpad) < AbsS16(stick) ? stick : dpad;
}

// 0x08A976B0
int16 CPad::GetStickOrDPadUpDown() {
    if (!ModeValid()) return 0;
    const int16 stick = GetStickY();
    const int16 down = GetDPadDown();
    const int16 up = GetDPadUp();
    const int16 dpad = HalfOf(down - up);
    return AbsS16(dpad) < AbsS16(stick) ? stick : dpad;
}

// 0x08A975E8
int16 CPad::GetPedWalkLeftRight() {
    if (DisablePlayerControls) return 0;
    if (LookAroundHoldFrames >= LOOKAROUND_HOLD_FRAMES) return 0;  // the nub is looking around
    if (!ModeValid()) return 0;
    return GetStickX();
}

// 0x08A9764C
int16 CPad::GetPedWalkUpDown() {
    if (DisablePlayerControls) return 0;
    if (LookAroundHoldFrames >= LOOKAROUND_HOLD_FRAMES) return 0;
    if (!ModeValid()) return 0;
    return GetStickY();
}

// 0x08A97CDC
bool CPad::GetLookBehindForPed() {
    if (guest_ref<int32>(address::int_08B58CB0) != 0) return false;
    if (DisablePlayerControls) return false;
    return NewState.RightShoulder1 && NewState.LeftShoulder1;
}

// 0x08A98040
int16 CPad::GetWeapon() {
    if (DisablePlayerControls) return 0;
    if (!ModeValid()) return 0;
    return NewState.Circle;
}

// 0x08A9807C
bool CPad::WeaponJustDown() {
    if (DisablePlayerControls) return false;
    if (!ModeValid()) return false;
    return NewState.Circle && !OldState.Circle;
}

// 0x08A980FC  Select on its own; the d-pad directions with Select mean something else.
bool CPad::CycleCameraModeJustDown() {
    if (GetDPadUp() || GetDPadDown() || GetDPadLeft() || GetDPadRight()) return false;
    return NewState.Select && !OldState.Select;
}

// 0x08A981C0
bool CPad::CycleWeaponRightJustDown() {
    if (DisablePlayerControls) return false;
    if (!ModeValid()) return false;
    return DPadRightJustDown();
}

// 0x08A9820C
bool CPad::CycleWeaponLeftJustDown() {
    if (DisablePlayerControls) return false;
    if (!ModeValid()) return false;
    return DPadLeftJustDown();
}

// 0x08A98890  True while holding L is being read as a camera gesture, which
// keeps R from locking on. Standing still with L held arms the look-around
// counter that Update() then advances.
bool CPad::LookAroundBlocksTarget() {
    if (DisablePlayerControls) return false;
    if (GetLookBehindForPed() && PlayerPedAimingStance()) return false;

    if (LookAroundHoldFrames != 0) return NewState.LeftShoulder1 == 0;
    if (!NewState.LeftShoulder1) return false;
    if (guest_ref<uint8>(FindPlayerPed() + ped::field_C9D) != 0u) return false;
    switch (ActiveCamMode()) {
    case MODE_SNIPER:
    case MODE_ROCKETLAUNCHER:
    case MODE_1STPERSON:
    case MODE_CAMERA:
    case MODE_M16_1STPERSON:
        return false;
    }
    if (GetPedWalkLeftRight() != 0 || GetPedWalkUpDown() != 0) return true;
    LookAroundHoldFrames = 1;
    return false;
}

// 0x08A982F0
bool CPad::GetTarget() {
    if (DisablePlayerControls) return false;
    if (LookAroundBlocksTarget()) return false;
    return NewState.RightShoulder1 != 0;
}

// 0x08A98340
bool CPad::TargetJustDown() {
    if (DisablePlayerControls) return false;
    if (LookAroundBlocksTarget()) return false;
    return NewState.RightShoulder1 && !OldState.RightShoulder1;
}

// 0x08A983B8
bool CPad::JumpJustDown() {
    if (DisablePlayerControls) return false;
    if (!ModeValid()) return false;
    return NewState.Square && !OldState.Square;
}

// 0x08A98418
bool CPad::GetJump() {
    if (DisablePlayerControls) return false;
    if (!ModeValid()) return false;
    return NewState.Square != 0;
}

// 0x08A98458  Tells a double tap of jump from a single press.
int32 CPad::GetJumpTap() {
    if (DisablePlayerControls) return 0;

    if (JumpJustDown()) {
        TimeJumpDownPrevious = TimeJumpDown;
        TimeJumpDown = TimeInMilliseconds();
        // debug("Time when jump last down %d %d\n", TimeJumpDownPrevious, TimeJumpDown);
    }
    const int32 since_previous = TimeInMilliseconds() - TimeJumpDownPrevious;
    const int32 since_last = TimeInMilliseconds() - TimeJumpDown;

    if (since_previous < 750 && since_last < 750) {
        // debug("Double: Diff1 %d Diff2 %d\n", since_previous, since_last);
        TimeJumpDown = -10000;
        TimeJumpDownPrevious = -10000;
        return 2;
    }
    if (since_previous > 750 && since_last > 50 && since_last < 250 && GetJump()) {
        // debug("Normal: Diff1 %d Diff2 %d\n", since_previous, since_last);
        TimeJumpDown = -10000;
        TimeJumpDownPrevious = -10000;
        return 1;
    }
    return 0;
}

// 0x08A98578  Sprint needs the nub pushed as well as Cross.
bool CPad::GetSprint() {
    if (DisablePlayerControls) return false;
    if (!ModeValid()) return false;
    if (!NewState.Cross) return false;
    const int16 x = AbsS16(GetPedWalkLeftRight());
    const int16 y = AbsS16(GetPedWalkUpDown());
    return x + y > 64;
}

// 0x08A9864C
bool CPad::ShiftTargetLeftJustDown() {
    if (DisablePlayerControls) return false;
    return NewState.RightShoulder1 && DPadLeftJustDown();
}

// 0x08A9869C
bool CPad::ShiftTargetRightJustDown() {
    if (DisablePlayerControls) return false;
    return NewState.RightShoulder1 && DPadRightJustDown();
}

// 0x08A9884C
bool CPad::LJustDown() {
    if (DisablePlayerControls) return false;
    return NewState.LeftShoulder1 && !OldState.LeftShoulder1;
}

// 0x08A989F8
bool CPad::GetLWithStickNotRight() {
    if (DisablePlayerControls) return false;
    if (Mode != 2 && Mode != 3) return false;
    return NewState.LeftShoulder1 && GetStickX() < 10;
}

// 0x08A98A88
bool CPad::GetSquare() {
    if (DisablePlayerControls) return false;
    if (!ModeValid()) return false;
    return NewState.Square != 0;
}

// 0x08A98AC8
bool CPad::GetCrossWithMode() {
    if (DisablePlayerControls) return false;
    if (!ModeValid()) return false;
    return NewState.Cross != 0;
}

// 0x08A98D3C  Camera look on foot, left/right: the nub once L has been held long enough.
int16 CPad::GetPedLookLeftRight() {
    // Host: with mouse look the camera is always free, no L hold needed.
    const bool host_camera = lcs_camera_hook_enabled();
    if (!host_camera && LookAroundHoldFrames < LOOKAROUND_HOLD_FRAMES) return 0;

    const bool look_behind = GetLookBehindForPed();
    if (!host_camera && look_behind && PlayerPedAimingStance()) LookAroundHoldFrames = 0;

    float x = 0.0f;
    if (ModeValid()) {
        const int16 axis = host_camera ? static_cast<int16>(lcs_camera_axis_x()) : GetPad(0)->GetStickX();
        x = static_cast<float>(axis);
    }
    return static_cast<int16>(fpu_trunc(x));
}

// 0x08A98E3C  Camera look on foot, up/down.
int16 CPad::GetPedLookUpDown() {
    const bool host_camera = lcs_camera_hook_enabled();
    if (!host_camera && LookAroundHoldFrames < LOOKAROUND_HOLD_FRAMES) return 0;

    const bool look_behind = GetLookBehindForPed();
    if (!host_camera && look_behind) LookAroundHoldFrames = 0;

    float y = 0.0f;
    if (ModeValid()) {
        const int16 axis = host_camera ? static_cast<int16>(lcs_camera_axis_y()) : GetPad(0)->GetStickY();
        y = static_cast<float>(axis);
        if (InvertLook()) y = -y;
    }
    return static_cast<int16>(fpu_trunc(y));
}

}  // namespace lcs::game
