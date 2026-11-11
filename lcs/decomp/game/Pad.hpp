// CPad: the game's controller abstraction (ULUS-10041 v1.05, 0x08A96348-0x08A997BF).
//
// Decompiled from the EBOOT. Member names follow the III/VC code this class
// descends from where the behaviour matches; PSP-only members are named for
// what they do. Offsets are noted so the layout can be checked against the
// binary.
#pragma once

#include "../guest.hpp"

namespace lcs::game {

using namespace lcs::decomp;

// One frame of controller input. Buttons are 0 or 255.
struct CControllerState {
    int16 LeftStickX;      // 0x00
    int16 LeftStickY;      // 0x02
    int16 RightStickX;     // 0x04
    int16 RightStickY;     // 0x06
    int16 LeftShoulder1;   // 0x08  L
    int16 LeftShoulder2;   // 0x0A  always 0 on PSP
    int16 RightShoulder1;  // 0x0C  R
    int16 RightShoulder2;  // 0x0E  always 0 on PSP
    int16 DPadUp;          // 0x10
    int16 DPadDown;        // 0x12
    int16 DPadLeft;        // 0x14
    int16 DPadRight;       // 0x16
    int16 NubUp;           // 0x18  analog nub read as a d-pad
    int16 NubDown;         // 0x1A
    int16 NubLeft;         // 0x1C
    int16 NubRight;        // 0x1E
    int16 Start;           // 0x20
    int16 Select;          // 0x22
    int16 Square;          // 0x24
    int16 Triangle;        // 0x26
    int16 Cross;           // 0x28
    int16 Circle;          // 0x2A
    int16 LeftShock;       // 0x2C
    int16 RightShock;      // 0x2E
    int16 Hold;            // 0x30  HOLD switch; not touched by Clear()

    void Clear();  // 0x08A96348
};
static_assert(sizeof(CControllerState) == 0x32);

enum {
    STEERINGBUFFERLENGTH = 10,
    HORNHISTORY_SIZE = 8,
    CHEATSTRING_LENGTH = 12,
    // Frames L has to be held, standing still, before the nub looks around.
    LOOKAROUND_HOLD_FRAMES = 7,
};

class CPad {
public:
    int16 LookAroundHoldFrames;                           // 0x00
    CControllerState NewState;                            // 0x02
    CControllerState OldState;                            // 0x34
    int16 SteeringLeftRightBuffer[STEERINGBUFFERLENGTH];  // 0x66
    int32 DrunkDrivingBufferUsed;                         // 0x7C
    int16 ShakeDur;                                       // 0x80
    uint16 Mode;                                          // 0x82  control setup, 0-3
    int16 field_84;                                       // 0x84
    uint16 DisablePlayerControls;                         // 0x86
    bool8 bBlockExitVehicle;                              // 0x88
    uint8 ShakeFreq;                                      // 0x89
    bool8 bHornHistory[HORNHISTORY_SIZE];                 // 0x8A
    uint8 iCurrHornHistory;                               // 0x92
    uint8 JustOutOfFrontEnd;                              // 0x93
    bool8 bApplyBrakes;                                   // 0x94
    char CheatString[CHEATSTRING_LENGTH];                 // 0x95
    uint8 pad_A1[3];
    int32 LastTimeTouched;                                // 0xA4
    int32 AverageWeapon;                                  // 0xA8
    int32 AverageEntries;                                 // 0xAC
    int32 TimeJumpDownPrevious;                           // 0xB0
    int32 TimeJumpDown;                                   // 0xB4
    float LookSpeedScale;                                 // 0xB8
    float LookSpeedScaleLHeld;                            // 0xBC

    static CPad *GetPad(int32 pad);                // 0x08A964B8
    static void Initialise(Context &ctx);          // 0x08A963AC
    static void UpdatePads(Context &ctx);          // 0x08A964D4
    static void UpdatePadsAndShake(Context &ctx);  // 0x08A96544

    void Clear(bool bResetPlayerControls);  // 0x08A96BF4
    void Update(Context &ctx, int16 pad);   // 0x08A98F38
    int32 InputHowLongAgo();                // 0x08A96CDC
    void SetDrunkInputDelay(int32 delay);   // 0x08A96CF0
    void ResetAverageWeapon();              // 0x08A98F08

    // Analog nub / d-pad, honouring the "swap nub and d-pad" option.
    int16 GetStickX();          // 0x08A96D10
    int16 GetStickY();          // 0x08A96D54
    int16 GetDPadUp();          // 0x08A96D98
    int16 GetDPadDown();        // 0x08A96DBC
    int16 GetDPadLeft();        // 0x08A96DE0
    int16 GetDPadRight();       // 0x08A96E04
    bool DPadUpJustDown();      // 0x08A96E28
    bool DPadDownJustDown();    // 0x08A96E84
    bool DPadLeftJustDown();    // 0x08A96EE0
    bool DPadLeftJustUp();      // 0x08A96F3C
    bool DPadRightJustDown();   // 0x08A96F98
    bool DPadRightJustUp();     // 0x08A96FF4

