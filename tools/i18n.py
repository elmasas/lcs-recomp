"""Launcher localization.

English strings are the source of truth: pass the English text to ``t()`` and it
is returned unchanged unless a translation catalog is active. Russian is an
optional overlay selected by ``LCS_LAUNCHER_LANG`` or the Windows UI language.
"""

from __future__ import annotations

import locale
import os
import sys

# English message -> Russian translation. Keys must match the English UI text
# exactly (including punctuation where used as a full sentence).
RU: dict[str, str] = {
    # Tabs and chrome
    "Game": "Игра",
    "Controls": "Управление",
    "  Game  ": "  Игра  ",
    "  Controls  ": "  Управление  ",

    # Game tab
    " 1. Game image ": " 1. Образ игры ",
    "Game ISO file:": "ISO-файл игры:",
    "Browse…": "Обзор…",
    "Process ISO": "Обработать ISO",
    "Choose a game image and click Process ISO.": "Выберите образ игры и нажмите «Обработать ISO».",
    "Game is not ready yet.": "Игра ещё не подготовлена.",
    " 2. Game ": " 2. Игра ",
    "Launch game": "Запустить игру",
    "Open game folder": "Открыть папку с игрой",
    " Log ": " Журнал ",
    "Choose game ISO": "Выберите ISO игры",
    "PSP images": "Образы PSP",
    "All files": "Все файлы",
    "ISO required": "Нужен ISO",
    "Choose a game ISO file first.": "Сначала выберите ISO-файл игры.",
    "ISO not found": "ISO не найден",
    "File not found:\n{path}": "Файл не найден:\n{path}",
    "Working…": "Работаю…",
    "— Starting: {name}": "— Начало обработки: {name}",
    "Error": "Ошибка",
    "Processing failed": "Обработка не удалась",
    "Done": "Готово",
    "Title: {title}": "Название: {title}",
    "Unknown": "Неизвестно",
    "Game ready: {eboot}\nGame files: {psp}{extra}":
        "Игра подготовлена: {eboot}\nИгровые файлы: {psp}{extra}",
    "Game is not ready yet — process an ISO.": "Игра ещё не подготовлена — обработайте ISO.",
    "Process ISO first": "Сначала ISO",
    "Game is not ready: process an ISO.": "Игра не подготовлена: обработайте ISO.",
    "LCSNative.exe not found": "LCSNative.exe не найден",
    "Build the game (lcs\\BUILD_LCS.bat) or place LCSNative.exe next to the launcher.":
        "Соберите игру (lcs\\BUILD_LCS.bat) или положите LCSNative.exe рядом с лаунчером.",
    "Game engine: {exe}\nGame folder: {game}\nSettings file: {ini}":
        "Игровой движок: {exe}\nПапка игры: {game}\nФайл настроек: {ini}",
    "LCSNative.exe not found — build the project":
        "LCSNative.exe не найден — соберите проект",
    "[!] Could not build prompt icons: {error}":
        "[!] Не удалось собрать иконки подсказок: {error}",
    "[+] Launching {name} — controls: {ini}":
        "[+] Запуск {name} — настройки управления: {ini}",

    # Controls tab
    "Icon display:": "Отображение иконок:",
    "Keyboard and mouse": "Клавиатура и мышь",
    "Save": "Сохранить",
    "Restore defaults": "Вернуть по умолчанию",
    "Click + to bind, click an icon to remove or replace.":
        "Клик по «+» — назначить, клик по иконке — убрать или заменить.",
    "Left stick": "Левый стик",
    "Right stick": "Правый стик",
    "Action": "Действие",
    "PC keys": "Клавиши на ПК",
    "Gamepad buttons": "Кнопки геймпада",
    "on foot: {on_foot} · in vehicle: {in_car}":
        "пешком: {on_foot} · в машине: {in_car}",
    "An action can have at most 4 keys and a gamepad button can have 4 actions. "
    "The launcher writes key names the same way the game reads them.":
        "У одного действия не больше 4 клавиш и у кнопки геймпада — 4 действия. "
        "Названия клавиш лаунчер пишет так же, как их читает игра.",
    "Replace “{caption}”…": "Заменить «{caption}»…",
    "Remove": "Убрать",
    "“{caption}” removed — remember to save.":
        "«{caption}» убрана — не забудьте сохранить.",
    "Icon style changed — click Save to apply in-game.":
        "Стиль иконок изменён — нажмите «Сохранить», чтобы применить в игре.",
    "{label} unbound — remember to save.":
        "{label} отвязана — не забудьте сохранить.",
    "{label} already has 4 actions — free a slot first.":
        "На {label} уже 4 действия — сначала освободите кнопку.",
    "{label} → “{action}” — remember to save.":
        "{label} → «{action}» — не забудьте сохранить.",
    "Press a key, mouse button, or wheel… Esc cancels.":
        "Нажмите клавишу, кнопку мыши или колесо… Esc — отмена.",
    "Binding cancelled.": "Назначение отменено.",
    "Key {key} is not supported by the game.":
        "Клавиша {key} игрой не поддерживается.",
    "Key input cancelled.": "Ввод клавиши отменён.",
    "Key {name} was not recognized.": "Клавиша {name} не распознана.",
    "This action already has 4 keys.": "Для действия уже назначено 4 клавиши.",
    "{caption} → “{action}”. Remember to save.":
        "{caption} → «{action}». Не забудьте сохранить.",
    "Sticks updated — remember to save.":
        "Стики обновлены — не забудьте сохранить.",
    "Could not save": "Не удалось сохранить",
    "Saved to {path}": "Сохранено в {path}",
    "Reset controls": "Сброс настроек",
    "Restore every key, gamepad button, and stick to the defaults?":
        "Вернуть все клавиши, кнопки геймпада и стики к значениям по умолчанию?",
    "Controls restored to defaults.":
        "Настройки управления вернулись к значениям по умолчанию.",

    # Action labels (name, on foot, in vehicle)
    "Forward": "Вперёд",
    "walk": "идти",
    "accelerate": "газ",
    "Back": "Назад",
    "walk back": "идти назад",
    "brake": "тормоз",
    "Left": "Влево",
    "movement": "движение",
    "steer": "руль",
    "Right": "Вправо",
    "Walk": "Шаг",
    "short steps": "короткие шаги",
    "—": "—",
    "Sprint": "Бег",
    "run": "бежать",
    "not sent": "не отправляется",
    "Jump": "Прыжок",
    "jump": "прыжок",
    "Enter / exit": "Сесть/выйти",
    "vehicle": "транспорт",
    "Attack": "Атака",
    "fire": "огонь",
    "Aim": "Прицел",
    "aim": "прицел",
    "Camera behind": "Камера сзади",
    "and pick up weapon": "и подобрать оружие",
    "pick up weapon": "подобрать оружие",
    "Previous weapon": "Оружие назад",
    "weapon": "оружие",
    "radio": "радиостанция",
    "Next weapon": "Оружие вперёд",
    "Up": "Вверх",
    "side mission": "спецмиссия",
    "pitch up": "наклон вверх",
    "Down": "Вниз",
    "horn cue": "сигнал",
    "horn, pitch down": "гудок, наклон вниз",
    "Pause": "Пауза",
    "pause": "пауза",
    "Change camera": "Сменить камеру",
    "camera": "камера",
    "Handbrake": "Ручной тормоз",
    "handbrake": "ручник",

    # Pad face / role hints (PlayStation names and foot roles)
    "Cross": "Крестик",
    "Circle": "Круг",
    "Square": "Квадрат",
    "Triangle": "Треугольник",
    "sprint": "бег",
    "attack": "атака",
    "D-pad up": "↑ крестовины",
    "D-pad down": "↓ крестовины",
    "D-pad left": "← крестовины",
    "D-pad right": "→ крестовины",
    "horn": "гудок",
    "previous weapon": "оружие назад",
    "next weapon": "оружие вперёд",
    "nothing": "ничего",

    # Key captions
    "Space": "Пробел",
    "LMB": "ЛКМ",
    "RMB": "ПКМ",
    "MMB": "СКМ",
    "M4": "М4",
    "M5": "М5",
    "Wheel ↑": "Колесо ↑",
    "Wheel ↓": "Колесо ↓",

    # launcher.py pipeline messages
    "7-Zip was not found. Install it with: winget install -e --id 7zip.7zip":
        "7-Zip не найден. Установите его командой: winget install -e --id 7zip.7zip",
    "7-Zip could not read this ISO.": "7-Zip не смог прочитать этот ISO.",
    "Extracting PSP_GAME — {percent}%": "Извлечение PSP_GAME — {percent}%",
    "Decrypting EBOOT.BIN ...": "Расшифровка EBOOT.BIN ...",
    "pspdecrypt.exe was not found. Download: https://github.com/John-K/pspdecrypt/releases":
        "pspdecrypt.exe не найден. Скачайте: https://github.com/John-K/pspdecrypt/releases",
    "pspdecrypt could not decrypt EBOOT.BIN:\n{detail}":
        "pspdecrypt не смог расшифровать EBOOT.BIN:\n{detail}",
    "ISO not found: {path}": "ISO не найден: {path}",
    "Preparing game folder": "Подготовка папки игры",
    "Removing previous PSP_GAME ...": "Удаление предыдущей версии PSP_GAME ...",
    "This ISO has no PSP_GAME folder — it does not look like a PSP game.":
        "В этом ISO нет папки PSP_GAME — похоже, это не игра PSP.",
    "This ISO has no SYSDIR/EBOOT.BIN.": "В ISO нет SYSDIR/EBOOT.BIN.",
    "EBOOT.ELF did not appear after decryption.":
        "EBOOT.ELF не появился после расшифровки.",
    "Addresses in the built code were verified for ULUS-10041 (US v1.05).\n"
    "    Other regions may glitch; extraction still succeeded.":
        "Адреса в собранном коде проверены для ULUS-10041 (US v1.05).\n"
        "    Другие регионы могут работать с ошибками; извлечение прошло успешно.",
    "No [Controls] section in {path}": "В {path} нет секции [Controls]",
}

