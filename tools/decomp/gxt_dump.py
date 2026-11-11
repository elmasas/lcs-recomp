#!/usr/bin/env python3
"""Dump a GTA LCS (PSP) GXT file: one line per entry, "table<TAB>key<TAB>text".

    python tools/decomp/gxt_dump.py <ENGLISH.GXT> [--grep REGEX]

Layout (as Vice City): "TABL" + size, then 12-byte entries (name[8], offset).
MAIN's offset points at its "TKEY"; every other table starts with its name[8]
followed by "TKEY". TKEY holds 12-byte entries (offset into TDAT, key[8]);
TDAT holds NUL-terminated UTF-16LE strings.
"""
import re
import struct
import sys


def read_table(data, offset, name):
    if name != 'MAIN':
        offset += 8  # the table repeats its name before TKEY
    if data[offset:offset + 4] != b'TKEY':
        raise ValueError('no TKEY for %s at %#x' % (name, offset))
    key_size = struct.unpack_from('<I', data, offset + 4)[0]
    keys_at = offset + 8
    tdat = keys_at + key_size
    if data[tdat:tdat + 4] != b'TDAT':
        raise ValueError('no TDAT for %s at %#x' % (name, tdat))
    text_at = tdat + 8
    for index in range(key_size // 12):
        text_offset, raw_key = struct.unpack_from('<I8s', data, keys_at + index * 12)
        key = raw_key.split(b'\0', 1)[0].decode('ascii', 'replace')
        start = text_at + text_offset
        end = start
        while data[end:end + 2] != b'\0\0':
            end += 2
        yield key, data[start:end].decode('utf-16-le', 'replace')


def entries(path):
    data = open(path, 'rb').read()
    if data[:4] != b'TABL':
        raise ValueError('not a GXT file')
    size = struct.unpack_from('<I', data, 4)[0]
    for index in range(size // 12):
        raw_name, offset = struct.unpack_from('<8sI', data, 8 + index * 12)
        name = raw_name.split(b'\0', 1)[0].decode('ascii')
        for key, text in read_table(data, offset, name):
            yield name, key, text


def main():
    if len(sys.argv) < 2:
        print(__doc__)
        return 2
    pattern = None
    if '--grep' in sys.argv:
        pattern = re.compile(sys.argv[sys.argv.index('--grep') + 1], re.I)
    out = sys.stdout.buffer
    for table, key, text in entries(sys.argv[1]):
        if pattern and not pattern.search(text):
            continue
        out.write(('%s\t%s\t%s\n' % (table, key, text.replace('\n', '\\n'))).encode('utf-8'))
    return 0


if __name__ == '__main__':
    sys.exit(main())
