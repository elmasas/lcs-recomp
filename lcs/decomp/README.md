# Hand-written game code

`lcs/generated/` is the EBOOT translated instruction by instruction. This
directory holds the parts that have been decompiled into ordinary C++ and
now run instead of that translation. Addresses are for ULUS-10041 v1.05.

| File | What it is |
| --- | --- |
| `game/Pad.hpp`, `game/Pad.cpp` | `CPad`: every controller query the game makes, and the per-frame update |
| `game/PadDevice.hpp`, `game/PadDevice.cpp` | the layer under it that reads the PSP controller |
| `game/MenuData.hpp`, `game/MenuData.cpp` | the pause menu's tables: tab bar, 28 screens, 8 control legends |
| `game/MenuManager.hpp`, `game/MenuManager.cpp` | `CMenuManager`: the members mapped so far, the input handler and its helpers |
| `game/GameData.hpp` | globals and members of other classes the code above reads |
| `decomp_functions.def` | the list of replaced guest functions |
| `thunks_pad.cpp`, `thunks_menu.cpp` | guest calling convention to C++ for each of them |
| `decomp.hpp`, `decomp.cpp`, `guest.hpp` | hook dispatch, verify mode, guest memory access |

The game's data stays in guest memory. A decompiled class is a struct laid
over that memory, so recompiled code and C++ read and write the same bytes.

## How a function gets replaced

1. Read it: `python tools/decomp/cdis.py <EBOOT.ELF> <start> <end>` prints a
   compact disassembly; `psp_dis.py` has `fn`, `xref`, `funcs`, `str`, `words`.
2. Write the C++ in `game/`, add a thunk, add a line to `decomp_functions.def`.
3. `python tools/decomp/apply_hooks.py` puts the entry hook into the
   generated unit that holds the function.
4. Build, then run with `LCS_DECOMP=verify`.

## Switches

| Environment | Effect |
| --- | --- |
| `LCS_DECOMP=on` | run the C++ (default) |
| `LCS_DECOMP=off` | run the recompiled originals |
| `LCS_DECOMP=verify` | run both on every call, compare the result and every byte the function may write, keep the original's outcome; totals go to `decomp_verify.log` |
| `LCS_DECOMP_SKIP=08A97F64,08A980DC` | leave these as recompiled code |
| `LCS_DECOMP_REGS=1` | with `verify`: also print registers the caller gets back that differ from the original's |

A thunk can also hand a call back: `decline()` (in `thunks.hpp`), called
before anything has been written, makes the hook return to the recompiled
original for that one call. The menu input handler uses it for the frames
that would enter blocking guest code (see below). Verify mode counts those
calls as `left_to_original=` and does not compare them.

## Status

| Area | State |
| --- | --- |
| Controls (`CPad`, pad device) | 90 functions in C++ and running; 5 left as recompiled code (table below) |
| Menu data (tabs, screens, legends) | in C++, byte-identical to the EBOOT, installed at start |
| Menu input | the input handler and 11 helpers in C++ (12 hooks; built, **never run**); frames that would block the PSP thread still go to the recompiled handler |
| Menu drawing, map, stats, per-frame process | **not decompiled**, about 50 KB (table at the end) |

Checked so far with `LCS_DECOMP=verify`: one 100 second on-foot stress run,
151,496 calls compared, 0 mismatches, 29 of the 90 hooks entered directly
(the per-frame update and the nub/d-pad readers were covered through their
callers). Not exercised yet: everything that only runs in a vehicle
(steering, brake, accelerate, handbrake, horn, look left/right, car gun,
vehicle camera), the menu navigation queries, and jump double-tap.

