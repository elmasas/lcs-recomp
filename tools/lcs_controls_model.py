"""Read and write the [Controls] section of LCSNative.ini.

Action names, pad buttons and key tokens match the runtime parser in
lcs/host/lcs_key_bindings.hpp. Defaults come from default_control_bindings()
in the same header. Writes are surgical: comments, line order and other
sections stay as they were.

UI labels are English. Callers that show them in the launcher should pass them
through i18n.t() so Russian (and later locales) can overlay the same keys.
"""

from __future__ import annotations

import re
from pathlib import Path

from i18n import t

MAX_PER_BINDING = 4  # kMaxKeysPerAction

ACTIONS = (
    "MoveForward", "MoveBack", "MoveLeft", "MoveRight", "Walk", "Sprint",
    "Jump", "EnterVehicle", "Attack", "Aim", "CenterCamera",
    "WeaponPrevious", "WeaponNext", "Up", "Down", "Pause", "Camera", "Handbrake",
)

# English UI labels: action name, on foot, in vehicle.
ACTION_LABELS = {
    "MoveForward": ("Forward", "walk", "accelerate"),
    "MoveBack": ("Back", "walk back", "brake"),
    "MoveLeft": ("Left", "movement", "steer"),
    "MoveRight": ("Right", "movement", "steer"),
    "Walk": ("Walk", "short steps", "—"),
    "Sprint": ("Sprint", "run", "not sent"),
    "Jump": ("Jump", "jump", "brake"),
    "EnterVehicle": ("Enter / exit", "vehicle", "vehicle"),
    "Attack": ("Attack", "fire", "fire"),
    "Aim": ("Aim", "aim", "not sent"),
    "CenterCamera": ("Camera behind", "and pick up weapon", "pick up weapon"),
    "WeaponPrevious": ("Previous weapon", "weapon", "radio"),
    "WeaponNext": ("Next weapon", "weapon", "radio"),
    "Up": ("Up", "side mission", "pitch up"),
    "Down": ("Down", "horn cue", "horn, pitch down"),
    "Pause": ("Pause", "pause", "pause"),
    "Camera": ("Change camera", "camera", "camera"),
    "Handbrake": ("Handbrake", "—", "handbrake"),
}

# Pad ini keys (Xbox names) and display: Xbox, PlayStation, on-foot role.
PAD_BUTTONS = (
    "PadA", "PadB", "PadX", "PadY",
    "PadLeftShoulder", "PadRightShoulder", "PadLeftTrigger", "PadRightTrigger",
    "PadStart", "PadBack",
    "PadDpadUp", "PadDpadDown", "PadDpadLeft", "PadDpadRight",
    "PadLeftStickClick", "PadRightStickClick",
)

PAD_LABELS = {
    "PadA": ("A", "Cross", "sprint"),
    "PadB": ("B", "Circle", "attack"),
    "PadX": ("X", "Square", "jump"),
    "PadY": ("Y", "Triangle", "vehicle"),
    "PadLeftShoulder": ("LB", "L1", "camera"),
    "PadRightShoulder": ("RB", "R1", "aim"),
    "PadLeftTrigger": ("LT", "L2", "brake"),
    "PadRightTrigger": ("RT", "R2", "accelerate"),
    "PadStart": ("Menu", "Start", "pause"),
    "PadBack": ("View", "Create", "camera"),
    "PadDpadUp": ("D-pad up", "D-pad up", "side mission"),
    "PadDpadDown": ("D-pad down", "D-pad down", "horn"),
    "PadDpadLeft": ("D-pad left", "D-pad left", "previous weapon"),
    "PadDpadRight": ("D-pad right", "D-pad right", "next weapon"),
    "PadLeftStickClick": ("LS", "L3", "horn"),
    "PadRightStickClick": ("RS", "R3", "nothing"),
}

