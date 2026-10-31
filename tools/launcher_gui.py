"""Графический лаунчер LCS Recomp.

Вкладка «Игра» — выбор ISO и весь конвейер (PSP_GAME, EBOOT.ELF, регион).
Вкладка «Управление» — два столбика: клавиши на ПК и кнопки геймпада, иконки
клавиш, мыши, Xbox и PlayStation, возврат к настройкам по умолчанию.
"""

from __future__ import annotations

import os
import queue
import subprocess
import sys
import threading
import tkinter as tk
from tkinter import filedialog, messagebox, scrolledtext, ttk
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))

import button_icons
import launcher
from lcs_controls_model import (
    ACTIONS, ACTION_LABELS, HOST_KEYS, MAX_PER_BINDING, PAD_BUTTONS, PAD_ICON_TOKEN,
    PAD_LABELS, STICK_ROLES, ControlsConfig, canonical_key_name, key_caption,
)

APP_TITLE = "LCS Launcher — GTA Liberty City Stories"
KEY_HEIGHT = 26
PAD_SIZE = 30
LIST_BG = "#f6f6f6"

# Собранному exe Windows сообщает реальный DPI, поэтому пиксельные размеры
# иконок умножаются на масштаб экрана.
SCALE = 1.0


def px(value: float) -> int:
    return max(1, int(round(value * SCALE)))


def detect_scale(root: tk.Misc) -> float:
    try:
        import ctypes
        dpi = ctypes.windll.user32.GetDpiForWindow(root.winfo_id())
    except Exception:
        return 1.0
    return dpi / 96 if dpi >= 96 else 1.0


def key_icon_width(caption: str, kind: str) -> int:
    """Ширина иконки клавиши: крышка по подписи, мышь — квадрат плюс подпись."""
    if kind == "key":
        return px(max(30, int(11 * len(caption)) + 12))
    return px(KEY_HEIGHT + 8) + int(7.5 * len(caption) * SCALE)


def mouse_kind(name: str) -> str:
    if name.startswith("Wheel"):
        return "wheel"
    if name.startswith("Mouse"):
        return "mouse"
    return "key"


SPECIAL_KEYSYMS = {
    "space": "Space", "return": "Enter", "kp_enter": "Enter", "escape": "Escape",
    "tab": "Tab", "backspace": "BackSpace", "delete": "Delete", "insert": "Insert",
    "home": "Home", "end": "End", "prior": "PageUp", "next": "PageDown",
    "shift_l": "LeftShift", "shift_r": "RightShift",
    "control_l": "LeftCtrl", "control_r": "RightCtrl",
    "alt_l": "LeftAlt", "alt_r": "RightAlt", "menu": "LeftAlt",
    "kp_add": "NumpadPlus", "kp_subtract": "NumpadMinus",
    "up": "Up", "down": "Down", "left": "Left", "right": "Right",
}

MOUSE_BUTTONS = {1: "MouseLeft", 2: "MouseMiddle", 3: "MouseRight",
                 4: "WheelUp", 5: "WheelDown", 6: "Mouse4", 7: "Mouse5"}


def key_name_from_event(event) -> str | None:
    symbol = getattr(event, "keysym", "") or ""
    if symbol.lower() in SPECIAL_KEYSYMS:
        return SPECIAL_KEYSYMS[symbol.lower()]
    return canonical_key_name(symbol)


class ScrollFrame(ttk.Frame):
    """Вертикальный скролл списка; колесо мыши не перехватывается во время ввода."""

    def __init__(self, master, scroll_enabled=lambda: True):
        super().__init__(master)
        self.scroll_enabled = scroll_enabled
        self.canvas = tk.Canvas(self, highlightthickness=0, bg=LIST_BG, bd=0)
        self.scrollbar = ttk.Scrollbar(self, orient="vertical", command=self.canvas.yview)
        self.inner = ttk.Frame(self.canvas)
        self._window = self.canvas.create_window((0, 0), window=self.inner, anchor="nw")
        self.canvas.configure(yscrollcommand=self.scrollbar.set)
        self.canvas.grid(row=0, column=0, sticky="nsew")
        self.scrollbar.grid(row=0, column=1, sticky="ns")
        self.inner.bind("<Configure>", lambda e: self.canvas.configure(
            scrollregion=self.canvas.bbox("all")))
        self.canvas.bind("<Configure>", lambda e: self.canvas.itemconfigure(self._window, width=e.width))
        self.columnconfigure(0, weight=1)
        self.rowconfigure(0, weight=1)
        self.canvas.bind("<Enter>", self._start_wheel)
        self.canvas.bind("<Leave>", self._stop_wheel)

    def _start_wheel(self, _event):
        self.canvas.bind_all("<MouseWheel>", self._on_wheel)

    def _stop_wheel(self, _event):
        self.canvas.unbind_all("<MouseWheel>")

    def _on_wheel(self, event):
        if self.scroll_enabled():
            self.canvas.yview_scroll(int(-event.delta / 40), "units")


