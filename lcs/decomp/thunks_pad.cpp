// Guest calling convention to C++ for the pad functions in decomp_functions.def.
// Arguments arrive in a0-a3 (gpr 4-7); the result goes back in v0 (gpr 2).
#include "thunks.hpp"

#include "game/GameData.hpp"
#include "game/Pad.hpp"
#include "game/PadDevice.hpp"

namespace lcs::decomp::thunk {

using namespace lcs::game;

namespace {

CPad &Pad(Context &ctx) { return guest_ref<CPad>(ctx.gpr[4]); }
CPspPad &PspPad(Context &ctx) { return guest_ref<CPspPad>(ctx.gpr[4]); }
CPadDevice &Device(Context &ctx) { return guest_ref<CPadDevice>(ctx.gpr[4]); }

void ReturnBool(Context &ctx, bool value) { ctx.gpr[2] = value ? 1u : 0u; }
void ReturnS16(Context &ctx, int16 value) { ctx.gpr[2] = static_cast<uint32>(static_cast<int32>(value)); }
void ReturnS32(Context &ctx, int32 value) { ctx.gpr[2] = static_cast<uint32>(value); }

}  // namespace

// Platform pad
void CPspPad_Open(Runtime &, Context &ctx) { ReturnBool(ctx, PspPad(ctx).Open(ctx)); }
void CPspPad_Close(Runtime &, Context &ctx) { PspPad(ctx).Close(); }
void CPspPad_Update(Runtime &, Context &ctx) { PspPad(ctx).Update(ctx); }
void CPspPad_Reset(Runtime &, Context &ctx) { PspPad(ctx).Reset(); }
void CPadDevice_Open(Runtime &, Context &ctx) { ReturnBool(ctx, Device(ctx).Open(ctx)); }
void CPadDevice_Close(Runtime &, Context &ctx) { Device(ctx).Close(); }
void CPadDevice_Update(Runtime &, Context &ctx) { Device(ctx).Update(ctx); }

// CPad
void CControllerState_Clear(Runtime &, Context &ctx) { guest_ref<CControllerState>(ctx.gpr[4]).Clear(); }
void CPad_Initialise(Runtime &, Context &ctx) { CPad::Initialise(ctx); }
void CPad_GetPad(Runtime &, Context &ctx) {
    // The game indexes without a range check; keep the arithmetic exact.
    ctx.gpr[2] = address::Pads + ctx.gpr[4] * static_cast<uint32>(sizeof(CPad));
}
void CPad_UpdatePads(Runtime &, Context &ctx) { CPad::UpdatePads(ctx); }
void CPad_UpdatePadsAndShake(Runtime &, Context &ctx) { CPad::UpdatePadsAndShake(ctx); }
void CPad_Clear(Runtime &, Context &ctx) { Pad(ctx).Clear((ctx.gpr[5] & 0xFFu) != 0u); }
void CPad_Update(Runtime &, Context &ctx) { Pad(ctx).Update(ctx, static_cast<int16>(ctx.gpr[5])); }
void CPad_InputHowLongAgo(Runtime &, Context &ctx) { ReturnS32(ctx, Pad(ctx).InputHowLongAgo()); }
void CPad_SetDrunkInputDelay(Runtime &, Context &ctx) { Pad(ctx).SetDrunkInputDelay(static_cast<int32>(ctx.gpr[5])); }
void CPad_ResetAverageWeapon(Runtime &, Context &ctx) { Pad(ctx).ResetAverageWeapon(); }
void CPad_GetCarGunLeftRight(Runtime &, Context &ctx) {
    ReturnS16(ctx, Pad(ctx).GetCarGunLeftRight((ctx.gpr[5] & 0xFFu) != 0u));
}
void CPad_GetJumpTap(Runtime &, Context &ctx) { ReturnS32(ctx, Pad(ctx).GetJumpTap()); }
void CPad_StickUpJustDown(Runtime &, Context &ctx) { ReturnBool(ctx, CPad::StickUpJustDown()); }
void CPad_StickDownJustDown(Runtime &, Context &ctx) { ReturnBool(ctx, CPad::StickDownJustDown()); }
void CPad_StickLeftJustDown(Runtime &, Context &ctx) { ReturnBool(ctx, CPad::StickLeftJustDown()); }
void CPad_StickRightJustDown(Runtime &, Context &ctx) { ReturnBool(ctx, CPad::StickRightJustDown()); }

#define PAD_S16(name) \
    void CPad_##name(Runtime &, Context &ctx) { ReturnS16(ctx, Pad(ctx).name()); }
#define PAD_BOOL(name) \
    void CPad_##name(Runtime &, Context &ctx) { ReturnBool(ctx, Pad(ctx).name()); }

PAD_S16(GetStickX)
PAD_S16(GetStickY)
PAD_S16(GetDPadUp)
PAD_S16(GetDPadDown)
PAD_S16(GetDPadLeft)
PAD_S16(GetDPadRight)
PAD_BOOL(DPadUpJustDown)
PAD_BOOL(DPadDownJustDown)
PAD_BOOL(DPadLeftJustDown)
PAD_BOOL(DPadLeftJustUp)
PAD_BOOL(DPadRightJustDown)
PAD_BOOL(DPadRightJustUp)
PAD_BOOL(NavLeftJustDown)
PAD_BOOL(NavRightJustDown)
PAD_BOOL(NavUpJustDown)
PAD_BOOL(NavDownJustDown)
PAD_BOOL(GetCross)
PAD_BOOL(GetCircleOrTriangle)
PAD_BOOL(CircleOrTriangleJustUp)
PAD_BOOL(CrossJustDown)
PAD_BOOL(HornJustDownNoL)
PAD_BOOL(GetHornOppositeDPad)
PAD_S16(GetSteeringLeftRight)
PAD_S16(GetSteeringUpDown)
PAD_S16(GetCarGunUpDown)
PAD_S16(GetStickOrDPadLeftRight)
PAD_S16(GetPedWalkLeftRight)
PAD_S16(GetPedWalkUpDown)
PAD_S16(GetStickOrDPadUpDown)
PAD_BOOL(GetLookLeft)
PAD_BOOL(GetLookRight)
PAD_BOOL(GetLookBehindForCar)
PAD_BOOL(GetLookBehindForPed)
PAD_BOOL(GetHorn)
PAD_BOOL(HornJustDown)
PAD_BOOL(GetCarGunFired)
PAD_BOOL(CarGunJustDown)
PAD_BOOL(CarGunJustUp)
PAD_S16(GetHandBrake)
PAD_S16(GetBrake)
PAD_BOOL(GetExitVehicle)
PAD_BOOL(GetTriangle)
PAD_BOOL(ExitVehicleJustDown)
PAD_S16(GetWeapon)
PAD_BOOL(WeaponJustDown)
PAD_S16(GetAccelerate)
PAD_BOOL(CycleCameraModeJustDown)
PAD_BOOL(CycleWeaponRightJustDown)
PAD_BOOL(CycleWeaponLeftJustDown)
PAD_BOOL(ChangeStationDownJustDown)
PAD_BOOL(ChangeStationUpJustDown)
PAD_BOOL(GetTarget)
PAD_BOOL(TargetJustDown)
PAD_BOOL(JumpJustDown)
PAD_BOOL(GetJump)
PAD_BOOL(GetSprint)
PAD_BOOL(ShiftTargetLeftJustDown)
PAD_BOOL(ShiftTargetRightJustDown)
PAD_BOOL(LJustDown)
PAD_BOOL(LookAroundBlocksTarget)
PAD_BOOL(GetLWithStickNotRight)
PAD_BOOL(GetSquare)
PAD_BOOL(GetCrossWithMode)
PAD_S16(GetVehicleLookLeftRight)
PAD_S16(GetVehicleLookUpDown)
PAD_S16(GetPedLookLeftRight)
PAD_S16(GetPedLookUpDown)

#undef PAD_S16
#undef PAD_BOOL

}  // namespace lcs::decomp::thunk
