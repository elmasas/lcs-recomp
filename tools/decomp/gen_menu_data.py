#!/usr/bin/env python3
"""Write lcs/decomp/game/MenuData.cpp from the menu tables in the EBOOT.

    python tools/decomp/gen_menu_data.py <EBOOT.ELF> [ENGLISH.GXT]

The output is ordinary source and is meant to be edited by hand afterwards;
re-run this only to start again from the shipped tables. With the GXT given,
each entry gets its English text as a comment.
"""
import os
import pathlib
import struct
import sys

sys.path.insert(0, os.path.dirname(__file__))
import psp_dis

REPO = pathlib.Path(__file__).resolve().parents[2]
OUT = REPO / 'lcs' / 'decomp' / 'game' / 'MenuData.cpp'

SCREENS, NUM_SCREENS, ROWS = 0x08B315B4, 28, 15
TABS, TABS_ALT = 0x08B58F2C, 0x08B59004
LEGENDS, NUM_LEGENDS = 0x08B59ACC, 8

ACTIONS = {
    0: 'MENUACTION_NOTHING', 1: 'MENUACTION_LABEL', 2: 'MENUACTION_LOADGAME_CONFIRM',
    3: 'MENUACTION_CANCEL', 4: 'MENUACTION_CHANGEMENU', 6: 'MENUACTION_INVERTLOOK',
    7: 'MENUACTION_CONTROLCONFIG', 8: 'MENUACTION_CONTROLTYPE', 11: 'MENUACTION_SUBTITLES',
    13: 'MENUACTION_BRIGHTNESS', 14: 'MENUACTION_RADIOVOLUME', 15: 'MENUACTION_SFXVOLUME',
    17: 'MENUACTION_RADIOSTATION', 18: 'MENUACTION_LANG_ENG', 19: 'MENUACTION_LANG_FRE',
    20: 'MENUACTION_LANG_GER', 21: 'MENUACTION_LANG_ITA', 22: 'MENUACTION_LANG_SPA',
    25: 'MENUACTION_NEWGAME_CONFIRM', 34: 'MENUACTION_RADARMODE', 35: 'MENUACTION_HUDMODE',
    39: 'MENUACTION_PLAYERMOVEMENT', 42: 'MENUACTION_RESETSETTINGS_CONFIRM',
    43: 'MENUACTION_CUSTOMTRACKS',
}
ALIGNS = {0: 'MENUALIGN_NONE', 2: 'MENUALIGN_RIGHT', 3: 'MENUALIGN_CENTRE'}
PAGES = ['MENUPAGE_STATS', 'MENUPAGE_GAME', 'MENUPAGE_BRIEF', 'MENUPAGE_CONTROLS', 'MENUPAGE_AUDIO',
         'MENUPAGE_DISPLAY', 'MENUPAGE_LANGUAGE', 'MENUPAGE_MAP', 'MENUPAGE_8',
         'MENUPAGE_NEWGAME_CONFIRM', 'MENUPAGE_LOADGAME_CONFIRM', 'MENUPAGE_SAVE_CHEAT_WARNING',
         'MENUPAGE_SAVE_SLOTS', 'MENUPAGE_RESETSETTINGS_CONFIRM', 'MENUPAGE_MULTIPLAYER',
         'MENUPAGE_MP_15', 'MENUPAGE_MP_16', 'MENUPAGE_MP_WLAN_OFF', 'MENUPAGE_MP_18',
         'MENUPAGE_MP_19', 'MENUPAGE_MP_20', 'MENUPAGE_MP_21', 'MENUPAGE_MP_22',
         'MENUPAGE_MP_HOST_LOST', 'MENUPAGE_MP_POWER_OFF', 'MENUPAGE_MP_NO_HOSTS',
         'MENUPAGE_MP_PLAYERS_LOST', 'MENUPAGE_MP_BAD_TEAM']
LEGEND_NAMES = ['SETUP1, horn on Down: on foot', 'SETUP1, horn on Down: in car',
                'SETUP1, horn on Up: on foot', 'SETUP1, horn on Up: in car',
                'SETUP2, horn on Down: on foot', 'SETUP2, horn on Down: in car',
                'SETUP2, horn on Up: on foot', 'SETUP2, horn on Up: in car']


def load_gxt(path):
    data = open(path, 'rb').read()
    texts = {}
    pos = 0
    while True:
        i = data.find(b'TKEY', pos)
        if i < 0:
            break
        size = struct.unpack_from('<I', data, i + 4)[0]
        j = i + 8 + size
        if data[j:j + 4] != b'TDAT':
            pos = i + 4
            continue
        for k in range(0, size, 12):
            offset = struct.unpack_from('<I', data, i + 8 + k)[0]
            key = data[i + 12 + k:i + 20 + k].split(b'\0')[0].decode('latin1')
            end = j + 8 + offset
            chars = []
            while True:
                c = struct.unpack_from('<H', data, end)[0]
                if c == 0:
                    break
                chars.append(chr(c) if 32 <= c < 127 else ' ')
                end += 2
            texts.setdefault(key, ''.join(chars))
        pos = j + 8 + struct.unpack_from('<I', data, j + 4)[0]
    return texts