class GameTab(ttk.Frame):
    """ISO -> PSP_GAME -> EBOOT.ELF -> запуск LCSNative.exe."""

    def __init__(self, master):
        super().__init__(master, padding=10)
        self.messages: queue.Queue = queue.Queue()
        self.busy = False
        self.iso_var = tk.StringVar()
        self.status_var = tk.StringVar(value="Выберите образ игры и нажмите «Обработать ISO».")
        self.info_var = tk.StringVar(value="Игра ещё не подготовлена.")

        source = ttk.LabelFrame(self, text=" 1. Образ игры ", padding=10)
        source.pack(fill="x")
        ttk.Label(source, text="ISO-файл игры:").grid(row=0, column=0, sticky="w")
        entry = ttk.Entry(source, textvariable=self.iso_var)
        entry.grid(row=0, column=1, sticky="we", padx=8)
        ttk.Button(source, text="Обзор…", command=self.browse).grid(row=0, column=2)
        source.columnconfigure(1, weight=1)
        actions = ttk.Frame(source)
        actions.grid(row=1, column=0, columnspan=3, sticky="we", pady=(10, 0))
        self.run_button = ttk.Button(actions, text="Обработать ISO", command=self.start)
        self.run_button.pack(side="left")
        self.progress = ttk.Progressbar(actions, maximum=100)
        self.progress.pack(side="left", fill="x", expand=True, padx=10)
        ttk.Label(actions, textvariable=self.status_var, wraplength=px(560),
                  foreground="#1a4f8a").pack(side="left")

        ready = ttk.LabelFrame(self, text=" 2. Игра ", padding=10)
        ready.pack(fill="x", pady=(10, 0))
        ttk.Label(ready, textvariable=self.info_var, justify="left").pack(anchor="w")
        buttons = ttk.Frame(ready)
        buttons.pack(anchor="w", pady=(8, 0))
        ttk.Button(buttons, text="Запустить игру", command=self.launch).pack(side="left")
        ttk.Button(buttons, text="Открыть папку с игрой",
                   command=self.open_folder).pack(side="left", padx=8)
        paths = ttk.Frame(self)
        paths.pack(fill="x", pady=(8, 0))
        exe = launcher.find_game_exe()
        ttk.Label(paths, foreground="#555555", text=(
            f"Игровой движок: {exe if exe else 'LCSNative.exe не найден — соберите проект'}\n"
            f"Папка игры: {launcher.GAME_DIR}\n"
            f"Файл настроек: {launcher.INI_PATH}")).pack(anchor="w")

        log_box = ttk.LabelFrame(self, text=" Журнал ", padding=6)
        log_box.pack(fill="both", expand=True, pady=(10, 0))
        self.log = scrolledtext.ScrolledText(log_box, height=9, state="disabled",
                                             background="#1e1e1e", foreground="#d6d6d6")
        self.log.pack(fill="both", expand=True)
        self._refresh_ready()
        self.after(120, self._drain)

    def browse(self):
        path = filedialog.askopenfilename(
            title="Выберите ISO игры", parent=self,
            filetypes=[("Образы PSP", "*.iso *.cso *.pbp"), ("Все файлы", "*.*")])
        if path:
            self.iso_var.set(path)

    def log_line(self, message: str) -> None:
        self.log.configure(state="normal")
        self.log.insert("end", message.rstrip() + "\n")
        self.log.see("end")
        self.log.configure(state="disabled")

    def start(self):
        if self.busy:
            return
        iso = Path(self.iso_var.get().strip('"').strip())
        if not iso.as_posix():
            messagebox.showinfo("Нужен ISO", "Сначала выберите ISO-файл игры.", parent=self)
            return
        if not iso.exists():
            messagebox.showerror("ISO не найден", f"Файл не найден:\n{iso}", parent=self)
            return
        self.busy = True
        self.run_button.state(["disabled"])
        self.progress["value"] = 0
        self.status_var.set("Работаю…")
        self.log_line(f"— Начало обработки: {iso.name}")
        threading.Thread(target=self._worker, args=(iso,), daemon=True).start()

    def _worker(self, iso: Path) -> None:
        try:
            info = launcher.process_iso(iso, launcher.GAME_DIR, self._report)
            self.messages.put(("done", info, None))
        except launcher.LauncherError as error:
            self.messages.put(("done", None, str(error)))
        except Exception as error:  # показываем любое неожиданное исключение
            self.messages.put(("done", None, f"{type(error).__name__}: {error}"))

    def _report(self, message: str, percent=None) -> None:
        self.messages.put(("line", message, percent))

    def _drain(self) -> None:
        while True:
            try:
                kind, payload, extra = self.messages.get_nowait()
            except queue.Empty:
                break
            if kind == "line":
                self.log_line(payload)
                self.status_var.set(payload)
                if extra is not None:
                    self.progress["value"] = extra
            else:
                self.busy = False
                self.run_button.state(["!disabled"])
                if payload is None:
                    self.progress["value"] = 0
                    self.status_var.set("Ошибка")
                    self.log_line(f"[!] {extra}")
                    messagebox.showerror("Обработка не удалась", extra, parent=self)
                else:
                    self.progress["value"] = 100
                    self.status_var.set("Готово")
                    self.log_line(f"[+] Disc {payload['disc_id']} — {payload['region']}")
                    if payload["warning"]:
                        self.log_line("[!] " + payload["warning"])
                self._refresh_ready()
        self.after(120, self._drain)

    def _refresh_ready(self) -> None:
        eboot = launcher.GAME_DIR / "EBOOT.ELF"
        if eboot.exists():
            age = ""
            sfo = launcher.GAME_DIR / "PSP_GAME" / "PARAM.SFO"
            info = launcher.parse_sfo(sfo) if sfo.exists() else {}
            if info:
                age = (f"\nDisc ID: {info.get('DISC_ID', 'UNKNOWN')}"
                       f"  ({launcher.region_note(info.get('DISC_ID', ''))})"
                       f"\nНазвание: {info.get('TITLE', 'Неизвестно')}")
            self.info_var.set(f"Игра подготовлена: {eboot}\n"
                              f"Игровые файлы: {launcher.GAME_DIR / 'PSP_GAME'}{age}")
        else:
            self.info_var.set("Игра ещё не подготовлена — обработайте ISO.")

    def launch(self) -> None:
        eboot = launcher.GAME_DIR / "EBOOT.ELF"
        if not eboot.exists():
            messagebox.showinfo("Сначала ISO", "Игра не подготовлена: обработайте ISO.", parent=self)
            return
        exe = launcher.find_game_exe()
        if not exe:
            messagebox.showerror("LCSNative.exe не найден",
                                 "Соберите игру (lcs\\BUILD_LCS.bat) или положите "
                                 "LCSNative.exe рядом с лаунчером.", parent=self)
            return
        env = dict(os.environ, PSPRECOMP_CONFIG=str(launcher.INI_PATH))
        subprocess.Popen([str(exe), "--game", str(launcher.GAME_DIR)],
                         cwd=str(exe.parent), env=env)
        self.log_line(f"[+] Запуск {exe.name} — настройки управления: {launcher.INI_PATH}")

    def open_folder(self) -> None:
        launcher.GAME_DIR.mkdir(parents=True, exist_ok=True)
        os.startfile(str(launcher.GAME_DIR))


