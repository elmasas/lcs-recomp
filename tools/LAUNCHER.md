# LCS image launcher (CLI and GUI)

## 1. `LCSLauncher.exe` — GUI

The executable sits at the repo root, next to the `lcs` folder (that is where
the game and settings live).

**Game tab**
1. Browse… — pick an ISO/CSO/PBP image.
2. Process ISO — extracts `PSP_GAME` into `lcs\game`, decrypts
   `SYSDIR\EBOOT.BIN` to `lcs\game\EBOOT.ELF`, reads `PARAM.SFO` and shows
   Disc ID, title and region. Progress and a log appear in the window.
3. Launch game — starts the built `LCSNative.exe` with the game folder and
   `lcs\config\LCSNative.ini`. Open game folder opens that directory in
   Explorer.

**Controls tab**
- Two columns per action: PC keys (keycaps, LMB/RMB/MMB, side buttons and
  wheel) and gamepad buttons.
- Icon display: PlayStation, Xbox, or keyboard and mouse — both in the
  launcher table and in the in-game HUD. Written to `Display.ButtonPrompts`
  (`Original` / `xbox` / `kb`). On save the launcher builds
  `lcs/config/textures/<style>/` from `_source`.
- Bind: click the action name or +, then press a key, mouse button or
  scroll the wheel. Esc cancels.
- Remove or replace: click the icon (right-click works too).
- Gamepad button: + opens the full button list; ✓ means already bound.
- Restore defaults — resets keys, pads and sticks from
  `default_control_bindings()` and saves immediately.
- Stick roles — Left stick / Right stick dropdowns.
- At most 4 keys per action and 4 actions per pad button, matching the
  engine.

Needs: 7-Zip (`winget install -e --id 7zip.7zip`); `pspdecrypt.exe` is
already inside the exe.

### Language (i18n)

English is the default UI language and the source of every string key.
Russian is an optional catalog in `tools/i18n.py`.

- Default: English.
- On a Russian Windows UI language the launcher picks Russian automatically.
- Override with `LCS_LAUNCHER_LANG=en` or `LCS_LAUNCHER_LANG=ru`.

## 2. Rebuild the exe

From the repo root (Python 3.11+, PyInstaller):

```
python -m PyInstaller --noconfirm --onefile --windowed --name LCSLauncher ^
  --icon lcs/resources/lcsnative.ico ^
  --add-binary tools/pspdecrypt.exe;. ^
  --hidden-import prompt_pack --hidden-import button_icons ^
  --hidden-import lcs_controls_model --hidden-import launcher ^
  --hidden-import i18n --paths tools tools/launcher_gui.py
```

Copy `dist\LCSLauncher.exe` to the repo root.

## 3. CLI

`python tools\launcher.py "C:\path\to\GTA_Liberty_City_Stories.iso"` or drop
an ISO onto `tools\launcher.bat`. Same pipeline without the GUI.

## Regions

Best tested is **ULUS-10041 (US v1.05)** — engine addresses are built for it.
Other discs (ULES-00151, ULES-00182, ULJM-05255, ULKS-46157) extract fine but
may glitch in-game.