_catalog: dict[str, str] = {}
_lang = "en"


def detect_language() -> str:
    """Return ``en`` or ``ru``. ``LCS_LAUNCHER_LANG`` wins when set."""
    forced = (os.environ.get("LCS_LAUNCHER_LANG") or "").strip().lower()
    if forced.startswith("ru"):
        return "ru"
    if forced.startswith("en"):
        return "en"
    try:
        if sys.platform == "win32":
            import ctypes
            lang_id = ctypes.windll.kernel32.GetUserDefaultUILanguage()
            # Primary language ID 0x19 = Russian.
            if (lang_id & 0x3FF) == 0x19:
                return "ru"
    except Exception:
        pass
    try:
        name = (locale.getdefaultlocale()[0] or "").lower()
        if name.startswith("ru"):
            return "ru"
    except Exception:
        pass
    return "en"


def set_language(lang: str | None = None) -> str:
    """Activate a language catalog. Returns the language code in use."""
    global _catalog, _lang
    _lang = detect_language() if lang is None else lang.strip().lower()
    if _lang.startswith("ru"):
        _lang = "ru"
        _catalog = RU
    else:
        _lang = "en"
        _catalog = {}
    return _lang


def language() -> str:
    return _lang


def t(message: str, **kwargs) -> str:
    """Translate ``message`` (English source) and optionally format kwargs."""
    text = _catalog.get(message, message)
    if kwargs:
        try:
            return text.format(**kwargs)
        except (KeyError, ValueError):
            return text
    return text


# Pick a language when the module is imported so early callers see translations.
set_language()