# Token for button_icons.draw_pad().
PAD_ICON_TOKEN = {
    "PadA": "a", "PadB": "b", "PadX": "x", "PadY": "y",
    "PadLeftShoulder": "leftshoulder", "PadRightShoulder": "rightshoulder",
    "PadLeftTrigger": "lefttrigger", "PadRightTrigger": "righttrigger",
    "PadStart": "start", "PadBack": "back",
    "PadDpadUp": "dpup", "PadDpadDown": "dpdown",
    "PadDpadLeft": "dpleft", "PadDpadRight": "dpright",
    "PadLeftStickClick": "leftstick", "PadRightStickClick": "rightstick",
}

STICK_ROLES = ("Move", "Camera", "None")

DEFAULT_KEYS = {
    "MoveForward": ["W"],
    "MoveBack": ["S"],
    "MoveLeft": ["A"],
    "MoveRight": ["D"],
    "Walk": ["LeftAlt"],
    "Sprint": ["Space"],
    "Jump": ["LeftShift", "RightShift"],
    "EnterVehicle": ["F", "Enter"],
    "Attack": ["MouseLeft"],
    "Aim": ["MouseRight"],
    "CenterCamera": ["H", "MouseMiddle"],
    "WeaponPrevious": ["Q", "Left", "WheelUp"],
    "WeaponNext": ["E", "Right", "WheelDown"],
    "Up": ["Up"],
    "Down": ["Down"],
    "Pause": ["Escape"],
    "Camera": ["V"],
    "Handbrake": ["Space"],
}

DEFAULT_PAD = {
    "PadA": ["Sprint"],
    "PadB": ["Attack"],
    "PadX": ["Jump"],
    "PadY": ["EnterVehicle"],
    "PadLeftShoulder": ["CenterCamera"],
    "PadRightShoulder": ["Aim"],
    "PadLeftTrigger": ["MoveBack", "CenterCamera"],
    "PadRightTrigger": ["MoveForward", "Aim"],
    "PadStart": ["Pause"],
    "PadBack": ["Camera"],
    "PadDpadUp": ["Up"],
    "PadDpadDown": ["Down"],
    "PadDpadLeft": ["WeaponPrevious"],
    "PadDpadRight": ["WeaponNext"],
    "PadLeftStickClick": ["Down"],
    "PadRightStickClick": [],
}

DEFAULT_STICKS = {"LeftStick": "Move", "RightStick": "Camera"}

_CANONICAL_KEYS = (
    tuple(chr(letter) for letter in range(ord("A"), ord("Z") + 1))
    + tuple(str(digit) for digit in range(10))
    + tuple(f"F{number}" for number in range(1, 13))
    + (
        "Space", "Enter", "Escape", "Tab", "Backspace",
        "LeftShift", "RightShift", "LeftCtrl", "RightCtrl", "LeftAlt", "RightAlt",
        "Up", "Down", "Left", "Right",
        *(f"Numpad{digit}" for digit in range(10)),
        "NumpadPlus", "NumpadMinus",
        "Delete", "Insert", "Home", "End", "PageUp", "PageDown",
        "Comma", "Period", "Minus", "Equals",
        "MouseLeft", "MouseRight", "MouseMiddle", "Mouse4", "Mouse5",
        "WheelUp", "WheelDown",
    )
)

