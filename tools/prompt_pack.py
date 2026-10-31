"""Paint Xbox / keyboard-mouse replacements over the game's HUD button textures.

The GE uploads hashed RGBA8 pictures. `lcs_prompt_textures.cpp` swaps a
matching file from `lcs/config/textures/<style>/`. This writes those files
from the dumped originals in `_source/` and the current keyboard bindings.

Keyboard and mouse glyphs follow Hell's Gate `MouseMask` and Uncharted
`DrawMouse` / `DrawKey` (see buttons-extracted.tar.gz): stadium mouse from
above with the pressed button filled, rounded keycaps with 3x5 labels.
"""

from __future__ import annotations

import math
from pathlib import Path

from lcs_controls_model import ControlsConfig, key_caption

# PSP face / shoulder glyphs in the dumped HUD pictures.
PSP_TO_PAD = {
    "cross": "PadA",
    "circle": "PadB",
    "square": "PadX",
    "triangle": "PadY",
    "l": "PadLeftShoulder",
    "r": "PadRightShoulder",
}

# Keyboard HUD follows the launcher actions, not the PSP face.
# In-world ~k~ lines (atlas): gas is MoveForward (W), brake/reverse is
# MoveBack (S), handbrake is Space. Circle is fire on foot, but the driving
# tutorial uses that same cell for brake/reverse in this font — S first.
# Pause-menu 16x16 chips stay Sprint / Attack (Space and LMB).
GLYPH_ACTIONS_ATLAS = {
    "cross": ["MoveForward", "Sprint"],
    "circle": ["MoveBack", "Handbrake", "Attack"],
    "square": ["MoveBack", "Jump"],
    "triangle": ["EnterVehicle"],
    "l": ["CenterCamera"],
    "r": ["Handbrake", "Aim"],
}
GLYPH_ACTIONS_MENU = {
    "cross": ["Sprint", "MoveForward"],
    "circle": ["Attack"],
    "square": ["Jump", "MoveBack"],
    "triangle": ["EnterVehicle"],
    "l": ["CenterCamera"],
    "r": ["Handbrake", "Aim"],
}

XBOX_FACE = {
    "cross": ("A", (0x3D, 0xC7, 0x42)),
    "circle": ("B", (0xE4, 0x3C, 0x3C)),
    "square": ("X", (0x3C, 0x7A, 0xE4)),
    "triangle": ("Y", (0xE4, 0xC8, 0x3C)),
    "l": ("LB", (0xC8, 0xC8, 0xC8)),
    "r": ("RB", (0xC8, 0xC8, 0xC8)),
}

# 16x16 cells on the last row of each font atlas (column, row, glyph).
ATLAS_CELLS = {
    "37bf52ac7d5c44c4": [
        (0, 15, "triangle"), (1, 15, "square"), (2, 15, "cross"),
        (3, 15, "circle"), (4, 15, "n"), (5, 15, "r"), (6, 15, "l"),
        # ASCII 'R' — ~k~ VEHB draws this letter in fonts that have no R-button glyph.
        (2, 3, "r"),
    ],
    "5ff05f6c2afa636b": [
        (0, 15, "triangle"), (1, 15, "circle"), (2, 15, "cross"), (3, 15, "square"),
        (2, 3, "r"),
    ],
}

STANDALONE = {
    "48e344e67bdb8e5d": "circle",
    "76678d09c8dbc3d3": "cross",
    "076fdf02217dd339": "n",
}

# 5-wide letters that look like H in 3x5.
FONT_5X5 = {
    "W": ["10001", "10001", "10101", "10101", "01010"],
    "M": ["10001", "11011", "10101", "10001", "10001"],
    "N": ["10001", "11001", "10101", "10011", "10001"],
}

