// The platform layer under CPad: reads the PSP controller through sceCtrl
// and exposes it as floats (0x0886ABCC-0x0886AF03, wrappers 0x08837F9C-0x08838003).
#pragma once

#include "../guest.hpp"

namespace lcs::game {

using namespace lcs::decomp;

// PSP sceCtrl button bits.
enum : uint32 {
    PSP_CTRL_SELECT = 0x000001,
    PSP_CTRL_START = 0x000008,
    PSP_CTRL_UP = 0x000010,
    PSP_CTRL_RIGHT = 0x000020,
    PSP_CTRL_DOWN = 0x000040,
    PSP_CTRL_LEFT = 0x000080,
    PSP_CTRL_LTRIGGER = 0x000100,
    PSP_CTRL_RTRIGGER = 0x000200,
    PSP_CTRL_TRIANGLE = 0x001000,
    PSP_CTRL_CIRCLE = 0x002000,
    PSP_CTRL_CROSS = 0x004000,
    PSP_CTRL_SQUARE = 0x008000,
    PSP_CTRL_HOLD = 0x020000,
};

struct SceCtrlData {
    uint32 TimeStamp;
    uint32 Buttons;
    uint8 Lx;
    uint8 Ly;
    uint8 Rsrv[6];
};
static_assert(sizeof(SceCtrlData) == 16);

struct CPspPad {
    bool8 bOpen;          // 0x00
    uint8 pad_01[3];
    float fButtons[16];   // 0x04  1.0 while bit n of nButtons is set
    float fAnalog[4];     // 0x44  left X, left Y, right X, right Y in -1..1
    uint32 nButtons;      // 0x54
    uint32 nPressed;      // 0x58  bits that went down this poll

    bool Open(Context &ctx);                       // 0x0886AC24
    void Close();                                  // 0x0886AC80
    void Update(Context &ctx);                     // 0x0886AC88
    void Reset();                                  // 0x0886AED8
};
static_assert(sizeof(CPspPad) == 0x5C);

// Heap object owning the pad; the game keeps one, created on first use.
struct CPadDevice {
    uint32 field_0;
    uint32 vtable;  // 0x04
    CPspPad pad;    // 0x08

    bool Open(Context &ctx) { return pad.Open(ctx); }                                   // 0x08837F9C
    void Close() { pad.Close(); }                                                       // 0x08837FCC
    void Update(Context &ctx) { pad.Update(ctx); }                                      // 0x08837FE8

    // The singleton, creating it through the game's allocator when needed.
    static CPadDevice *Instance(Context &ctx);
};
static_assert(sizeof(CPadDevice) == 0x64);

}  // namespace lcs::game
