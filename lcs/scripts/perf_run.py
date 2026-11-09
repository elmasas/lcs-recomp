#!/usr/bin/env python3
"""One timed run of the game on disposable saves, for comparing builds and settings on Windows.

    python lcs/scripts/perf_run.py OUT --binary out/lcs-perf/lcs/LCSNative.exe [--seconds 180]
        [--set Rendering.ViewDistance=1] [ENV=VAL ...]

Structure from VCS Recomp's tools/cruise.py and tools/soak.py (GPL-3.0; see lcs/VCS_IMPORT.md); the isolation from
lcs/scripts/stress_test.py, whose symlinks need privileges on Windows: here a junction for PSP_GAME, a hard link for
EBOOT.ELF and a copy of the saves. Test mode, so no guest writes: --stress-driving, or with --route the cruise rig.
"""
import argparse
import hashlib
import json
import os
from pathlib import Path
import re
import shutil
import subprocess
import sys
import tempfile
import time

REPO = Path(__file__).resolve().parents[2]


def fingerprint(root):
    if not root.exists():
        return None
    return {str(p.relative_to(root)): hashlib.sha256(p.read_bytes()).hexdigest()
            for p in sorted(root.rglob('*')) if p.is_file()}


def apply_setting(text, setting):
    """Section.Key=Value on a copy of the ini; a key that is missing goes under its section."""
    name, value = setting.split('=', 1)
    section, key = name.split('.', 1)
    line = f'{key}={value}'
    header = re.search(rf'(?mi)^\[{re.escape(section)}\][ \t]*\r?\n', text)
    if not header:
        return text.rstrip('\n') + f'\n\n[{section}]\n{line}\n'
    end = re.search(r'(?m)^\[', text[header.end():])
    stop = header.end() + end.start() if end else len(text)
    body = text[header.end():stop]
    new, count = re.subn(rf'(?mi)^{re.escape(key)}[ \t]*=.*$', line, body)
    if not count:
        new = line + '\n' + body
    return text[:header.end()] + new + text[stop:]


def junction(link, target):
    subprocess.run(['cmd', '/c', 'mklink', '/J', str(link), str(target)], check=True, stdout=subprocess.DEVNULL)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('output', type=Path)
    ap.add_argument('--binary', type=Path, required=True)
    ap.add_argument('--seconds', type=int, default=180)
    ap.add_argument('--route', type=Path, help='LCS_CRUISE_ROUTE: fly this route instead of driving by stress mode')
    ap.add_argument('--game', type=Path, default=REPO / 'lcs/game')
    ap.add_argument('--config', type=Path, default=REPO / 'lcs/config/LCSNative.ini')
    ap.add_argument('--set', action='append', default=[], metavar='Section.Key=Value')
    ap.add_argument('--packs', action='store_true', help="the game folder's TEXTURES, so the ini's texture packs load")
    ap.add_argument('env', nargs='*', metavar='ENV=VAL')
    a = ap.parse_args()

    game, binary, config = a.game.resolve(), a.binary.resolve(), a.config.resolve()
    if not binary.is_file() or not (game / 'EBOOT.ELF').is_file():
        ap.error('need a built binary and a game folder with EBOOT.ELF')
    output = a.output.resolve()
    output.mkdir(parents=True, exist_ok=False)  # never over earlier evidence

    source_saves = game / 'PSP/SAVEDATA'
    saves_before = fingerprint(source_saves)
    config_before = hashlib.sha256(config.read_bytes()).hexdigest()
    text = config.read_text()
    for setting in a.set:
        text = apply_setting(text, setting)
    (output / 'LCSNative.ini').write_text(text)

    env = os.environ.copy()
    env['PSPRECOMP_CONFIG'] = str(output / 'LCSNative.ini')
    env['LCS_PERF_LOG'] = str(output / 'perf.csv')
    if a.route:
        env['LCS_CRUISE_ROUTE'] = str(a.route.resolve())
    for pair in a.env:
        key, value = pair.split('=', 1)
        env[key] = value

    with tempfile.TemporaryDirectory(prefix='lcs-perf-') as scratch:
        isolated = Path(scratch) / 'game'
        isolated.mkdir()
        os.link(game / 'EBOOT.ELF', isolated / 'EBOOT.ELF')
        junction(isolated / 'PSP_GAME', game / 'PSP_GAME')
        if a.packs and (game / 'TEXTURES').is_dir():
            junction(isolated / 'TEXTURES', game / 'TEXTURES')
        (isolated / 'PSP').mkdir()
        if source_saves.exists():
            shutil.copytree(source_saves, isolated / 'PSP/SAVEDATA')
        mode = '--stress-test' if a.route else '--stress-driving'
        command = [str(binary), '--game', str(isolated), mode, '--max-seconds', str(a.seconds),
                   '--stress-output', str(output)]
        print(f'run: {a.seconds} s, settings {a.set or "as in the ini"}, output {output}', flush=True)
        started = time.monotonic()
        timed_out = False
        with (output / 'runtime.log').open('w') as log:
            process = subprocess.Popen(command, env=env, stdout=log, stderr=subprocess.STDOUT, cwd=binary.parent)
            try:
                result = process.wait(timeout=a.seconds + 60)
            except subprocess.TimeoutExpired:
                timed_out = True
                process.kill()
                result = process.wait()
        # the junction goes first, so the temporary folder's cleanup cannot reach the real PSP_GAME
        os.rmdir(isolated / 'PSP_GAME')
        if (isolated / 'TEXTURES').exists():
            os.rmdir(isolated / 'TEXTURES')

    runner = {'exit_code': result, 'watchdog_timeout': timed_out, 'elapsed': round(time.monotonic() - started, 1),
              'settings': a.set, 'env': a.env, 'binary': str(binary),
              'original_saves_unchanged': saves_before == fingerprint(source_saves),
              'original_config_unchanged': config_before == hashlib.sha256(config.read_bytes()).hexdigest()}
    (output / 'runner.json').write_text(json.dumps(runner, indent=2) + '\n')
    print(json.dumps(runner, indent=2), flush=True)
    if (output / 'perf.csv').is_file():
        subprocess.run([sys.executable, str(Path(__file__).with_name('perf_report.py')), str(output / 'perf.csv'),
                        '--json', str(output / 'report.json')])
    return 0 if runner['original_saves_unchanged'] and runner['original_config_unchanged'] else 1


if __name__ == '__main__':
    raise SystemExit(main())
