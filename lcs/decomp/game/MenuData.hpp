// The front end's data: tab bar, menu screens and the control legends
// (ULUS-10041 v1.05). The game's menu code is table driven; these are those
// tables as source. InstallMenuData() writes them over the copies in guest
// memory, so an edit here changes the menus the game shows.
#pragma once

#include "../guest.hpp"

namespace lcs::game {

using namespace lcs::decomp;

enum eMenuAction : uint16 {
    MENUACTION_NOTHING = 0,
    MENUACTION_LABEL = 1,                   // text only, not selectable
    MENUACTION_LOADGAME_CONFIRM = 2,        // "YES" on the load warning
    MENUACTION_CANCEL = 3,                  // "NO": back to m_TargetMenu
    MENUACTION_CHANGEMENU = 4,              // go to m_TargetMenu
    MENUACTION_VIBRATION = 5,               // on/off; not on any screen as shipped
    MENUACTION_INVERTLOOK = 6,              // INVERT LOOK:
    MENUACTION_CONTROLCONFIG = 7,           // CONFIGURATION: SETUP1 / SETUP2
    MENUACTION_CONTROLTYPE = 8,             // TYPE: ON FOOT / IN CAR (which legend is shown)
    MENUACTION_SUBTITLES = 11,
    MENUACTION_12 = 12,                     // on/off for byte 0x08B59B2E
    MENUACTION_BRIGHTNESS = 13,
    MENUACTION_RADIOVOLUME = 14,
    MENUACTION_SFXVOLUME = 15,
    MENUACTION_16 = 16,                     // Cross does nothing
    MENUACTION_RADIOSTATION = 17,
    MENUACTION_LANG_ENG = 18,
    MENUACTION_LANG_FRE = 19,
    MENUACTION_LANG_GER = 20,
    MENUACTION_LANG_ITA = 21,
    MENUACTION_LANG_SPA = 22,
    MENUACTION_24 = 24,                     // ends the rows up/down wraps over, like MENUACTION_NOTHING
    MENUACTION_NEWGAME_CONFIRM = 25,        // "YES" on the new game warning
    MENUACTION_26 = 26,                     // the input handler returns 1 to its caller
    MENUACTION_REQUEST_CLOSE = 27,          // sets bCloseMenuRequested
    MENUACTION_28 = 28,                     // like an unknown action, with the "highlight" sound
    MENUACTION_29 = 29,                     // refused with the "denied" sound while field_14 is set
    MENUACTION_30 = 30,                     // same
    MENUACTION_GOTO_AUDIO = 31,             // go to the AUDIO screen and start the radio preview
    MENUACTION_33 = 33,                     // on/off for byte 0x08B59B2D, flipped by Cross
    MENUACTION_RADARMODE = 34,              // MAP & BLIPS / BLIPS ONLY / off
    MENUACTION_HUDMODE = 35,
    MENUACTION_36 = 36,                     // see CMenuManager::RunAction36
    MENUACTION_BACK_TO_TABS = 38,           // leave the screen for the tab bar
    MENUACTION_PLAYERMOVEMENT = 39,         // analog stick / directional buttons
    MENUACTION_RESETSETTINGS_CONFIRM = 42,  // "YES" on the reset settings warning
    MENUACTION_CUSTOMTRACKS = 43,