# Runtime aliases: normalized token -> canonical name.
_KEY_ALIASES = {
    "shift": "LeftShift", "lshift": "LeftShift", "leftshift": "LeftShift",
    "rshift": "RightShift", "rightshift": "RightShift",
    "ctrl": "LeftCtrl", "control": "LeftCtrl", "lctrl": "LeftCtrl",
    "leftctrl": "LeftCtrl", "leftcontrol": "LeftCtrl",
    "rctrl": "RightCtrl", "rightctrl": "RightCtrl", "rightcontrol": "RightCtrl",
    "alt": "LeftAlt", "lalt": "LeftAlt", "leftalt": "LeftAlt",
    "ralt": "RightAlt", "rightalt": "RightAlt",
    "return": "Enter", "esc": "Escape", "del": "Delete", "ins": "Insert",
    "arrowup": "Up", "arrowdown": "Down", "arrowleft": "Left", "arrowright": "Right",
    "pgup": "PageUp", "pgdn": "PageDown", "equal": "Equals",
    "kpplus": "NumpadPlus", "numpadplus": "NumpadPlus",
    "kpminus": "NumpadMinus", "numpadminus": "NumpadMinus",
    "lmb": "MouseLeft", "leftmouse": "MouseLeft", "mouse1": "MouseLeft",
    "rmb": "MouseRight", "rightmouse": "MouseRight", "mouse2": "MouseRight",
    "mmb": "MouseMiddle", "middlemouse": "MouseMiddle", "mouse3": "MouseMiddle",
    "mouse4": "Mouse4", "mouse5": "Mouse5",
    "wheelup": "WheelUp", "wheeldown": "WheelDown",
}

HOST_KEYS = frozenset(_CANONICAL_KEYS)

# English captions for key / mouse icons in the UI.
KEY_CAPTIONS = {
    "Space": "Space", "Enter": "Enter", "Escape": "Esc", "Tab": "Tab",
    "Backspace": "Bksp", "LeftShift": "Shift L", "RightShift": "Shift R",
    "LeftCtrl": "Ctrl L", "RightCtrl": "Ctrl R", "LeftAlt": "Alt L",
    "RightAlt": "Alt R", "Up": "↑", "Down": "↓", "Left": "←", "Right": "→",
    "Delete": "Del", "Insert": "Ins", "Home": "Home", "End": "End",
    "PageUp": "PgUp", "PageDown": "PgDn", "Comma": ",", "Period": ".",
    "Minus": "-", "Equals": "=",
    "MouseLeft": "LMB", "MouseRight": "RMB", "MouseMiddle": "MMB",
    "Mouse4": "M4", "Mouse5": "M5", "WheelUp": "Wheel ↑", "WheelDown": "Wheel ↓",
}


def normalize(text: str) -> str:
    """Match the runtime: strip spaces, underscores and hyphens, lower-case."""
    return re.sub(r"[ \t_-]", "", text).lower()


def canonical_key_name(token: str) -> str | None:
    """Canonical key name as the launcher writes it, or None if unknown."""
    cleaned = token.strip()
    if not cleaned:
        return None
    lowered = normalize(cleaned)
    if lowered in _KEY_ALIASES:
        return _KEY_ALIASES[lowered]
    if len(lowered) == 1 and ("a" <= lowered <= "z" or lowered.isdigit()):
        return lowered.upper()
    if len(lowered) == 1:
        return {" ": "Space", ",": "Comma", ".": "Period", "-": "Minus", "=": "Equals"}.get(lowered)
    if re.fullmatch(r"f([1-9]|1[0-2])", lowered):
        return f"F{lowered[1:]}"
    numpad = re.fullmatch(r"(?:numpad|kp|num)([0-9])", lowered)
    if numpad:
        return f"Numpad{numpad.group(1)}"
    for name in _CANONICAL_KEYS:
        if normalize(name) == lowered:
            return name
    return None


def key_caption(name: str) -> str:
    """Localized caption for a key or mouse binding in the UI."""
    if name.startswith("Numpad"):
        return f"Numpad {name[6:]}"
    return t(KEY_CAPTIONS.get(name, name))


def action_labels(action: str) -> tuple[str, str, str]:
    """Localized (name, on foot, in vehicle) labels for an action."""
    name, on_foot, in_car = ACTION_LABELS[action]
    return t(name), t(on_foot), t(in_car)


def pad_labels(pad: str) -> tuple[str, str, str]:
    """Localized (Xbox, PlayStation, on-foot role) labels for a pad button."""
    xbox, playstation, role = PAD_LABELS[pad]
    return t(xbox), t(playstation), t(role)


