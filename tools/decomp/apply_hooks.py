#!/usr/bin/env python3
"""Insert the decomp entry hooks into the generated units.

Reads lcs/decomp/decomp_functions.def and, for every listed guest address,
puts a call to lcs::decomp::run<address>() right after that function's entry
label in lcs/generated/generated_unit_NNNN.cpp. Hooks that are no longer
listed are removed, so the script can be re-run after any edit to the list.
"""
import pathlib
import re
import sys

REPO = pathlib.Path(__file__).resolve().parents[2]
DEF = REPO / 'lcs' / 'decomp' / 'decomp_functions.def'
GENERATED = REPO / 'lcs' / 'generated'
CODE_BASE = 0x08804000
UNIT_SPAN = 0x4000
TAG = '// [decomp-hook]'
CR, LF = chr(13), chr(10)
RETURN = ('jump_target = ctx.gpr[31]; local_pc = jump_target; '
          'if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; } '
          'ctx.pc = jump_target; return;')


def main():
    addresses = [int(m.group(1), 16)
                 for m in re.finditer(r'^DECOMP_FN\(0x([0-9A-Fa-f]{8})u,', DEF.read_text(), re.M)]
    if len(set(addresses)) != len(addresses):
        sys.exit('duplicate address in decomp_functions.def')
    by_unit = {}
    for address in addresses:
        by_unit.setdefault((address - CODE_BASE) // UNIT_SPAN, []).append(address)

    missing = []
    changed = 0
    for path in sorted(GENERATED.glob('generated_unit_*.cpp')):
        unit = int(path.stem.rsplit('_', 1)[1])
        with path.open(newline='') as handle:
            text = handle.read()
        eol = CR + LF if CR + LF in text[:4096] else LF
        lines = [line for line in text.splitlines(keepends=True) if TAG not in line]
        wanted = by_unit.get(unit, [])
        if wanted:
            labels = {'L_%08X:' % address: address for address in wanted}
            out = []
            for line in lines:
                out.append(line)
                address = labels.pop(line.strip(), None)
                if address is not None:
                    out.append('    if (lcs::decomp::run<0x%08Xu>(rt, ctx)) { %s }  %s%s'
                               % (address, RETURN, TAG, eol))
                elif line.startswith('#include "generated_units.hpp"'):
                    out.append('#include "decomp.hpp"  ' + TAG + eol)
            missing += labels.values()
            lines = out
        new_text = ''.join(lines)
        if new_text != text:
            with path.open('w', newline='') as handle:
                handle.write(new_text)
            changed += 1
    if missing:
        sys.exit('no entry label for: ' + ', '.join('%08X' % a for a in sorted(missing)))
    print('%d hooks in %d units, %d files rewritten' % (len(addresses), len(by_unit), changed))


if __name__ == '__main__':
    main()