    // Menu navigation: a d-pad press or a flick of the nub. Pad 0 only.
    static bool StickUpJustDown();     // 0x08A986EC
    static bool StickDownJustDown();   // 0x08A98744
    static bool StickLeftJustDown();   // 0x08A9879C
    static bool StickRightJustDown();  // 0x08A987F4
    bool NavLeftJustDown();            // 0x08A97050
    bool NavRightJustDown();           // 0x08A97098
    bool NavUpJustDown();              // 0x08A970E0
    bool NavDownJustDown();            // 0x08A97128
    bool GetCross();                   // 0x08A97170
    bool GetCircleOrTriangle();        // 0x08A9717C
    bool CircleOrTriangleJustUp();     // 0x08A97190
    bool CrossJustDown();              // 0x08A971DC

    // Vehicle.
    int16 GetSteeringLeftRight();               // 0x08A972E0
    int16 GetSteeringUpDown();                  // 0x08A97388
    int16 GetCarGunLeftRight(bool bUseDPad);    // 0x08A97404
    int16 GetCarGunUpDown();                    // 0x08A974B0
    bool GetLookLeft();                         // 0x08A9777C
    bool GetLookRight();                        // 0x08A97950
    bool GetLookBehindForCar();                 // 0x08A97B28
    bool GetHorn();                             // 0x08A97D38
    bool HornJustDown();                        // 0x08A97DBC
    bool HornJustDownNoL();                     // 0x08A97200
    bool GetHornOppositeDPad();                 // 0x08A97278
    bool GetCarGunFired();                      // 0x08A97E40
    bool CarGunJustDown();                      // 0x08A97E64
    bool CarGunJustUp();                        // 0x08A97EA8
    int16 GetHandBrake();                       // 0x08A97EEC
    int16 GetBrake();                           // 0x08A97F64
    int16 GetAccelerate();                      // 0x08A980DC
    bool GetExitVehicle();                      // 0x08A97F84
    bool GetTriangle();                         // 0x08A97FC8
    bool ExitVehicleJustDown();                 // 0x08A97FD4
    bool ChangeStationDownJustDown();           // 0x08A98258
    bool ChangeStationUpJustDown();             // 0x08A982A4
    int16 GetVehicleLookLeftRight();            // 0x08A98B08
    int16 GetVehicleLookUpDown();               // 0x08A98C0C

    // On foot.
    int16 GetStickOrDPadLeftRight();  // 0x08A9751C
    int16 GetStickOrDPadUpDown();     // 0x08A976B0
    int16 GetPedWalkLeftRight();      // 0x08A975E8
    int16 GetPedWalkUpDown();         // 0x08A9764C
    bool GetLookBehindForPed();       // 0x08A97CDC
    int16 GetWeapon();                // 0x08A98040
    bool WeaponJustDown();            // 0x08A9807C
    bool CycleCameraModeJustDown();   // 0x08A980FC
    bool CycleWeaponRightJustDown();  // 0x08A981C0
    bool CycleWeaponLeftJustDown();   // 0x08A9820C
    bool GetTarget();                 // 0x08A982F0
    bool TargetJustDown();            // 0x08A98340
    bool JumpJustDown();              // 0x08A983B8
    bool GetJump();                   // 0x08A98418
    int32 GetJumpTap();               // 0x08A98458  0 none, 1 single, 2 double
    bool GetSprint();                 // 0x08A98578
    bool ShiftTargetLeftJustDown();   // 0x08A9864C
    bool ShiftTargetRightJustDown();  // 0x08A9869C
    bool LJustDown();                 // 0x08A9884C
    bool LookAroundBlocksTarget();    // 0x08A98890
    bool GetLWithStickNotRight();     // 0x08A989F8
    bool GetSquare();                 // 0x08A98A88
    bool GetCrossWithMode();          // 0x08A98AC8
    int16 GetPedLookLeftRight();      // 0x08A98D3C
    int16 GetPedLookUpDown();         // 0x08A98E3C

private:
    [[nodiscard]] bool ModeValid() const { return Mode < 4u; }
};
static_assert(sizeof(CPad) == 0xC0);
static_assert(offsetof(CPad, OldState) == 0x34);
static_assert(offsetof(CPad, SteeringLeftRightBuffer) == 0x66);
static_assert(offsetof(CPad, Mode) == 0x82);
static_assert(offsetof(CPad, bHornHistory) == 0x8A);
static_assert(offsetof(CPad, CheatString) == 0x95);
static_assert(offsetof(CPad, LastTimeTouched) == 0xA4);
static_assert(offsetof(CPad, LookSpeedScaleLHeld) == 0xBC);

}  // namespace lcs::game
