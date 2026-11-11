#!/usr/bin/env python3
"""Disassembly and cross-reference helper for the LCS EBOOT (relocatable PRX).

Usage:
  psp_dis.py ELF fn ADDR            disassemble one function
  psp_dis.py ELF dis ADDR COUNT     disassemble COUNT instructions
  psp_dis.py ELF xref ADDR          callers (jal/j) and hi/lo data references
  psp_dis.py ELF str ADDR           C string / UTF-16 string at ADDR
  psp_dis.py ELF words ADDR COUNT   dump 32-bit words
  psp_dis.py ELF funcs LO HI        list function starts (jal targets) in a range

Addresses are guest addresses (module base 0x08804000).
"""
import struct
import sys

import capstone

BASE = 0x08804000
REG = ['zero', 'at', 'v0', 'v1', 'a0', 'a1', 'a2', 'a3', 't0', 't1', 't2', 't3', 't4', 't5', 't6', 't7',
       's0', 's1', 's2', 's3', 's4', 's5', 's6', 's7', 't8', 't9', 'k0', 'k1', 'gp', 'sp', 'fp', 'ra']


class Image:
    def __init__(self, path):
        d = open(path, 'rb').read()
        phoff, shoff = struct.unpack_from('<II', d, 28)
        phentsize, phnum, shentsize, shnum, _ = struct.unpack_from('<HHHHH', d, 42)
        segs = [struct.unpack_from('<8I', d, phoff + i * phentsize) for i in range(phnum)]
        self.seg_addr = [BASE + s[2] for s in segs]
        end = max(s[2] + s[5] for s in segs)
        mem = bytearray(end)
        for s in segs:
            mem[s[2]:s[2] + s[4]] = d[s[1]:s[1] + s[4]]
        self.text_end = 0
        for i in range(shnum):
            sh = struct.unpack_from('<10I', d, shoff + i * shentsize)
            if sh[1] == 1 and sh[2] & 4:  # PROGBITS + EXECINSTR
                self.text_end = max(self.text_end, sh[3] + sh[5])
            if sh[1] != 0x700000A0:
                continue
            rels = [struct.unpack_from('<II', d, sh[4] + k) for k in range(0, sh[5], 8)]
            orig = {}
            for off, info in rels:
                a = off + segs[(info >> 8) & 0xFF][2]
                orig[a] = struct.unpack_from('<I', mem, a)[0]
            for idx, (off, info) in enumerate(rels):
                typ = info & 0xFF
                a = off + segs[(info >> 8) & 0xFF][2]
                to = self.seg_addr[(info >> 16) & 0xFF]
                op = struct.unpack_from('<I', mem, a)[0]
                if typ == 2:
                    op = (op + to) & 0xFFFFFFFF
                elif typ == 4:
                    op = (op & 0xFC000000) | (((op & 0x03FFFFFF) + (to >> 2)) & 0x03FFFFFF)
                elif typ == 5:
                    cur = (op & 0xFFFF) << 16
                    lo = 0
                    for off2, info2 in rels[idx + 1:idx + 64]:
                        if (info2 & 0xFF) == 6:
                            a2 = off2 + segs[(info2 >> 8) & 0xFF][2]
                            lo = orig[a2] & 0xFFFF
                            if lo & 0x8000:
                                lo -= 0x10000
                            break
                    cur = (cur + lo + to) & 0xFFFFFFFF
                    low = cur & 0xFFFF
                    if low & 0x8000:
                        low -= 0x10000
                    op = (op & 0xFFFF0000) | (((cur - low) >> 16) & 0xFFFF)
                elif typ == 6:
                    op = (op & 0xFFFF0000) | ((op + to) & 0xFFFF)
                struct.pack_into('<I', mem, a, op)
        self.mem = bytes(mem)
        self.md = capstone.Cs(capstone.CS_ARCH_MIPS, capstone.CS_MODE_MIPS32 + capstone.CS_MODE_LITTLE_ENDIAN)
        self._calls = None

    def w(self, addr):
        return struct.unpack_from('<I', self.mem, addr - BASE)[0]

    def in_image(self, addr):
        return BASE <= addr < BASE + len(self.mem)

    def cstr(self, addr, limit=80):
        if not self.in_image(addr):
            return None
        o = addr - BASE
        e = self.mem.find(b'\0', o, o + limit)
        if e <= o + 2:
            return None
        s = self.mem[o:e]
        if all(32 <= c < 127 or c in (9, 10) for c in s):
            return s.decode('ascii')
        return None

    def calls(self):
        if self._calls is None:
            self._calls = {}
            for o in range(0, self.text_end, 4):
                op = struct.unpack_from('<I', self.mem, o)[0]
                if (op >> 26) == 3:
                    t = ((BASE + o + 4) & 0xF0000000) | ((op & 0x03FFFFFF) << 2)
                    self._calls.setdefault(t, []).append(BASE + o)
        return self._calls

    def insn(self, addr):
        op = self.w(addr)
        if op == 0:
            return 'nop', ''
        for i in self.md.disasm(struct.pack('<I', op), addr):
            return i.mnemonic, i.op_str
        return '.word', '0x%08X' % op

    def func_end(self, start):
        """Heuristic: stop at a jr ra whose delay slot is past every forward branch target."""
        far = start
        a = start
        calls = self.calls()
        while a < BASE + self.text_end:
            op = self.w(a)
            opc = op >> 26
            if opc in (1, 4, 5, 6, 7, 20, 21, 22, 23) or (opc == 17 and ((op >> 21) & 31) == 8):
                off = op & 0xFFFF
                if off & 0x8000:
                    off -= 0x10000
                far = max(far, a + 4 + off * 4)
            elif opc == 2:
                t = ((a + 4) & 0xF0000000) | ((op & 0x03FFFFFF) << 2)
                if start < t < start + 0x4000 and t not in calls:
                    far = max(far, t)
            if op == 0x03E00008 and a + 4 >= far:
                return a + 8
            if a > start and a in calls and a > far:
                return a
            a += 4
        return a

    def dis(self, start, end):
        hi = {}
        out = []
        calls = self.calls()
        a = start
        while a < end:
            op = self.w(a)
            m, s = self.insn(a)
            note = ''
            opc = op >> 26
            rs, rt = (op >> 21) & 31, (op >> 16) & 31
            imm = op & 0xFFFF
            simm = imm - 0x10000 if imm & 0x8000 else imm
            if opc == 15:
                hi[rt] = imm << 16
            elif opc in (9, 13) and rs in hi:
                v = (hi[rs] + simm) & 0xFFFFFFFF if opc == 9 else hi[rs] | imm
                note = '= 0x%08X' % v
                st = self.cstr(v)
                if st:
                    note += ' "%s"' % st.replace('\n', '\\n')
                if rt != rs:
                    pass
                hi[rt] = v if False else hi.get(rt, 0)
                if rt == rs:
                    hi.pop(rt, None)
                else:
                    hi.pop(rt, None)
            elif opc >= 32 and rs in hi and rs != 29:
                note = '@ 0x%08X' % ((hi[rs] + simm) & 0xFFFFFFFF)
                if opc < 40 and rt == rs:
                    hi.pop(rt, None)
            elif opc == 0 and (op & 63) in (0x21, 0x25) and rs in hi and False:
                pass
            if opc == 3:
                t = ((a + 4) & 0xF0000000) | ((op & 0x03FFFFFF) << 2)
                note = 'CALL'
            tag = '\n' if (a in calls and a != start) else ''
            out.append('%s%08X: %-8s %-28s %s' % (tag, a, m, s, note))
            a += 4
        return '\n'.join(l.rstrip() for l in out)

    def xref(self, target):
        res = []
        for c in self.calls().get(target, []):
            res.append('call  %08X' % c)
        hi = {}
        for o in range(0, self.text_end, 4):
            op = struct.unpack_from('<I', self.mem, o)[0]
            opc = op >> 26
            rs, rt = (op >> 21) & 31, (op >> 16) & 31
            imm = op & 0xFFFF
            simm = imm - 0x10000 if imm & 0x8000 else imm
            if opc == 2:
                t = ((BASE + o + 4) & 0xF0000000) | ((op & 0x03FFFFFF) << 2)
                if t == target:
                    res.append('jump  %08X' % (BASE + o))
            if opc == 15:
                hi[rt] = (imm << 16, o)
            elif (opc == 9 or opc >= 32) and rs in hi and o - hi[rs][1] < 256:
                if ((hi[rs][0] + simm) & 0xFFFFFFFF) == target:
                    res.append('%s  %08X' % ('addr' if opc == 9 else ('load' if opc < 40 else 'stor'), BASE + o))
        # data words
        for o in range(self.text_end, len(self.mem) - 3, 4):
            if struct.unpack_from('<I', self.mem, o)[0] == target:
                res.append('data  %08X' % (BASE + o))
        return '\n'.join(res)


