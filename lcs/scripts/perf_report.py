#!/usr/bin/env python3
"""Summarizes a frame log written by the game with LCS_PERF_LOG.

    python lcs/scripts/perf_report.py perf.csv [--from S] [--to S] [--all] [--json OUT]

--from / --to keep only the frames whose t_s lies in that range. Frames at x == 0 and y == 0 (boot, menus before
gameplay) are left out unless --all is given. --json also writes the summary as JSON.

A hitch is a frame longer than both twice the median and the median + 8 ms, where the median is that of the previous
(up to) 60 frames and a frame is only judged once 10 frames have been seen.
"""
import argparse
import bisect
import csv
import json
from collections import deque
from pathlib import Path
import sys

TIME_COLUMNS = ('ge_list_us', 'finish_frame_us', 'dxgi_present_us', 'fence_wait_us', 'idle_wait_us', 'throttle_us',
                'tex_decode_us', 'tex_hash_us', 'pso_us', 'io_us', 'world_us', 'world_read_us', 'world_merge_us',
                'lod_us')
COUNT_COLUMNS = ('tex_new', 'tex_same', 'tex_replaced', 'tex_evicted', 'tex_kb', 'pso_new', 'io_reads', 'io_kb',
                 'world_cache_hits', 'world_sectors', 'lod_drawn', 'skipped_vblanks', 'skipped_presents')
BASE_COLUMNS = ('t_s', 'frame_ms', 'x', 'y')
# The candidates for "what caused this hitch", by short name.
CAUSES = (('list', 'ge_list_us'), ('decode', 'tex_decode_us'), ('hash', 'tex_hash_us'), ('pso', 'pso_us'),
          ('io', 'io_us'), ('world', 'world_us'), ('lod', 'lod_us'), ('fence', 'fence_wait_us'),
          ('present', 'dxgi_present_us'))
OVER_MS = (20, 25, 33, 50, 100)
HITCH_WINDOW, HITCH_MIN_SEEN, HITCH_EXTRA_MS = 60, 10, 8.0
CAUSE_MIN_MS = 2.0
WORST_PRINTED, WORST_JSON = 15, 25


def load(path):
    """The log's rows as dicts of floats; rows cut short or holding non-numbers are skipped."""
    rows = []
    with open(path, newline='', encoding='utf-8', errors='replace') as f:
        reader = csv.reader(f)
        header = next(reader, None)
        if not header:
            return rows
        header = [name.strip() for name in header]
        wanted = BASE_COLUMNS + TIME_COLUMNS + COUNT_COLUMNS
        index = {name: header.index(name) for name in wanted if name in header}
        for name in ('t_s', 'frame_ms'):
            if name not in index:
                sys.exit(f'{path}: no {name} column')
        for fields in reader:
            if len(fields) != len(header):
                continue
            try:
                row = {name: float(fields[index[name]]) if name in index else 0.0 for name in wanted}
            except ValueError:
                continue
            rows.append(row)
    return rows


def percentile(ordered, fraction):
    """Linear interpolation between the closest ranks of a sorted list."""
    if not ordered:
        return 0.0
    position = (len(ordered) - 1) * fraction
    low = int(position)
    high = min(low + 1, len(ordered) - 1)
    return ordered[low] + (ordered[high] - ordered[low]) * (position - low)


class RunningMedian:
    """The median of the last `size` values."""

    def __init__(self, size):
        self.window = deque()
        self.ordered = []
        self.size = size

    def __len__(self):
        return len(self.window)

    def add(self, value):
        self.window.append(value)
        bisect.insort(self.ordered, value)
        if len(self.window) > self.size:
            old = self.window.popleft()
            del self.ordered[bisect.bisect_left(self.ordered, old)]

    def median(self):
        n = len(self.ordered)
        middle = n // 2
        return self.ordered[middle] if n % 2 else (self.ordered[middle - 1] + self.ordered[middle]) / 2.0


def find_hitches(rows):
    """(index, median) of each hitch frame."""
    hitches = []
    medians = RunningMedian(HITCH_WINDOW)
    for i, row in enumerate(rows):
        ms = row['frame_ms']
        if len(medians) >= HITCH_MIN_SEEN:
            median = medians.median()
            if ms > 2.0 * median and ms > median + HITCH_EXTRA_MS:
                hitches.append((i, median))
        medians.add(ms)
    return hitches


def describe_hitch(rows, index, median):
    # A stall often shows up a frame or two after the work that caused it, so the three frames ending at the hitch
    # are summed.
    frames = rows[max(0, index - 2):index + 1]
    times = {name: sum(r[name] for r in frames) / 1000.0 for name in TIME_COLUMNS}
    counts = {name: sum(r[name] for r in frames) for name in COUNT_COLUMNS}
    cause, cause_ms = max(((short, times[column]) for short, column in CAUSES), key=lambda item: item[1])
    return {
        't_s': rows[index]['t_s'],
        'ms': rows[index]['frame_ms'],
        'median_ms': median,
        'times_ms': times,
        'counts': counts,
        'cause': cause if cause_ms >= CAUSE_MIN_MS else '-',
    }


