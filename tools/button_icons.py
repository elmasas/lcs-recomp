"""Tk canvas button icons for the LCS launcher (MIT, original code).

Draws keyboard keycaps, mouse buttons, and simple PlayStation / Xbox pad
glyphs with plain Tk primitives. No third-party icon assets or GPL sources.
"""

from __future__ import annotations

INK = "#222222"
DIM = "#909090"
FACE_BG = "#1e1e1e"
KEY_FILL = "#f4f4f4"
KEY_EDGE = "#c0c0c0"
ACTIVE = "#2f6fd9"

# Face tokens → (glyph_id, fill). PlayStation uses shapes; Xbox uses letters.
PS_FACE = {
    "a": ("cross", "#4a7fe0"),
    "b": ("circle", "#d4544a"),
    "x": ("square", "#a45fc0"),
    "y": ("triangle", "#2aaa70"),
}
XB_FACE = {
    "a": ("A", "#3faf4a"),
    "b": ("B", "#d83a32"),
    "x": ("X", "#2f6fd9"),
    "y": ("Y", "#e0b020"),
}

PS_LABEL = {
    "leftshoulder": "L1", "rightshoulder": "R1",
    "lefttrigger": "L2", "righttrigger": "R2",
    "leftstick": "L3", "rightstick": "R3",
    "start": "START", "back": "SELECT",
}
XB_LABEL = {
    "leftshoulder": "LB", "rightshoulder": "RB",
    "lefttrigger": "LT", "righttrigger": "RT",
    "leftstick": "LS", "rightstick": "RS",
    "start": "MENU", "back": "VIEW",
}

DPAD = {"dpup": "up", "dpdown": "down", "dpleft": "left", "dpright": "right"}

# Mouse caption prefixes (English source + Russian i18n overlays).
_MOUSE_LEFT = ("LMB", "ЛКМ")
_MOUSE_RIGHT = ("RMB", "ПКМ")
_MOUSE_MIDDLE = ("MMB", "СКМ")
_MOUSE_4 = ("M4", "М4")
_MOUSE_5 = ("M5", "М5")


def pad_spec(token: str, style: str):
    """Return (kind, label, color) for a pad token, or None if unknown."""
    style = (style or "xbox").lower()
    if style == "playstation":
        if token in PS_FACE:
            glyph, color = PS_FACE[token]
            return "shape", glyph, color
        label = PS_LABEL.get(token)
    else:
        if token in XB_FACE:
            glyph, color = XB_FACE[token]
            return "letter", glyph, color
        label = XB_LABEL.get(token)
    if token in DPAD:
        return "dpad", DPAD[token], INK
    if not label:
        return None
    if token.endswith("shoulder"):
        return "bumper", label, INK
    if token.endswith("trigger"):
        return "trigger", label, INK
    if token.endswith("stick"):
        return "stick", label, INK
    return "pill", label, INK


def _round_rect(canvas, x0, y0, x1, y1, radius=5, **opts):
    """Rounded rectangle via a smoothed polygon with duplicated corner points."""
    radius = min(radius, (x1 - x0) / 2, (y1 - y0) / 2)
    pts = [
        x0 + radius, y0, x1 - radius, y0,
        x1, y0, x1, y0 + radius,
        x1, y1 - radius, x1, y1,
        x1 - radius, y1, x0 + radius, y1,
        x0, y1, x0, y1 - radius,
        x0, y0 + radius, x0, y0,
    ]
    canvas.create_polygon(*pts, smooth=True, splinesteps=10, **opts)


def _starts(caption: str, prefixes: tuple[str, ...]) -> bool:
    return any(caption.startswith(p) for p in prefixes)


