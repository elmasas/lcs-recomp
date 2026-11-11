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

## Texture packs

PPSSPP texture packs work. None is included: packs are made from the game's own art, so, like the game, you get them yourself, from their authors.

Unpack one into `lcs/game/TEXTURES/`, or `game/TEXTURES/` in a release, so that its `textures.ini` is inside, at any depth up to four folders. Then choose it under F10, Graphics, Texture pack. It applies at once. A second pack fills in what the first doesn't replace: F10, Graphics, Second texture pack.

Tested together, both made for the European version (ULES00151):

| Pack | Authors | Choose it as |
| --- | --- | --- |
| [GTA LCS HD+ Interface v2.1](https://libertycity.net/files/gta-liberty-city-stories/244100-gta-lcs-hd-interface-v2-1.html) | SonofUgly, Sorux, MisaelVieira93, djdarko, Flentric | Texture pack: the HUD, menus and text. It comes in 128 and 256 sizes; 256 suits PC resolutions. |
| [GTA LCS Ultimate HD Project v2.3](https://es.libertycity.net/files/gta-liberty-city-stories/193958-gta-liberty-city-stories-ultimate-hd-project-for-ppsspp.html) | MisaelVieira93, Sorux, djdarko | Second texture pack: the world, vehicles, effects. |

Their large images (4096 by 4096) are put on the graphics card while the game starts, so that the first time one shows doesn't stall a frame. Together the two packs, with their mipmaps, use about 1.4 GB of memory and roughly 1 GB more of video memory.

A pack made for another region may match only partly: a texture it doesn't match stays as it is.

Each pack image also gets smaller copies (mipmaps), made when the pack loads, so distant roads and walls don't shimmer.

For pack makers, what this reads from a pack's `textures.ini` ([format](https://github.com/hrydgard/ppsspp/wiki/Texture-replacement-ini-syntax)):

- `[options]`: `hash` (`xxh64`, `xxh32` or `quick`) and `ignoreAddress`.
- `[hashes]`: entries with the full 24-digit key; folders in file names with `/` or `\`.
- PNG images.

Not read yet: entries tied to a memory address (keys not starting with `00000000` when `ignoreAddress` is off), mipmap entries (`..._1 = ...`), `[hashranges]`, `[filtering]`, `[reducehashranges]`, and DDS or KTX2 images.

`Rendering.TextureCacheEntries` and `Rendering.TextureCacheMB` set the size of the texture cache. Packs with large images, or long sessions, can use more than the defaults of 8192 and 256; if you have the memory to spare, 16384 and 512 avoid reloading textures.

## Distant lights

Street lamps and traffic lights stay lit far into the distance at night, drawn as coronas past where the game's own end, from the lamp positions in Project2DFX (see `lcs/CREDITS.md`). Lamps also light the ground further, and past that, faint patches of their colour stand in for the pools of light. Settings under `[Rendering]` in `LCSNative.ini`:

| Setting | Values | Default | What it does |
| --- | --- | --- | --- |
| `LodLights` | `true`/`false` | `true` | The distant lights. |
| `LodLightsRange` | 100 to 4000 | 500 | How far they reach. |
| `LodLightsRadius` | 0.01 to 10 | 1.0 | Their size. |
| `LodLightsLimit` | 1 to 2048 | 900 | How many draw at once, nearest first. |
| `LampPoolRange` | 10 to 1000 | 120 | How far a lamp's pool of light on the ground shows (the game's is 40). |
| `LampPatches` | `true`/`false` | `true` | The patches past the pools. |
| `LampPatchRange` | 100 to 2000 | 450 | How far the patches reach. |

With `LodLights` off, the game's own coronas reach as far as `Rendering.ViewDistance` instead; `LCS_CORONA_DISTANCE=0` keeps them at the game's distances.

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

MIT, see [`LICENSE`](LICENSE). Third-party notices: [`lcs/THIRD_PARTY.md`](lcs/THIRD_PARTY.md). Projects whose ideas this one follows are credited in [`lcs/CREDITS.md`](lcs/CREDITS.md).

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