class ControlsTab(ttk.Frame):
    """Две колонки привязок на строку: клавиши клавиатуры/мыши и кнопки геймпада."""

    def __init__(self, master):
        super().__init__(master, padding=10)
        self.cfg = self._load()
        self.style = tk.StringVar(value="xbox")
        self.status_var = tk.StringVar(value="Клик по «+» — назначить, клик по иконке — убрать или заменить.")
        self.capture: tuple[str, int | None] | None = None
        self.rows: dict[str, tuple[ttk.Frame, ttk.Frame]] = {}
        self.dirty = False

        header = ttk.Frame(self)
        header.pack(fill="x")
        ttk.Label(header, text="Иконки геймпада:").pack(side="left")
        for value, text in (("xbox", "Xbox"), ("playstation", "PlayStation")):
            ttk.Radiobutton(header, text=text, value=value, variable=self.style,
                            command=self._rebuild).pack(side="left", padx=(2, 6))
        ttk.Button(header, text="Сохранить", command=self.save).pack(side="right")
        ttk.Button(header, text="Вернуть по умолчанию",
                   command=self.reset_defaults).pack(side="right", padx=6)

        self.scroll = ScrollFrame(self, scroll_enabled=lambda: self.capture is None)
        self.scroll.pack(fill="both", expand=True, pady=(8, 0))
        self._rebuild()

        sticks = ttk.Frame(self)
        sticks.pack(fill="x", pady=(8, 0))
        self.stick_vars: dict[str, tk.StringVar] = {}
        for stick, text in (("LeftStick", "Левый стик"), ("RightStick", "Правый стик")):
            ttk.Label(sticks, text=text + ":").pack(side="left")
            var = tk.StringVar(master=self, value=self.cfg.sticks[stick])
            box = ttk.Combobox(sticks, values=list(STICK_ROLES), width=8, state="readonly",
                               textvariable=var)
            box.pack(side="left", padx=(4, 14))
            box.bind("<<ComboboxSelected>>",
                     lambda e, s=stick, b=box: self._set_stick(s, b.get()))
            self.stick_vars[stick] = var
        ttk.Label(self, textvariable=self.status_var, foreground="#1a4f8a",
                  wraplength=px(880)).pack(fill="x", pady=(6, 0))
        self.item_menu = tk.Menu(self, tearoff=0)
        self.pad_menu = tk.Menu(self, tearoff=0)

    def _load(self) -> ControlsConfig:
        if launcher.INI_PATH.exists():
            return ControlsConfig.load(launcher.INI_PATH)
        return ControlsConfig()

    # --- построение списка ---
    def _rebuild(self) -> None:
        for child in self.scroll.inner.winfo_children():
            child.destroy()
        self.rows.clear()
        for text, column in (("Действие", 0), ("Клавиши на ПК", 1), ("Кнопки геймпада", 2)):
            ttk.Label(self.scroll.inner, text=text, font=("Segoe UI", 10, "bold")).grid(
                row=0, column=column, sticky="w", padx=(0, 18), pady=(0, 6))
        for number, action in enumerate(ACTIONS, start=1):
            label, on_foot, in_car = ACTION_LABELS[action]
            label_frame = ttk.Frame(self.scroll.inner)
            name_label = ttk.Label(label_frame, text=label, font=("Segoe UI", 10))
            name_label.pack(anchor="w")
            hint = ttk.Label(label_frame, foreground="#666666", justify="left",
                             wraplength=px(210),
                             text=f"пешком: {on_foot} · в машине: {in_car}")
            hint.pack(anchor="w")
            label_frame.grid(row=number, column=0, sticky="w", padx=(0, 12), pady=4)
            for widget in (label_frame, name_label, hint):
                widget.bind("<Button-1>", lambda e, a=action: self.begin_capture(a, None))
                widget.configure(cursor="hand2")
            keys = ttk.Frame(self.scroll.inner)
            keys.grid(row=number, column=1, sticky="w", padx=(0, 18), pady=4)
            pads = ttk.Frame(self.scroll.inner)
            pads.grid(row=number, column=2, sticky="w", pady=4)
            self.rows[action] = (keys, pads)
            self._refresh_row(action)
        ttk.Separator(self.scroll.inner, orient="horizontal").grid(
            row=len(ACTIONS) + 1, column=0, columnspan=3, sticky="we", pady=6)
        note = ("У одного действия не больше 4 клавиш и у кнопки геймпада — 4 действия. "
                "Названия клавиш лаунчер пишет так же, как их читает игра.")
        ttk.Label(self.scroll.inner, text=note, foreground="#666666").grid(
            row=len(ACTIONS) + 2, column=0, columnspan=3, sticky="w")
        self.scroll.inner.grid_columnconfigure(0, minsize=px(200))

    def _refresh_row(self, action: str) -> None:
        keys, pads = self.rows[action]
        for child in keys.winfo_children() + pads.winfo_children():
            child.destroy()
        for index, name in enumerate(self.cfg.actions[action]):
            self._key_icon(keys, action, name, index)
        if len(self.cfg.actions[action]) < MAX_PER_BINDING:
            self._plus(keys, lambda: self.begin_capture(action, None))
        for pad in self.cfg.pad_buttons_for(action):
            self._pad_icon(pads, action, pad)
        if len(self.cfg.pad_buttons_for(action)) < MAX_PER_BINDING:
            self._plus(pads, lambda: self._pad_menu(action, pads))

    def _plus(self, parent, command) -> None:
        button = tk.Label(parent, text="+", width=2, bg="#e0e0e0", fg="#404040",
                          font=("Segoe UI", 11, "bold"), relief="raised", bd=1, cursor="hand2")
        button.pack(side="left", padx=2)
        button.bind("<Button-1>", lambda e: command())

    def _key_icon(self, parent, action: str, name: str, index: int) -> None:
        kind = mouse_kind(name)
        caption = key_caption(name)
        width, height = key_icon_width(caption, kind), px(KEY_HEIGHT)
        canvas = tk.Canvas(parent, width=width, height=height, bg=LIST_BG,
                           highlightthickness=0)
        button_icons.draw_key(canvas, caption, width, height, kind)
        canvas.pack(side="left", padx=(0, 4))
        canvas.bind("<Button-1>", lambda e, a=action, n=name, i=index: self._key_menu(e, a, n, i))
        canvas.bind("<Button-3>", lambda e, a=action, n=name, i=index: self._key_menu(e, a, n, i))

    def _pad_icon(self, parent, action: str, pad: str) -> None:
        canvas = tk.Canvas(parent, width=px(PAD_SIZE), height=px(PAD_SIZE), bg=LIST_BG,
                           highlightthickness=0)
        button_icons.draw_pad(canvas, PAD_ICON_TOKEN[pad], self.style.get(), px(PAD_SIZE))
        canvas.pack(side="left", padx=(0, 4))
        canvas.bind("<Button-1>", lambda e, p=pad: self._unbind_pad(action, p))
        canvas.bind("<Button-3>", lambda e, p=pad: self._unbind_pad(action, p))

    # --- редактирование ---
    def _key_menu(self, event, action: str, name: str, index: int) -> None:
        self.item_menu.delete(0, "end")
        self.item_menu.add_command(label=f"Заменить «{key_caption(name)}»…",
                                   command=lambda a=action, i=index: self.begin_capture(a, i))
        self.item_menu.add_command(label="Убрать",
                                   command=lambda a=action, i=index: self._remove_key(a, i))
        self.item_menu.tk_popup(event.x_root, event.y_root)

    def _remove_key(self, action: str, index: int) -> None:
        if 0 <= index < len(self.cfg.actions[action]):
            removed = self.cfg.actions[action].pop(index)
            self._after_change(action, f"«{key_caption(removed)}» убрана — не забудьте сохранить.")

    def _unbind_pad(self, action: str, pad: str) -> None:
        self._toggle_pad(action, pad)

    def _pad_menu(self, action: str, parent: ttk.Frame) -> None:
        bound = set(self.cfg.pad_buttons_for(action))
        self.pad_menu.delete(0, "end")
        for pad in PAD_BUTTONS:
            label = self._pad_label(pad)
            self.pad_menu.add_command(
                label=("✓ " if pad in bound else "   ") + f"{label}  ·  {PAD_LABELS[pad][2]}",
                command=lambda p=pad, a=action: self._toggle_pad(a, p))
        self.pad_menu.tk_popup(parent.winfo_pointerx(), parent.winfo_pointery())

    def _pad_label(self, pad: str) -> str:
        return PAD_LABELS[pad][0 if self.style.get() == "xbox" else 1]

    def _toggle_pad(self, action: str, pad: str) -> None:
        label = self._pad_label(pad)
        if action in self.cfg.pads[pad]:
            self.cfg.toggle_pad(pad, action)
            message = f"{label} отвязана — не забудьте сохранить."
        elif len(self.cfg.pads[pad]) >= MAX_PER_BINDING:
            message = f"На {label} уже 4 действия — сначала освободите кнопку."
        else:
            self.cfg.toggle_pad(pad, action)
            message = f"{label} → «{ACTION_LABELS[action][0]}» — не забудьте сохранить."
        self._after_change(action, message)

    def begin_capture(self, action: str, slot: int | None) -> None:
        self.capture = (action, slot)
        top = self.winfo_toplevel()
        top.focus_force()
        top.bind("<KeyPress>", self._on_key, add="+")
        top.bind("<ButtonPress>", self._on_button, add="+")
        top.bind("<MouseWheel>", self._on_wheel, add="+")
        self.status_var.set("Нажмите клавишу, кнопку мыши или колесо… Esc — отмена.")

    def _end_capture(self) -> None:
        top = self.winfo_toplevel()
        top.unbind("<KeyPress>")
        top.unbind("<ButtonPress>")
        top.unbind("<MouseWheel>")
        self.capture = None

    def _on_key(self, event) -> str | None:
        if self.capture is None:
            return None
        if event.keysym == "Escape":
            self._end_capture()
            self.status_var.set("Назначение отменено.")
            return "break"
        action, slot = self.capture
        name = key_name_from_event(event)
        self._end_capture()
        if not name:
            self.status_var.set(f"Клавиша {event.keysym or '?'} игрой не поддерживается.")
            return "break"
        self._assign_key(action, name, slot)
        return "break"

    def _on_button(self, event) -> str | None:
        if self.capture is None:
            return None
        action, slot = self.capture
        name = MOUSE_BUTTONS.get(event.num)
        self._end_capture()
        if not name:
            self.status_var.set("Ввод клавиши отменён.")
            return "break"
        self._assign_key(action, name, slot)
        return "break"

    def _on_wheel(self, event) -> str | None:
        if self.capture is None:
            return None
        action, slot = self.capture
        self._end_capture()
        self._assign_key(action, "WheelUp" if event.delta > 0 else "WheelDown", slot)
        return "break"

    def _assign_key(self, action: str, name: str, slot: int | None) -> None:
        if name not in HOST_KEYS:
            self.status_var.set(f"Клавиша {name} не распознана.")
            return
        keys = self.cfg.actions[action]
        if name in keys:
            keys.remove(name)
        if slot is None:
            if len(keys) >= MAX_PER_BINDING:
                self.status_var.set("Для действия уже назначено 4 клавиши.")
                return
            keys.append(name)
        else:
            keys.insert(min(slot, len(keys)), name)
        self._after_change(action, f"{key_caption(name)} → «{ACTION_LABELS[action][0]}»."
                                   " Не забудьте сохранить.")

    def _set_stick(self, stick: str, value: str) -> None:
        self.cfg.sticks[stick] = value if value in STICK_ROLES else "None"
        self.dirty = True
        self.status_var.set("Стики обновлены — не забудьте сохранить.")

    def _after_change(self, action: str, message: str) -> None:
        self.dirty = True
        self._refresh_row(action)
        self.status_var.set(message)

    # --- запись в LCSNative.ini ---
    def save(self) -> bool:
        try:
            if not launcher.INI_PATH.exists():
                launcher.INI_PATH.parent.mkdir(parents=True, exist_ok=True)
                launcher.INI_PATH.write_text("[Controls]\n", encoding="utf-8")
            self.cfg.save(launcher.INI_PATH)
        except OSError as error:
            messagebox.showerror("Не удалось сохранить", str(error), parent=self)
            return False
        self.dirty = False
        self.status_var.set(f"Сохранено в {launcher.INI_PATH}")
        return True

    def reset_defaults(self) -> None:
        if not messagebox.askyesno(
                "Сброс настроек",
                "Вернуть все клавиши, кнопки геймпада и стики к значениям по умолчанию?",
                parent=self):
            return
        self.cfg.reset_defaults()
        for stick, var in self.stick_vars.items():
            var.set(self.cfg.sticks[stick])
        self._rebuild()
        self.dirty = False
        self.status_var.set("Настройки управления вернулись к значениям по умолчанию.")
        self.save()


