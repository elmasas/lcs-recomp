#pragma once

#include <algorithm>
#include <array>
#include <cctype>
#include <cstdint>
#include <cstdlib>
#include <initializer_list>
#include <string>
#include <string_view>

namespace lcs {

inline constexpr std::uint32_t kPspSelect = 0x000001u;
inline constexpr std::uint32_t kPspStart = 0x000008u;
inline constexpr std::uint32_t kPspUp = 0x000010u;
inline constexpr std::uint32_t kPspRight = 0x000020u;
inline constexpr std::uint32_t kPspDown = 0x000040u;
inline constexpr std::uint32_t kPspLeft = 0x000080u;
inline constexpr std::uint32_t kPspLTrigger = 0x000100u;
inline constexpr std::uint32_t kPspRTrigger = 0x000200u;
inline constexpr std::uint32_t kPspTriangle = 0x001000u;
inline constexpr std::uint32_t kPspCircle = 0x002000u;
inline constexpr std::uint32_t kPspCross = 0x004000u;
inline constexpr std::uint32_t kPspSquare = 0x008000u;

inline std::uint8_t stick_to_psp(std::int16_t value, bool invert) noexcept {
    constexpr int kDeadZone = 7849;
    int magnitude = std::abs(static_cast<int>(value));
    if (magnitude <= kDeadZone) return 128u;
    magnitude = (magnitude - kDeadZone) * 32767 / (32767 - kDeadZone);
    int signed_value = value < 0 ? -magnitude : magnitude;
    if (invert) signed_value = -signed_value;
    return static_cast<std::uint8_t>(std::clamp(128 + signed_value * 127 / 32767, 0, 255));
}

enum class HostKey : std::uint8_t {
    None = 0,
    A, B, C, D, E, F, G, H, I, J, K, L, M,
    N, O, P, Q, R, S, T, U, V, W, X, Y, Z,
    Digit0, Digit1, Digit2, Digit3, Digit4,
    Digit5, Digit6, Digit7, Digit8, Digit9,
    F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12,
    Space, Enter, Escape, Tab, Backspace,
    LeftShift, RightShift, LeftCtrl, RightCtrl, LeftAlt, RightAlt,
    Up, Down, Left, Right,
    Numpad0, Numpad1, Numpad2, Numpad3, Numpad4,
    Numpad5, Numpad6, Numpad7, Numpad8, Numpad9,
    NumpadPlus, NumpadMinus,
    Delete, Insert, Home, End, PageUp, PageDown,
    Comma, Period, Minus, Equals,
    MouseLeft, MouseRight, MouseMiddle, Mouse4, Mouse5,
    WheelUp, WheelDown,
};

static_assert(static_cast<int>(HostKey::Z) - static_cast<int>(HostKey::A) == 25);
static_assert(static_cast<int>(HostKey::Digit9) - static_cast<int>(HostKey::Digit0) == 9);
static_assert(static_cast<int>(HostKey::F12) - static_cast<int>(HostKey::F1) == 11);
static_assert(static_cast<int>(HostKey::Numpad9) - static_cast<int>(HostKey::Numpad0) == 9);
static_assert(static_cast<int>(HostKey::Mouse5) - static_cast<int>(HostKey::MouseLeft) == 4);

enum class BindAction : std::uint8_t {
    MoveForward,
    MoveBack,
    MoveLeft,
    MoveRight,
    Walk,
    Sprint,
    Jump,
    EnterVehicle,
    Attack,
    Aim,
    CenterCamera,
    WeaponPrevious,
    WeaponNext,
    Up,
    Down,
    Pause,
    Camera,
    Handbrake,
    RadioWheel,
    Count,
};

enum class PadButton : std::uint8_t {
    A, B, X, Y,
    LeftShoulder, RightShoulder,
    LeftTrigger, RightTrigger,
    Start, Back,
    DpadUp, DpadDown, DpadLeft, DpadRight,
    LeftClick, RightClick,
    Count,
};

enum class StickRole : std::uint8_t { Move, Camera, None };

inline constexpr int kMaxKeysPerAction = 4;

struct ControlBindings {
    std::array<std::array<HostKey, kMaxKeysPerAction>,
               static_cast<std::size_t>(BindAction::Count)> keys{};
    std::array<std::uint8_t, static_cast<std::size_t>(BindAction::Count)> count{};
    std::array<std::array<BindAction, kMaxKeysPerAction>,
               static_cast<std::size_t>(PadButton::Count)> pad{};
    std::array<std::uint8_t, static_cast<std::size_t>(PadButton::Count)> pad_count{};
    StickRole left_stick{StickRole::Move};
    StickRole right_stick{StickRole::Camera};
};

struct KeyboardSample {
    std::uint32_t buttons{};
    int move_x{};
    int move_y{};
    bool accelerate{};
    bool brake{};
    int reach{127};
};

constexpr bool host_key_in(HostKey key, HostKey first, HostKey last) noexcept {
    const int id = static_cast<int>(key);
    return id >= static_cast<int>(first) && id <= static_cast<int>(last);
}

inline bool host_key_is_mouse(HostKey key) noexcept {
    return host_key_in(key, HostKey::MouseLeft, HostKey::Mouse5);
}

inline bool host_key_is_wheel(HostKey key) noexcept {
    return key == HostKey::WheelUp || key == HostKey::WheelDown;
}

inline std::size_t bind_index(BindAction action) noexcept {
    return static_cast<std::size_t>(action);
}

inline bool binding_has(const ControlBindings &bindings, BindAction action, HostKey key) noexcept {
    const std::size_t index = bind_index(action);
    for (std::uint8_t slot = 0; slot < bindings.count[index]; ++slot)
        if (bindings.keys[index][slot] == key) return true;
    return false;
}

inline const char *bind_action_name(BindAction action) noexcept {
    switch (action) {
    case BindAction::MoveForward: return "MoveForward";
    case BindAction::MoveBack: return "MoveBack";
    case BindAction::MoveLeft: return "MoveLeft";
    case BindAction::MoveRight: return "MoveRight";
    case BindAction::Walk: return "Walk";
    case BindAction::Sprint: return "Sprint";
    case BindAction::Jump: return "Jump";
    case BindAction::EnterVehicle: return "EnterVehicle";
    case BindAction::Attack: return "Attack";
    case BindAction::Aim: return "Aim";
    case BindAction::CenterCamera: return "CenterCamera";
    case BindAction::WeaponPrevious: return "WeaponPrevious";
    case BindAction::WeaponNext: return "WeaponNext";
    case BindAction::Up: return "Up";
    case BindAction::Down: return "Down";
    case BindAction::Pause: return "Pause";
    case BindAction::Camera: return "Camera";
    case BindAction::Handbrake: return "Handbrake";
    case BindAction::RadioWheel: return "RadioWheel";
    case BindAction::Count: return "";
    }
    return "";
}

inline std::uint32_t action_buttons(BindAction action, bool driving) noexcept {
    switch (action) {
    case BindAction::Sprint: return driving ? 0u : kPspCross;
    case BindAction::Jump: return kPspSquare;
    case BindAction::EnterVehicle: return kPspTriangle;
    case BindAction::Attack: return kPspCircle;
    case BindAction::Aim: return driving ? 0u : kPspRTrigger;
    case BindAction::CenterCamera: return kPspLTrigger;
    case BindAction::WeaponPrevious: return kPspLeft;
    case BindAction::WeaponNext: return kPspRight;
    case BindAction::Up: return kPspUp;
    case BindAction::Down: return kPspDown;
    case BindAction::Pause: return kPspStart;
    case BindAction::Camera: return kPspSelect;
    case BindAction::Handbrake: return driving ? kPspRTrigger : 0u;
    default: return 0u;
    }
}

inline ControlBindings default_control_bindings() {
    ControlBindings bindings;
    const auto add = [&](BindAction action, std::initializer_list<HostKey> keys) {
        auto &count = bindings.count[bind_index(action)];
        for (const HostKey key : keys) {
            if (count >= kMaxKeysPerAction) break;
            bindings.keys[bind_index(action)][count++] = key;
        }
    };
    add(BindAction::MoveForward, {HostKey::W});
    add(BindAction::MoveBack, {HostKey::S});
    add(BindAction::MoveLeft, {HostKey::A});
    add(BindAction::MoveRight, {HostKey::D});
    add(BindAction::Walk, {HostKey::LeftAlt});
    add(BindAction::Sprint, {HostKey::Space});
    add(BindAction::Jump, {HostKey::LeftShift, HostKey::RightShift});
    add(BindAction::EnterVehicle, {HostKey::F, HostKey::Enter});
    add(BindAction::Attack, {HostKey::MouseLeft});
    add(BindAction::Aim, {HostKey::MouseRight});
    add(BindAction::CenterCamera, {HostKey::H, HostKey::MouseMiddle});
    add(BindAction::WeaponPrevious, {HostKey::Q, HostKey::Left, HostKey::WheelUp});
    add(BindAction::WeaponNext, {HostKey::E, HostKey::Right, HostKey::WheelDown});
    add(BindAction::Up, {HostKey::Up});
    add(BindAction::Down, {HostKey::Down});
    add(BindAction::Pause, {HostKey::Escape});
    add(BindAction::Camera, {HostKey::V});
    add(BindAction::Handbrake, {HostKey::Space});
    add(BindAction::RadioWheel, {HostKey::Tab});
    const auto add_pad = [&](PadButton button, std::initializer_list<BindAction> actions) {
        auto &count = bindings.pad_count[static_cast<std::size_t>(button)];
        for (const BindAction action : actions) {
            if (count >= kMaxKeysPerAction) break;
            bindings.pad[static_cast<std::size_t>(button)][count++] = action;
        }
    };
    add_pad(PadButton::A, {BindAction::Sprint});
    add_pad(PadButton::B, {BindAction::Attack});
    add_pad(PadButton::X, {BindAction::Jump});
    add_pad(PadButton::Y, {BindAction::EnterVehicle});
    add_pad(PadButton::LeftShoulder, {BindAction::CenterCamera});
    add_pad(PadButton::RightShoulder, {BindAction::Aim});
    add_pad(PadButton::LeftTrigger, {BindAction::MoveBack, BindAction::CenterCamera});
    add_pad(PadButton::RightTrigger, {BindAction::MoveForward, BindAction::Aim});
    add_pad(PadButton::Start, {BindAction::Pause});
    add_pad(PadButton::Back, {BindAction::Camera});
    add_pad(PadButton::DpadUp, {BindAction::Up});
    add_pad(PadButton::DpadDown, {BindAction::Down});
    add_pad(PadButton::DpadLeft, {BindAction::WeaponPrevious});
    add_pad(PadButton::DpadRight, {BindAction::WeaponNext});
    add_pad(PadButton::LeftClick, {BindAction::Down});
    add_pad(PadButton::RightClick, {BindAction::RadioWheel});
    return bindings;
}

template <class IsDown>
bool action_held(const ControlBindings &bindings, BindAction action, IsDown &&is_down) {
    const std::size_t index = bind_index(action);
    for (std::uint8_t slot = 0; slot < bindings.count[index]; ++slot) {
        const HostKey key = bindings.keys[index][slot];
        if (host_key_is_wheel(key)) continue;
        if (is_down(key)) return true;
    }
    return false;
}

template <class IsDown>
KeyboardSample sample_keyboard(const ControlBindings &bindings, bool driving, IsDown &&is_down) {
    KeyboardSample sample;
    if (action_held(bindings, BindAction::MoveLeft, is_down)) sample.move_x -= 1;
    if (action_held(bindings, BindAction::MoveRight, is_down)) sample.move_x += 1;
    if (!driving) {
        if (action_held(bindings, BindAction::MoveForward, is_down)) sample.move_y -= 1;
        if (action_held(bindings, BindAction::MoveBack, is_down)) sample.move_y += 1;
    } else {
        if (action_held(bindings, BindAction::Up, is_down)) sample.move_y -= 1;
        if (action_held(bindings, BindAction::Down, is_down)) sample.move_y += 1;
    }
    sample.accelerate = action_held(bindings, BindAction::MoveForward, is_down);
    sample.brake = action_held(bindings, BindAction::MoveBack, is_down);
    sample.reach = action_held(bindings, BindAction::Walk, is_down) ? 60 : 127;
    for (std::uint8_t index = 0; index < static_cast<std::uint8_t>(BindAction::Count); ++index) {
        const auto action = static_cast<BindAction>(index);
        if (action_held(bindings, action, is_down))
            sample.buttons |= action_buttons(action, driving);
    }
    return sample;
}

// The game's own menus, whatever the bindings say: WASD or the arrows move, Enter accepts, Escape or Backspace goes back. The menu
// has its own keys so that it can't be left unusable by a rebinding, and they don't reach it as their gameplay actions.
// A key held while a menu opens or closes does nothing until it's released: Escape opens the pause menu, and would
// otherwise go on to close it. Outside gameplay but with no menu open, as on the screen the game waits on at startup
// and in cutscenes, Enter still accepts.
class MenuKeyFilter {
public:
    template <class IsDown>
    KeyboardSample sample(const ControlBindings &bindings, bool driving, bool menu, bool gameplay, IsDown &&is_down) {
        const bool outside = menu || !gameplay;
        if (menu != was_menu_ || outside != was_outside_) {
            for (const HostKey key : kKeys) latched_[static_cast<std::size_t>(key)] = is_down(key);
            was_menu_ = menu;
            was_outside_ = outside;
        }
        for (const HostKey key : kKeys) {
            if (!is_down(key)) latched_[static_cast<std::size_t>(key)] = false;
        }
        const auto usable = [&](HostKey key) { return is_down(key) && !latched_[static_cast<std::size_t>(key)]; };
        KeyboardSample sample = sample_keyboard(bindings, driving, [&](HostKey key) {
            if (!is_filtered(key)) return is_down(key);
            if (menu || (outside && key == HostKey::Enter)) return false;
            return usable(key);
        });
        if (outside && usable(HostKey::Enter)) sample.buttons |= kPspCross;
        if (menu) {
            if (usable(HostKey::W) || usable(HostKey::Up)) sample.buttons |= kPspUp;
            if (usable(HostKey::S) || usable(HostKey::Down)) sample.buttons |= kPspDown;
            if (usable(HostKey::A) || usable(HostKey::Left)) sample.buttons |= kPspLeft;
            if (usable(HostKey::D) || usable(HostKey::Right)) sample.buttons |= kPspRight;
            if (usable(HostKey::Escape) || usable(HostKey::Backspace)) sample.buttons |= kPspCircle;
        }
        return sample;
    }

private:
    static constexpr std::array<HostKey, 12> kKeys = {HostKey::W, HostKey::A, HostKey::S, HostKey::D, HostKey::Up,
                                                      HostKey::Down, HostKey::Left, HostKey::Right, HostKey::Enter,
                                                      HostKey::Escape, HostKey::Backspace, HostKey::MouseLeft};
    static bool is_filtered(HostKey key) noexcept {
        return std::find(kKeys.begin(), kKeys.end(), key) != kKeys.end();
    }
    std::array<bool, 256> latched_{};
    bool was_menu_{false};
    bool was_outside_{false};
};

inline std::uint32_t binding_wheel_buttons(const ControlBindings &bindings, bool up,
                                           bool driving) noexcept {
    const HostKey token = up ? HostKey::WheelUp : HostKey::WheelDown;
    std::uint32_t buttons = 0u;
    for (std::uint8_t index = 0; index < static_cast<std::uint8_t>(BindAction::Count); ++index) {
        const auto action = static_cast<BindAction>(index);
        if (binding_has(bindings, action, token)) buttons |= action_buttons(action, driving);
    }
    return buttons;
}

inline std::string normalize_binding_token(std::string_view token) {
    std::string out;
    out.reserve(token.size());
    for (const unsigned char ch : token) {
        if (ch == ' ' || ch == '\t' || ch == '_' || ch == '-') continue;
        out.push_back(static_cast<char>(std::tolower(ch)));
    }
    return out;
}

inline bool lookup_bind_action(std::string_view name, BindAction &action) noexcept {
    struct Alias {
        const char *name;
        BindAction action;
    };
    static constexpr Alias kAliases[] = {
        {"moveforward", BindAction::MoveForward},
        {"forward", BindAction::MoveForward},
        {"moveback", BindAction::MoveBack},
        {"backward", BindAction::MoveBack},
        {"back", BindAction::MoveBack},
        {"moveleft", BindAction::MoveLeft},
        {"moveright", BindAction::MoveRight},
        {"walk", BindAction::Walk},
        {"sprint", BindAction::Sprint},
        {"run", BindAction::Sprint},
        {"jump", BindAction::Jump},
        {"entervehicle", BindAction::EnterVehicle},
        {"enterexit", BindAction::EnterVehicle},
        {"enter", BindAction::EnterVehicle},
        {"attack", BindAction::Attack},
        {"fire", BindAction::Attack},
        {"aim", BindAction::Aim},
        {"target", BindAction::Aim},
        {"centercamera", BindAction::CenterCamera},
        {"center", BindAction::CenterCamera},
        {"weaponprevious", BindAction::WeaponPrevious},
        {"weaponprev", BindAction::WeaponPrevious},
        {"previousweapon", BindAction::WeaponPrevious},
        {"prevweapon", BindAction::WeaponPrevious},
        {"weaponnext", BindAction::WeaponNext},
        {"nextweapon", BindAction::WeaponNext},
        {"up", BindAction::Up},
        {"dpadup", BindAction::Up},
        {"down", BindAction::Down},
        {"dpaddown", BindAction::Down},
        {"pause", BindAction::Pause},
        {"start", BindAction::Pause},
        {"camera", BindAction::Camera},
        {"select", BindAction::Camera},
        {"changecamera", BindAction::Camera},
        {"handbrake", BindAction::Handbrake},
        {"radiowheel", BindAction::RadioWheel},
    };
    for (const Alias &alias : kAliases) {
        if (name == alias.name) {
            action = alias.action;
            return true;
        }
    }
    return false;
}

inline bool lookup_host_key(std::string_view token, HostKey &key, HostKey &extra) noexcept {
    extra = HostKey::None;
    if (token == "shift") {
        key = HostKey::LeftShift;
        extra = HostKey::RightShift;
        return true;
    }
    if (token == "ctrl" || token == "control") {
        key = HostKey::LeftCtrl;
        extra = HostKey::RightCtrl;
        return true;
    }
    if (token == "alt") {
        key = HostKey::LeftAlt;
        extra = HostKey::RightAlt;
        return true;
    }
    if (token.size() == 1u) {
        const char ch = token[0];
        if (ch >= 'a' && ch <= 'z') {
            key = static_cast<HostKey>(static_cast<int>(HostKey::A) + (ch - 'a'));
            return true;
        }
        if (ch >= '0' && ch <= '9') {
            key = static_cast<HostKey>(static_cast<int>(HostKey::Digit0) + (ch - '0'));
            return true;
        }
    }
    if (token.size() >= 2u && token[0] == 'f') {
        int number = 0;
        bool digits = true;
        for (std::size_t index = 1u; index < token.size(); ++index) {
            const char ch = token[index];
            if (ch < '0' || ch > '9') digits = false;
            else number = number * 10 + (ch - '0');
        }
        if (digits && number >= 1 && number <= 12) {
            key = static_cast<HostKey>(static_cast<int>(HostKey::F1) + (number - 1));
            return true;
        }
    }
    const auto numpad = [&](std::string_view prefix) -> bool {
        if (!token.starts_with(prefix) || token.size() != prefix.size() + 1u) return false;
        const char digit = token.back();
        if (digit < '0' || digit > '9') return false;
        key = static_cast<HostKey>(static_cast<int>(HostKey::Numpad0) + (digit - '0'));
        return true;
    };
    if (numpad("numpad") || numpad("kp") || numpad("num")) return true;

    struct Named { const char *name; HostKey key; };
    static constexpr Named kNamed[] = {
        {"space", HostKey::Space},
        {"enter", HostKey::Enter},
        {"return", HostKey::Enter},
        {"escape", HostKey::Escape},
        {"esc", HostKey::Escape},
        {"tab", HostKey::Tab},
        {"backspace", HostKey::Backspace},
        {"leftshift", HostKey::LeftShift},
        {"lshift", HostKey::LeftShift},
        {"rightshift", HostKey::RightShift},
        {"rshift", HostKey::RightShift},
        {"leftctrl", HostKey::LeftCtrl},
        {"lctrl", HostKey::LeftCtrl},
        {"leftcontrol", HostKey::LeftCtrl},
        {"rightctrl", HostKey::RightCtrl},
        {"rctrl", HostKey::RightCtrl},
        {"rightcontrol", HostKey::RightCtrl},
        {"leftalt", HostKey::LeftAlt},
        {"lalt", HostKey::LeftAlt},
        {"rightalt", HostKey::RightAlt},
        {"ralt", HostKey::RightAlt},
        {"up", HostKey::Up},
        {"arrowup", HostKey::Up},
        {"down", HostKey::Down},
        {"arrowdown", HostKey::Down},
        {"left", HostKey::Left},
        {"arrowleft", HostKey::Left},
        {"right", HostKey::Right},
        {"arrowright", HostKey::Right},
        {"numpadplus", HostKey::NumpadPlus},
        {"kpplus", HostKey::NumpadPlus},
        {"numpadminus", HostKey::NumpadMinus},
        {"kpminus", HostKey::NumpadMinus},
        {"delete", HostKey::Delete},
        {"del", HostKey::Delete},
        {"insert", HostKey::Insert},
        {"ins", HostKey::Insert},
        {"home", HostKey::Home},
        {"end", HostKey::End},
        {"pageup", HostKey::PageUp},
        {"pgup", HostKey::PageUp},
        {"pagedown", HostKey::PageDown},
        {"pgdn", HostKey::PageDown},
        {"comma", HostKey::Comma},
        {"period", HostKey::Period},
        {"minus", HostKey::Minus},
        {"equals", HostKey::Equals},
        {"equal", HostKey::Equals},
        {"mouseleft", HostKey::MouseLeft},
        {"leftmouse", HostKey::MouseLeft},
        {"mouse1", HostKey::MouseLeft},
        {"lmb", HostKey::MouseLeft},
        {"mouseright", HostKey::MouseRight},
        {"rightmouse", HostKey::MouseRight},
        {"mouse2", HostKey::MouseRight},
        {"rmb", HostKey::MouseRight},
        {"mousemiddle", HostKey::MouseMiddle},
        {"middlemouse", HostKey::MouseMiddle},
        {"mouse3", HostKey::MouseMiddle},
        {"mmb", HostKey::MouseMiddle},
        {"mouse4", HostKey::Mouse4},
        {"mouse5", HostKey::Mouse5},
        {"wheelup", HostKey::WheelUp},
        {"wheeldown", HostKey::WheelDown},
    };
    for (const Named &named : kNamed) {
        if (token == named.name) {
            key = named.key;
            return true;
        }
    }
    return false;
}

inline bool binding_token_clears(std::string_view token) noexcept {
    return token == "none" || token == "clear" || token == "unbound";
}

inline bool apply_control_binding(ControlBindings &bindings, std::string_view action_key,
                                  std::string_view value, std::string &warning) {
    warning.clear();
    BindAction action{};
    if (!lookup_bind_action(normalize_binding_token(action_key), action)) return false;

    HostKey parsed[kMaxKeysPerAction]{};
    std::uint8_t parsed_count = 0u;
    bool clear = false;
    bool overflow = false;
    bool reserved = false;
    bool unknown = false;
    std::string unknown_token;
    std::size_t token_count = 0u;

    std::size_t start = 0u;
    const std::string raw(value);
    while (start <= raw.size()) {
        const std::size_t comma = raw.find(',', start);
        const std::string_view piece = std::string_view(raw).substr(
            start, comma == std::string::npos ? std::string_view::npos : comma - start);
        start = comma == std::string::npos ? raw.size() + 1u : comma + 1u;
        const std::string token = normalize_binding_token(piece);
        if (token.empty()) continue;
        ++token_count;
        if (binding_token_clears(token)) {
            clear = true;
            continue;
        }
        HostKey key = HostKey::None;
        HostKey extra = HostKey::None;
        if (!lookup_host_key(token, key, extra)) {
            unknown = true;
            if (unknown_token.empty()) unknown_token = token;
            continue;
        }
        const HostKey keys[] = {key, extra};
        for (const HostKey item : keys) {
            if (item == HostKey::None) continue;
            if (item == HostKey::F10 || item == HostKey::F11) {
                reserved = true;
                continue;
            }
            bool duplicate = false;
            for (std::uint8_t slot = 0; slot < parsed_count; ++slot)
                if (parsed[slot] == item) duplicate = true;
            if (duplicate) continue;
            if (parsed_count >= kMaxKeysPerAction) {
                overflow = true;
                continue;
            }
            parsed[parsed_count++] = item;
        }
    }

    const char *name = bind_action_name(action);
    if (token_count == 0u || (clear && parsed_count == 0u && !unknown && !reserved)) {
        bindings.count[bind_index(action)] = 0u;
        return true;
    }
    if (parsed_count == 0u) {
        warning = std::string(name) + " was left unchanged";
        if (reserved) warning += "; F10 opens host settings and F11 toggles fullscreen";
        if (unknown) warning += "; ignores '" + unknown_token + "'";
        return true;
    }
    bindings.count[bind_index(action)] = parsed_count;
    for (std::uint8_t slot = 0; slot < kMaxKeysPerAction; ++slot)
        bindings.keys[bind_index(action)][slot] =
            slot < parsed_count ? parsed[slot] : HostKey::None;
    if (reserved || unknown || overflow || clear) {
        warning = name;
        if (reserved) warning += " ignores F10 and F11";
        if (unknown) warning += " ignores '" + unknown_token + "'";
        if (overflow) warning += " keeps the first 4 keys";
        if (clear) warning += " ignores None beside other keys";
    }
    return true;
}

struct PadSample {
    std::uint32_t buttons{};
    bool accelerate{};
    bool brake{};
};

struct StickReading {
    bool move{};
    std::uint8_t move_x{128};
    std::uint8_t move_y{128};
    bool camera{};
    int camera_x{};
    int camera_y{};
};

inline bool pad_button_is_trigger(PadButton button) noexcept {
    return button == PadButton::LeftTrigger || button == PadButton::RightTrigger;
}

inline std::uint32_t pad_action_buttons(BindAction action) noexcept {
    if (action == BindAction::Handbrake) return kPspRTrigger;
    return action_buttons(action, false);
}

inline bool pad_has(const ControlBindings &bindings, PadButton button, BindAction action) noexcept {
    const std::size_t index = static_cast<std::size_t>(button);
    for (std::uint8_t slot = 0; slot < bindings.pad_count[index]; ++slot)
        if (bindings.pad[index][slot] == action) return true;
    return false;
}

template <class IsDown>
PadSample sample_pad(const ControlBindings &bindings, bool driving, IsDown &&is_down) {
    PadSample sample;
    for (std::uint8_t index = 0; index < static_cast<std::uint8_t>(PadButton::Count); ++index) {
        const auto button = static_cast<PadButton>(index);
        if (!is_down(button)) continue;
        const bool trigger = pad_button_is_trigger(button);
        for (std::uint8_t slot = 0; slot < bindings.pad_count[index]; ++slot) {
            const BindAction action = bindings.pad[index][slot];
            if (action == BindAction::MoveForward) sample.accelerate = true;
            else if (action == BindAction::MoveBack) sample.brake = true;
            else if (!trigger || !driving) sample.buttons |= pad_action_buttons(action);
        }
    }
    return sample;
}

inline StickReading interpret_stick(StickRole role, std::int16_t raw_x, std::int16_t raw_y,
                                    bool y_positive_up, bool invert_camera_y) noexcept {
    StickReading reading;
    if (role == StickRole::Move) {
        reading.move_x = stick_to_psp(raw_x, false);
        reading.move_y = stick_to_psp(raw_y, y_positive_up);
        reading.move = reading.move_x != 128u || reading.move_y != 128u;
    } else if (role == StickRole::Camera) {
        reading.camera_x = std::clamp(static_cast<int>(stick_to_psp(raw_x, false)) - 128, -127, 127);
        int camera_y = static_cast<int>(stick_to_psp(raw_y, !y_positive_up)) - 128;
        if (invert_camera_y) camera_y = -camera_y;
        reading.camera_y = std::clamp(camera_y, -127, 127);
        reading.camera = reading.camera_x != 0 || reading.camera_y != 0;
    }
    return reading;
}

inline const char *pad_button_name(PadButton button) noexcept {
    switch (button) {
    case PadButton::A: return "PadA";
    case PadButton::B: return "PadB";
    case PadButton::X: return "PadX";
    case PadButton::Y: return "PadY";
    case PadButton::LeftShoulder: return "PadLeftShoulder";
    case PadButton::RightShoulder: return "PadRightShoulder";
    case PadButton::LeftTrigger: return "PadLeftTrigger";
    case PadButton::RightTrigger: return "PadRightTrigger";
    case PadButton::Start: return "PadStart";
    case PadButton::Back: return "PadBack";
    case PadButton::DpadUp: return "PadDpadUp";
    case PadButton::DpadDown: return "PadDpadDown";
    case PadButton::DpadLeft: return "PadDpadLeft";
    case PadButton::DpadRight: return "PadDpadRight";
    case PadButton::LeftClick: return "PadLeftStickClick";
    case PadButton::RightClick: return "PadRightStickClick";
    case PadButton::Count: return "";
    }
    return "";
}

inline bool lookup_pad_button(std::string_view name, PadButton &button) noexcept {
    struct Alias {
        const char *name;
        PadButton button;
    };
    static constexpr Alias kAliases[] = {
        {"pada", PadButton::A},
        {"cross", PadButton::A},
        {"south", PadButton::A},
        {"padb", PadButton::B},
        {"circle", PadButton::B},
        {"east", PadButton::B},
        {"padx", PadButton::X},
        {"square", PadButton::X},
        {"west", PadButton::X},
        {"pady", PadButton::Y},
        {"triangle", PadButton::Y},
        {"north", PadButton::Y},
        {"padleftshoulder", PadButton::LeftShoulder},
        {"lb", PadButton::LeftShoulder},
        {"l1", PadButton::LeftShoulder},
        {"padrightshoulder", PadButton::RightShoulder},
        {"rb", PadButton::RightShoulder},
        {"r1", PadButton::RightShoulder},
        {"padlefttrigger", PadButton::LeftTrigger},
        {"lt", PadButton::LeftTrigger},
        {"l2", PadButton::LeftTrigger},
        {"padrighttrigger", PadButton::RightTrigger},
        {"rt", PadButton::RightTrigger},
        {"r2", PadButton::RightTrigger},
        {"padstart", PadButton::Start},
        {"options", PadButton::Start},
        {"padback", PadButton::Back},
        {"share", PadButton::Back},
        {"create", PadButton::Back},
        {"paddpadup", PadButton::DpadUp},
        {"paddpaddown", PadButton::DpadDown},
        {"paddpadleft", PadButton::DpadLeft},
        {"paddpadright", PadButton::DpadRight},
        {"padleftstickclick", PadButton::LeftClick},
        {"l3", PadButton::LeftClick},
        {"padrightstickclick", PadButton::RightClick},
        {"r3", PadButton::RightClick},
    };
    for (const Alias &alias : kAliases) {
        if (name == alias.name) {
            button = alias.button;
            return true;
        }
    }
    return false;
}

inline bool apply_pad_binding(ControlBindings &bindings, std::string_view button_key,
                              std::string_view value, std::string &warning) {
    warning.clear();
    PadButton button{};
    if (!lookup_pad_button(normalize_binding_token(button_key), button)) return false;

    BindAction parsed[kMaxKeysPerAction]{};
    std::uint8_t parsed_count = 0u;
    bool clear = false;
    bool overflow = false;
    bool unknown = false;
    std::string unknown_token;
    std::size_t token_count = 0u;
    const std::string raw(value);
    std::size_t start = 0u;
    while (start <= raw.size()) {
        const std::size_t comma = raw.find(',', start);
        const std::string_view piece = std::string_view(raw).substr(
            start, comma == std::string::npos ? std::string_view::npos : comma - start);
        start = comma == std::string::npos ? raw.size() + 1u : comma + 1u;
        const std::string token = normalize_binding_token(piece);
        if (token.empty()) continue;
        ++token_count;
        if (binding_token_clears(token)) {
            clear = true;
            continue;
        }
        BindAction action{};
        if (!lookup_bind_action(token, action)) {
            unknown = true;
            if (unknown_token.empty()) unknown_token = token;
            continue;
        }
        bool duplicate = false;
        for (std::uint8_t slot = 0; slot < parsed_count; ++slot)
            if (parsed[slot] == action) duplicate = true;
        if (duplicate) continue;
        if (parsed_count >= kMaxKeysPerAction) {
            overflow = true;
            continue;
        }
        parsed[parsed_count++] = action;
    }

    const char *name = pad_button_name(button);
    const std::size_t index = static_cast<std::size_t>(button);
    if (token_count == 0u || (clear && parsed_count == 0u && !unknown)) {
        bindings.pad_count[index] = 0u;
        return true;
    }
    if (parsed_count == 0u) {
        warning = std::string(name) + " was left unchanged";
        if (unknown) warning += "; ignores '" + unknown_token + "'";
        return true;
    }
    bindings.pad_count[index] = parsed_count;
    for (std::uint8_t slot = 0; slot < kMaxKeysPerAction; ++slot)
        bindings.pad[index][slot] = slot < parsed_count ? parsed[slot] : BindAction::MoveForward;
    if (unknown || overflow || clear) {
        warning = name;
        if (unknown) warning += " ignores '" + unknown_token + "'";
        if (overflow) warning += " keeps the first 4 actions";
        if (clear) warning += " ignores None beside other actions";
    }
    return true;
}

inline bool apply_stick_binding(ControlBindings &bindings, std::string_view stick_key,
                                std::string_view value, std::string &warning) {
    warning.clear();
    const std::string name = normalize_binding_token(stick_key);
    const bool left = name == "leftstick";
    if (!left && name != "rightstick") return false;
    const std::string role_name = normalize_binding_token(value);
    StickRole role = StickRole::None;
    if (role_name.empty() || binding_token_clears(role_name)) role = StickRole::None;
    else if (role_name == "move" || role_name == "movement") role = StickRole::Move;
    else if (role_name == "camera" || role_name == "look") role = StickRole::Camera;
    else {
        warning = std::string(left ? "LeftStick" : "RightStick") + " expects Move, Camera, or None";
        return true;
    }
    if (left) bindings.left_stick = role;
    else bindings.right_stick = role;
    return true;
}

}  // namespace lcs
