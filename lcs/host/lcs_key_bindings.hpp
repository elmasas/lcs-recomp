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

inline constexpr std::size_t kHostKeyCount = static_cast<std::size_t>(HostKey::WheelDown) + 1u;

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
    // In a vehicle: look out of the side window, for drive-by shooting with
    // Attack. On foot they do nothing, so the same keys can cycle weapons.
    LookLeft,
    LookRight,
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
    bool look_left{};
    bool look_right{};
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
    case BindAction::LookLeft: return "LookLeft";
    case BindAction::LookRight: return "LookRight";
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
    add(BindAction::LookLeft, {HostKey::Q});
    add(BindAction::LookRight, {HostKey::E});
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

// action_held() without the keys that are also bound to `skip_a` or `skip_b`.
template <class IsDown>
bool action_held_except(const ControlBindings &bindings, BindAction action, BindAction skip_a,
                        BindAction skip_b, IsDown &&is_down) {
    const std::size_t index = bind_index(action);
    for (std::uint8_t slot = 0; slot < bindings.count[index]; ++slot) {
        const HostKey key = bindings.keys[index][slot];
        if (host_key_is_wheel(key)) continue;
        if (binding_has(bindings, skip_a, key) || binding_has(bindings, skip_b, key)) continue;
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
    if (driving) {
        sample.look_left = action_held(bindings, BindAction::LookLeft, is_down);
        sample.look_right = action_held(bindings, BindAction::LookRight, is_down);
    }
    for (std::uint8_t index = 0; index < static_cast<std::uint8_t>(BindAction::Count); ++index) {
        const auto action = static_cast<BindAction>(index);
        // In a vehicle the look keys only look: Q and E share their keys with
        // the radio (weapon previous/next) by default.
        const bool radio = action == BindAction::WeaponPrevious || action == BindAction::WeaponNext;
        const bool held = driving && radio
            ? action_held_except(bindings, action, BindAction::LookLeft, BindAction::LookRight, is_down)
            : action_held(bindings, action, is_down);
        if (held) sample.buttons |= action_buttons(action, driving);
    }
    return sample;
}

// Outside gameplay (title screen, menus, intro movies, cutscenes) the game
// confirms and skips with Cross. On keyboard Cross only came from Sprint, so
// rebinding Sprint left Enter and Space unable to skip or select anything.
// These keys always drive menus, whatever [Controls] says.
struct MenuKey {
    HostKey key;
    std::uint32_t buttons;
};
inline constexpr MenuKey kMenuKeys[] = {
    {HostKey::Enter, kPspCross},     {HostKey::Space, kPspCross},
    {HostKey::Backspace, kPspCircle}, {HostKey::Escape, kPspStart},
    {HostKey::Up, kPspUp},           {HostKey::Down, kPspDown},
    {HostKey::Left, kPspLeft},       {HostKey::Right, kPspRight},
};

inline bool is_menu_key(HostKey key) noexcept {
    for (const MenuKey &entry : kMenuKeys)
        if (entry.key == key) return true;
    return false;
}

// The bindings with the fixed menu keys taken out, so Enter cannot also send
// Triangle (EnterVehicle) while it confirms a menu. Every other key keeps its
// binding, so a rebound Attack still backs out and WASD still navigates.
inline ControlBindings menu_bindings(const ControlBindings &bindings) noexcept {
    ControlBindings menu = bindings;
    for (std::size_t action = 0; action < menu.keys.size(); ++action) {
        std::uint8_t kept = 0u;
        for (std::uint8_t slot = 0; slot < menu.count[action] && slot < kMaxKeysPerAction; ++slot)
            if (!is_menu_key(menu.keys[action][slot]))
                menu.keys[action][kept++] = menu.keys[action][slot];
        for (std::uint8_t slot = kept; slot < kMaxKeysPerAction; ++slot)
            menu.keys[action][slot] = HostKey::None;
        menu.count[action] = kept;
    }
    return menu;
}

// The bindings with every mouse button taken out; in the pause menu the mouse
// points and clicks instead (display_window*.cpp).
inline ControlBindings bindings_without_mouse(const ControlBindings &bindings) noexcept {
    ControlBindings keys = bindings;
    for (std::size_t action = 0; action < keys.keys.size(); ++action) {
        std::uint8_t kept = 0u;
        for (std::uint8_t slot = 0; slot < keys.count[action] && slot < kMaxKeysPerAction; ++slot)
            if (!host_key_is_mouse(keys.keys[action][slot]) && !host_key_is_wheel(keys.keys[action][slot]))
                keys.keys[action][kept++] = keys.keys[action][slot];
        for (std::uint8_t slot = kept; slot < kMaxKeysPerAction; ++slot) keys.keys[action][slot] = HostKey::None;
        keys.count[action] = kept;
    }
    return keys;
}

// Keyboard sample for menus: the user's bindings plus the fixed menu keys.
template <class IsDown>
KeyboardSample sample_menu_keyboard(const ControlBindings &bindings, IsDown &&is_down) {
    KeyboardSample sample = sample_keyboard(menu_bindings(bindings), false, is_down);
    for (const MenuKey &entry : kMenuKeys)
        if (is_down(entry.key)) sample.buttons |= entry.buttons;
    return sample;
}

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
        {"lookleft", BindAction::LookLeft},
        {"lookright", BindAction::LookRight},
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

// The [Controls] name of a key; lookup_host_key() reads it back.
inline std::string host_key_ini_name(HostKey key) {
    const int id = static_cast<int>(key);
    if (host_key_in(key, HostKey::A, HostKey::Z))
        return std::string(1, static_cast<char>('A' + (id - static_cast<int>(HostKey::A))));
    if (host_key_in(key, HostKey::Digit0, HostKey::Digit9))
        return std::string(1, static_cast<char>('0' + (id - static_cast<int>(HostKey::Digit0))));
    if (host_key_in(key, HostKey::F1, HostKey::F12))
        return "F" + std::to_string(id - static_cast<int>(HostKey::F1) + 1);
    if (host_key_in(key, HostKey::Numpad0, HostKey::Numpad9))
        return "Numpad" + std::to_string(id - static_cast<int>(HostKey::Numpad0));
    switch (key) {
    case HostKey::Space: return "Space";
    case HostKey::Enter: return "Enter";
    case HostKey::Escape: return "Escape";
    case HostKey::Tab: return "Tab";
    case HostKey::Backspace: return "Backspace";
    case HostKey::LeftShift: return "LeftShift";
    case HostKey::RightShift: return "RightShift";
    case HostKey::LeftCtrl: return "LeftCtrl";
    case HostKey::RightCtrl: return "RightCtrl";
    case HostKey::LeftAlt: return "LeftAlt";
    case HostKey::RightAlt: return "RightAlt";
    case HostKey::Up: return "Up";
    case HostKey::Down: return "Down";
    case HostKey::Left: return "Left";
    case HostKey::Right: return "Right";
    case HostKey::NumpadPlus: return "NumpadPlus";
    case HostKey::NumpadMinus: return "NumpadMinus";
    case HostKey::Delete: return "Delete";
    case HostKey::Insert: return "Insert";
    case HostKey::Home: return "Home";
    case HostKey::End: return "End";
    case HostKey::PageUp: return "PageUp";
    case HostKey::PageDown: return "PageDown";
    case HostKey::Comma: return "Comma";
    case HostKey::Period: return "Period";
    case HostKey::Minus: return "Minus";
    case HostKey::Equals: return "Equals";
    case HostKey::MouseLeft: return "MouseLeft";
    case HostKey::MouseRight: return "MouseRight";
    case HostKey::MouseMiddle: return "MouseMiddle";
    case HostKey::Mouse4: return "Mouse4";
    case HostKey::Mouse5: return "Mouse5";
    case HostKey::WheelUp: return "WheelUp";
    case HostKey::WheelDown: return "WheelDown";
    default: return "None";
    }
}

// A short upper-case name for the pause menu. The game's font has letters,
// digits, spaces and a little punctuation, so symbols are spelled out.
inline std::string host_key_menu_name(HostKey key) {
    switch (key) {
    case HostKey::LeftShift: return "LSHIFT";
    case HostKey::RightShift: return "RSHIFT";
    case HostKey::LeftCtrl: return "LCTRL";
    case HostKey::RightCtrl: return "RCTRL";
    case HostKey::LeftAlt: return "LALT";
    case HostKey::RightAlt: return "RALT";
    case HostKey::Escape: return "ESC";
    case HostKey::NumpadPlus: return "NUM PLUS";
    case HostKey::NumpadMinus: return "NUM MINUS";
    case HostKey::PageUp: return "PAGE UP";
    case HostKey::PageDown: return "PAGE DOWN";
    case HostKey::MouseLeft: return "LEFT MOUSE";
    case HostKey::MouseRight: return "RIGHT MOUSE";
    case HostKey::MouseMiddle: return "MIDDLE MOUSE";
    case HostKey::Mouse4: return "MOUSE 4";
    case HostKey::Mouse5: return "MOUSE 5";
    case HostKey::WheelUp: return "WHEEL UP";
    case HostKey::WheelDown: return "WHEEL DOWN";
    default: break;
    }
    if (host_key_in(key, HostKey::Numpad0, HostKey::Numpad9))
        return "NUM " + std::to_string(static_cast<int>(key) - static_cast<int>(HostKey::Numpad0));
    std::string name = host_key_ini_name(key);
    for (char &ch : name) ch = static_cast<char>(std::toupper(static_cast<unsigned char>(ch)));
    return name;
}

// What each action does, for the pause menu's KEYBOARD AND MOUSE screen.
inline const char *bind_action_menu_name(BindAction action) noexcept {
    switch (action) {
    case BindAction::MoveForward: return "FORWARD/ACCELERATE";
    case BindAction::MoveBack: return "BACK/BRAKE";
    case BindAction::MoveLeft: return "LEFT";
    case BindAction::MoveRight: return "RIGHT";
    case BindAction::Walk: return "WALK";
    case BindAction::Sprint: return "SPRINT";
    case BindAction::Jump: return "JUMP";
    case BindAction::EnterVehicle: return "ENTER/EXIT VEHICLE";
    case BindAction::Attack: return "ATTACK";
    case BindAction::Aim: return "AIM";
    case BindAction::CenterCamera: return "CENTER CAMERA";
    case BindAction::WeaponPrevious: return "PREVIOUS WEAPON";
    case BindAction::WeaponNext: return "NEXT WEAPON";
    case BindAction::Up: return "SPECIAL MISSION";
    case BindAction::Down: return "HORN";
    case BindAction::Pause: return "PAUSE";
    case BindAction::Camera: return "CHANGE CAMERA";
    case BindAction::Handbrake: return "HANDBRAKE";
    case BindAction::LookLeft: return "VEHICLE LOOK LEFT";
    case BindAction::LookRight: return "VEHICLE LOOK RIGHT";
    case BindAction::Count: return "";
    }
    return "";
}

// The [Controls] value for one action, e.g. "LeftShift,RightShift" or "None".
inline std::string binding_ini_value(const ControlBindings &bindings, BindAction action) {
    const std::size_t index = bind_index(action);
    std::string value;
    for (std::uint8_t slot = 0; slot < bindings.count[index] && slot < kMaxKeysPerAction; ++slot) {
        if (bindings.keys[index][slot] == HostKey::None) continue;
        if (!value.empty()) value += ',';
        value += host_key_ini_name(bindings.keys[index][slot]);
    }
    return value.empty() ? "None" : value;
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
