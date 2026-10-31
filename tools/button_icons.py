"""Рисование иконок кнопок на Tk-канвасе (без внешних картинок).

Иконки геймпада перенесены из button_icons.py проекта SpartanPort
(God of War III Remastered PC launcher, GPL-2.0-or-later), с сохранением
цветов и форм PlayStation (крестик/круг/квадрат/треугольник) и Xbox
(ABXY). Сверху добавлены иконки клавиш клавиатуры и мыши.
"""

INK = "#2b2b2b"
DIM = "#8a8a8a"
BODY = "#262020"
CAP = "#ffffff"
CAP_EDGE = "#b3b3b3"
ACCENT = "#2f6fd9"

FACE = {
    "playstation": {"a": ("cross", "#3b6fd4"), "b": ("circle", "#d1483f"),
                    "x": ("square", "#9a4fb0"), "y": ("triangle", "#1f9c68")},
    "xbox": {"a": ("A", "#3fae49"), "b": ("B", "#d9372f"), "x": ("X", "#2f6fd9"),
             "y": ("Y", "#e5b521")},
}

LABELS = {
    "playstation": {"leftshoulder": "L1", "rightshoulder": "R1", "lefttrigger": "L2",
                    "righttrigger": "R2", "leftstick": "L3", "rightstick": "R3",
                    "start": "START", "back": "SELECT"},
    "xbox": {"leftshoulder": "LB", "rightshoulder": "RB", "lefttrigger": "LT",
             "righttrigger": "RT", "leftstick": "LS", "rightstick": "RS",
             "start": "MENU", "back": "VIEW"},
}

DPAD_DIRECTION = {"dpup": "up", "dpdown": "down", "dpleft": "left", "dpright": "right"}


def pad_spec(token: str, style: str):
    """(вид, подпись, цвет) кнопки геймпада или None для неизвестной кнопки."""
    if token in FACE.get(style, {}):
        text, color = FACE[style][token]
        return ("symbol" if style == "playstation" else "letter"), text, color
    if token in DPAD_DIRECTION:
        return "dpad", DPAD_DIRECTION[token], INK
    label = LABELS.get(style, {}).get(token)
    if not label:
        return None
    kind = ("bumper" if token.endswith("shoulder") else "trigger" if token.endswith("trigger")
            else "stick" if token.endswith("stick") else "pill")
    return kind, label, INK


def _rounded_box(canvas, x0, y0, x1, y1, **options):
    """Прямоугольник со скруглёнными углами.

    Гладкий полигон Tk сглаживает только внутренние вершины, поэтому углы
    дублируются: иначе четырёхугольник превращается в овал.
    """
    radius = min(options.pop("radius", 6), (x1 - x0) / 2, (y1 - y0) / 2)
    points = [x0 + radius, y0, x1 - radius, y0,
              x1, y0, x1, y0 + radius,
              x1, y1 - radius, x1, y1,
              x1 - radius, y1, x0 + radius, y1,
              x0, y1, x0, y1 - radius,
              x0, y0 + radius, x0, y0]
    canvas.create_polygon(*points, smooth=True, splinesteps=8, **options)