def main():
    img = psp_dis.Image(sys.argv[1])
    texts = load_gxt(sys.argv[2]) if len(sys.argv) > 2 else {}
    mem, base = img.mem, psp_dis.BASE

    def key_at(address):
        return mem[address - base:address - base + 8].split(b'\0')[0].decode('ascii')

    def note(key):
        text = texts.get(key, '')
        text = ' '.join(text.replace('\\', '/').split())
        if len(text) > 60:
            text = text[:57] + '...'
        return '  // ' + text if text else ''

    def s32(address):
        return struct.unpack_from('<i', mem, address - base)[0]

    out = ['// Menu tables as shipped in ULUS-10041 v1.05. First written by',
           '// tools/decomp/gen_menu_data.py; edit by hand from here on.',
           '#include "MenuData.hpp"', '', '#include <cstring>', '', 'namespace lcs::game {', '',
           'const CMenuScreen aScreens[NUM_MENU_SCREENS] = {']
    for index in range(NUM_SCREENS):
        screen = SCREENS + index * 278
        name = key_at(screen)
        out.append('    // %d %s%s' % (index, PAGES[index], note(name).replace('  // ', ': ')))
        rows = []
        for row in range(ROWS):
            o = screen + 8 + row * 18 - base
            action = struct.unpack_from('<H', mem, o)[0]
            entry = key_at(o + 2 + base)
            slot, target = mem[o + 10], mem[o + 11]
            x, y, align = struct.unpack_from('<hhH', mem, o + 12)
            if action == 0 and not entry and not (slot or target or x or y or align):
                continue
            rows.append((row, '{%s, "%s", %d, %s, %d, %d, %s},%s' % (
                ACTIONS[action], entry, slot, PAGES[target], x, y, ALIGNS[align], note(entry))))
        if rows and [r[0] for r in rows] != list(range(len(rows))):
            sys.exit('screen %d has a gap in its rows' % index)
        if rows:
            out.append('    {"%s", {' % name)
            out += ['        ' + text for _, text in rows]
            out.append('    }},')
        else:
            out.append('    {"%s", {}},' % name)
    out += ['};', '']

    for label, table in (('aMenuTabs', TABS), ('aMenuTabsAlternate', TABS_ALT)):
        out.append('const CMenuTab %s[NUM_MENU_TABS + 1] = {' % label)
        out.append('    // id, name, up, down, left, right')
        address = table
        while True:
            ident = s32(address)
            links = [s32(address + 8 + 4 * i) for i in range(4)]
            if ident == -1:
                out.append('    {-1, nullptr, %d, %d, %d, %d},' % tuple(links))
                break
            name = img.cstr(img.w(address + 4))
            out.append('    {%d, "%s", %d, %d, %d, %d},%s' % ((ident, name) + tuple(links) + (note(name),)))
            address += 24
        out += ['};', '']

    out.append('const CControlLegendEntry aControlLegends[NUM_CONTROL_LEGENDS][MAX_LEGEND_ENTRIES] = {')
    for index in range(NUM_LEGENDS):
        out.append('    // %d  %s' % (index, LEGEND_NAMES[index]))
        out.append('    {')
        address = img.w(LEGENDS + 4 * index)
        while True:
            x, y = s32(address), s32(address + 4)
            name = key_at(address + 8)
            left, unused = s32(address + 16), s32(address + 20)
            out.append('        {%d, %d, "%s", %d, %d},%s' % (x, y, name, left, unused, note(name)))
            if x == -1:
                break
            address += 24
        out.append('    },')
    out += ['};', '']
    out.append(TAIL)
    OUT.write_text('\n'.join(out), newline='\n')
    print('wrote', OUT)


TAIL = r'''namespace {

// Calls visit(guest address, source bytes, size) for every table byte range.
template <typename Visitor>
void ForEachTable(Visitor visit) {
    visit(address::aScreens, aScreens, sizeof(aScreens));

    const struct {
        uint32 address;
        const CMenuTab *tabs;
    } bars[] = {{address::aMenuTabs, aMenuTabs}, {address::aMenuTabsAlternate, aMenuTabsAlternate}};
    for (const auto &bar : bars) {
        for (uint32 i = 0; i <= NUM_MENU_TABS; ++i) {
            // The name pointer at +4 is left alone: it points at the key in the EBOOT.
            const CMenuTab &tab = bar.tabs[i];
            const uint32 entry = bar.address + i * 24u;
            visit(entry, &tab.m_Id, sizeof(int32));
            const int32 links[4] = {tab.m_Up, tab.m_Down, tab.m_Left, tab.m_Right};
            visit(entry + 8u, links, sizeof(links));
        }
    }

    for (uint32 legend = 0; legend < NUM_CONTROL_LEGENDS; ++legend) {
        const uint32 table = guest_ref<uint32>(address::apControlLegends + legend * 4u);
        uint32 count = 0;
        while (aControlLegends[legend][count].m_X != -1) ++count;
        visit(table, aControlLegends[legend], (count + 1u) * sizeof(CControlLegendEntry));
    }
}

}  // namespace

uint32 CompareMenuData() {
    uint32 differences = 0;
    ForEachTable([&](uint32 address, const void *source, std::size_t size) {
        const std::uint8_t *guest = guest_bytes(address, size);
        const std::uint8_t *bytes = static_cast<const std::uint8_t *>(source);
        for (std::size_t i = 0; i < size; ++i)
            if (guest == nullptr || guest[i] != bytes[i]) ++differences;
    });
    return differences;
}

void InstallMenuData() {
    ForEachTable([](uint32 address, const void *source, std::size_t size) {
        if (std::uint8_t *guest = guest_bytes(address, size)) std::memcpy(guest, source, size);
    });
}

}  // namespace lcs::game
'''

if __name__ == '__main__':
    main()
