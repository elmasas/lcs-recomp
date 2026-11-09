# LCS Recomp

GTA: Liberty City Stories PC port, built on [PSPRecomp](https://github.com/jessicanataliagta/PSPRecomp). Game files not included.

## Setup

Requires the US v1.05 release (ULUS-10041).

Place your decrypted `EBOOT.ELF` and the disc's `PSP_GAME` folder in `game/` for the [release](https://github.com/elmasas/lcs-recomp/releases/latest), or in `lcs/game/` when building from source.

## Build

Requires Visual Studio 2022 or its Build Tools, with clang-cl from LLVM or from Visual Studio's "C++ Clang tools" component.

```text
lcs\BUILD_LCS.bat
```

`lcs\scripts\build_perf.bat` makes the optimised build (ThinLTO and AVX2) in `out\lcs-perf`, and `lcs\scripts\play_perf.bat` runs it.

## Play

```text
lcs\PLAY_LCS.bat
```

Settings are in `lcs/config/LCSNative.ini`. To keep your own apart from the defaults, copy it to `lcs/game/LCSNative.ini`: `play.bat` uses that one when it exists, and git ignores that folder.

`Display.ResolutionMode` is the window (`PSP`, `Scale`, `Custom`, or
`Desktop`). `Rendering.InternalResolutionMode` is the GE render
target, with the same four choices. `Desktop` uses the monitor on
Windows and on Linux. `Rendering.TextureLodBias` shifts texture mip
selection; negative values keep textures sharper at a distance.

## Main menu

On Windows the game opens on a main menu: Continue, Load Game, Load State (see Save states), New Game, Options and Quit Game. Continue loads your newest save. Everything it shows and plays comes from your own game files at runtime, and nothing from the game is included here. To go straight to the game instead, turn off F10, Display, Show the main menu.

**Music** is the game's opening theme. F10, Display, Music also has the finale, the ending, or off. It follows the master volume.

**Paintings** are chosen at random from the game's loading screens, sharpened with xBRZ, or from your texture pack if it has them. F10, Display, Painting picks a fixed one.

To use your own images, put PNG files in `lcs/game/MENUART/`, or `game/MENUART/` in a release. Random then uses only those, among the ones that suit your window's shape, and the file name is how an image appears in the list. The [high-resolution LCS artworks](https://gtaforums.com/topic/992240-lcs-high-resolution-gta-lcs-artworks/) on GTAForums look very good here.

## Saves

The game has 8 save slots. Walk onto the save disc at a safehouse to choose one. The game's own Load and Delete, in the pause menu's Game page, use the same list. Saves are in `lcs/game/PSP/SAVEDATA/`, in the game's own format, with a `SLOTINFO.TXT` beside each one for the list to show. On Linux the list isn't drawn yet, and the game uses a single slot.

## Save states

Like an emulator's save states, and apart from the game's own saves: F5 saves the whole game at once, F6 picks the next of 5 slots, F7 loads the chosen slot. A short message shows in the corner. States are files in `lcs/game/STATES/`, or `game/STATES/` in a release, and each is about 30 MB because it holds the game's memory, so share none and publish none. The main menu has a Load State item, shown when a state exists, that loads the newest one: if the game crashes, start it and choose that. A state works across restarts, but not across a new version of the game that changes what a state holds (it says so instead of loading). F5 and F7 don't work during a movie, in the main menu or while a menu is open.

Every 5 minutes of play the game also saves a state on its own into Auto 1 to 3, replacing the oldest, so a crash costs at most a few minutes; the game pauses for about a frame while it does. F10, Game, Save states sets how often, or turns it off. The pause menu's States page lists every slot with when it was saved: pick one to load it, or to save into one of your own five. The game's own saving is untouched, and still the safer record of your progress.

## Weapon wheel, radio wheel and GPS

**Weapon wheel:** on foot, hold Tab, or press the right stick's button, then point at a weapon with the mouse or the right stick and let go. The mouse wheel, Q and E change weapon one at a time. Each weapon shows its HUD icon in its colour, with its ammo: from your texture pack when it has the icons, or else as the game draws them, kept the first time each weapon is on the HUD (until then, its name). Not while aiming.

**Radio wheel:** in a vehicle, hold Q, or press the right stick's button, then point at a station with the mouse or the right stick and let go. A quick press of Q goes back a station, and E goes forward, as before. The keys follow GTA V on PC, and both wheels can be rebound under Controls. Logos come from your texture pack when it has them. Otherwise each station's name shows until you've tuned to it once, and the game's own logo is kept from then on. The idea comes from VoidRadioWheel for San Andreas; none of its code or art is used.

**GPS:** in a vehicle, a line on the radar follows the roads to your marker or the mission's objective. It doesn't know one-way streets or which bridges the story has opened yet. Turn it off or change its width under Game, in F10 or Options. The idea comes from [GPS Redux](https://github.com/juicermv/GTA-GPS-Redux) for San Andreas; none of its code is used.

## In-game menu

## Pause menu

Esc opens one row of pages: Map, Brief, Stats, Game, Audio, Settings and Quit. A/D or Q/E move along the row, Enter goes into a page, and Esc comes back out, then closes the menu. Map, Brief, Stats, Game and Audio are the game's own pages, so the map, loading and stats work as they always have. Settings is the same screen as Options on the main menu, and its Game page also opens the game's own display, controls and language pages. To get the game's original pause menu back, turn on Settings, Game, Use the classic pause menu.

F10 opens the settings and the trainer on Windows. Settings are saved to `LCSNative.ini`. Nothing from the trainer is saved, except what a saved game itself keeps: every start goes back to the original game.

| Page | What's there |
| --- | --- |
| Display, Graphics, Controls, Game | Window, resolution, view distance, frame rate, distant street lights, texture pack |
| Player | God mode, ammo, wanted level, health and armor, character model, power jump |
| Vehicles | Spawner, repair, colors, hover, N.O.S., rocket boost, drive on walls and water, traffic |
| Tuning | Acceleration, top speed, brakes, grip and steering of the current vehicle, weapon damage |
| Teleport, World, Camera | Locations, time, weather, gravity, game speed, free camera |
| Missions, Spawn | The game's mission selector, targets, pickups, button cheats |

Most of the trainer comes from [CheatDevice Remastered](https://github.com/Freakler/CheatDeviceRemastered) by Freakler. See [`lcs/VCS_IMPORT.md`](lcs/VCS_IMPORT.md).

## Texture packs

PPSSPP texture packs work, and none is included. Unpack one into `lcs/game/TEXTURES/`, or `game/TEXTURES/` in a release, so that its `textures.ini` is inside, at any depth up to four folders. Then choose it under F10, Graphics, Texture pack. It applies at once.

A pack made for another region may match only partly: a texture it doesn't match stays as it is. Hash types `xxh64`, `xxh32` and `quick` are supported.

`Rendering.TextureCacheEntries` and `Rendering.TextureCacheMB` set the size of the texture cache. Packs with large images, or long sessions, can use more than the defaults of 8192 and 256; if you have the memory to spare, 16384 and 512 avoid reloading textures.

## Mouse and keyboard

In the game's own menus, and on the title screen, these keys always work, whatever the bindings below say:

| Key | In a menu |
| --- | --- |
| W, A, S, D or the arrow keys | Move |
| Enter | Accept. Also skips the title movie and cutscenes. |
| Escape or Backspace | Go back. Escape also closes the pause menu. |

The rest of this section is about gameplay.

Edit `[Controls]` in `lcs/config/LCSNative.ini`, then restart. A
binding is one or more names separated by commas. `None` clears it.
`Shift`, `Ctrl`, and `Alt` set both sides. The accepted names are
commented in that file. F10 opens host settings. F11 toggles
fullscreen. Moving the mouse looks around. A controller button
takes the same action names.

| Binding | Default | Action |
| --- | --- | --- |
| `MoveForward` | W | On foot, move forward. In a vehicle, accelerate. |
| `MoveBack` | S | On foot, move back. In a vehicle, brake. |
| `MoveLeft` | A | Move or steer left. |
| `MoveRight` | D | Move or steer right. |
| `Walk` | Left Alt | Shorter steps. |
| `Sprint` | Space | Run on foot. Not sent in a vehicle. |
| `Jump` | Left Shift, Right Shift | Jump. In a vehicle the game reads this as the brake. |
| `Attack` | Left mouse button | Attack or fire. |
| `Aim` | Right mouse button | Aim on foot. Not sent in a vehicle. |
| `CenterCamera` | H, middle mouse button | Put the camera behind you. Also picks up a weapon. |
| `EnterVehicle` | F, Enter | Enter or exit a vehicle. |
| `WeaponPrevious` | Q, Left, wheel up | Previous weapon. In a vehicle, previous radio station. |
| `WeaponNext` | E, Right, wheel down | Next weapon. In a vehicle, next radio station. |
| `Up` | Up | Toggle a special mission. In a vehicle, also pitches up. |
| `Down` | Down | D-pad down. In a vehicle, horn and pitch down. |
| `Pause` | Escape | Pause. |
| `Camera` | V | Change camera. |
| `Handbrake` | Space | Handbrake in a vehicle. |

Controller names follow the Xbox layout. On a PlayStation pad, A is
Cross, B is Circle, X is Square, and Y is Triangle. `LeftStick` and
`RightStick` are `Move` or `Camera`. A trigger does not send its
buttons in a vehicle; accelerate and brake still apply.

| Button | Default | Action |
| --- | --- | --- |
| A / Cross | `Sprint` | Run. Also sent in a vehicle. |
| B / Circle | `Attack` | Attack or fire. |
| X / Square | `Jump` | In a vehicle the game reads this as the brake. |
| Y / Triangle | `EnterVehicle` | Enter or exit a vehicle. |
| LB / L1 | `CenterCamera` | Puts the camera behind you. Also picks up a weapon. |
| RB / R1 | `Aim` | Aim. In a vehicle, the handbrake. |
| LT / L2 | `MoveBack`, `CenterCamera` | Brake. On foot, also centers the camera. |
| RT / R2 | `MoveForward`, `Aim` | Accelerate. On foot, also aims. |
| D-pad left | `WeaponPrevious` | Previous weapon. In a vehicle, the previous radio station. |
| D-pad right | `WeaponNext` | Next weapon. In a vehicle, the next radio station. |
| D-pad up | `Up` | Special mission. |
| D-pad down | `Down` | Horn in a vehicle. |
| Start | `Pause` | Pause. |
| Back / Share | `Camera` | Change camera. |
| Left stick | `Move` | Movement. `LeftStick` swaps this with the camera. |
| Right stick | `Camera` | Camera. |
| Left stick click | `Down` | Horn in a vehicle. |
| Right stick click | `None` | `PadRightStickClick`. |

## Linux

The native build uses Vulkan for the GE and SDL2 for the window and
audio. It needs `glslangValidator`, plus the Vulkan, SDL2, and FFmpeg
development packages. The Linux build also compiles a small tool that
packs `lcs/host/font5x7.txt` into the F10 menu font. The Windows build
does not run that step.

```text
lcs/scripts/build_linux.sh
lcs/scripts/play_linux.sh
```

That build compiles `lcs/host/vulkan/ge.vert` and `ge.frag` to SPIR-V
with `glslangValidator`. Editing either shader rebuilds it into
`LCSNative`.

`lcs/config/LCSNative.ini` is shared with Windows, so the checked-in
setting stays `Backend=DirectX12`. On Linux that value selects the
Vulkan GE. `Backend=Vulkan` selects it explicitly, and any other
backend name keeps the software rasterizer. `LCS_VULKAN_VALIDATION=1`
turns on the Khronos validation layer and prints its warnings and
errors.

## Docker
You also can utilize [Docker](https://www.docker.com/) to build the Linux version.

```bash
cd docker
./build.sh

Available options:

        archlinux       compile the source code on Arch Linux
        debian          compile the source code on Debian

Usage: ./build.sh <option>
```

That way you will get a pre-confugred build environment which also utilzes [ccache](https://ccache.dev/) for faster building times.

## License

GPL-3.0, see [`LICENSE`](LICENSE), because this fork includes GPL-3.0 code: from VCS Recomp and CheatDevice Remastered ([`lcs/VCS_IMPORT.md`](lcs/VCS_IMPORT.md)) and xBRZ. The original project is MIT, see [`LICENSE.MIT`](LICENSE.MIT). Third-party notices: [`lcs/THIRD_PARTY.md`](lcs/THIRD_PARTY.md).

## Unattended engine stress test

Build first (see [Linux](#linux)), then run a ten-minute test without keyboard or
controller input:

```bash
python3 lcs/scripts/stress_test.py --seconds 600
```

The runner loads a disposable copy of your existing saves, copies your settings,
checks that the original save contents stay unchanged, and kills the process if
it exceeds the deadline. It leaves logs in `out/stress/<timestamp>/`. Your current
render settings are used; this is suitable for exercising increased draw distance,
population, and resolution without editing the configuration.

The native controller and save-protection tests are built with the project and
run through CTest:

```bash
ninja -C out/lcs-linux
ctest --test-dir out/lcs-linux -R lcs_stress
```

The character runs, turns, jumps, and sweeps the camera. Position samples detect
obstacles and trigger backing up and turning. Add `--driving` to attempt to enter
nearby vehicles and drive; that run only succeeds if driving movement is actually
observed. This is exploration, so it does not guarantee a particular route or
mission completion. Game menus suspend movement and receive cancel pulses to escape incidental
save prompts. The test fails if gameplay cannot
start within 120 seconds, movement stays blocked for 60 seconds, or gameplay is
unavailable for 120 seconds.

Test mode rejects **all guest file writes**, write-capable file opens, and save
or delete operations. Existing saves can still be read. The runner adds isolation
as a second protection. It never asks the game to save.

Artifacts include `runtime.log`, `movement.csv`, `summary.json`, and `runner.json`
(with peak resident memory and the save comparison). Movement success requires
at least five moving samples and ten game units of travel, plus a normal timed
stop. Presentation interval statistics include startup/loading and are not GPU
render timings. PPM screenshots are captured every 15 seconds with software or
GPU readback presentation; direct Vulkan/DX12 swapchain presentation has no CPU
pixels and does not produce these screenshots.

You can also use the native options on Linux or Windows:

```text
LCSNative --game <game-root> --stress-test --max-seconds 600 --stress-output <new-output-directory>
LCSNative --game <game-root> --stress-driving --max-seconds 1800 --stress-output <new-output-directory>
```

`--direct <directory>` writes `state.json` (position, facing, camera, arrived) about
five times a second and reads `command.txt`. One line is `hold`, `shot`,
`goto X Y [RADIUS]`, `stick AX AY BUTTONS`, `forward`, `run`, `back`, `left`, `right`,
or `enter`. On foot, `goto` steers from the camera. In a vehicle it steers from the vehicle heading. `shot` may precede another command. A new `shot` line saves
`shot-N.ppm` and `latest.ppm` from a CPU frame. A direct Vulkan or DX12
swapchain has no CPU pixels, so that request writes `shot-unavailable.txt`
instead. Standing still for a photograph does not trip the 60 second stall
failure. The startup menu pulses still run until gameplay is ready.

The optional arrival radius defaults to two game units; narrower doorway routes
can use a smaller value. Nearby foot targets use walking speed. Direct state
includes `vehicle_model`, plus a separate `bike_near`, `bike_x`, `bike_y`,
`bike_z`, and `bike_model` target so a nearby car does not replace a garage bike.
`vehicle_pitch` reports the driven vehicle's pitch in radians.
`drive STEERING THROTTLE BRAKE [PITCH]` accepts independent 0–255 pressures,
allowing steady throttle instead of alternating full acceleration and braking.
Pitch defaults to 128 (neutral); 255 leans back without applying the brake.
For a burnout turn, use `drive 255 255 255` to steer right with both pressures held.

Native test mode blocks saving, but only the Python runner copies saves and
configuration. Native runs default to 600 seconds if no duration is supplied.
Exit code 0 means the run completed and movement was verified; 2 means incomplete
coverage, startup/recovery failure, or an abnormal engine stop.

## Manual QA

The safehouse bike scenario is opt-in. It is never run on startup or by CTest:

```bash
python3 lcs/scripts/qa_safehouse_bike.py --record
```

No keyboard input is needed. See [the manual QA guide](lcs/QA.md) for
the bike loop, stunts, recording prerequisites, and reports.
