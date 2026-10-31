#!/usr/bin/env python3
"""
LCS Recomp Multi-Region ISO Launcher
Extracts PSP_GAME + decrypts EBOOT.BIN from any LCS ISO (US/EU/JP/DE/etc).
Requires: 7-Zip (7z in PATH) + pspdecrypt.exe next to this script or in PATH.
"""

import os
import re
import sys
import shutil
import subprocess
import tempfile
from pathlib import Path


def _base_dir() -> Path:
    """Собранный exe ищет игру рядом с собой; скрипт — в корне репозитория."""
    if getattr(sys, "frozen", False):
        return Path(sys.executable).resolve().parent
    return Path(__file__).resolve().parent.parent


# LCSNative and PLAY_LCS.bat read the game from lcs/game, independent of the
# working directory the launcher was started from.
REPO_ROOT = _base_dir()
GAME_DIR = REPO_ROOT / "lcs" / "game"
INI_PATH = REPO_ROOT / "lcs" / "config" / "LCSNative.ini"
PSPDECRYPT = "pspdecrypt.exe"
SEVENZIP = "7z"
PRIMARY_DISC_ID = "ULUS10041"


class LauncherError(RuntimeError):
    """Что пошло не так — текстом для пользователя."""


# Known LCS disc IDs, spelled as PARAM.SFO stores them (redump writes them with
# a dash, the disc itself does not).
KNOWN_IDS = {
    "ULUS10041": "US v1.05 (recommended)",
    "ULES00151": "Europe",
    "ULES00182": "Germany",
    "ULJM05255": "Japan",
    "ULJM05885": "Japan Rockstar Classics",
    "ULKS46157": "Korea",
}

def region_note(disc_id: str) -> str:
    return KNOWN_IDS.get(disc_id.replace("-", ""), "Unknown region (may still work)")

def find_tool(name: str) -> str:
    here = Path(__file__).parent
    found = shutil.which(name)
    if found:
        return found
    # 7-Zip installs to Program Files without touching PATH, and on Windows the
    # executable carries an extension the caller does not spell out.
    names = [name] + ([] if Path(name).suffix else [name + ".exe"])
    candidates = [here / n for n in names]
    if getattr(sys, "frozen", False):
        # PyInstaller: bundled helper lives in the temp bundle, tools next to the exe.
        candidates += [Path(sys._MEIPASS) / n for n in names]
        candidates += [Path(sys.executable).parent / n for n in names]
        candidates += [Path(sys.executable).parent / "tools" / n for n in names]
    candidates += [
        Path(directory) / n
        for directory in ("C:\\Program Files\\7-Zip", "C:\\Program Files (x86)\\7-Zip")
        for n in names
    ]
    for candidate in candidates:
        if candidate.exists():
            return str(candidate)
    return name