FONT_3X5 = {
    "A": ["010", "101", "111", "101", "101"],
    "B": ["110", "101", "110", "101", "110"],
    "X": ["101", "101", "010", "101", "101"],
    "Y": ["101", "101", "010", "010", "010"],
    "L": ["100", "100", "100", "100", "111"],
    "R": ["110", "101", "110", "101", "101"],
    "N": ["101", "111", "111", "101", "101"],
    "S": ["011", "100", "010", "001", "110"],
    "P": ["110", "101", "110", "100", "100"],
    "F": ["111", "100", "110", "100", "100"],
    "E": ["111", "100", "110", "100", "111"],
    "C": ["011", "100", "100", "100", "011"],
    "H": ["101", "101", "111", "101", "101"],
    "W": ["101", "101", "101", "111", "101"],
    "Q": ["010", "101", "101", "111", "001"],
    "V": ["101", "101", "101", "010", "010"],
    "D": ["110", "101", "101", "101", "110"],
    "K": ["101", "101", "110", "101", "101"],
    "M": ["101", "111", "111", "101", "101"],
    "T": ["111", "010", "010", "010", "010"],
    "U": ["101", "101", "101", "101", "111"],
    "G": ["011", "100", "101", "101", "011"],
    "I": ["111", "010", "010", "010", "111"],
    "O": ["010", "101", "101", "101", "010"],
    "Z": ["111", "001", "010", "100", "111"],
    "0": ["111", "101", "101", "101", "111"],
    "1": ["010", "110", "010", "010", "111"],
    "2": ["111", "001", "111", "100", "111"],
    "3": ["111", "001", "111", "001", "111"],
    "4": ["101", "101", "111", "001", "001"],
    "5": ["111", "100", "111", "001", "111"],
    "6": ["111", "100", "111", "101", "111"],
    "7": ["111", "001", "010", "010", "010"],
    "8": ["111", "101", "111", "101", "111"],
    "9": ["111", "101", "111", "001", "111"],
}


def _config_dir() -> Path:
    return Path(__file__).resolve().parent.parent / "lcs" / "config"


def _source_dir() -> Path:
    return _config_dir() / "textures" / "_source"


def _load_rgba(path: Path, width: int, height: int) -> bytearray:
    data = bytearray(path.read_bytes())
    expected = width * height * 4
    if len(data) != expected:
        raise ValueError(f"{path.name}: expected {expected} bytes, got {len(data)}")
    return data


def _put(pixels: bytearray, width: int, x: int, y: int, color: tuple[int, int, int, int]) -> None:
    if x < 0 or y < 0 or x >= width:
        return
    index = (y * width + x) * 4
    if 0 <= index + 3 < len(pixels):
        pixels[index:index + 4] = bytes(color)


def _clear_cell(pixels: bytearray, width: int, cx: int, cy: int, size: int = 16) -> None:
    for y in range(size):
        for x in range(size):
            _put(pixels, width, cx + x, cy + y, (0, 0, 0, 0))


def _disk(pixels, width, cx, cy, size, color, filled=True, radius=None) -> None:
    r = size // 2 - 1 if radius is None else radius
    ox, oy = cx + size // 2, cy + size // 2
    rr = r * r
    inner = (r - 2) * (r - 2)
    for y in range(size):
        for x in range(size):
            dx, dy = x - size // 2, y - size // 2
            d = dx * dx + dy * dy
            if d <= rr and (filled or d >= inner):
                _put(pixels, width, cx + x, cy + y, color)


