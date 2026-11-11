#include "PadDevice.hpp"

#include "GameData.hpp"

namespace lcs::game {

namespace {

constexpr uint32 kNidSetSamplingCycle = 0x6A2774F3u;
constexpr uint32 kNidSetSamplingMode = 0x1F4011E6u;
constexpr uint32 kNidReadBufferPositive = 0x1F803938u;
constexpr uint32 PSP_CTRL_MODE_ANALOG = 1u;

// Raw 0..255 axis to -1..1 with a quarter-range dead zone around the centre.
float AxisFromByte(uint8 raw) {
    float value = static_cast<float>(static_cast<int32>(raw) - 128) * (1.0f / 128.0f);
    if (value < 0.0f) {
        if (value <= -0.25f) {
            value = value + 0.25f;
            value = value * 1.3333334f;
        } else {
            value = 0.0f;
        }
    } else {
        if (value < 0.25f) {
            value = 0.0f;
        } else {
            value = value - 0.25f;
            value = value * 1.3333334f;
        }
    }
    float clamped = -1.0f;
    if (-1.0f <= value) {
        clamped = value;
        if (1.0f < clamped) clamped = 1.0f;
    }
    return clamped;
}

}  // namespace

// 0x0886AED8
void CPspPad::Reset() {
    for (float &button : fButtons) button = 0.0f;
    for (float &axis : fAnalog) axis = 0.0f;
    nButtons = 0u;
    nPressed = 0u;
}

// 0x0886AC24
// Opening twice is a no-op. The test is on bOpen itself (lbu a1, 0(a0));
// a1 is not an argument.
bool CPspPad::Open(Context &ctx) {
    if (bOpen != 0u) return true;
    guest_import(ctx, "sceCtrl", kNidSetSamplingMode, {PSP_CTRL_MODE_ANALOG});
    guest_import(ctx, "sceCtrl", kNidSetSamplingCycle, {0u});
    bOpen = 1u;
    Reset();
    return bOpen != 0u;
}

// 0x0886AC80
void CPspPad::Close() { bOpen = 0u; }

// 0x0886AC88
void CPspPad::Update(Context &ctx) {
    if (bOpen == 0u) return;

    GuestFrame frame(ctx, 0xA0u);
    const uint32 data_address = frame.sp() + 0x14u;
    const uint32 read = guest_import(ctx, "sceCtrl", kNidReadBufferPositive, {data_address, 1u});

    uint32 buttons = 0u;
    uint8 axes[4] = {0x80u, 0x80u, 0x80u, 0x80u};  // left X, left Y, right X, right Y
    if (read != 0u) {
        const SceCtrlData &data = guest_ref<SceCtrlData>(data_address);
        buttons = data.Buttons;
        axes[0] = data.Lx;
        axes[1] = data.Ly;
    }

    nPressed = (buttons ^ nButtons) & buttons;
    nButtons = buttons;
    for (int32 bit = 0; bit < 16; ++bit) fButtons[bit] = (buttons & (1u << bit)) != 0u ? 1.0f : 0.0f;
    for (int32 axis = 0; axis < 4; ++axis) fAnalog[axis] = AxisFromByte(axes[axis]);
}

CPadDevice *CPadDevice::Instance(Context &ctx) {
    if (guest_ref<uint32>(address::PadDeviceInstance) == 0u) guest_call(ctx, address::CreatePadDevice);
    return guest_ptr<CPadDevice>(guest_ref<uint32>(address::PadDeviceInstance));
}

}  // namespace lcs::game
