#include "lcs_hint_keys.hpp"

#include "guest.hpp"
#include "lcs_prompt_textures.hpp"
#include "lcs_render_config.hpp"

#include <cstring>

namespace lcs {
namespace {

// Short names like San Andreas uses for the mouse; the rest as in the menu.
std::string key_name(HostKey key) {
    switch (key) {
    case HostKey::MouseLeft: return "LMB";
    case HostKey::MouseRight: return "RMB";
    case HostKey::MouseMiddle: return "MMB";
    default: return host_key_menu_name(key);
    }
}

const char *pad_button_hint_name(PadButton button) noexcept {
    switch (button) {
    case PadButton::A: return "A";
    case PadButton::B: return "B";
    case PadButton::X: return "X";
    case PadButton::Y: return "Y";
    case PadButton::LeftShoulder: return "LB";
    case PadButton::RightShoulder: return "RB";
    case PadButton::LeftTrigger: return "LT";
    case PadButton::RightTrigger: return "RT";
    case PadButton::Start: return "START";
    case PadButton::Back: return "BACK";
    case PadButton::DpadUp: return "D-PAD UP";
    case PadButton::DpadDown: return "D-PAD DOWN";
    case PadButton::DpadLeft: return "D-PAD LEFT";
    case PadButton::DpadRight: return "D-PAD RIGHT";
    case PadButton::LeftClick: return "L3";
    case PadButton::RightClick: return "R3";
    case PadButton::Count: return "";
    }
    return "";
}

const char *stick_name(StickRole role, const ControlBindings &bindings) noexcept {
    if (bindings.left_stick == role) return "LEFT STICK";
    if (bindings.right_stick == role) return "RIGHT STICK";
    return "";
}

bool is_movement(BindAction action) noexcept {
    return action == BindAction::MoveForward || action == BindAction::MoveBack ||
           action == BindAction::MoveLeft || action == BindAction::MoveRight;
}

constexpr std::uint32_t kLanguage = 0x08B59B5Cu;  // 0 English

bool english() noexcept { return decomp::guest_ref<std::uint32_t>(kLanguage) == 0u; }

}  // namespace

HintStyle lcs_hint_style() noexcept {
    const std::string &style = prompt_texture_style();
    if (style.empty()) return HintStyle::Original;
    if (style == "xbox") return HintStyle::Gamepad;
    return HintStyle::Keyboard;  // "kb" and texture folders
}

std::string lcs_hint_action_name(BindAction action, HintStyle style) {
    const ControlBindings &bindings = lcs_render_configuration().controls.bindings;
    if (style == HintStyle::Gamepad) {
        for (std::size_t index = 0; index < static_cast<std::size_t>(PadButton::Count); ++index) {
            const PadButton button = static_cast<PadButton>(index);
            if (pad_has(bindings, button, action)) return pad_button_hint_name(button);
        }
        if (is_movement(action)) return stick_name(StickRole::Move, bindings);
        return "UNBOUND";
    }
    const std::size_t index = bind_index(action);
    for (std::uint8_t slot = 0; slot < bindings.count[index] && slot < kMaxKeysPerAction; ++slot)
        if (bindings.keys[index][slot] != HostKey::None) return key_name(bindings.keys[index][slot]);
    return "UNBOUND";
}

std::string lcs_hint_look_name(HintStyle style) {
    if (style == HintStyle::Gamepad)
        return stick_name(StickRole::Camera, lcs_render_configuration().controls.bindings);
    return "MOUSE";
}

std::string lcs_hint_zoom_name(bool zoom_in, HintStyle style) {
    // While aiming the wheel sends Square (in) and Cross (out); so do Jump and Sprint.
    if (style == HintStyle::Gamepad)
        return lcs_hint_action_name(zoom_in ? BindAction::Jump : BindAction::Sprint, style);
    return zoom_in ? "WHEEL UP" : "WHEEL DOWN";
}

bool lcs_hint_text_override(const char *key, std::string &text) {
    // Only three keys; compare the first letter before anything else.
    if (key[0] != 'L' && key[0] != 'T' && key[0] != 'G') return false;
    const bool loading = std::strcmp(key, "LDWAIT") == 0;
    const bool adrenaline = std::strcmp(key, "TUP_AD") == 0;
    const bool bomb = std::strcmp(key, "GA_7") == 0;
    if (!loading && !adrenaline && !bomb) return false;
    const HintStyle style = lcs_hint_style();
    if (style == HintStyle::Original || !english()) return false;
    if (loading) {
        // Outside gameplay Enter and Space always confirm (kMenuKeys).
        text = "Press " + (style == HintStyle::Gamepad ? lcs_hint_action_name(BindAction::Sprint, style)
                                                       : std::string("ENTER")) +
               " to continue.";
    } else if (adrenaline) {
        // "R button" on foot: Aim.
        text = "~w~You have 3 adrenaline pills. Press~h~ " + lcs_hint_action_name(BindAction::Aim, style) +
               " ~w~to use one.";
    } else {
        text = "~w~Arm with~h~ " + lcs_hint_action_name(BindAction::Attack, style) +
               "~w~. Bomb will go off when engine is started.";
    }
    return true;
}

}  // namespace lcs
