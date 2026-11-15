#!/usr/bin/env python3
"""One timed run of the game on throwaway copies of the saves, to compare builds and settings (Windows).

    python lcs/scripts/perf_run.py OUT --binary path/LCSNative.exe [--seconds 180] [--route FILE] [--game DIR]
        [--config INI] [--set Section.Key=Value ...] [--packs] [ENV=VAL ...]

OUT must not exist yet. It receives LCSNative.ini (the config with each --set applied), perf.csv (the frame log),
runtime.log (the game's output), runner.json (what was run and whether the real saves and ini stayed untouched) and,
when the frame log exists, report.json from perf_report.py.

The game runs from a temporary folder: EBOOT.ELF hard-linked, PSP_GAME (and TEXTURES with --packs) as directory
junctions, and a copy of PSP/SAVEDATA. With --route it drives that cruise route (--stress-test), else it drives
around (--stress-driving). It is killed if it is still running 60 seconds after --seconds.

Exits with 0 only when the real saves and the real ini are unchanged.
"""
import argparse
import hashlib
import json
import os
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile
import time

REPO = Path(__file__).resolve().parents[2]
WATCHDOG_GRACE_S = 60


def fingerprint(path):
    """SHA-256 of a file, or of every file under a folder by relative path; None when missing."""
    path = Path(path)
    if path.is_file():
        return hashlib.sha256(path.read_bytes()).hexdigest()
    if not path.is_dir():
        return None
    digest = hashlib.sha256()
    for file in sorted(p for p in path.rglob('*') if p.is_file()):
        digest.update(file.relative_to(path).as_posix().encode('utf-8') + b'\0')
        digest.update(hashlib.sha256(file.read_bytes()).digest())
    return digest.hexdigest()


def parse_setting(text):
    """'Section.Key=Value' -> (section, key, value)."""
    name, sep, value = text.partition('=')
    section, dot, key = name.partition('.')
    if not sep or not dot or not section.strip() or not key.strip():
        raise argparse.ArgumentTypeError(f'expected Section.Key=Value, got {text!r}')
    return section.strip(), key.strip(), value.strip()


def parse_env(text):
    name, sep, value = text.partition('=')
    if not sep or not name:
        raise argparse.ArgumentTypeError(f'expected ENV=VAL, got {text!r}')
    return name, value


def section_name(line):
    stripped = line.strip()
    if stripped.startswith('[') and ']' in stripped:
        return stripped[1:stripped.index(']')].strip()
    return None


def line_key(line):
    stripped = line.strip()
    if not stripped or stripped[0] in ';#' or '=' not in stripped:
        return None
    return stripped.split('=', 1)[0].strip()


def apply_setting(lines, section, key, value):
    """Replaces the key's line in its section, else adds it at the top of the section, else adds the section."""
    new_line = f'{key}={value}'
    header = None
    for i, line in enumerate(lines):
        name = section_name(line)
        if name is not None:
            if header is not None:
                break  # left the section without finding the key
            if name.lower() == section.lower():
                header = i
            continue
        if header is not None and (found := line_key(line)) is not None and found.lower() == key.lower():
            lines[i] = f'{found}={value}'  # keeps the file's spelling of the key
            return
    if header is not None:
        lines.insert(header + 1, new_line)
        return
    if lines and lines[-1].strip():
        lines.append('')
    lines += [f'[{section}]', new_line]


def write_config(source, target, settings):
    lines = source.read_text(encoding='utf-8').splitlines()
    for section, key, value in settings:
        apply_setting(lines, section, key, value)
    target.write_text('\n'.join(lines) + '\n', encoding='utf-8')


def make_junction(link, target):
    subprocess.run(['cmd', '/c', 'mklink', '/J', str(link), str(target)], check=True, stdout=subprocess.DEVNULL)


def is_junction(path):
    try:
        return os.path.isjunction(path) or os.path.islink(path)
    except OSError:
        return False


def remove_junction(link):
    """Removes only the link itself; os.rmdir never touches the folder a junction points to."""
    if is_junction(link):
        os.rmdir(link)
    return not os.path.lexists(link)


