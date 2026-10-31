#!/usr/bin/env python3
"""Opt-in manual QA: launch an isolated game and ride the Portland safehouse block.

Run this explicitly after building LCSNative. It is not registered with CTest
and is never started by the game. Requires the existing Portland safehouse save.
"""
import argparse
import csv
import json
import math
import os
from pathlib import Path
import re
import shutil
import subprocess
import sys
import time

sys.dont_write_bytecode = True
from safehouse_bike import Director


def verify_route(output):
    result = json.loads((output / 'proof/route-result.json').read_text())
    rows = [row for row in csv.DictReader((output / 'movement.csv').open()) if row['driving'] == '1']
    if not rows:
        raise RuntimeError('native telemetry contains no bike ride')
    entities = sorted({row['entity'] for row in rows})
    models = sorted({int(row['vehicle_model']) for row in rows})
    if len(entities) != 1 or len(models) != 1 or not 202 <= models[0] <= 210:
        raise RuntimeError('native telemetry does not show one continuous bike ride')
    points = [(float(row['x']), float(row['y'])) for row in rows]
    angles = [math.atan2(y + 246, x - 1176) for x, y in points]
    winding = sum(math.atan2(math.sin(b - a), math.cos(b - a))
                  for a, b in zip(angles, angles[1:] + angles[:1])) / (2 * math.pi)
    garage = result['garage_bike']
    return_distance = math.hypot(float(rows[-1]['x']) - garage['bike_x'], float(rows[-1]['y']) - garage['bike_y'])
    if abs(abs(winding) - 1) > .1 or return_distance >= 12:
        raise RuntimeError('native route does not complete a block loop and return to the garage')
    return {'vehicle_entity': entities[0], 'vehicle_model': models[0],
            'block_winding': winding, 'return_distance': return_distance,
            'burnout_angle_degrees': result['burnout_angle_degrees'],
            'wheelie_peak_degrees': math.degrees(result['wheelie_peak_pitch'])}


def record_window(output, runner, env):
    """Find this run's X11 window; never capture the desktop or another app."""
    deadline = time.monotonic() + 15
    window = None
    while time.monotonic() < deadline and runner.poll() is None:
        listing = subprocess.run(['xprop', '-root', '_NET_CLIENT_LIST'], env=env,
                                 stdout=subprocess.PIPE, stderr=subprocess.DEVNULL, text=True)
        for candidate in re.findall(r'0x[0-9a-fA-F]+', listing.stdout):
            info = subprocess.run(['xprop', '-id', candidate, '_NET_WM_NAME', '_NET_WM_PID'],
                                  env=env, stdout=subprocess.PIPE, stderr=subprocess.DEVNULL, text=True).stdout
            pid = re.search(r'_NET_WM_PID\(CARDINAL\) = (\d+)', info)
            if 'LCSNative - GTA: Liberty City Stories' not in info or not pid:
                continue
            try:
                command = Path(f'/proc/{pid.group(1)}/cmdline').read_bytes().split(b'\0')
            except OSError:
                continue
            if os.fsencode(str(output)) in command:
                window = candidate
                break
        if window:
            break
        time.sleep(.1)
    if not window:
        raise RuntimeError('could not find this QA run\'s game window for recording')
    proof = output / 'proof'
    log = (proof / 'capture.log').open('w')
    recorder = subprocess.Popen(['ffmpeg', '-y', '-v', 'error', '-f', 'x11grab',
        '-window_id', window, '-framerate', '30', '-i', env.get('DISPLAY', ':0'),
        '-vf', 'pad=ceil(iw/2)*2:ceil(ih/2)*2', '-c:v', 'libx264', '-preset', 'ultrafast',
        '-crf', '20', '-pix_fmt', 'yuv420p', str(proof / 'game.mp4')],
        env=env, stdin=subprocess.PIPE, stdout=subprocess.DEVNULL, stderr=log, text=True)
    return recorder, log


def finish_recording(recorder, log):
    try:
        recorder.communicate('q\n', timeout=10)
    except (subprocess.TimeoutExpired, BrokenPipeError):
        recorder.terminate()
        recorder.wait(timeout=5)
    finally:
        log.close()