class ControlsConfig:
    """[Controls] section: action keys, pad actions and stick roles."""

    def __init__(self, actions=None, pads=None, sticks=None):
        self.actions = {action: list((actions or DEFAULT_KEYS).get(action, [])) for action in ACTIONS}
        self.pads = {pad: list((pads or DEFAULT_PAD).get(pad, [])) for pad in PAD_BUTTONS}
        self.sticks = dict(sticks or DEFAULT_STICKS)

    def pad_buttons_for(self, action: str) -> list[str]:
        """Pad buttons that drive this action, in PAD_BUTTONS order."""
        return [pad for pad in PAD_BUTTONS if action in self.pads[pad]]

    def bind_key(self, action: str, name: str, slot: int | None = None) -> bool:
        if name not in HOST_KEYS:
            return False
        current = self.actions[action]
        if name in current:
            return True
        if len(current) >= MAX_PER_BINDING:
            return False
        if slot is None or not 0 <= slot <= len(current):
            current.append(name)
        else:
            current.insert(slot, name)
        return True

    def clear_key(self, action: str, name: str) -> None:
        if name in self.actions[action]:
            self.actions[action].remove(name)

    def toggle_pad(self, pad: str, action: str) -> bool:
        """Bind or unbind a pad button to an action. Returns the bound state."""
        if action in self.pads[pad]:
            self.pads[pad].remove(action)
        elif len(self.pads[pad]) < MAX_PER_BINDING:
            self.pads[pad].append(action)
        return action in self.pads[pad]

    def reset_defaults(self) -> None:
        self.actions = {action: list(DEFAULT_KEYS[action]) for action in ACTIONS}
        self.pads = {pad: list(DEFAULT_PAD[pad]) for pad in PAD_BUTTONS}
        self.sticks = dict(DEFAULT_STICKS)

    def ini_values(self) -> dict[str, str]:
        values = {action: ",".join(self.actions[action]) or "None" for action in ACTIONS}
        values.update({pad: ",".join(self.pads[pad]) or "None" for pad in PAD_BUTTONS})
        values.update({stick: self.sticks.get(stick, "None") for stick in ("LeftStick", "RightStick")})
        return values

    @classmethod
    def from_ini_values(cls, values: dict[str, str]) -> "ControlsConfig":
        actions, pads, sticks = {}, {}, {}
        for action in ACTIONS:
            raw = values.get(action, "")
            actions[action] = [name for name in (canonical_key_name(part) for part in raw.split(","))
                               if name] if raw.strip().lower() != "none" else []
        for pad in PAD_BUTTONS:
            raw = values.get(pad, "")
            pads[pad] = [] if raw.strip().lower() == "none" else [
                part.strip() for part in raw.split(",")
                if part.strip() in ACTIONS
            ]
        for stick in ("LeftStick", "RightStick"):
            value = values.get(stick, DEFAULT_STICKS[stick]).strip().capitalize()
            sticks[stick] = value if value in STICK_ROLES else DEFAULT_STICKS[stick]
        return cls(actions, pads, sticks)

    @classmethod
    def load(cls, ini_path: Path) -> "ControlsConfig":
        return cls.from_ini_values(read_controls(ini_path))

    def save(self, ini_path: Path) -> None:
        write_controls(ini_path, self.ini_values())


def read_controls(ini_path: Path) -> dict[str, str]:
    """Name=value pairs from the [Controls] section."""
    values: dict[str, str] = {}
    text = ini_path.read_text(encoding="utf-8")
    section = _section_range(text, "controls")
    if section is None:
        return values
    start, end = section
    for line in text.splitlines()[start:end]:
        stripped = line.strip()
        if not stripped or stripped.startswith(";") or "=" not in stripped:
            continue
        name, _, value = stripped.partition("=")
        values[name.strip()] = value.strip()
    return values