def draw_pad(canvas, token: str, style: str, size: int, active: bool = True) -> None:
    """Иконка кнопки геймпада размером size x size (канвас очищается)."""
    canvas.delete("all")
    found = pad_spec(token, style)
    if not found:
        return
    kind, text, color = found
    centre = size / 2
    tint = color if active else DIM
    ink = INK if active else DIM
    font_small = ("Segoe UI", max(6, int(size * 0.26)), "bold")
    if kind in ("symbol", "letter"):
        canvas.create_oval(1, 1, size - 1, size - 1,
                           fill=BODY if kind == "symbol" else (tint if active else "#d5d5d5"),
                           outline=ACCENT if active else "")
        if kind == "letter":
            canvas.create_text(centre, centre, text=text,
                               fill="#101010" if active else "#7a7a7a",
                               font=("Segoe UI", max(7, int(size * 0.42)), "bold"))
            return
        weight, radius = max(2, size // 11), size * 0.24
        if text == "cross":
            canvas.create_line(centre - radius, centre - radius, centre + radius, centre + radius,
                               fill=tint, width=weight)
            canvas.create_line(centre - radius, centre + radius, centre + radius, centre - radius,
                               fill=tint, width=weight)
        elif text == "circle":
            canvas.create_oval(centre - radius, centre - radius, centre + radius, centre + radius,
                               outline=tint, width=weight)
        elif text == "square":
            canvas.create_rectangle(centre - radius, centre - radius, centre + radius, centre + radius,
                                    outline=tint, width=weight)
        else:  # triangle
            canvas.create_polygon(centre, centre - radius * 1.15, centre + radius * 1.1, centre + radius * 0.8,
                                  centre - radius * 1.1, centre + radius * 0.8, outline=tint, fill="", width=weight)
    elif kind == "dpad":
        thickness, inset = size * 0.3, size * 0.08
        arms = {"up": (centre - thickness / 2, inset, centre + thickness / 2, centre),
                "down": (centre - thickness / 2, centre, centre + thickness / 2, size - inset),
                "left": (inset, centre - thickness / 2, centre, centre + thickness / 2),
                "right": (centre, centre - thickness / 2, size - inset, centre + thickness / 2)}
        for name, box in arms.items():
            canvas.create_rectangle(*box, fill=ink if name == text else "#c9c9c9", outline="")
    elif kind == "stick":
        canvas.create_oval(1, 1, size - 1, size - 1, fill=BODY if active else "#d8d8d8",
                           outline=ACCENT if active else DIM, width=max(1, size // 14))
        canvas.create_text(centre, centre, text=text, fill=CAP if active else DIM, font=font_small)
    else:
        top, bottom = {"bumper": (size * 0.28, size * 0.72),
                       "trigger": (size * 0.12, size * 0.88)}.get(kind, (size * 0.3, size * 0.7))
        radius = (bottom - top) / 2 if kind != "trigger" else size * 0.2
        x0, x1 = 1, size - 1
        body = BODY if active else "#cfcfcf"
        canvas.create_oval(x0, top, x0 + 2 * radius, top + 2 * radius, fill=body, outline="")
        canvas.create_oval(x1 - 2 * radius, top, x1, top + 2 * radius, fill=body, outline="")
        canvas.create_rectangle(x0 + radius, top, x1 - radius, bottom, fill=body, outline="")
        canvas.create_rectangle(x0, top + radius, x1, bottom, fill=body, outline="")
        canvas.create_text(centre, (top + bottom) / 2, text=text, fill=CAP if active else DIM,
                           font=("Segoe UI", max(5, int(size * (0.18 if len(text) > 3 else 0.28))), "bold"))


def draw_key(canvas, caption: str, width: int, height: int, kind: str = "key",
             active: bool = True) -> None:
    """Иконка клавиши: kind = 'key' (клавиатура), 'mouse' или 'wheel'."""
    canvas.delete("all")
    if kind in ("mouse", "wheel"):
        _draw_mouse(canvas, caption, width, height, kind, active)
        return
    edge = ACCENT if active else CAP_EDGE
    _rounded_box(canvas, 2, height * 0.16, width - 2, height * 0.88, fill=CAP, outline=edge,
                 width=2 if active else 1)
    canvas.create_text(width / 2, height * 0.52, text=caption, fill=INK if active else DIM,
                       font=("Segoe UI", _caption_pt(caption, width, height), "bold"))


def _caption_pt(caption: str, width: int, height: int) -> int:
    room = int(width / (0.62 * max(len(caption), 1)))
    return max(6, min(int(height * 0.34), room))


def _draw_mouse(canvas, caption: str, width: int, height: int, kind: str,
                active: bool) -> None:
    """Мышь: корпус в левом квадрате height x height, подпись справа.

    Подсвечивается нужная кнопка, у колеса — стрелка направления; так ЛКМ, ПКМ,
    СКМ, боковые кнопки и колесо различаются и формой, и надписью.
    """
    size = height
    body_w, body_h = size * 0.52, size * 0.86
    left, right = (size - body_w) / 2, (size + body_w) / 2
    top, bottom = (size - body_h) / 2, (size + body_h) / 2
    highlight = ACCENT if active else DIM
    _rounded_box(canvas, left, top, right, bottom, fill=CAP, outline=highlight,
                 width=2 if active else 1)
    button_h = body_h * 0.34
    canvas.create_line(size / 2, top, size / 2, top + button_h, fill=highlight)
    if caption.startswith("ЛКМ"):
        _rounded_box(canvas, left, top, size / 2, top + button_h, fill=highlight, outline="")
    elif caption.startswith("ПКМ"):
        _rounded_box(canvas, size / 2, top, right, top + button_h, fill=highlight, outline="")
    elif caption.startswith("СКМ"):
        canvas.create_rectangle(size / 2 - body_w * 0.08, top + body_h * 0.1,
                                size / 2 + body_w * 0.08, top + body_h * 0.3,
                                fill=highlight, outline="")
    elif caption.startswith("М4") or caption.startswith("М5"):
        side = left if caption.startswith("М4") else right
        offset = -body_w * 0.16 if caption.startswith("М4") else body_w * 0.16
        canvas.create_rectangle(side, top + body_h * 0.3, side + offset, top + body_h * 0.55,
                                fill=highlight, outline="")
    if kind == "wheel":
        up = caption.endswith("↑")
        canvas.create_rectangle(size / 2 - body_w * 0.1, top + body_h * 0.12,
                                size / 2 + body_w * 0.1, top + body_h * 0.3,
                                fill=highlight, outline="")
        arrow_y = top - size * 0.02 if up else bottom + size * 0.02
        tip = top - size * 0.16 if up else bottom + size * 0.16
        canvas.create_polygon(size / 2 - body_w * 0.18, arrow_y, size / 2 + body_w * 0.18, arrow_y,
                              size / 2, tip, fill=highlight, outline="")
    label_room = width - size
    if label_room >= 14:
        canvas.create_text(size + label_room / 2, size / 2, text=caption,
                           fill=INK if active else DIM,
                           font=("Segoe UI", max(6, min(10, int(size * 0.32))), "bold"))