def extract_iso(iso_path: Path, dest: Path, report=None) -> None:
    sevenzip = find_tool(SEVENZIP)
    if not Path(sevenzip).exists() and not shutil.which(sevenzip):
        raise LauncherError("7-Zip не найден. Установите его командой: winget install -e --id 7zip.7zip")
    args = [sevenzip, "x", str(iso_path), f"-o{dest}", "-y"]
    if report is None:
        print(f"[*] Extracting {iso_path.name} ...")
        # A 1.2 GB disc runs for a while, so 7-Zip keeps the console for progress.
        result = subprocess.run(args + ["PSP_GAME"])
        if result.returncode != 0:
            raise LauncherError("7-Zip не смог прочитать этот ISO.")
        return
    # -bsp1 routes 7-Zip's percentage line to stdout so the GUI can show it.
    process = subprocess.Popen(args + ["-bsp1", "PSP_GAME"],
                               stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
                               text=True, encoding="latin-1", errors="replace")
    shown = None
    for line in process.stdout:
        marker = re.search(r"\b(\d{1,3})%", line)
        if marker and marker.group(1) != shown:
            shown = marker.group(1)
            report(f"Извлечение PSP_GAME — {shown}%", int(shown) * 80 // 100)
    if process.wait() != 0:
        raise LauncherError("7-Zip не смог прочитать этот ISO.")


def decrypt_eboot(src: Path, dst: Path, report=None) -> None:
    if report is None:
        print("[*] Decrypting EBOOT.BIN ...")
    else:
        report("Расшифровка EBOOT.BIN ...", 85)
    dec = find_tool(PSPDECRYPT)
    if not Path(dec).exists() and not shutil.which(dec):
        raise LauncherError(
            "pspdecrypt.exe не найден. Скачайте: https://github.com/John-K/pspdecrypt/releases")
    result = subprocess.run([dec, str(src), "-o", str(dst)], capture_output=True, text=True)
    if result.returncode != 0:
        raise LauncherError("pspdecrypt не смог расшифровать EBOOT.BIN:\n"
                            + (result.stderr or result.stdout or ""))


def parse_sfo(sfo_path: Path) -> dict:
    """PARAM.SFO reader: a 20-byte header, then one 16-byte record per key.
    Each record stores the key offset as u16 and the value length/offset as
    u32; the key area right after the table is what bounds the record count."""
    if not sfo_path.exists():
        return {}
    blob = sfo_path.read_bytes()
    if len(blob) < 36 or blob[:4] != b"\x00PSF":
        return {}

    def u16(offset: int) -> int:
        return int.from_bytes(blob[offset:offset + 2], "little")

    def u32(offset: int) -> int:
        return int.from_bytes(blob[offset:offset + 4], "little")

    key_start, data_start = u32(8), u32(12)
    values = {}
    for base in range(20, key_start - 15, 16):
        key_offset, value_len, value_offset = u16(base), u32(base + 4), u32(base + 12)
        name = blob[key_start + key_offset:].split(b"\0")[0].decode("ascii", errors="ignore")
        value = blob[data_start + value_offset:data_start + value_offset + value_len]
        value = value.split(b"\0")[0].decode("latin-1", errors="ignore")
        if name.replace("_", "").isalnum():
            values[name] = value

    return {key: values[key] for key in ("DISC_ID", "TITLE") if key in values}

def process_iso(iso_path: Path, game_dir: Path | None = None, report=None) -> dict:
    """Полный конвейер: PSP_GAME -> EBOOT.ELF -> сведения о диске.

    report(сообщение, процент) — колбэк интерфейса; без него работают как CLI.
    """
    game_dir = Path(game_dir or GAME_DIR)
    iso_path = Path(iso_path)
    if not iso_path.exists():
        raise LauncherError(f"ISO не найден: {iso_path}")
    say = report or (lambda message, percent=None: print(message))

    game_dir.mkdir(parents=True, exist_ok=True)
    say("Подготовка папки игры", 0)

    # 7z recreates PSP_GAME under the destination, so unpack straight into the
    # game folder rather than writing the 1.2 GB disc twice.
    psp = game_dir / "PSP_GAME"
    if psp.exists():
        say("Удаление предыдущей версии PSP_GAME ...", 2)
        shutil.rmtree(psp)
    extract_iso(iso_path, game_dir, report)
    if not psp.exists():
        raise LauncherError("В этом ISO нет папки PSP_GAME — похоже, это не игра PSP.")

    eboot_bin = psp / "SYSDIR" / "EBOOT.BIN"
    if not eboot_bin.exists():
        raise LauncherError("В ISO нет SYSDIR/EBOOT.BIN.")
    eboot_elf = game_dir / "EBOOT.ELF"
    decrypt_eboot(eboot_bin, eboot_elf, report)
    if not eboot_elf.exists():
        raise LauncherError("EBOOT.ELF не появился после расшифровки.")

    info = parse_sfo(psp / "PARAM.SFO")
    disc_id = info.get("DISC_ID", "UNKNOWN")
    title = info.get("TITLE", "Неизвестно")
    warning = None
    if disc_id.replace("-", "") != PRIMARY_DISC_ID:
        warning = ("Адреса в собранном коде проверены для ULUS-10041 (US v1.05).\n"
                   "    Другие регионы могут работать с ошибками; извлечение прошло успешно.")
    say("Готово", 100)
    return {"disc_id": disc_id, "title": title, "region": region_note(disc_id),
            "warning": warning, "game_dir": str(game_dir.resolve()), "psp_game": str(psp)}


def find_game_exe() -> Path | None:
    """Собранный LCSNative.exe: рядом с лаунчером или в дереве сборки."""
    names = ("LCSNative.exe", "lcs.exe")
    roots = [REPO_ROOT, REPO_ROOT / "lcs", REPO_ROOT / "out",
             REPO_ROOT / "out" / "lcs-clang", REPO_ROOT / "out" / "lcs-clang" / "lcs",
             REPO_ROOT / "out" / "lcs-msvc", REPO_ROOT / "out" / "lcs-msvc" / "lcs"]
    for root in roots:
        for name in names:
            candidate = root / name
            if candidate.exists():
                return candidate
    return None


def main():
    if len(sys.argv) < 2:
        print("Usage: python launcher.py <path-to-iso>")
        print("Supports any LCS region (US/EU/JP/DE/...).")
        sys.exit(1)
    try:
        info = process_iso(Path(sys.argv[1]), GAME_DIR)
    except LauncherError as error:
        print(f"[-] {error}")
        sys.exit(1)
    print()
    print("[+] Done!")
    print(f"    Disc ID : {info['disc_id']}")
    print(f"    Title   : {info['title']}")
    print(f"    Region  : {info['region']}")
    if info["warning"]:
        print()
        print(f"[!] {info['warning']}")
    print()
    print(f"Files ready in: {info['game_dir']}")
    print("Run PLAY_LCS.bat or the built LCSNative.exe")

if __name__ == "__main__":
    main()