def summarize(rows):
    frame_ms = [r['frame_ms'] for r in rows]
    ordered = sorted(frame_ms)
    seconds = sum(frame_ms) / 1000.0
    hitches = find_hitches(rows)
    lost_ms = sum(rows[i]['frame_ms'] - median for i, median in hitches)
    minutes = seconds / 60.0
    worst = sorted(hitches, key=lambda hit: rows[hit[0]]['frame_ms'], reverse=True)[:WORST_JSON]
    return {
        'frames': len(rows),
        'seconds': seconds,
        'fps': len(rows) / seconds if seconds > 0 else 0.0,
        'p50': percentile(ordered, 0.50),
        'p95': percentile(ordered, 0.95),
        'p99': percentile(ordered, 0.99),
        'p999': percentile(ordered, 0.999),
        'max': ordered[-1],
        'over_ms': {str(limit): sum(1 for ms in frame_ms if ms > limit) for limit in OVER_MS},
        'hitches': len(hitches),
        'hitch_ms_lost_per_min': lost_ms / minutes if minutes > 0 else 0.0,
        'mean_ms_per_frame': {name: sum(r[name] for r in rows) / len(rows) / 1000.0 for name in TIME_COLUMNS},
        'totals': {name: sum(r[name] for r in rows) for name in COUNT_COLUMNS},
        'worst': [describe_hitch(rows, i, median) for i, median in worst],
    }


def short(name):
    return name.removesuffix('_us').removesuffix('_ms')


def number(value):
    return str(int(value)) if float(value).is_integer() else f'{value:.1f}'


def print_summary(s):
    print(f"frames {s['frames']}   seconds {s['seconds']:.1f}   fps {s['fps']:.1f}")
    print(f"frame ms: p50 {s['p50']:.2f}  p95 {s['p95']:.2f}  p99 {s['p99']:.2f}  p99.9 {s['p999']:.2f}  "
          f"max {s['max']:.2f}")
    print('frames over: ' + '  '.join(f'{limit} ms: {count}' for limit, count in s['over_ms'].items()))
    print(f"hitches {s['hitches']}   ms lost to hitches per minute {s['hitch_ms_lost_per_min']:.1f}")
    print()
    print('mean ms per frame:')
    for name, value in s['mean_ms_per_frame'].items():
        print(f'  {name:<18} {value:8.3f}')
    print()
    print('totals:')
    for name, value in s['totals'].items():
        print(f'  {name:<18} {number(value):>10}')
    worst = s['worst'][:WORST_PRINTED]
    if not worst:
        return
    print()
    print(f'worst {len(worst)} hitches (time columns and counts summed over the three frames ending at the hitch):')
    names = [short(name) for name in TIME_COLUMNS]
    widths = [max(6, len(name)) for name in names]
    print(f"{'t_s':>9} {'ms':>7} {'median':>6} " + ' '.join(f'{n:>{w}}' for n, w in zip(names, widths))
          + f" {'cause':>7}  counts")
    for hit in worst:
        cells = ' '.join(f'{v:>{w}.1f}' for v, w in zip(hit['times_ms'].values(), widths))
        counts = ' '.join(f'{name}={number(v)}' for name, v in hit['counts'].items() if v)
        print(f"{hit['t_s']:9.2f} {hit['ms']:7.1f} {hit['median_ms']:6.1f} {cells} {hit['cause']:>7}  "
              f"{counts or '-'}")


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('log', type=Path, help='perf.csv written with LCS_PERF_LOG')
    ap.add_argument('--from', dest='start', type=float, help='first t_s to keep, in seconds')
    ap.add_argument('--to', dest='end', type=float, help='last t_s to keep, in seconds')
    ap.add_argument('--all', action='store_true', help='keep frames at position 0,0 too (boot, menus)')
    ap.add_argument('--json', type=Path, help='also write the summary to this JSON file')
    a = ap.parse_args()
    if not a.log.is_file():
        ap.error(f'{a.log} not found')

    rows = load(a.log)
    if a.start is not None:
        rows = [r for r in rows if r['t_s'] >= a.start]
    if a.end is not None:
        rows = [r for r in rows if r['t_s'] <= a.end]
    if not a.all:
        rows = [r for r in rows if r['x'] != 0.0 or r['y'] != 0.0]
    if not rows:
        sys.exit('no frames left to report; frames at position 0,0 (before gameplay) are left out, '
                 'so use --all for a log of normal play that never set a position')

    summary = summarize(rows)
    print_summary(summary)
    if a.json:
        a.json.write_text(json.dumps(summary, indent=2) + '\n', encoding='utf-8')


if __name__ == '__main__':
    main()
