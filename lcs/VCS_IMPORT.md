# Code taken from VCS Recomp

This fork is distributed under GPL-3.0 (`LICENSE`) because it includes code from VCS Recomp. The code it started from
is MIT, and that notice stays in `licenses/PSPRecomp-MIT.txt`.

Source: `gothamor/gta-vcs-recomp`, version 0.2.3, commit `ecf150e53f87e4656dfe81eacd922839d952b282` (GPL-3.0).

| Here | There | Changes |
| --- | --- | --- |
| `lcs/host/vcs/crash.cpp`, `crash.h`, `win_symbols.h` | `src/debug/` | A source line added; references to VCS Recomp's own docs removed |
| `lcs/host/vcs/profiler.cpp`, `profiler.hpp` | `src/debug/profiler.cpp`, `profiler.h` | PS2 function table removed; reports by host symbol; Windows only |
| `lcs/host/vcs/settings.*`, `settings_menu.*` | `src/settings/settings.*`, `src/ui/settings_menu.*` | Reads and writes `LCSNative.ini` through callbacks; key rebinding written for this game; no PS2 runtime |
| `lcs/third_party/imgui/` | `deps/imgui` (Dear ImGui 1.92.7, MIT, not VCS Recomp's own code) | None; only the files this build uses |
| `lcs/scripts/perf_report.py` | `tools/perf_report.py`, `tools/cruise.py` | The LCS log's columns; same hitch definition |
| `lcs/scripts/perf_run.py` | `tools/cruise.py`, `tools/soak.py` | Structure only; runs the LCS stress mode |

# Code taken from CheatDevice Remastered

`Freakler/CheatDeviceRemastered` (Copyright (C) 2017-2025 Freakler, GPL-3.0-or-later per its source headers).

| Here | There | Changes |
| --- | --- | --- |
| `lcs/host/lcs_trainer.cpp` | `source/cheats.c`, `source/functions.c` | Features rewritten on the recompiled game: memory writes kept, game calls and scripts through the game's dispatch; field offsets, addresses and the spawn script from there |
| `lcs/host/cdr/teleports.inc` | `source/functions.c` (`lcs_teleports`) | Generated from it |
| `lcs/host/cdr/pickups.inc` | `source/functions.c` (`lcs_pickups`) | Generated from it |
| `lcs/host/cdr/skins.inc` | `source/cheats.c` (`lcs_playerModels`) | Generated from it |
| `lcs/generated/generated_unit_{0055,0106,0130,0143}.cpp` | Its patches at `addr_neverFallOffBike_*`, `addr_worldgravity`, and its `UpdatePosition` hook | Same effect, as conditions in the generated code |

The trainer's first actions are the game's cheat routines, found from the pattern in ThirteenAG's FusionFix
(`WidescreenFixesPack`, MIT).

# Code following VCS Recomp's main menu

`rofhima13/gta-vcs-recomp`, branch `feature/main-menu` (GPL-3.0). `lcs/host/lcs_frontend_menu.cpp` follows the idea of its
`src/ui/frontend_menu.cpp`: a host menu at startup that leaves the game's own saving to the game. No code is copied: this game
starts differently, so the way it waits and starts is new.

# Code taken from Project2DFX

`ThirteenAG/III.VC.SA.IV.Project2DFX` (MIT, `lcs/host/thirteenag/LICENSE`).

| Here | There | Changes |
| --- | --- | --- |
| `lcs/host/thirteenag/Lights.hpp`, `data/LCSLights.hpp` | `source/console/shared/` | None |
| `lcs/host/lcs_lod_lights.cpp` | `source/console/shared/PortableLights.hpp` | Same logic, calling the compiled game code through the runtime; addresses resolved for ULUS-10041 v1.05 with the plugin's patterns |

# Other

The texture pack format and its hashes follow PPSSPP (`hrydgard/ppsspp`, GPL-2.0-or-later): see `lcs/THIRD_PARTY.md`.

`lcs/generated/generated_unit_0083.cpp`, at the start of the chunk loader `L_089514F8`, stops a crash of this project's own:
the world's list of loaded chunks holds 32, and at a view distance of 2 or more the game can queue more than that between
sector swaps.

Ideas only, no code: the radio wheel (`lcs/host/lcs_radio_wheel.cpp`) follows VoidRadioWheel for San Andreas, and the GPS
line (`lcs/host/lcs_gps.cpp`) follows GPS Redux for San Andreas (`juicermv/GTA-GPS-Redux`). Both are written new for this
game: the GPS searches the game's own road nodes and draws through its own radar functions, and the wheel changes station
with the game's own radio button. Neither project's art is included; station logos come from the player's texture pack
or from the game itself.

Free aim (`lcs/host/lcs_controls.cpp`, generated units 0059, 0063, 0080, 0081, 0097, 0165) follows the ideas of Classic
Axis for GTA III and Vice City (gennariarmando) and Void Ultimate Aim System for San Andreas (VoidTheMage), no code
copied: aiming only while the aim button is held, the crosshair only then, the game's own strafe walks, and a camera
over the shoulder that only the mouse turns.

The ground lights of street lamps reach further through the distance the game passes to `CShadows::StoreStaticShadow`
(`lcs/generated/generated_unit_0125.cpp`), and past that, flat patches from `lcs/host/lcs_lod_lights.cpp`. The pause menu
(`lcs/host/lcs_pause_menu.cpp`) steers the game's own menu by its selected tab, a layout ThirteenAG's
`WidescreenFixesPack` notes describe (`Menu.cpp`).

`lcs/host/lcs_perf_log.*` is new, and follows the idea of VCS Recomp's `PS2X_PERF_LOG`. The cruise rig in
`lcs/host/lcs_stress_test.cpp` follows `src/debug/rig.cpp`'s `cruise` command.

Save states (`lcs/host/lcs_profile_state.inc`, `lcs_state.hpp`, `lcs_state_io.hpp`) follow the idea of an emulator's save
states, as in PPSSPP, with the F5/F7 keys many emulators use. No code is taken from any emulator: the format and what it
saves are this project's own.