def build_game_folder(temp, game, packs):
    """Fills `temp` and returns the junctions it made."""
    eboot = game / 'EBOOT.ELF'
    try:
        os.link(eboot, temp / 'EBOOT.ELF')
    except OSError:
        shutil.copy2(eboot, temp / 'EBOOT.ELF')  # another volume
    junctions = []
    names = ['PSP_GAME'] + (['TEXTURES'] if packs else [])
    for name in names:
        if (game / name).is_dir():
            make_junction(temp / name, game / name)
            junctions.append(temp / name)
    saves = game / 'PSP' / 'SAVEDATA'
    if saves.is_dir():
        shutil.copytree(saves, temp / 'PSP' / 'SAVEDATA')
    else:
        (temp / 'PSP' / 'SAVEDATA').mkdir(parents=True)
    return junctions


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('output', type=Path, help='new folder for the results')
    ap.add_argument('--binary', type=Path, required=True, help='LCSNative.exe to run')
    ap.add_argument('--seconds', type=int, default=180, help='length of the run (default 180)')
    ap.add_argument('--route', type=Path, help='cruise route to drive (LCS_CRUISE_ROUTE)')
    ap.add_argument('--game', type=Path, default=REPO / 'lcs' / 'game', help='game folder (default lcs/game)')
    ap.add_argument('--config', type=Path, default=REPO / 'lcs' / 'config' / 'LCSNative.ini',
                    help='ini to start from (default lcs/config/LCSNative.ini)')
    ap.add_argument('--set', dest='settings', type=parse_setting, action='append', default=[],
                    metavar='Section.Key=Value', help='change one ini setting for this run (repeatable)')
    ap.add_argument('--packs', action='store_true', help='use the texture packs in <game>/TEXTURES')
    ap.add_argument('env', nargs='*', type=parse_env, metavar='ENV=VAL', help='extra environment for the game')
    a = ap.parse_args()

    binary = a.binary.resolve()
    game = a.game.resolve()
    config = a.config.resolve()
    output = a.output.resolve()
    route = a.route.resolve() if a.route else None
    if not binary.is_file():
        ap.error(f'binary not found: {binary}')
    if not (game / 'EBOOT.ELF').is_file():
        ap.error(f'no EBOOT.ELF in {game}')
    if not config.is_file():
        ap.error(f'config not found: {config}')
    if route and not route.is_file():
        ap.error(f'route not found: {route}')
    if a.seconds <= 0:
        ap.error('--seconds must be positive')
    if output.exists():
        ap.error(f'{output} already exists; results are never overwritten')

    real_saves = game / 'PSP' / 'SAVEDATA'
    before = {'saves': fingerprint(real_saves), 'ini': fingerprint(config)}

    output.mkdir(parents=True)
    ini = output / 'LCSNative.ini'
    write_config(config, ini, a.settings)

    extra_env = dict(a.env)
    env = dict(os.environ)
    env['PSPRECOMP_CONFIG'] = str(ini)
    env['LCS_PERF_LOG'] = str(output / 'perf.csv')
    if route:
        env['LCS_CRUISE_ROUTE'] = str(route)
    env.update(extra_env)

    temp = Path(tempfile.mkdtemp(prefix='lcs-perf-'))
    junctions = []
    exit_code, watchdog, elapsed, command = None, False, 0.0, []
    try:
        junctions = build_game_folder(temp, game, a.packs)
        command = [str(binary), '--game', str(temp), '--stress-test' if route else '--stress-driving',
                   '--max-seconds', str(a.seconds), '--stress-output', str(output)]
        start = time.monotonic()
        with open(output / 'runtime.log', 'wb') as log:
            process = subprocess.Popen(command, cwd=binary.parent, env=env, stdout=log, stderr=subprocess.STDOUT)
            try:
                exit_code = process.wait(timeout=a.seconds + WATCHDOG_GRACE_S)
            except subprocess.TimeoutExpired:
                watchdog = True
                process.kill()
                exit_code = process.wait()
        elapsed = time.monotonic() - start
    finally:
        # The junctions go first, so deleting the temporary folder can never reach the real game folders.
        left = [str(link) for link in junctions if not remove_junction(link)]
        if left:
            print(f'junctions not removed, leaving {temp} in place: {left}', file=sys.stderr)
        else:
            shutil.rmtree(temp, ignore_errors=True)

    after = {'saves': fingerprint(real_saves), 'ini': fingerprint(config)}
    saves_unchanged = before['saves'] == after['saves']
    ini_unchanged = before['ini'] == after['ini']
    result = {
        'exit_code': exit_code,
        'watchdog_fired': watchdog,
        'elapsed_s': round(elapsed, 2),
        'seconds': a.seconds,
        'route': str(route) if route else None,
        'packs': a.packs,
        'settings': [f'{section}.{key}={value}' for section, key, value in a.settings],
        'env': extra_env,
        'binary': str(binary),
        'command': command,
        'game': str(game),
        'config': str(config),
        'saves_unchanged': saves_unchanged,
        'ini_unchanged': ini_unchanged,
    }
    text = json.dumps(result, indent=2)
    (output / 'runner.json').write_text(text + '\n', encoding='utf-8')
    print(text)

    perf_log = output / 'perf.csv'
    if perf_log.is_file():
        subprocess.run([sys.executable, '-I', str(Path(__file__).with_name('perf_report.py')), str(perf_log),
                        '--json', str(output / 'report.json')])

    sys.exit(0 if saves_unchanged and ini_unchanged else 1)


if __name__ == '__main__':
    main()