    // PC rows (host/lcs_menu_pages.hpp). The drawing code has no value for
    // these numbers, so it prints the label alone; the label carries the value.
    MENUACTION_PC_GRAPHICS = 50,        // GRAPHICS option on the row's index
    MENUACTION_PC_KEYBINDING = 51,      // Cross waits for the key to bind
    MENUACTION_PC_KEYPAGE = 52,         // the other half of the actions
    MENUACTION_PC_MOUSESENS = 53,
    MENUACTION_PC_INVERTMOUSE = 54,
    MENUACTION_PC_RESETKEYS = 55,
};

enum eMenuAlign : uint16 {
    MENUALIGN_NONE = 0,
    MENUALIGN_RIGHT = 2,   // option label; its value is drawn to the right
    MENUALIGN_CENTRE = 3,
};

enum eMenuScreen : uint8 {
    MENUPAGE_STATS = 0,
    MENUPAGE_GAME = 1,
    MENUPAGE_BRIEF = 2,
    MENUPAGE_CONTROLS = 3,
    MENUPAGE_AUDIO = 4,
    MENUPAGE_DISPLAY = 5,
    MENUPAGE_LANGUAGE = 6,
    MENUPAGE_MAP = 7,
    MENUPAGE_8 = 8,
    MENUPAGE_NEWGAME_CONFIRM = 9,
    MENUPAGE_LOADGAME_CONFIRM = 10,
    MENUPAGE_SAVE_CHEAT_WARNING = 11,
    MENUPAGE_SAVE_SLOTS = 12,
    MENUPAGE_RESETSETTINGS_CONFIRM = 13,
    MENUPAGE_MULTIPLAYER = 14,
    // 15 and 16 were empty multiplayer screens. Multiplayer cannot start on
    // PC, so they hold the PC pages; the MULTIPLAYER tab opens GRAPHICS.
    MENUPAGE_PC_GRAPHICS = 15,
    MENUPAGE_PC_KEYBOARD = 16,
    MENUPAGE_MP_WLAN_OFF = 17,
    MENUPAGE_PC_CONTROLS = 18,  // was empty; the CONTROLS tab opens it: KEYBOARD AND MOUSE / CONTROLLER
    MENUPAGE_MP_19 = 19,
    MENUPAGE_MP_20 = 20,
    MENUPAGE_MP_21 = 21,
    MENUPAGE_MP_22 = 22,
    MENUPAGE_MP_HOST_LOST = 23,
    MENUPAGE_MP_POWER_OFF = 24,
    MENUPAGE_MP_NO_HOSTS = 25,
    MENUPAGE_MP_PLAYERS_LOST = 26,
    MENUPAGE_MP_BAD_TEAM = 27,
    NUM_MENU_SCREENS = 28,
};

enum { NUM_MENUROWS = 15 };

struct CMenuEntry {
    uint16 m_Action;       // eMenuAction
    char m_EntryName[8];   // GXT key
    uint8 m_SaveSlot;
    uint8 m_TargetMenu;    // eMenuScreen
    int16 m_X;
    int16 m_Y;
    uint16 m_Align;        // eMenuAlign
};
static_assert(sizeof(CMenuEntry) == 18);

struct CMenuScreen {
    char m_ScreenName[8];  // GXT key of the title
    CMenuEntry m_aEntries[NUM_MENUROWS];
};
static_assert(sizeof(CMenuScreen) == 278);

// One tab of the bar across the pause menu. The four links say which tab the
// d-pad moves to; -1 leaves the bar in that direction.
struct CMenuTab {
    int32 m_Id;            // 1-based, -1 ends the table
    const char *m_Name;    // GXT key
    int32 m_Up;
    int32 m_Down;
    int32 m_Left;
    int32 m_Right;
};

enum { NUM_MENU_TABS = 8 };

// A line of the control legend drawn on the CONTROLS screen.
struct CControlLegendEntry {
    int32 m_X;
    int32 m_Y;
    char m_Name[8];        // GXT key
    int32 m_bLeftColumn;   // 1: text sits left of the PSP picture, 0: right of it
    int32 m_Unused;
};
static_assert(sizeof(CControlLegendEntry) == 24);

enum {
    NUM_CONTROL_SETUPS = 4,       // CPad::Mode
    NUM_CONTROL_LEGENDS = 8,      // [CPad::Mode * 2 + (0 on foot, 1 in car)]
    MAX_LEGEND_ENTRIES = 14,      // including the terminator
};

extern const CMenuScreen aScreens[NUM_MENU_SCREENS];
// Tab bar as shipped, and the variant the game switches to (CONTROLS moved to the second row).
extern const CMenuTab aMenuTabs[NUM_MENU_TABS + 1];
extern const CMenuTab aMenuTabsAlternate[NUM_MENU_TABS + 1];
extern const CControlLegendEntry aControlLegends[NUM_CONTROL_LEGENDS][MAX_LEGEND_ENTRIES];

namespace address {
inline constexpr uint32 aScreens = 0x08B315B4u;
inline constexpr uint32 aMenuTabs = 0x08B58F2Cu;
inline constexpr uint32 aMenuTabsAlternate = 0x08B59004u;
inline constexpr uint32 apControlLegends = 0x08B59ACCu;  // CControlLegendEntry *[8]
}  // namespace address

// Number of bytes where the tables above differ from what the EBOOT loaded.
[[nodiscard]] uint32 CompareMenuData();
// Writes the tables above into guest memory.
void InstallMenuData();

}  // namespace lcs::game