class LauncherApp(tk.Tk):
    def __init__(self):
        super().__init__()
        global SCALE
        self.title(APP_TITLE)
        self.update_idletasks()  # окно Tk должно существовать до запроса DPI

        SCALE = detect_scale(self)
        if SCALE > 1.0:
            self.tk.call("tk", "scaling", 96 * SCALE / 72)
        self.geometry(f"{px(1040)}x{px(760)}")
        self.minsize(px(880), px(620))
        icon = launcher.REPO_ROOT / "lcs" / "resources" / "lcsnative.ico"
        if not icon.exists() and getattr(sys, "frozen", False):
            icon = Path(sys._MEIPASS) / "lcsnative.ico"
        if icon.exists():
            try:
                self.iconbitmap(str(icon))
            except tk.TclError:
                pass
        style = ttk.Style(self)
        style.configure("TLabelframe.Label", foreground="#1a4f8a")
        style.configure("TNotebook.Tab", padding=(14, 6))
        notebook = ttk.Notebook(self)
        notebook.pack(fill="both", expand=True, padx=8, pady=8)
        notebook.add(GameTab(notebook), text="  Игра  ")
        notebook.add(ControlsTab(notebook), text="  Управление  ")


def main() -> None:
    LauncherApp().mainloop()


if __name__ == "__main__":
    main()
