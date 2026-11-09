#!/usr/bin/env python3
"""Summarise a frame log from LCS_PERF_LOG (one row per new image shown).

    python lcs/scripts/perf_report.py perf.csv [--from S] [--to S] [--all] [--json OUT]

Adapted from VCS Recomp's tools/perf_report.py and tools/cruise.py (GPL-3.0; see lcs/VCS_IMPORT.md). A hitch has the
same meaning as there: a frame over twice the running median of the last 60 and 8 ms longer than it, so the numbers
compare. Frames before gameplay (no player position yet) are left out unless --all is given.
"""
import argparse
import csv
import json
import sys

TIMES = ['ge_list_us', 'finish_frame_us', 'dxgi_present_us', 'fence_wait_us', 'idle_wait_us', 'throttle_us',
         'tex_decode_us', 'tex_hash_us', 'pso_us', 'io_us', 'world_us', 'world_read_us', 'world_merge_us', 'lod_us']
COUNTS = ['tex_new', 'tex_same', 'tex_replaced', 'tex_evicted', 'tex_kb', 'pso_new', 'io_reads', 'io_kb',
          'world_cache_hits', 'world_sectors', 'lod_drawn', 'skipped_vblanks', 'skipped_presents']


def load(path, t_from, t_to, everything):
    rows = []
    with open(path, newline='') as f:
        for r in csv.DictReader(f):
            if None in r or None in r.values():  # last line cut off (game killed while logging)
                continue
            try:
                row = {k: float(v) for k, v in r.items()}
            except ValueError:
                continue
            for key in TIMES + COUNTS:  # logs from older builds lack the newer columns
                row.setdefault(key, 0.0)
            if t_from is not None and row['t_s'] < t_from:
                continue
            if t_to is not None and row['t_s'] > t_to:
                continue
            if not everything and row['x'] == 0.0 and row['y'] == 0.0:
                continue
            rows.append(row)
    return rows


def pct(sorted_vals, q):
    if not sorted_vals:
        return 0.0
    return sorted_vals[min(len(sorted_vals) - 1, int(q * (len(sorted_vals) - 1) + 0.5))]


def hitches(rows, window=60):
    found, recent = [], []
    for i, r in enumerate(rows):
        ms = r['frame_ms']
        if len(recent) >= 10:
            med = sorted(recent)[len(recent) // 2]
            if ms > 2.0 * med and ms > med + 8.0:
                span = rows[max(0, i - 2):i + 1]  # a stall often follows its cause by a frame or two
                hit = {'t': round(r['t_s'], 2), 'ms': round(ms, 1), 'median': round(med, 1),
                       'x': r['x'], 'y': r['y']}
                for key in TIMES:
                    hit[key[:-3] + '_ms'] = round(sum(p[key] for p in span) / 1000.0, 1)
                for key in COUNTS:
                    hit[key] = int(sum(p[key] for p in span))
                found.append(hit)
        recent.append(ms)
        if len(recent) > window:
            recent.pop(0)
    return found


def summarise(rows):
    ms = sorted(r['frame_ms'] for r in rows)
    secs = sum(ms) / 1000.0
    found = hitches(rows)
    over = {k: sum(1 for v in ms if v > k) for k in (20, 25, 33, 50, 100)}
    return {
        'frames': len(rows), 'seconds': round(secs, 1), 'fps': round(len(rows) / secs, 1) if secs else 0,
        'p50': pct(ms, .5), 'p95': pct(ms, .95), 'p99': pct(ms, .99), 'p999': pct(ms, .999),
        'max': ms[-1] if ms else 0, 'over_ms': over, 'hitches': len(found),
        'hitch_ms_lost_per_min': round(sum(h['ms'] - h['median'] for h in found) / secs * 60.0, 1) if secs else 0,
        'mean_ms_per_frame': {k[:-3]: round(sum(r[k] for r in rows) / len(rows) / 1000.0, 2) for k in TIMES},
        'totals': {k: int(sum(r[k] for r in rows)) for k in COUNTS},
        'worst': sorted(found, key=lambda h: -h['ms'])[:25],
    }


def blame(hit):
    """The largest thing inside a hitch's three frames."""
    keys = ['ge_list_ms', 'tex_decode_ms', 'tex_hash_ms', 'pso_ms', 'io_ms', 'world_ms', 'lod_ms', 'fence_wait_ms',
            'dxgi_present_ms']
    best = max(keys, key=lambda k: hit[k])
    return best[:-3] if hit[best] >= 2.0 else '-'


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('csv')
    ap.add_argument('--from', dest='t_from', type=float)
    ap.add_argument('--to', dest='t_to', type=float)
    ap.add_argument('--all', action='store_true', help='include frames before gameplay')
    ap.add_argument('--json')
    a = ap.parse_args()
    rows = load(a.csv, a.t_from, a.t_to, a.all)
    if not rows:
        sys.exit('no frames in range (the position only exists in stress runs: use --all for normal play)')
    s = summarise(rows)
    print(f"{s['frames']} frames over {s['seconds']:.1f} s: {s['fps']:.1f} fps  p50 {s['p50']:.1f}  p95 {s['p95']:.1f}  "
          f"p99 {s['p99']:.1f}  p99.9 {s['p999']:.1f}  max {s['max']:.1f} ms")
    o = s['over_ms']
    print(f"frames over 20 / 25 / 33 / 50 / 100 ms: {o[20]} / {o[25]} / {o[33]} / {o[50]} / {o[100]};  "
          f"hitches {s['hitches']} ({s['hitch_ms_lost_per_min']:.1f} ms lost a minute)")
    print('mean ms per frame: ' + '  '.join(f'{k} {v:.2f}' for k, v in s['mean_ms_per_frame'].items()))
    print('totals: ' + '  '.join(f'{k} {v}' for k, v in s['totals'].items()))
    if s['worst']:
        print('worst hitches (times and counts over 3 frames):')
        print('       t     ms  med   list  decode  hash   pso    io  world  fence  present  idle  texnew  pso#  iokb  largest')
        for h in s['worst'][:15]:
            print(f"  {h['t']:7.2f} {h['ms']:6.1f} {h['median']:4.1f} {h['ge_list_ms']:6.1f} {h['tex_decode_ms']:7.1f} "
                  f"{h['tex_hash_ms']:5.1f} {h['pso_ms']:5.1f} {h['io_ms']:5.1f} {h['world_ms']:6.1f} {h['fence_wait_ms']:6.1f} "
                  f"{h['dxgi_present_ms']:8.1f} {h['idle_wait_ms']:5.1f} {h['tex_new']:7d} {h['pso_new']:5d} "
                  f"{h['io_kb']:5d}  {blame(h)}")
    if a.json:
        with open(a.json, 'w') as f:
            json.dump(s, f, indent=1)


if __name__ == '__main__':
    main()
