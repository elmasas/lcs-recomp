#!/usr/bin/env python3
"""Opt-in block-driving QA at every F10 view-distance step."""
import argparse
import json
import os
from pathlib import Path
import re
import subprocess
import sys
import time

DISTANCES = (1, 1.25, 1.5, 1.75, 2, 2.5, 3, 4)


def live_sweep(repo, args, source, output):
    from safehouse_bike import Director
    from qa_safehouse_bike import record_window, finish_recording

    config = output / 'live.ini'
    config.write_text(re.sub(r'(?mi)^ViewDistance\s*=.*$', 'ViewDistance=1', source))
    control = output / 'control'
    control.mkdir()
    (control / 'command.txt').write_text('hold\n')
    run = output / 'run'
    stop = output / 'stop'
    env = os.environ.copy()
    if sys.platform.startswith('linux'):
        env['SDL_VIDEODRIVER'] = 'x11'
    command = [sys.executable, str(repo / 'lcs/scripts/stress_test.py'),
               '--config', str(config), '--game', str(args.game.resolve()),
               '--binary', str(args.binary.resolve()), '--output', str(run),
               '--direct', str(control), '--stop-file', str(stop), '--seconds', '120']
    saves = args.game / 'PSP/SAVEDATA'
    if not saves.is_dir() or not any(saves.iterdir()):
        saves = repo / 'lcs/qa/saves'
    command.extend(['--saves', str(saves.resolve())])
    director = Director(control, output / 'proof')
    recorder = capture_log = None
    result = {'passed': False, 'steps': [], 'error': None}
    with (output / 'launch.log').open('w') as launch_log:
        process = subprocess.Popen(command, stdout=launch_log, stderr=subprocess.STDOUT, env=env)
        try:
            deadline = time.monotonic() + 30
            while time.monotonic() < deadline:
                if process.poll() is not None:
                    raise RuntimeError('game runner stopped during startup')
                if (run / 'runtime.log').exists():
                    break
                time.sleep(.1)
            else:
                raise RuntimeError('isolated runner did not start')
            (run / 'proof').mkdir(parents=True, exist_ok=True)
            if args.record:
                recorder, capture_log = record_window(run, process, env)
            while time.monotonic() < deadline:
                state = director.read()
                if state and state['ready']:
                    break
                time.sleep(.1)
            else:
                raise RuntimeError('gameplay did not become ready')
            for x, y, radius in [(1142.8, -242.4, .4), (1142.8, -246, .5),
                                 (1147, -246, .6), (1158, -239, .7), (1158, -217, .7)]:
                director.walk(x, y, radius)
            # Face the hill so captures show the coarse/detailed transition.
            deadline = time.monotonic() + 8
            while time.monotonic() < deadline:
                state = director.sample()
                x, y = state['camera_x'], state['camera_y']
                length = (x * x + y * y) ** .5
                if -x / max(length, .001) > .995 and length > .96:
                    break
                director.command(f'camera {188 if y < 0 else 68} {218 if length < .96 else 128}')
            else:
                raise RuntimeError('camera did not settle on the hill')
            director.command('hold')
            for direction, distances in [('up', DISTANCES), ('down', DISTANCES[-2::-1])]:
                for distance in distances:
                    director.command(f'distance {distance}')
                    time.sleep(3)
                    state = director.sample()
                    if process.poll() is not None or state.get('view_distance') != distance:
                        raise RuntimeError(f'distance {distance} was not applied or game stopped')
                    result['steps'].append({'direction': direction, 'distance': distance, 'state': state})
                    if recorder:
                        window = recorder.args[recorder.args.index('-window_id') + 1]
                        subprocess.run(['ffmpeg', '-y', '-loglevel', 'error', '-f', 'x11grab',
                                        '-window_id', window, '-i', env.get('DISPLAY', ':0'),
                                        '-frames:v', '1', str(output / f'{direction}-{distance}.png')],
                                       check=True, env=env)
                    print(f'{direction} {distance}: applied', flush=True)
        except Exception as error:
            result['error'] = str(error)
            stop.touch()
        finally:
            if recorder:
                finish_recording(recorder, capture_log)
                if recorder.returncode != 0:
                    result['error'] = result['error'] or 'window recording failed; inspect capture.log'
                    stop.touch()
            process.wait(timeout=160)
    report = run / 'runner.json'
    result['runner'] = json.loads(report.read_text()) if report.exists() else {}
    result['passed'] = (result['error'] is None and len(result['steps']) == 15 and
                        process.returncode == 0 and result['runner'].get('exit_code') == 0 and
                        result['runner'].get('original_saves_unchanged') is True and
                        result['runner'].get('original_config_unchanged') is True)
    (output / 'results.json').write_text(json.dumps(result, indent=2) + '\n')
    print(f'{"PASS" if result["passed"] else "FAIL"}: live distance sweep; {output}', flush=True)
    return 0 if result['passed'] else 1


def main():
    repo = Path(__file__).resolve().parents[2]
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--config', type=Path, default=repo / 'lcs/config/LCSNative.ini')
    parser.add_argument('--binary', type=Path, default=repo / 'out/lcs-linux/lcs/LCSNative')
    parser.add_argument('--game', type=Path, default=repo / 'lcs/game')
    parser.add_argument('--output', type=Path)
    parser.add_argument('--record', action='store_true')
    parser.add_argument('--live', action='store_true',
                        help='sweep every distance up and down during one running game')
    args = parser.parse_args()
    source = args.config.read_text()
    if len(re.findall(r'(?mi)^ViewDistance\s*=.*$', source)) != 1:
        parser.error('configuration must contain exactly one ViewDistance entry')
    output = (args.output or repo / 'out/stress' /
              time.strftime('qa-distances-%Y%m%d-%H%M%S')).resolve()
    output.mkdir(parents=True, exist_ok=False)
    if args.live:
        return live_sweep(repo, args, source, output)
    results = []
    for distance in DISTANCES:
        config = output / f'distance-{distance}.ini'
        config.write_text(re.sub(r'(?mi)^ViewDistance\s*=.*$',
                                 f'ViewDistance={distance}', source))
        run = output / f'distance-{distance}'
        command = [sys.executable, str(repo / 'lcs/scripts/qa_safehouse_bike.py'),
                   '--config', str(config), '--game', str(args.game.resolve()),
                   '--binary', str(args.binary.resolve()), '--output', str(run),
                   '--seconds', '120']
        if args.record:
            command.append('--record')
        print(f'\nTesting view distance {distance}', flush=True)
        with (output / f'distance-{distance}.log').open('w') as log:
            completed = subprocess.run(command, stdout=log, stderr=subprocess.STDOUT)
        report = run / 'qa-result.json'
        result = json.loads(report.read_text()) if report.exists() else {}
        passed = completed.returncode == 0 and result.get('passed') is True
        results.append({'distance': distance, 'passed': passed,
                        'exit_code': completed.returncode, 'report': str(report),
                        'error': result.get('error')})
        (output / 'results.json').write_text(json.dumps(results, indent=2) + '\n')
        print(f'{distance}: {"PASS" if passed else "FAIL"}; {report}', flush=True)
    passed = all(result['passed'] for result in results)
    print(f'{"PASS" if passed else "FAIL"}: view-distance matrix; {output}', flush=True)
    return 0 if passed else 1


if __name__ == '__main__':
    raise SystemExit(main())
