"""Чтение и запись секции [Controls] в LCSNative.ini.

Имена действий, кнопок геймпада и клавиш соответствуют парсеру рантайма
(lcs/host/lcs_key_bindings.hpp), а значения по умолчанию взяты из
default_control_bindings() в том же заголовке. Файл переписывается точечно:
комментарии, порядок строк и остальные секции остаются как были.
"""

from __future__ import annotations

import re
from pathlib import Path

MAX_PER_BINDING = 4  # kMaxKeysPerAction

ACTIONS = (
    "MoveForward", "MoveBack", "MoveLeft", "MoveRight", "Walk", "Sprint",
    "Jump", "EnterVehicle", "Attack", "Aim", "CenterCamera",
    "WeaponPrevious", "WeaponNext", "Up", "Down", "Pause", "Camera", "Handbrake",
)

# Подписи для интерфейса: действие, пешком, в машине.
ACTION_LABELS = {
    "MoveForward": ("Вперёд", "идти", "газ"),
    "MoveBack": ("Назад", "идти назад", "тормоз"),
    "MoveLeft": ("Влево", "движение", "руль"),
    "MoveRight": ("Вправо", "движение", "руль"),
    "Walk": ("Шаг", "короткие шаги", "—"),
    "Sprint": ("Бег", "бежать", "не отправляется"),
    "Jump": ("Прыжок", "прыжок", "тормоз"),
    "EnterVehicle": ("Сесть/выйти", "транспорт", "транспорт"),
    "Attack": ("Атака", "огонь", "огонь"),
    "Aim": ("Прицел", "прицел", "не отправляется"),
    "CenterCamera": ("Камера сзади", "и подобрать оружие", "подобрать оружие"),
    "WeaponPrevious": ("Оружие назад", "оружие", "радиостанция"),
    "WeaponNext": ("Оружие вперёд", "оружие", "радиостанция"),
    "Up": ("Вверх", "спецмиссия", "наклон вверх"),
    "Down": ("Вниз", "сигнал", "гудок, наклон вниз"),
    "Pause": ("Пауза", "пауза", "пауза"),
    "Camera": ("Сменить камеру", "камера", "камера"),
    "Handbrake": ("Ручной тормоз", "—", "ручник"),
}

# Ключи ini-файла для кнопок геймпада (имена Xbox) и их отображение в двух стилях.
PAD_BUTTONS = (
    "PadA", "PadB", "PadX", "PadY",
    "PadLeftShoulder", "PadRightShoulder", "PadLeftTrigger", "PadRightTrigger",
    "PadStart", "PadBack",
    "PadDpadUp", "PadDpadDown", "PadDpadLeft", "PadDpadRight",
    "PadLeftStickClick", "PadRightStickClick",
)

PAD_LABELS = {
    # ini-ключ: (Xbox, PlayStation, что делает пешком)
    "PadA": ("A", "Крестик", "бег"),
    "PadB": ("B", "Круг", "атака"),
    "PadX": ("X", "Квадрат", "прыжок"),
    "PadY": ("Y", "Треугольник", "транспорт"),
    "PadLeftShoulder": ("LB", "L1", "камера сзади"),
    "PadRightShoulder": ("RB", "R1", "прицел"),
    "PadLeftTrigger": ("LT", "L2", "тормоз"),
    "PadRightTrigger": ("RT", "R2", "газ"),
    "PadStart": ("Menu", "Start", "пауза"),
    "PadBack": ("View", "Create", "камера"),
    "PadDpadUp": ("↑ крестовины", "↑ крестовины", "спецмиссия"),
    "PadDpadDown": ("↓ крестовины", "↓ крестовины", "гудок"),
    "PadDpadLeft": ("← крестовины", "← крестовины", "оружие назад"),
    "PadDpadRight": ("→ крестовины", "→ крестовины", "оружие вперёд"),
    "PadLeftStickClick": ("LS", "L3", "гудок"),
    "PadRightStickClick": ("RS", "R3", "ничего"),
}

