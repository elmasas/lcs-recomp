# Manual QA

These scenarios run only when explicitly requested by the user. They are not
registered with CTest, started by the game, or included in automatic checks.

## Portland safehouse bike loop

Build the game first:

```bash
cmake --build out/lcs-linux --target LCSNative
```

Then, from the repository root:

```bash
python3 lcs/scripts/qa_safehouse_bike.py --record
```

The runner needs Python 3, a graphical desktop, the built `LCSNative`, the game
under `lcs/game`, and a save in `lcs/game/PSP/SAVEDATA` that starts Toni inside
the Portland safehouse with bikes parked facing its garage's back wall. It
validates that starting position and reports a failure for another save. Linux recording additionally needs `ffmpeg`
and `xprop`; it uses the game's own X11 window and keeps recording when another
application has focus. Omit `--record` to run the scenario without recording.

The scenario takes about 2.5 minutes, including startup and the final timed
stop. It walks through the doorway, mounts a garage bike, reverses clear, turns
around with accelerate and brake held together, rides a street loop using
partial throttle, attempts a short wheelie on a straight, and parks near the
garage. It needs no keyboard input or route editing.

### Save requirements

The runner uses the saves in `lcs/game/PSP/SAVEDATA`. If that folder is missing
or empty it falls back to the known-good save bundled in `lcs/qa/saves/`, which
starts in the right place. You can replace either with your own save. Any save
works if, when the game starts from it:

- Toni is inside the Portland safehouse at about x 1138.8, y -242.4, within 3
  units, and indoors (z of at least 20).
- A bike is parked in the garage facing its back wall, near x 1152-1162,
  y -275 to -266, where the route expects to mount it.

Any other save stops the run with "manual QA requires the Portland safehouse
interior starting save". Saves are only copied, never modified.

All game saves and settings are copied for the run. Guest writes are blocked.
The original save contents, including linked save folders, and the passed
configuration are compared afterwards. The live ini is not edited.

The terminal prints `PASS` or `FAIL` and the output directory. Each run gets a
new `out/stress/qa-safehouse-bike-<timestamp>` directory containing:

- `qa-result.json`: overall result and any failure reason.
- `runner.json`: native exit status and original-save/config comparisons.
- `movement.csv` and `runtime.log`: native movement and execution evidence.
- `proof/route-result.json`, `proof/route-states.jsonl`, and `proof/events.jsonl`:
  the garage bike, route observations, and wheelie pitch.
- `proof/game.mp4` when `--record` is enabled: the game window from startup
  through the return, with `proof/capture.log` for recording diagnostics.

`PASS` covers the automated route, stunt, and save checks. Wall clearance remains
a visual check; `qa-result.json` explicitly reports `wall_contact_checked: false`.
The controller stops on stale telemetry, a stall, or a dismount. Traffic can
make a run fail; the report preserves the reason instead of silently claiming
success. Watch the recording to inspect wall clearance—the game does not
currently expose a wall-contact flag to the runner.

## Direct control protocol

The runner drives the game through a directory handed to `LCSNative` with
`--stress-direct <dir>` (`stress_test.py --direct <dir>`). Nothing is read or
written unless that flag is given.

**Orders.** The runner writes one line to `<dir>/command.txt`. The game re-reads
the file whenever its modification time changes and acts on the first line only.
Write to a temporary file and rename it over `command.txt` so a half-written line
is never read. Deleting the file returns the game to its default automated
behaviour. The first word selects the order:

| Order | Meaning |
| --- | --- |
| `hold` | Stand still. |
| `goto X Y [RADIUS]` | Walk to world position X, Y and report `arrived` within RADIUS (default 2). |
| `stick AX AY BUTTONS` | Raw input: stick axes 0-255 (128 is centred) and a PSP button bitmask. |
| `drive STEERING THROTTLE BRAKE [PITCH]` | Vehicle control with independent 0-255 pressures. PITCH is the stick's vertical axis (default 128) and is used for wheelies. |
| `forward`, `back`, `left`, `right` | Push the stick in that direction. |
| `run` | Push forward with the run button held. |
| `enter` | Press the enter-vehicle button. |
| `shot ORDER` | Prefix any order with `shot` to also capture a screenshot. A bare `shot` captures one while holding. |

A malformed order, or an unknown word, leaves the stick centred instead of
failing. While the stick is driven by `stick`, `drive` or a direction word, the
automatic controller is off.

**Telemetry.** The game rewrites `<dir>/state.json` about every 0.2 s:

| Field | Meaning |
| --- | --- |
| `t` | Seconds since the run started. Use it to ignore stale samples. |
| `ready`, `menu` | Gameplay has started; a menu is open. |
| `driving` | The player is in a vehicle. |
| `x`, `y`, `z` | Player position. |
| `facing_x`, `facing_y`, `camera_x`, `camera_y` | Player facing and camera front. |
| `vehicle_near`, `vehicle_x/y/z`, `vehicle_model` | Nearest road vehicle, or the one being driven. |
| `bike_near`, `bike_x/y/z`, `bike_model` | Nearest bike, tracked separately so a closer car is never picked. |
| `vehicle_pitch` | Pitch of the vehicle being driven. |
| `arrived` | The current `goto` target has been reached. |

**Screenshots.** A `shot` order writes `shot-N.ppm` and `shot.json` into the
directory, or `shot-unavailable.txt` if no frame could be captured.

Useful options:

```bash
python3 lcs/scripts/qa_safehouse_bike.py --help
python3 lcs/scripts/qa_safehouse_bike.py --config path/to/settings.ini --record
python3 lcs/scripts/qa_safehouse_bike.py --output out/stress/my-bike-qa --seconds 180
```

Existing output directories are rejected so previous evidence is not overwritten.