def main():
    img = Image(sys.argv[1])
    cmd = sys.argv[2]
    args = [int(x, 16) for x in sys.argv[3:]]
    if cmd == 'fn':
        for a in args:
            print(img.dis(a, img.func_end(a)))
            print()
    elif cmd == 'dis':
        print(img.dis(args[0], args[0] + 4 * args[1]))
    elif cmd == 'xref':
        for a in args:
            print('--- %08X' % a)
            print(img.xref(a))
    elif cmd == 'str':
        for a in args:
            o = a - BASE
            e = img.mem.find(b'\0', o)
            print('%08X: %r' % (a, img.mem[o:e]))
            e2 = o
            while img.mem[e2:e2 + 2] != b'\0\0':
                e2 += 2
            print('   u16: %r' % img.mem[o:e2].decode('utf-16le', 'replace'))
    elif cmd == 'words':
        for k in range(args[1]):
            a = args[0] + 4 * k
            v = img.w(a)
            st = img.cstr(v) if img.in_image(v) else None
            print('%08X: %08X %s' % (a, v, repr(st) if st else ''))
    elif cmd == 'funcs':
        for t in sorted(img.calls()):
            if args[0] <= t < args[1]:
                print('%08X  size=%d  callers=%d' % (t, img.func_end(t) - t, len(img.calls()[t])))


if __name__ == '__main__':
    main()