def draw_pad(canvas, token: str, style: str, size: int, active: bool = True) -> None:
    """Paint one gamepad button into a cleared square canvas."""
    canvas.delete("all")
    spec = pad_spec(token, style)
    if spec is None:
        return
    kind, text, color = spec
    mid = size / 2
    tint = color if active else DIM
    ink = INK if active else DIM
    small = ("Segoe UI", max(6, int(size * 0.24)), "bold")

    if kind == "letter":
        canvas.create_oval(1, 1, size - 1, size - 1,
                           fill=tint if active else "#d0d0d0", outline="")
        canvas.create_text(mid, mid, text=text,
                           fill="#101010" if active else "#777777",
                           font=("Segoe UI", max(7, int(size * 0.4)), "bold"))
        return

    if kind == "shape":
        canvas.create_oval(1, 1, size - 1, size - 1,
                           fill=FACE_BG, outline=ACTIVE if active else "")
        stroke = max(2, size // 10)
        r = size * 0.22
        if text == "cross":
            canvas.create_line(mid - r, mid - r, mid + r, mid + r, fill=tint, width=stroke)
            canvas.create_line(mid - r, mid + r, mid + r, mid - r, fill=tint, width=stroke)
        elif text == "circle":
            canvas.create_oval(mid - r, mid - r, mid + r, mid + r, outline=tint, width=stroke)
        elif text == "square":
            canvas.create_rectangle(mid - r, mid - r, mid + r, mid + r, outline=tint, width=stroke)
        else:
            canvas.create_polygon(
                mid, mid - r * 1.2,
                mid + r * 1.05, mid + r * 0.75,
                mid - r * 1.05, mid + r * 0.75,
                outline=tint, fill="", width=stroke)
        return

    if kind == "dpad":
        arm = size * 0.28
        gap = size * 0.1
        boxes = {
            "up": (mid - arm / 2, gap, mid + arm / 2, mid),
            "down": (mid - arm / 2, mid, mid + arm / 2, size - gap),
            "left": (gap, mid - arm / 2, mid, mid + arm / 2),
            "right": (mid, mid - arm / 2, size - gap, mid + arm / 2),
        }
        for name, box in boxes.items():
            canvas.create_rectangle(*box, fill=ink if name == text else "#cacaca", outline="")
        return

    if kind == "stick":
        canvas.create_oval(1, 1, size - 1, size - 1,
                           fill=FACE_BG if active else "#d6d6d6",
                           outline=ACTIVE if active else DIM, width=max(1, size // 12))
        canvas.create_text(mid, mid, text=text, fill=KEY_FILL if active else DIM, font=small)
        return

    # bumper / trigger / pill
    if kind == "bumper":
        y0, y1 = size * 0.3, size * 0.7
    elif kind == "trigger":
        y0, y1 = size * 0.14, size * 0.86
    else:
        y0, y1 = size * 0.32, size * 0.68
    fill = FACE_BG if active else "#cecece"
    rad = (y1 - y0) / 2 if kind != "trigger" else size * 0.18
    x0, x1 = 1.0, size - 1.0
    canvas.create_oval(x0, y0, x0 + 2 * rad, y0 + 2 * rad, fill=fill, outline="")
    canvas.create_oval(x1 - 2 * rad, y0, x1, y0 + 2 * rad, fill=fill, outline="")
    canvas.create_rectangle(x0 + rad, y0, x1 - rad, y1, fill=fill, outline="")
    canvas.create_rectangle(x0, y0 + rad, x1, y1, fill=fill, outline="")
    pt = max(5, int(size * (0.17 if len(text) > 3 else 0.26)))
    canvas.create_text(mid, (y0 + y1) / 2, text=text,
                       fill=KEY_FILL if active else DIM,
                       font=("Segoe UI", pt, "bold"))


def draw_key(canvas, caption: str, width: int, height: int, kind: str = "key",
             active: bool = True) -> None:
    """Paint a keyboard keycap, mouse body, or mouse-wheel icon."""
    canvas.delete("all")
    if kind in ("mouse", "wheel"):
        _draw_mouse(canvas, caption, width, height, kind, active)
        return
    edge = ACTIVE if active else KEY_EDGE
    _round_rect(canvas, 2, height * 0.18, width - 2, height * 0.86,
                radius=max(3, height // 8), fill=KEY_FILL, outline=edge,
                width=2 if active else 1)
    canvas.create_text(width / 2, height * 0.52, text=caption,
                       fill=INK if active else DIM,
                       font=("Segoe UI", _fit_pt(caption, width, height), "bold"))


def _fit_pt(caption: str, width: int, height: int) -> int:
    room = int(width / (0.6 * max(len(caption), 1)))
    return max(6, min(int(height * 0.32), room))


def _draw_mouse(canvas, caption: str, width: int, height: int, kind: str,
                active: bool) -> None:
    """Mouse silhouette on the left; optional caption text on the right."""
    size = height
    bw, bh = size * 0.5, size * 0.84
    left = (size - bw) / 2
    right = left + bw
    top = (size - bh) / 2
    bottom = top + bh
    hi = ACTIVE if active else DIM
    _round_rect(canvas, left, top, right, bottom, radius=bw * 0.35,
                fill=KEY_FILL, outline=hi, width=2 if active else 1)
    btn_h = bh * 0.32
    canvas.create_line(size / 2, top, size / 2, top + btn_h, fill=hi)

    if _starts(caption, _MOUSE_LEFT):
        _round_rect(canvas, left, top, size / 2, top + btn_h, radius=2, fill=hi, outline="")
    elif _starts(caption, _MOUSE_RIGHT):
        _round_rect(canvas, size / 2, top, right, top + btn_h, radius=2, fill=hi, outline="")
    elif _starts(caption, _MOUSE_MIDDLE):
        canvas.create_rectangle(size / 2 - bw * 0.08, top + bh * 0.1,
                                size / 2 + bw * 0.08, top + bh * 0.28,
                                fill=hi, outline="")
    elif _starts(caption, _MOUSE_4) or _starts(caption, _MOUSE_5):
        is_m4 = _starts(caption, _MOUSE_4)
        side = left if is_m4 else right
        dx = -bw * 0.14 if is_m4 else bw * 0.14
        canvas.create_rectangle(side, top + bh * 0.32, side + dx, top + bh * 0.55,
                                fill=hi, outline="")

    if kind == "wheel":
        canvas.create_rectangle(size / 2 - bw * 0.09, top + bh * 0.12,
                                size / 2 + bw * 0.09, top + bh * 0.28,
                                fill=hi, outline="")
        going_up = caption.endswith("↑")
        base = top - size * 0.02 if going_up else bottom + size * 0.02
        tip = top - size * 0.14 if going_up else bottom + size * 0.14
        canvas.create_polygon(size / 2 - bw * 0.16, base, size / 2 + bw * 0.16, base,
                              size / 2, tip, fill=hi, outline="")

    room = width - size
    if room >= 14:
        canvas.create_text(size + room / 2, size / 2, text=caption,
                           fill=INK if active else DIM,
                           font=("Segoe UI", max(6, min(10, int(size * 0.3))), "bold"))