def _glyph(pixels, width, cx, cy, size, text: str, color, scale: int = 2) -> None:
    rows = []
    gap = 1
    for ch in text.upper()[:3]:
        pattern = FONT_3X5.get(ch)
        if pattern is None:
            continue
        rows.append(pattern)
    if not rows:
        return
    gw = len(rows) * (3 * scale + gap) - gap
    gh = 5 * scale
    ox = cx + max(0, (size - gw) // 2)
    oy = cy + max(0, (size - gh) // 2)
    for i, pattern in enumerate(rows):
        base = ox + i * (3 * scale + gap)
        for row, bits in enumerate(pattern):
            for col, bit in enumerate(bits):
                if bit != "1":
                    continue
                for sy in range(scale):
                    for sx in range(scale):
                        _put(pixels, width, base + col * scale + sx, oy + row * scale + sy, color)


# Hell's Gate MouseMask / Uncharted DrawMouse: stadium body, button split, 4x SSAA.
_SSAA = 4
_TAPS = 2


def _sample_grid(size: int, inside) -> list[list[float]]:
    """Average `inside(px, py)` over a size x size cell. Coordinates are 0..size."""
    big = size * _SSAA
    acc = [0.0] * (big * big)
    taps = _TAPS
    for y in range(big):
        for x in range(big):
            hit = 0
            for sy in range(taps):
                for sx in range(taps):
                    px = (x + (sx + 0.5) / taps) / _SSAA
                    py = (y + (sy + 0.5) / taps) / _SSAA
                    if inside(px, py):
                        hit += 1
            acc[y * big + x] = hit / (taps * taps)
    out = []
    for y in range(size):
        row = []
        for x in range(size):
            total = 0.0
            for dy in range(_SSAA):
                for dx in range(_SSAA):
                    total += acc[(y * _SSAA + dy) * big + (x * _SSAA + dx)]
            row.append(total / (_SSAA * _SSAA))
        out.append(row)
    return out


def _mouse_mask(size: int, button: int, wheel: int = 0) -> list[list[float]]:
    """button: 0 LMB, 1 RMB, 2 MMB, 3 M4, 4 M5, -1 none. wheel: +1 up, -1 down."""
    inset = 0.6
    top, bottom = inset, size - inset
    bh = bottom - top
    mw = min(size - 1.2, bh * 0.68)
    radius = mw / 2.0
    cx = size / 2.0
    line = max(0.35, mw * 0.09)
    split = top + bh * 0.42

    def inside(px: float, py: float) -> bool:
        ay = min(max(py, top + radius), bottom - radius)
        d = math.hypot(px - cx, py - ay) - radius
        if d >= 0.0:
            if wheel and py < top + 0.15:
                # Arrow above the body (wheel up) or skip.
                return False
            return False
        outline = d > -line or abs(py - split) < line / 2.0 or (
            py < split and abs(px - cx) < line / 2.0)
        pressed = py < split and (
            (button == 0 and px < cx) or (button == 1 and px > cx) or
            (button == 2 and abs(px - cx) < mw * 0.12 and top + bh * 0.1 < py < split - bh * 0.06))
        side = (button == 3 and px < cx - mw * 0.25 and split < py < split + bh * 0.22) or (
            button == 4 and px > cx + mw * 0.25 and split < py < split + bh * 0.22)
        return outline or pressed or side

    mask = _sample_grid(size, inside)
    if wheel == 0:
        return mask
    # Chevron above (up) or below (down), Uncharted wheel cue.
    def arrow(px: float, py: float) -> bool:
        ay = top - 0.1 if wheel > 0 else bottom + 0.1
        tip = top - size * 0.12 if wheel > 0 else bottom + size * 0.12
        if wheel > 0:
            if py > ay or py < tip:
                return False
            t = (ay - py) / max(ay - tip, 0.01)
        else:
            if py < ay or py > tip:
                return False
            t = (py - ay) / max(tip - ay, 0.01)
        return abs(px - cx) <= mw * 0.18 * (1.0 - t * 0.15)
    extra = _sample_grid(size, arrow)
    return [[min(1.0, a + b) for a, b in zip(row, erow)] for row, erow in zip(mask, extra)]


def _rounded_rect(px, py, cx, cy, hw, hh, radius) -> bool:
    dx, dy = abs(px - cx) - (hw - radius), abs(py - cy) - (hh - radius)
    if dx <= 0.0 and abs(py - cy) <= hh:
        return True
    if dy <= 0.0 and abs(px - cx) <= hw:
        return True
    if dx > 0.0 and dy > 0.0:
        return dx * dx + dy * dy <= radius * radius
    return False


def _keycap_layers(size: int, label: str) -> tuple[list[list[float]], list[list[float]]]:
    """(cap outline, letter) coverage. Cap from Uncharted DrawKey, letters 3x5."""
    pad = 1.1
    x0, y0, x1, y1 = pad, pad, size - pad, size - pad
    cx, cy = (x0 + x1) / 2.0, (y0 + y1) / 2.0
    hw, hh = (x1 - x0) / 2.0, (y1 - y0) / 2.0
    radius = min(hw, hh) * 0.28
    line = 0.9

    def outline(px, py):
        outer = _rounded_rect(px, py, cx, cy, hw, hh, radius)
        inner = _rounded_rect(px, py, cx, cy, hw - line, hh - line, max(0.4, radius - line))
        return outer and not inner

    cap = _sample_grid(size, outline)
    text = label.upper()[:2]
    patterns = [FONT_3X5[ch] for ch in text if ch in FONT_3X5]
    letter = [[0.0] * size for _ in range(size)]
    if not patterns:
        return cap, letter
    # Pixel-art 3x5: one letter at 2x, two letters at 1x. SSAA blurs 16 px caps.
    scale = 2 if len(patterns) == 1 else 1
    gap = 1
    gw = len(patterns) * (3 * scale + gap) - gap
    gh = 5 * scale
    ox = (size - gw) // 2
    oy = (size - gh) // 2
    for index, pattern in enumerate(patterns):
        base = ox + index * (3 * scale + gap)
        for row, bits in enumerate(pattern):
            for col, bit in enumerate(bits):
                if bit != "1":
                    continue
                for sy in range(scale):
                    for sx in range(scale):
                        x, y = base + col * scale + sx, oy + row * scale + sy
                        if 0 <= x < size and 0 <= y < size:
                            letter[y][x] = 1.0
    return cap, letter


def _blit_mask(pixels, width, cx, cy, mask, color, punch=False) -> None:
    cr, cg, cb, ca = color
    for y, row in enumerate(mask):
        for x, cover in enumerate(row):
            if cover <= 0.02:
                continue
            if punch:
                _put(pixels, width, cx + x, cy + y, (0, 0, 0, 0))
                continue
            a = int(ca * cover)
            _put(pixels, width, cx + x, cy + y, (cr, cg, cb, a))


def _spacebar_mask(size: int) -> list[list[float]]:
    """Wide spacebar: readable at 16 px, unlike the letters SP."""
    y0, y1 = size * 0.42, size * 0.72
    x0, x1 = size * 0.08, size * 0.92
    cx, cy = (x0 + x1) / 2.0, (y0 + y1) / 2.0
    hw, hh = (x1 - x0) / 2.0, (y1 - y0) / 2.0
    radius = min(hw, hh) * 0.45
    line = 0.85

    def inside(px, py):
        outer = _rounded_rect(px, py, cx, cy, hw, hh, radius)
        inner = _rounded_rect(px, py, cx, cy, hw - line, hh - line, max(0.3, radius - line))
        return outer and not inner

    return _sample_grid(size, inside)


def _letter_mask(size: int, text: str) -> list[list[float]]:
    """One letter filling the cell. W/M/N use 5-wide bitmaps so they are not an H."""
    mask = [[0.0] * size for _ in range(size)]
    text = text.upper()[:2]
    if len(text) == 1 and text in FONT_5X5:
        patterns, cw = [FONT_5X5[text]], 5
        scale = 2
    else:
        patterns = [FONT_3X5[ch] for ch in text if ch in FONT_3X5]
        cw = 3
        scale = 2 if len(patterns) == 1 else 1
    if not patterns:
        return mask
    gap = 1
    gw = len(patterns) * (cw * scale + gap) - gap
    gh = 5 * scale
    ox = (size - gw) // 2
    oy = (size - gh) // 2
    for index, pattern in enumerate(patterns):
        base = ox + index * (cw * scale + gap)
        for row, bits in enumerate(pattern):
            for col, bit in enumerate(bits):
                if bit != "1":
                    continue
                for sy in range(scale):
                    for sx in range(scale):
                        x, y = base + col * scale + sx, oy + row * scale + sy
                        if 0 <= x < size and 0 <= y < size:
                            mask[y][x] = 1.0
    return mask


def _shift_mask(size: int) -> list[list[float]]:
    """Up-arrow on a wide cap: Shift, not the unreadable SH."""
    def inside(px, py):
        cx = size / 2.0
        # Arrow head
        if 2.0 < py < size * 0.48:
            t = (py - 2.0) / (size * 0.48 - 2.0)
            return abs(px - cx) <= (size * 0.08 + t * size * 0.32)
        # Stem
        return size * 0.48 <= py < size * 0.88 and abs(px - cx) <= size * 0.16
    return _sample_grid(size, inside)


def _paint_binding(pixels, width, cx, cy, size, key: str, white_alpha: bool) -> None:
    ink = (255, 255, 255, 255)
    mouse_id = {
        "MouseLeft": 0, "MouseRight": 1, "MouseMiddle": 2, "Mouse4": 3, "Mouse5": 4,
    }.get(key)
    if mouse_id is not None:
        _blit_mask(pixels, width, cx, cy, _mouse_mask(size, mouse_id), ink)
        return
    if key in ("WheelUp", "WheelDown"):
        _blit_mask(pixels, width, cx, cy, _mouse_mask(size, 2, 1 if key == "WheelUp" else -1), ink)
        return
    if key == "Space":
        _blit_mask(pixels, width, cx, cy, _spacebar_mask(size), ink)
        return
    if key in ("LeftShift", "RightShift"):
        _blit_mask(pixels, width, cx, cy, _shift_mask(size), ink)
        return
    _blit_mask(pixels, width, cx, cy, _letter_mask(size, _key_short(key)), ink)


def _key_short(name: str) -> str:
    if name.startswith("Mouse") or name.startswith("Wheel"):
        return name
    if name in ("LeftShift", "RightShift"):
        return "SH"
    if name in ("LeftCtrl", "RightCtrl"):
        return "CT"
    if name in ("LeftAlt", "RightAlt"):
        return "AL"
    if name == "Space":
        return " "
    if name == "Escape":
        return "ES"
    if name == "Enter":
        return "EN"
    if name == "Backspace":
        return "BS"
    if len(name) == 1:
        return name
    caption = key_caption(name)
    letters = "".join(ch for ch in caption.upper() if ch.isalnum())
    return (letters[:2] if letters else name[:2]).upper()


def _draw_prompt(pixels, width, cx, cy, size, glyph: str, style: str, cfg: ControlsConfig,
                 white_alpha: bool, menu: bool = False) -> None:
    if glyph == "n":
        # Analog "N" in the font atlas: leave a letter, not a face button.
        color = (255, 255, 255, 255)
        _glyph(pixels, width, cx, cy, size, "N", color, scale=2)
        return
    pad = PSP_TO_PAD.get(glyph)
    if style == "xbox":
        letter, rgb = XBOX_FACE[glyph]
        color = (*rgb, 255)
        if white_alpha:
            color = (255, 255, 255, 255)
        _disk(pixels, width, cx, cy, size, color if not white_alpha else (255, 255, 255, 255), filled=True)
        ink = (20, 20, 20, 255) if not white_alpha else (0, 0, 0, 255)
        _glyph(pixels, width, cx, cy, size, letter, ink, scale=1 if len(letter) > 1 else 2)
        return
    key = _keyboard_key(cfg, glyph, pad, menu)
    _paint_binding(pixels, width, cx, cy, size, key or "?", white_alpha)


def _keyboard_key(cfg: ControlsConfig, glyph: str, pad: str | None, menu: bool) -> str | None:
    """First bound key of the PC action this HUD glyph should show."""
    table = GLYPH_ACTIONS_MENU if menu else GLYPH_ACTIONS_ATLAS
    for action in table.get(glyph, ()):
        keys = cfg.actions.get(action) or []
        if keys:
            return keys[0]
    if not pad:
        return None
    for action in cfg.pads.get(pad) or []:
        keys = cfg.actions.get(action) or []
        if keys:
            return keys[0]
    return None


def _write(path: Path, pixels: bytearray) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_bytes(bytes(pixels))


def build_prompt_pack(style: str, cfg: ControlsConfig | None = None,
                      config_dir: Path | None = None) -> Path | None:
    """Write `textures/<style>/` replacements. Original PlayStation needs no files."""
    style = style.lower()
    if style in ("original", "psp", "playstation", "off", "none"):
        return None
    root = config_dir or _config_dir()
    source = root / "textures" / "_source"
    dest = root / "textures" / ("kb" if style in ("kb", "keyboard", "kbm") else "xbox")
    pack_style = "kb" if dest.name == "kb" else "xbox"
    cfg = cfg or ControlsConfig.load(root / "LCSNative.ini") if (root / "LCSNative.ini").exists() else ControlsConfig()
    dest.mkdir(parents=True, exist_ok=True)
    for signature, cells in ATLAS_CELLS.items():
        src = source / f"{signature}.rgba"
        if not src.exists():
            continue
        pixels = _load_rgba(src, 256, 256)
        white_alpha = signature == "37bf52ac7d5c44c4"
        for col, row, glyph in cells:
            if glyph == "n" and pack_style == "xbox":
                continue
            cx, cy = col * 16, row * 16
            _clear_cell(pixels, 256, cx, cy)
            _draw_prompt(pixels, 256, cx, cy, 16, glyph, pack_style, cfg, white_alpha, menu=False)
        _write(dest / f"{signature}.rgba", pixels)
    for signature, glyph in STANDALONE.items():
        src = source / f"{signature}.rgba"
        if not src.exists():
            continue
        if glyph == "n" and pack_style == "xbox":
            continue
        pixels = _load_rgba(src, 16, 16)
        _clear_cell(pixels, 16, 0, 0)
        _draw_prompt(pixels, 16, 0, 0, 16, glyph, pack_style, cfg, white_alpha=False, menu=True)
        _write(dest / f"{signature}.rgba", pixels)
    return dest


if __name__ == "__main__":
    import sys
    kind = sys.argv[1] if len(sys.argv) > 1 else "xbox"
    path = build_prompt_pack(kind)
    print(path or "original (no pack)")