def main():
    repo = Path(__file__).resolve().parents[2]
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--game', type=Path, default=repo / 'lcs/game')
    parser.add_argument('--binary', type=Path, default=repo / 'out/lcs-linux/lcs/LCSNative')
    parser.add_argument('--config', type=Path, default=repo / 'lcs/config/LCSNative.ini')
    parser.add_argument('--output', type=Path,
                        default=repo / 'out/stress' / time.strftime('qa-safehouse-bike-%Y%m%d-%H%M%S'))
    parser.add_argument('--seconds', type=int, default=150,
                        help='total test duration, including startup (default: 150)')
    parser.add_argument('--record', action='store_true',
                        help='record only the game window at 30 fps (Linux; requires ffmpeg and xprop)')
    parser.add_argument('--library-path',
                        help='shared-library search path for the native game')
    args = parser.parse_args()
    output = args.output.resolve()
    if args.seconds < 120:
        parser.error('--seconds must be at least 120 to allow the full route')
    if output.exists():
        parser.error(f'output already exists; choose a new directory: {output}')
    if args.record and (not sys.platform.startswith('linux') or
                        not all(shutil.which(tool) for tool in ['ffmpeg', 'xprop'])):
        parser.error('--record requires Linux, ffmpeg, and xprop')
    for path in [args.binary, args.config, args.game / 'EBOOT.ELF']:
        if not path.is_file():
            parser.error(f'missing required file: {path}')
    saves = args.game / 'PSP/SAVEDATA'
    if not saves.is_dir() or not any(saves.iterdir()):
        # No save in the game folder: use the bundled known-good safehouse save.
        saves = repo / 'lcs/qa/saves'
        if not saves.is_dir() or not any(saves.iterdir()):
            parser.error('the Portland safehouse save is required under GAME/PSP/SAVEDATA '
                         'or lcs/qa/saves')
        print(f'No save in {args.game / "PSP/SAVEDATA"}; using {saves}', flush=True)
    control, proof, stop = output / 'control', output / 'proof', output / 'qa-stop-request'
    env = os.environ.copy()
    if args.library_path:
        env['LD_LIBRARY_PATH'] = args.library_path
    if args.record:
        env['SDL_VIDEODRIVER'] = 'x11'
    command = [sys.executable, str(repo / 'lcs/scripts/stress_test.py'),
               '--game', str(args.game.resolve()), '--binary', str(args.binary.resolve()),
               '--config', str(args.config.resolve()), '--saves', str(saves.resolve()),
               '--output', str(output),
               '--direct', str(control), '--driving', '--seconds', str(args.seconds),
               '--stop-file', str(stop)]
    print(f'Manual QA: safehouse bike, burnout, block loop, and short wheelie. Logs: {output}', flush=True)
    process = subprocess.Popen(command, cwd=repo, env=env, stdout=subprocess.PIPE,
                               stderr=subprocess.STDOUT, text=True)
    error = None
    director = None
    recorder = capture_log = None
    try:
        deadline = time.monotonic() + 10
        while not output.exists():
            if process.poll() is not None or time.monotonic() > deadline:
                raise RuntimeError('isolated game runner did not start')
            time.sleep(.05)
        control.mkdir(exist_ok=True)
        director = Director(control, proof)
        director.command('hold')
        if args.record:
            recorder, capture_log = record_window(output, process, env)
        director.run()
        print('Route complete. Waiting for the timed stop and save/config verification.', flush=True)
    except (Exception, KeyboardInterrupt) as exc:
        error = str(exc) or 'interrupted'
        if output.exists():
            stop.touch()
        if director:
            state = director.read() or {}
            director.event('failed', dict(state, error=error))
    finally:
        if recorder:
            finish_recording(recorder, capture_log)
            if recorder.returncode != 0:
                error = error or 'game-window recording failed; inspect proof/capture.log'
                stop.touch()
    try:
        launch_log, _ = process.communicate(timeout=args.seconds + 40)
    except subprocess.TimeoutExpired:
        if output.exists():
            stop.touch()
        launch_log, _ = process.communicate(timeout=15)
        error = error or 'runner did not finish within its deadline'
    except KeyboardInterrupt:
        if output.exists():
            stop.touch()
        launch_log, _ = process.communicate(timeout=15)
        error = 'interrupted'
    if output.exists():
        proof.mkdir(exist_ok=True)
        (proof / 'runner-launch.log').write_text(launch_log)
        try:
            runner = json.loads((output / 'runner.json').read_text())
        except (OSError, ValueError):
            runner = {}
        checks = None
        if not error:
            try:
                checks = verify_route(output)
            except (OSError, ValueError, KeyError, TypeError, RuntimeError) as exc:
                error = str(exc)
        passed = not error and process.returncode == 0 and runner.get('original_saves_unchanged') \
            and runner.get('original_config_unchanged')
        report = {'passed': bool(passed), 'error': error, 'runner': runner,
                  'route_checks': checks,
                  'wall_contact_checked': False,
                  'route_report': str(proof / 'route-result.json')}
        (output / 'qa-result.json').write_text(json.dumps(report, indent=2) + '\n')
    else:
        passed = False
    print(('PASS' if passed else 'FAIL') + f': manual safehouse bike QA. Logs: {output}', flush=True)
    if error:
        print(error, file=sys.stderr)
    if not passed and launch_log:
        print(launch_log, file=sys.stderr)
    return 0 if passed else 1


if __name__ == '__main__':
    raise SystemExit(main())