Verify mode keeps the original's outcome, so it cannot show a function that
breaks the game only when its C++ runs for real. `CPspPad::Open` was one:
the C++ read `a1` as an "already open" argument, while the original reads
the pad's own `bOpen` byte (`lbu a1, 0(a0)`). At boot `a1` held leftover
data, the pad was never opened, and with `LCS_DECOMP=on` no input reached
the game. Verify did not flag it because the pad device is created during
that call, so the compared regions changed shape and were skipped. A run in
`on` mode (the stress test reaching gameplay) is the check for that.

To check those yourself, play with verify on and read the log afterwards:

```text
set LCS_DECOMP=verify
LCSNative.exe --game <game-root>
```

Drive a car, open the pause menu and move through it, then quit. A
`[decomp] MISMATCH` line on the console, or a non-zero `mismatches=` in
`decomp_verify.log` (written to the working directory on exit), names the
function that differs from the original. `LCS_DECOMP_SKIP=<address>` turns
that one function back to the original without a rebuild.

## Controls: what is and is not replaced

Replaced: the 83 `CPad` functions and 7 pad device functions in
`decomp_functions.def`.

Left as recompiled code, on purpose:

| Address | Function | Why |
| --- | --- | --- |
| `08A96A10`, `08A9651C` | `CPad::DoCheats` | feeds button presses to the cheat matcher below |
| `08A997C0` | `CPad::AddToCheatString` | calls into the cheats, which load models and can block the thread |
| `08A9693C` | `CPad::ResetCheats` | calls a game function that has not been looked at |
| `08A96590` | `CPad::PrintErrorMessage` | draws the "no controller" text with the font code |
| `08A96588`, `08A96CF8`, `08A96D00`, `08A96D08`, `08A9819C`, `08A983B0` | empty on PSP (pad shake and two unused queries) | nothing to write |

Names follow the III/VC `CPad` where the behaviour matches. A few queries
have one caller each and no counterpart there; they are named for what
they test (`GetHornOppositeDPad`, `GetLWithStickNotRight`,
`LookAroundBlocksTarget`). `ChangeStationUp/DownJustDown` and
`CycleWeaponLeft/RightJustDown` are identical pairs in the binary; which
pair is which was not checked against their callers.

## Menus: what is and is not replaced

The pause menu is table driven. The tables are source now
(`game/MenuData.cpp`) and are written over the EBOOT's copies at start, so
editing them changes the menu.

Replaced (`game/MenuManager.cpp`):

| Address | Size | C++ | What it does |
| --- | --- | --- | --- |
| `08ADCBEC` | 7268 | `ProcessUserInput` | the input handler, see below |
| `08AD9CFC` | 152 | `SwitchToScreen` | sets `m_nCurrScreen`, row 0, the change time |
| `08ADA00C` | 136 | `OnScreenChanged` | resets per-screen state (includes `08AD9D94`) |
| `08ADA094` | 708 | `ToggleOption` | flips the on/off option on the highlighted row |
| `08ADA358` | 772 | `AdjustSlider` | brightness, radio volume, SFX volume |
| `08ADA65C` | 16 | `RequestCloseMenu` | sets `bCloseMenuRequested` |
| `08AD9664`, `08AD96C8`, `08AD972C`, `08AD9814` | 100-232 | `Nav*JustDown` | d-pad press or nub flick, once input is enabled |
| `08AD98FC`, `08ADAA94` | 8-16 | `ClampToField584`, `ResetField588` | |

Still the recompiled original:

| Address | Size | Role (from the data and strings it uses) |
| --- | --- | --- |
| `08ADFD58` | 14892 | draws the front end: tabs, screen entries, option values |
| `08ADAF7C` | 7280 | input on the map screen |
| `08ADE850` | 1592 | per-frame process, entering and leaving the menu |
| `08ADAA9C` | 608 | draws the control legend |
| `08ADEE88` | 848 | per-screen drawing helper |
| `08AE3784` | 1616 | stats screen |
| `08ADF83C` | 1308 | map screen, zone names |
| `08AE4F44`, `08AD9B08` | 736, 364 | load and unload the front end textures |
| `08AD95F8`, `08AD9620`, `08AD9648`, `08AD9424`, `08AD9464` | 28-328 | save slot list, load, new game (memory card and loading) |
| `08ADA8A4` | 488 | applies a language change |