def write_controls(ini_path: Path, values: dict[str, str]) -> None:
    """Replace managed keys in [Controls] without touching comments or other sections."""
    text = ini_path.read_text(encoding="utf-8")
    section = _section_range(text, "controls")
    if section is None:
        raise ValueError(t("No [Controls] section in {path}", path=ini_path))
    start, end = section
    lines = text.splitlines(keepends=True)
    written: set[str] = set()
    for index in range(start, end):
        stripped = lines[index].strip()
        if not stripped or stripped.startswith(";") or "=" not in stripped:
            continue
        name = stripped.partition("=")[0].strip()
        if name in values and name not in written:
            ending = "\r\n" if lines[index].endswith("\r\n") else "\n"
            lines[index] = f"{name}={values[name]}{ending}"
            written.add(name)
    missing = [name for name in values if name not in written]
    if missing:
        ending = "\r\n" if lines[end - 1].endswith("\r\n") else "\n"
        inserted = [f"{name}={values[name]}{ending}" for name in missing]
        lines[end:end] = inserted
    ini_path.write_text("".join(lines), encoding="utf-8", newline="")


PROMPT_STYLES = ("original", "xbox", "kb")


def read_prompt_style(ini_path: Path) -> str:
    """Display.ButtonPrompts: original PlayStation glyphs, xbox, or kb."""
    if not ini_path.exists():
        return "original"
    values = read_section(ini_path, "display")
    raw = values.get("ButtonPrompts") or values.get("PromptStyle") or "original"
    style = raw.strip().lower()
    if style in ("psp", "playstation", "off", "none", ""):
        return "original"
    if style in ("keyboard", "keyboardmouse", "km", "kbm"):
        return "kb"
    return style if style in PROMPT_STYLES else "original"


def write_prompt_style(ini_path: Path, style: str) -> None:
    value = style if style in PROMPT_STYLES else "original"
    write_section_keys(ini_path, "Display", {"ButtonPrompts": value.capitalize() if value == "original" else value})


def read_section(ini_path: Path, section: str) -> dict[str, str]:
    values: dict[str, str] = {}
    text = ini_path.read_text(encoding="utf-8")
    span = _section_range(text, section)
    if span is None:
        return values
    start, end = span
    for line in text.splitlines()[start:end]:
        stripped = line.strip()
        if not stripped or stripped.startswith(";") or "=" not in stripped:
            continue
        name, _, value = stripped.partition("=")
        values[name.strip()] = value.strip()
    return values


def write_section_keys(ini_path: Path, section: str, values: dict[str, str]) -> None:
    text = ini_path.read_text(encoding="utf-8") if ini_path.exists() else ""
    span = _section_range(text, section)
    if span is None:
        ending = "\n"
        extra = [f"[{section}]{ending}"] + [f"{name}={values[name]}{ending}" for name in values]
        ini_path.write_text(text + ("" if not text or text.endswith(("\n", "\r\n")) else "\n") + "".join(extra),
                            encoding="utf-8", newline="")
        return
    start, end = span
    lines = text.splitlines(keepends=True)
    written: set[str] = set()
    for index in range(start, end):
        stripped = lines[index].strip()
        if not stripped or stripped.startswith(";") or "=" not in stripped:
            continue
        name = stripped.partition("=")[0].strip()
        if name in values and name not in written:
            ending = "\r\n" if lines[index].endswith("\r\n") else "\n"
            lines[index] = f"{name}={values[name]}{ending}"
            written.add(name)
    missing = [name for name in values if name not in written]
    if missing:
        ending = "\r\n" if lines[end - 1].endswith("\r\n") else "\n"
        lines[end:end] = [f"{name}={values[name]}{ending}" for name in missing]
    ini_path.write_text("".join(lines), encoding="utf-8", newline="")


def _section_range(text: str, section: str = "controls") -> tuple[int, int] | None:
    """Line range of `[section]`: from the header up to the next section."""
    wanted = f"[{section.lower()}]"
    lines = text.splitlines()
    start = None
    for number, line in enumerate(lines):
        stripped = line.strip().lower()
        if stripped == wanted:
            start = number
        elif start is not None and stripped.startswith("[") and stripped.endswith("]"):
            return start, number
    return (start, len(lines)) if start is not None else None
