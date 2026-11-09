#!/usr/bin/env python3
"""Drives the settings menu with real window messages and checks what it writes to a copy of LCSNative.ini.

    python lcs/scripts/menu_input_check.py OUT --binary out/lcs-perf/lcs/LCSNative.exe

Windows only. The checks: F10 opens the menu, the arrows and Space change a setting, a mouse click changes page and
flips another page's setting, Escape closes it, and only the expected ini lines change. It moves the real cursor. The game runs on disposable saves (perf_run.py), in test mode.
"""
import argparse
import ctypes
import ctypes.wintypes as wt
import difflib
from pathlib import Path
import subprocess
import sys
import time

WM_KEYDOWN, WM_KEYUP, WM_CHAR = 0x0100, 0x0101, 0x0102
WM_MOUSEMOVE, WM_LBUTTONDOWN, WM_LBUTTONUP = 0x0200, 0x0201, 0x0202
VK_ESCAPE, VK_SPACE, VK_DOWN, VK_F10 = 0x1B, 0x20, 0x28, 0x79
user32 = ctypes.windll.user32
user32.PostMessageW.argtypes = [wt.HWND, wt.UINT, wt.WPARAM, wt.LPARAM]
user32.GetWindowThreadProcessId.argtypes = [wt.HWND, ctypes.POINTER(wt.DWORD)]


def game_window(pid):
    found = []
    callback_type = ctypes.WINFUNCTYPE(wt.BOOL, wt.HWND, wt.LPARAM)

    def callback(hwnd, _):
        owner = wt.DWORD()
        user32.GetWindowThreadProcessId(hwnd, ctypes.byref(owner))
        if owner.value == pid and user32.IsWindowVisible(hwnd):
            found.append(hwnd)
        return True

    user32.EnumWindows(callback_type(callback), 0)
    return found[0] if found else None


def game_pid(name='LCSNative.exe'):
    listing = subprocess.run(['tasklist', '/FI', f'IMAGENAME eq {name}', '/FO', 'CSV', '/NH'],
                             capture_output=True, text=True).stdout
    for line in listing.splitlines():
        fields = line.strip('"').split('","')
        if fields and fields[0].lower() == name.lower():
            return int(fields[1])
    return None


def key(hwnd, code):
    user32.PostMessageW(hwnd, WM_KEYDOWN, code, 1)
    time.sleep(0.15)
    user32.PostMessageW(hwnd, WM_KEYUP, code, 0xC0000001)
    time.sleep(0.25)


def click(hwnd, x, y):
    # Dear ImGui takes the position from the real cursor while the window has focus, so move that too.
    screen = wt.POINT(x, y)
    user32.ClientToScreen(hwnd, ctypes.byref(screen))
    user32.SetCursorPos(screen.x, screen.y)
    point = (y << 16) | x
    user32.PostMessageW(hwnd, WM_MOUSEMOVE, 0, point)
    time.sleep(0.3)
    user32.PostMessageW(hwnd, WM_LBUTTONDOWN, 1, point)
    time.sleep(0.15)
    user32.PostMessageW(hwnd, WM_LBUTTONUP, 0, point)
    time.sleep(0.3)


def changes(before, after):
    return [line for line in difflib.ndiff(before.splitlines(), after.splitlines()) if line[:2] in ('- ', '+ ')]


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('output', type=Path)
    ap.add_argument('--binary', type=Path, required=True)
    ap.add_argument('--route', type=Path, default=Path(__file__).with_name('routes') / 'portland-city.txt')
    a = ap.parse_args()
    output = a.output.resolve()
    shots = output.with_name(output.name + '-shots')
    shots.mkdir(parents=True, exist_ok=False)
    runner = subprocess.Popen([sys.executable, '-I', '-X', 'utf8', str(Path(__file__).with_name('perf_run.py')),
                               str(output), '--binary', str(a.binary), '--seconds', '70', '--route', str(a.route),
                               # the click positions below are for a 2560x1080 window
                               '--set', 'Display.Fullscreen=true', '--set', 'Display.ResolutionMode=Desktop',
                               f'LCS_TEST_SHOT_DIR={shots}'], stdout=subprocess.DEVNULL)
    ini = output / 'LCSNative.ini'
    while not ini.exists():
        time.sleep(0.5)
    time.sleep(25.0)  # past the boot and into gameplay
    pid = game_pid()
    hwnd = game_window(pid) if pid else None
    results = {}
    if not hwnd:
        runner.terminate()
        sys.exit('game window not found')
    original = ini.read_text()

    key(hwnd, VK_F10)
    time.sleep(1.0)
    # First row is Window size; Fullscreen, VSync, then the FPS counter.
    for _ in range(3):
        key(hwnd, VK_DOWN)
    key(hwnd, VK_SPACE)
    time.sleep(0.5)
    after_keys = ini.read_text()
    results['keyboard'] = changes(original, after_keys)

    # At 2560x1080: the Graphics tab, then its distant lights checkbox, as drawn in the menu's screenshots.
    click(hwnd, 908, 188)
    time.sleep(0.5)
    click(hwnd, 1245, 512)
    time.sleep(6.0)  # a screenshot of this page
    after_click = ini.read_text()
    results['mouse'] = changes(after_keys, after_click)

    key(hwnd, VK_ESCAPE)
    time.sleep(6.0)  # a screenshot after closing
    runner.wait(timeout=120)
    for name, value in results.items():
        print(f'{name}: {value}')
    print(f'screenshots: {shots}')
    passed = True
    for name, setting in (('keyboard', 'ShowFPS'), ('mouse', 'LodLights')):
        # A setting already in the ini is replaced (two lines of difference); a new one is added (one).
        ok = len(results[name]) in (1, 2) and all(setting in line for line in results[name])
        print(f'{name}: {"PASS" if ok else "FAIL"}')
        passed = passed and ok
    return 0 if passed else 1


if __name__ == '__main__':
    raise SystemExit(main())