# Токен для отрисовки иконки (см. button_icons.py).
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

# Сокращения, которые принимает рантайм: нормализованное имя -> каноническое.
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

# Подписи иконок клавиш и мыши для интерфейса.
KEY_CAPTIONS = {
    "Space": "Пробел", "Enter": "Enter", "Escape": "Esc", "Tab": "Tab",
    "Backspace": "Bksp", "LeftShift": "Shift L", "RightShift": "Shift R",
    "LeftCtrl": "Ctrl L", "RightCtrl": "Ctrl R", "LeftAlt": "Alt L",
    "RightAlt": "Alt R", "Up": "↑", "Down": "↓", "Left": "←", "Right": "→",
    "Delete": "Del", "Insert": "Ins", "Home": "Home", "End": "End",
    "PageUp": "PgUp", "PageDown": "PgDn", "Comma": ",", "Period": ".",
    "Minus": "-", "Equals": "=",
    "MouseLeft": "ЛКМ", "MouseRight": "ПКМ", "MouseMiddle": "СКМ",
    "Mouse4": "М4", "Mouse5": "М5", "WheelUp": "Колесо ↑", "WheelDown": "Колесо ↓",
}


def normalize(text: str) -> str:
    """Как рантайм: без пробелов, подчёркиваний и дефисов, в нижнем регистре."""
    return re.sub(r"[ \t_-]", "", text).lower()


def canonical_key_name(token: str) -> str | None:
    """Имя клавиши в том виде, как его пишет лаунчер, или None если не распознано."""
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
    """Подпись клавиши для кнопки интерфейса."""
    if name.startswith("Numpad"):
        return f"Numpad {name[6:]}"
    return KEY_CAPTIONS.get(name, name)


class ControlsConfig:
    """Секция [Controls]: клавиши действий, действия кнопок геймпада и роли стиков."""

    def __init__(self, actions=None, pads=None, sticks=None):
        self.actions = {action: list((actions or DEFAULT_KEYS).get(action, [])) for action in ACTIONS}
        self.pads = {pad: list((pads or DEFAULT_PAD).get(pad, [])) for pad in PAD_BUTTONS}
        self.sticks = dict(sticks or DEFAULT_STICKS)

    # --- доступ ---
    def pad_buttons_for(self, action: str) -> list[str]:
        """Кнопки геймпада, которые ведут это действие (в порядке PAD_BUTTONS)."""
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
        """Привязать/отвязать кнопку геймпада к действию. Возвращает итоговое состояние."""
        if action in self.pads[pad]:
            self.pads[pad].remove(action)
        elif len(self.pads[pad]) < MAX_PER_BINDING:
            self.pads[pad].append(action)
        return action in self.pads[pad]

    def reset_defaults(self) -> None:
        self.actions = {action: list(DEFAULT_KEYS[action]) for action in ACTIONS}
        self.pads = {pad: list(DEFAULT_PAD[pad]) for pad in PAD_BUTTONS}
        self.sticks = dict(DEFAULT_STICKS)

    # --- значения ini ---
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
    """Пары имя=значение из секции [Controls]."""
    values: dict[str, str] = {}
    text = ini_path.read_text(encoding="utf-8")
    section = _section_range(text)
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
    """Заменить управляемые имена в [Controls], не трогая комментарии и остальной файл."""
    text = ini_path.read_text(encoding="utf-8")
    section = _section_range(text)
    if section is None:
        raise ValueError(f"В {ini_path} нет секции [Controls]")
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


def _section_range(text: str) -> tuple[int, int] | None:
    """Номера строк секции [Controls]: от заголовка до следующей секции."""
    lines = text.splitlines()
    start = None
    for number, line in enumerate(lines):
        stripped = line.strip().lower()
        if stripped == "[controls]":
            start = number
        elif start is not None and stripped.startswith("[") and stripped.endswith("]"):
            return start, number
    return (start, len(lines)) if start is not None else None
