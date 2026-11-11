#!/usr/bin/env python3
"""Compact disassembly: cdis.py ELF START END  (hex guest addresses). Drops callee-save spills."""
import re, sys, os
sys.path.insert(0, os.path.dirname(__file__))
import psp_dis
img = psp_dis.Image(sys.argv[1])
a, b = int(sys.argv[2], 16), int(sys.argv[3], 16)
calls = img.calls()
for line in img.dis(a, b).replace('$', '').split('\n'):
    if not line:
        continue
    m = re.match(r'^([0-9A-F]{8}): (\S+)\s*(.*?)\s*$', line)
    addr, mn, rest = m.group(1), m.group(2), re.sub(r'\s{2,}', ' ; ', m.group(3))
    if re.match(r'^(sw|lw|swc1|lwc1) (s\d|ra|fp|f2\d|f3\d), (0x[0-9a-f]+|\d+)?\(sp\)', mn + ' ' + rest):
        continue
    if int(addr, 16) in calls:
        print('--- fn %s (%d callers)' % (addr, len(calls[int(addr, 16)])))
    print(addr[2:], mn, rest)