### The input handler, `08ADCBEC`

`CMenuManager::ProcessUserInput` is the whole function in C++. In order:

1. `MENUPAGE_SAVE_SLOTS` only starts the pending card operation and
   returns. The two warnings that change the screen by themselves
   (`MENUPAGE_SAVE_CHEAT_WARNING` on Circle, `MENUPAGE_LOADGAME_CONFIRM`
   while `field_1C` is 1) are handled next.
2. Input stays off (`m_bInputEnabled`) until the d-pad and the nub have
   been let go once.
3. On the tab bar (`ProcessTabBarInput`): Circle asks for the menu to
   close, Cross enters the screen, the navigation helpers move
   `m_nCurrTab` along the links in `aMenuTabs` (`aMenuTabsAlternate` when
   the language id is 4) and `kTabScreens` turns the tab into
   `m_nCurrScreen`.
4. Inside a screen: `OnCrossPressed` plays the entry's sound and decides
   whether its action runs; `MoveUp`/`MoveDown` move `m_nCurrOption`;
   `OnBackPressed` returns to the tab bar; `ReadLeftRight` gives -1/0/+1
   (a held d-pad repeats every 151 ms on sliders and the radio station);
   `RunEntryAction` is the switch on `m_Action`; `ChangeOption` applies
   left/right through `AdjustSlider` and `ToggleOption`.

### PC pages

Screens 15 and 16 were empty multiplayer screens; on PC they hold
GRAPHICS and KEYBOARD AND MOUSE (`host/lcs_menu_pages.cpp`). The
MULTIPLAYER tab opens GRAPHICS and is renamed through its tab name
pointer. Their rows use actions 50-55 (`MENUACTION_PC_*`), which the
drawing code has no value for, and GXT keys starting `ZZ`, which a hook
on `CText::Get` (`08913B70`, in `generated_unit_0067.cpp`) answers with
text built each frame, so a label carries its own value. The four
tab-to-screen switches in `generated_unit_0182.cpp` ask
`lcs_menu_tab_screen()` for the GRAPHICS and LANGUAGE tabs.
`ProcessUserInput` passes Cross and left/right on these rows to the
host, and never hands their frames to the recompiled original. With
`LCS_DECOMP=off` the pages still draw but cannot be used.

`eMenuAction` in `game/MenuData.hpp` now also names the actions the code
handles but no shipped screen uses (5, 12, 16, 24, 26-31, 33, 36, 38).
Where the purpose is not known the name is the number.

#### What still runs as recompiled code, and why

A C++ replacement may only call guest code that cannot block the PSP
thread. Every callee was checked by walking its call tree down to the
system imports (and noting calls through pointers, which the walk cannot
follow), then reading the host's handler for each import reached
(`lcs/host/lcs_profile.cpp`).

Safe, called from the C++: `088649FC` (front end sound), `08864A90`,
`08864D7C`, `088647F8`, `088647C0`, `08864D38` (audio settings),
`088B0A44`, `08935904`, `08AD37D8`, `08AD37E0`, `08A54684`, `08838A28`,
`08838234`, `0883822C`: no import and no indirect call anywhere below
them. `08A092E8` reaches one import, `sceWlanDrv` `D7763699`, which the
host answers at once with 0.

Not safe, or not shown to be safe:

| Callee | Reached from | Why |
| --- | --- | --- |
| `08AD95F8` | save slots screen | memory card: `sceIoOpen`/`sceIoRead`, thread waits |
| `08864A64` | entering AUDIO, changing the radio station or the custom tracks option, action 31 | starts the radio preview: `sceIoOpen`, `sceKernelWaitSema`, `sceKernelCreateThread`/`StartThread` |
| `08AD9620`, `08AD9648` | a link to the save slot list | memory card |
| `08AD9424`, `08AD9464` | "YES" on the new game warning, links while `field_1C`/`field_137` is set | start or load a game: file I/O, thread waits |
| `0882BC80`, `0882B958`, `08AFA53C`, `08AFA59C` | the MULTIPLAYER tab | network code; thread and semaphore imports, calls through pointers |
| `08ADA8A4` | the five language entries | calls through pointers that were not followed |
| `08AFB030` | radio station, reset settings | creates the custom tracks object: calls through a pointer |
| `088646F8`, `089C11D8`, `08AD9DA4`, `08A4CE28`, `08A54EFC`, `089C16A4` | action 36 | file I/O, thread imports, calls through pointers |

The handler cannot be cut in two around these calls (a blocking callee
returns into the middle of it), so the split is by frame instead.
`CMenuManager::InputNeedsOriginal()` looks at the pad and the menu state
before anything is written, and when the frame could reach one of the
callees above the thunk declines and the recompiled `08ADCBEC` handles
that frame. It errs towards the original. A frame is left to it when:

- the save slot screen has an operation pending;
- the screen is MULTIPLAYER or any of its sub-screens (14-27), or the
  d-pad/nub is active on a tab with a link to the MULTIPLAYER tab;
- Cross is pressed on the tab bar with AUDIO highlighted;
- Cross is pressed on an entry that loads, saves, starts a game, changes
  the language, confirms "reset settings", or links to the save slot list;
- left/right is active on RADIO STATION or CUSTOM TRACKS;
- Cross arrives in the same frame as Circle/Triangle or as any d-pad/nub
  input, or a second input arrives in the frame a warning screen leaves
  (the second input could change which entry is acted on).

`ToggleOption` (`08ADA094`) declines the same way for CUSTOM TRACKS.

The C++ still contains those paths, so the function reads whole; they go
through `CallBlocking()`, which prints
`[decomp] menu: C++ reached blocking guest code ...` if one is ever
reached. That would mean `InputNeedsOriginal()` missed a case; the
symptom would be a hang, and `LCS_DECOMP_SKIP=08ADCBEC,08ADA094` is the
way out without a rebuild.

So in C++ now: moving along the tab bar, entering a screen (except AUDIO
and MULTIPLAYER), moving up and down, Circle/Triangle back, every option
on CONTROLS and DISPLAY, the two volume sliders, the links from GAME to
the new game and reset settings warnings, and "NO" on the warnings.

#### Checking it

None of the menu C++ has been run. With `LCS_DECOMP=verify`, open the
pause menu and:

1. Move across the whole tab bar in all four directions
   (`ProcessUserInput`, the four `Nav*JustDown`, `OnScreenChanged`).
2. Enter CONTROLS: left/right on every row (`ToggleOption`,
   `ProcessUserInput`), up/down past both ends, Circle to leave.
3. Enter DISPLAY: tap and hold left/right on BRIGHTNESS through both
   ends (`AdjustSlider`), then SUBTITLES, RADAR MODE, HUD MODE.
4. Enter AUDIO (the Cross press itself goes to the original): both
   volume sliders, tap and hold; Circle to leave.
5. GAME: NEW GAME then NO; RESET GAME SETTINGS then NO
   (`SwitchToScreen` runs when other code changes the screen).
6. Circle on the tab bar to resume (`RequestCloseMenu`).

Then read `decomp_verify.log`: each of the 12 `CMenuManager_*` lines
should have `calls` above 0 and `mismatches=0`. `left_to_original` on
`CMenuManager_ProcessUserInput` counts the frames handed back.

Verify mode runs the C++ and then the original on the same frame, so in
that mode only: menu sounds play twice, and `088B0A44` and the volume
setters are called twice. The compared memory is the menu object, the
pads, and the option and request globals listed in `collect_regions`
(`decomp.cpp`); audio state behind the guest calls is not compared.
