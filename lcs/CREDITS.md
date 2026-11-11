# Credits

Projects this one learned from. Unless a section says code is included (with its license, also listed in
`THIRD_PARTY.md`), only ideas are taken: everything else here is written new for this game.

# Project2DFX (code included, MIT)

`ThirteenAG/III.VC.SA.IV.Project2DFX` at commit `5bba677018fc585df5edac24da3d82e640cc82ae`, released under the MIT license
(`lcs/host/thirteenag/LICENSE`). The project moved to GPL-3.0 on 2026-11-08, after that commit; the files here are the
MIT ones, unchanged except for an attribution line.

| Here | There | Changes |
| --- | --- | --- |
| `lcs/host/thirteenag/Lights.hpp`, `data/LCSLights.hpp` | `source/console/shared/` | An attribution line at the top |
| `lcs/host/lcs_lod_lights.cpp` | `source/console/shared/PortableLights.hpp` | Same logic, calling the compiled game code through the runtime; addresses resolved for ULUS-10041 v1.05 with the plugin's patterns |

# Other

Texture packs are in PPSSPP's format, so that packs made for the emulator work here; see `lcs/THIRD_PARTY.md`.

`lcs/generated/generated_unit_0083.cpp`, at the start of the chunk loader `L_089514F8`, stops a crash of this project's own:
the world's list of loaded chunks holds 32, and at a view distance of 2 or more the game can queue more than that between
sector swaps.

The frame log (`lcs/host/lcs_perf_log.*`), the sampling profiler (`lcs/host/lcs_profiler.*`), the crash reporter
(`lcs/host/lcs_crash.*`) and the cruise rig in `lcs/host/lcs_stress_test.cpp` follow ideas from VCS Recomp
(`gothamor/gta-vcs-recomp`): a per-frame timing log, a sampling profiler of the game's threads, a crash report with
the reason and the call stack, and a scripted route for stutter tests. The options list the menu is drawn from
(`lcs/host/lcs_settings.*`) follows VCS Recomp's idea of one registry of typed settings that the menu is generated from;
its interface and code are this project's own. No code from VCS Recomp is used.

The ground lights of street lamps reach further through the distance the game passes to `CShadows::StoreStaticShadow`
(`lcs/generated/generated_unit_0125.cpp`), and past that, flat patches from `lcs/host/lcs_lod_lights.cpp`.

Free aim (`lcs/host/lcs_controls.cpp`, generated units 0059, 0063, 0080, 0081, 0097, 0165) follows the ideas of Classic
Axis for GTA III and Vice City (gennariarmando) and Void Ultimate Aim System for San Andreas (VoidTheMage), no code
copied: aiming only while the aim button is held, the crosshair only then, the game's own strafe walks, and a camera
over the shoulder that only the mouse turns.
