// Menu tables as shipped in ULUS-10041 v1.05. First written by
// tools/decomp/gen_menu_data.py; edit by hand from here on.
#include "MenuData.hpp"

#include <cstring>

namespace lcs::game {

const CMenuScreen aScreens[NUM_MENU_SCREENS] = {
    // 0 MENUPAGE_STATS: STATS
    {"FEH_STA", {}},
    // 1 MENUPAGE_GAME: GAME
    {"FEH_LOA", {
        {MENUACTION_CHANGEMENU, "FES_LOA", 0, MENUPAGE_SAVE_SLOTS, 240, 60, MENUALIGN_CENTRE},  // LOAD GAME
        {MENUACTION_CHANGEMENU, "FES_NGA", 0, MENUPAGE_NEWGAME_CONFIRM, 240, 80, MENUALIGN_CENTRE},  // NEW GAME
        {MENUACTION_CHANGEMENU, "FES_DGA", 0, MENUPAGE_SAVE_SLOTS, 240, 100, MENUALIGN_CENTRE},  // DELETE SAVE DATA
        {MENUACTION_CHANGEMENU, "FES_RES", 0, MENUPAGE_RESETSETTINGS_CONFIRM, 240, 120, MENUALIGN_CENTRE},  // RESET GAME SETTINGS
    }},
    // 2 MENUPAGE_BRIEF: BRIEF
    {"FEH_BRI", {}},
    // 3 MENUPAGE_CONTROLS: CONTROLS
    // On PC this is CONTROLS > CONTROLLER (from MENUPAGE_PC_CONTROLS); the
    // drawing code puts the control legend under it.
    {"FEH_CON", {
        {MENUACTION_CONTROLCONFIG, "FEC_CCF", 0, MENUPAGE_CONTROLS, 240, 40, MENUALIGN_RIGHT},  // CONFIGURATION:
        {MENUACTION_CONTROLTYPE, "FEC_CDP", 0, MENUPAGE_CONTROLS, 240, 55, MENUALIGN_RIGHT},  // TYPE:
        {MENUACTION_INVERTLOOK, "FEC_ILU", 0, MENUPAGE_CONTROLS, 240, 70, MENUALIGN_RIGHT},  // INVERT LOOK:
        {MENUACTION_PLAYERMOVEMENT, "FEC_SWP", 0, MENUPAGE_CONTROLS, 240, 85, MENUALIGN_RIGHT},  // PLAYER MOVEMENT:
    }},
    // 4 MENUPAGE_AUDIO: AUDIO
    {"FEH_AUD", {
        {MENUACTION_RADIOVOLUME, "FEA_MUS", 0, MENUPAGE_AUDIO, 240, 40, MENUALIGN_RIGHT},  // RADIO VOLUME:
        {MENUACTION_SFXVOLUME, "FEA_SFX", 0, MENUPAGE_AUDIO, 240, 60, MENUALIGN_RIGHT},  // SFX VOLUME:
        {MENUACTION_CUSTOMTRACKS, "FEA_MP3", 0, MENUPAGE_AUDIO, 240, 80, MENUALIGN_RIGHT},  // CUSTOM TRACKS:
        {MENUACTION_RADIOSTATION, "FEA_RSS", 0, MENUPAGE_AUDIO, 240, 100, MENUALIGN_RIGHT},  // RADIO STATION:
    }},
    // 5 MENUPAGE_DISPLAY: DISPLAY
    {"FEH_DIS", {
        {MENUACTION_BRIGHTNESS, "FED_BRI", 0, MENUPAGE_DISPLAY, 240, 60, MENUALIGN_RIGHT},  // BRIGHTNESS:
        {MENUACTION_SUBTITLES, "FED_SUB", 0, MENUPAGE_DISPLAY, 240, 80, MENUALIGN_RIGHT},  // SUBTITLES:
        {MENUACTION_RADARMODE, "FED_RDR", 0, MENUPAGE_DISPLAY, 240, 100, MENUALIGN_RIGHT},  // RADAR MODE:
        {MENUACTION_HUDMODE, "FED_HUD", 0, MENUPAGE_DISPLAY, 240, 120, MENUALIGN_RIGHT},  // HUD MODE:
    }},
    // 6 MENUPAGE_LANGUAGE: LANGUAGE
    {"FEH_LAN", {
        {MENUACTION_LANG_ENG, "FEL_ENG", 0, MENUPAGE_LANGUAGE, 240, 60, MENUALIGN_CENTRE},  // ENGLISH
        {MENUACTION_LANG_FRE, "FEL_FRE", 0, MENUPAGE_LANGUAGE, 240, 80, MENUALIGN_CENTRE},  // FRENCH
        {MENUACTION_LANG_GER, "FEL_GER", 0, MENUPAGE_LANGUAGE, 240, 100, MENUALIGN_CENTRE},  // GERMAN
        {MENUACTION_LANG_ITA, "FEL_ITA", 0, MENUPAGE_LANGUAGE, 240, 120, MENUALIGN_CENTRE},  // ITALIAN
        {MENUACTION_LANG_SPA, "FEL_SPA", 0, MENUPAGE_LANGUAGE, 240, 140, MENUALIGN_CENTRE},  // SPANISH
    }},
    // 7 MENUPAGE_MAP: MAP
    {"FEH_MAP", {}},
    // 8 MENUPAGE_8
    {"", {}},
    // 9 MENUPAGE_NEWGAME_CONFIRM: NEW GAME
    {"FES_NGA", {
        {MENUACTION_LABEL, "FESZ_QR", 0, MENUPAGE_STATS, 0, 0, MENUALIGN_NONE},  // Are you sure you want to start a new game? All progress s...
        {MENUACTION_CANCEL, "FEU_NO", 0, MENUPAGE_GAME, 240, 170, MENUALIGN_CENTRE},  // NO
        {MENUACTION_NEWGAME_CONFIRM, "FEU_YES", 0, MENUPAGE_NEWGAME_CONFIRM, 240, 190, MENUALIGN_CENTRE},  // YES
    }},
    // 10 MENUPAGE_LOADGAME_CONFIRM: Load Game
    {"FES_LGA", {
        {MENUACTION_LABEL, "FESZ_QL", 0, MENUPAGE_STATS, 0, 0, MENUALIGN_NONE},  // All unsaved progress in your current game will be lost. P...
        {MENUACTION_CANCEL, "FEU_NO", 0, MENUPAGE_GAME, 240, 170, MENUALIGN_CENTRE},  // NO
        {MENUACTION_LOADGAME_CONFIRM, "FEU_YES", 0, MENUPAGE_GAME, 240, 190, MENUALIGN_CENTRE},  // YES
    }},
    // 11 MENUPAGE_SAVE_CHEAT_WARNING: Save Game
    {"FET_SAV", {
        {MENUACTION_LABEL, "FET_WRN", 0, MENUPAGE_STATS, 0, 0, MENUALIGN_NONE},  // Warning! One or more cheats have been activated. This may...
        {MENUACTION_CHANGEMENU, "FEM_OK", 0, MENUPAGE_SAVE_SLOTS, 240, 190, MENUALIGN_CENTRE},  // OK
    }},
    // 12 MENUPAGE_SAVE_SLOTS
    {"", {}},
    // 13 MENUPAGE_RESETSETTINGS_CONFIRM: RESET GAME SETTINGS
    {"FES_RES", {
        {MENUACTION_LABEL, "FESZ_QT", 0, MENUPAGE_STATS, 0, 0, MENUALIGN_NONE},  // Are you sure you want to reset all settings for controls,...
        {MENUACTION_CANCEL, "FEU_NO", 0, MENUPAGE_GAME, 240, 170, MENUALIGN_CENTRE},  // NO
        {MENUACTION_RESETSETTINGS_CONFIRM, "FEU_YES", 0, MENUPAGE_GAME, 240, 190, MENUALIGN_CENTRE},  // YES
    }},
    // 14 MENUPAGE_MULTIPLAYER: MULTIPLAYER
    {"FEH_MP", {}},
    // 15 MENUPAGE_PC_GRAPHICS: GRAPHICS (PC; was an empty MULTIPLAYER screen)
    {"ZZH_GFX", {
        {MENUACTION_PC_GRAPHICS, "ZZG_00", 0, MENUPAGE_PC_GRAPHICS, 240, 36, MENUALIGN_CENTRE},  // RESOLUTION
        {MENUACTION_PC_GRAPHICS, "ZZG_01", 0, MENUPAGE_PC_GRAPHICS, 240, 51, MENUALIGN_CENTRE},  // FULLSCREEN
        {MENUACTION_PC_GRAPHICS, "ZZG_02", 0, MENUPAGE_PC_GRAPHICS, 240, 66, MENUALIGN_CENTRE},  // VSYNC
        {MENUACTION_PC_GRAPHICS, "ZZG_03", 0, MENUPAGE_PC_GRAPHICS, 240, 81, MENUALIGN_CENTRE},  // FRAME RATE
        {MENUACTION_PC_GRAPHICS, "ZZG_04", 0, MENUPAGE_PC_GRAPHICS, 240, 96, MENUALIGN_CENTRE},  // VIEW DISTANCE
        {MENUACTION_PC_GRAPHICS, "ZZG_05", 0, MENUPAGE_PC_GRAPHICS, 240, 111, MENUALIGN_CENTRE},  // ANISOTROPIC FILTERING
        {MENUACTION_PC_GRAPHICS, "ZZG_06", 0, MENUPAGE_PC_GRAPHICS, 240, 126, MENUALIGN_CENTRE},  // MSAA
        {MENUACTION_PC_GRAPHICS, "ZZG_07", 0, MENUPAGE_PC_GRAPHICS, 240, 141, MENUALIGN_CENTRE},  // TEXTURE LOD BIAS
        {MENUACTION_PC_GRAPHICS, "ZZG_08", 0, MENUPAGE_PC_GRAPHICS, 240, 156, MENUALIGN_CENTRE},  // HUD SIZE
        {MENUACTION_PC_GRAPHICS, "ZZG_09", 0, MENUPAGE_PC_GRAPHICS, 240, 171, MENUALIGN_CENTRE},  // FPS COUNTER
    }},
    // 16 MENUPAGE_PC_KEYBOARD: KEYBOARD AND MOUSE (PC; was an empty MULTIPLAYER screen)
    {"ZZH_KBM", {
        {MENUACTION_PC_KEYBINDING, "ZZK_00", 0, MENUPAGE_PC_KEYBOARD, 240, 34, MENUALIGN_CENTRE},  // action 1 (or 10)
        {MENUACTION_PC_KEYBINDING, "ZZK_01", 0, MENUPAGE_PC_KEYBOARD, 240, 48, MENUALIGN_CENTRE},
        {MENUACTION_PC_KEYBINDING, "ZZK_02", 0, MENUPAGE_PC_KEYBOARD, 240, 62, MENUALIGN_CENTRE},
        {MENUACTION_PC_KEYBINDING, "ZZK_03", 0, MENUPAGE_PC_KEYBOARD, 240, 76, MENUALIGN_CENTRE},
        {MENUACTION_PC_KEYBINDING, "ZZK_04", 0, MENUPAGE_PC_KEYBOARD, 240, 90, MENUALIGN_CENTRE},
        {MENUACTION_PC_KEYBINDING, "ZZK_05", 0, MENUPAGE_PC_KEYBOARD, 240, 104, MENUALIGN_CENTRE},
        {MENUACTION_PC_KEYBINDING, "ZZK_06", 0, MENUPAGE_PC_KEYBOARD, 240, 118, MENUALIGN_CENTRE},
        {MENUACTION_PC_KEYBINDING, "ZZK_07", 0, MENUPAGE_PC_KEYBOARD, 240, 132, MENUALIGN_CENTRE},
        {MENUACTION_PC_KEYBINDING, "ZZK_08", 0, MENUPAGE_PC_KEYBOARD, 240, 146, MENUALIGN_CENTRE},  // action 9 (or 18)
        {MENUACTION_PC_KEYPAGE, "ZZK_09", 0, MENUPAGE_PC_KEYBOARD, 240, 163, MENUALIGN_CENTRE},  // MORE ACTIONS - PAGE n OF 2
        {MENUACTION_PC_MOUSESENS, "ZZK_10", 0, MENUPAGE_PC_KEYBOARD, 240, 177, MENUALIGN_CENTRE},  // MOUSE SENSITIVITY
        {MENUACTION_PC_INVERTMOUSE, "ZZK_11", 0, MENUPAGE_PC_KEYBOARD, 240, 191, MENUALIGN_CENTRE},  // INVERT MOUSE Y
        {MENUACTION_PC_RESETKEYS, "ZZK_12", 0, MENUPAGE_PC_KEYBOARD, 240, 205, MENUALIGN_CENTRE},  // RESET KEYS TO DEFAULTS
    }},
    // 17 MENUPAGE_MP_WLAN_OFF: MULTIPLAYER
    {"FEH_MP", {
        {MENUACTION_LABEL, "NE_WIFI", 0, MENUPAGE_STATS, 0, 0, MENUALIGN_NONE},  // A network error occurred. The WLAN switch is OFF. Please ...
        {MENUACTION_CHANGEMENU, "FEM_OK", 0, MENUPAGE_MULTIPLAYER, 240, 180, MENUALIGN_CENTRE},  // OK
    }},
    // 18 MENUPAGE_PC_CONTROLS: CONTROLS (PC; was an empty MULTIPLAYER screen)
    {"FEH_CON", {
        {MENUACTION_CHANGEMENU, "ZZC_KBM", 0, MENUPAGE_PC_KEYBOARD, 240, 70, MENUALIGN_CENTRE},  // KEYBOARD AND MOUSE
        {MENUACTION_CHANGEMENU, "ZZC_PAD", 0, MENUPAGE_CONTROLS, 240, 95, MENUALIGN_CENTRE},  // CONTROLLER
    }},
    // 19 MENUPAGE_MP_19: MULTIPLAYER
    {"FEH_MP", {}},
    // 20 MENUPAGE_MP_20: MULTIPLAYER
    {"FEH_MP", {}},
    // 21 MENUPAGE_MP_21: MULTIPLAYER
    {"FEH_MP", {}},
    // 22 MENUPAGE_MP_22: MULTIPLAYER
    {"FEH_MP", {}},
    // 23 MENUPAGE_MP_HOST_LOST: MULTIPLAYER
    {"FEH_MP", {
        {MENUACTION_LABEL, "SVRLOST", 0, MENUPAGE_STATS, 0, 0, MENUALIGN_NONE},  // Communication with the host machine has been lost.
        {MENUACTION_CHANGEMENU, "FEM_OK", 0, MENUPAGE_MULTIPLAYER, 240, 180, MENUALIGN_CENTRE},  // OK
    }},
    // 24 MENUPAGE_MP_POWER_OFF: MULTIPLAYER
    {"FEH_MP", {
        {MENUACTION_LABEL, "NE_POW", 0, MENUPAGE_STATS, 0, 0, MENUALIGN_NONE},  // A network error occurred. The power/hold switch was turne...
        {MENUACTION_CHANGEMENU, "FEM_OK", 0, MENUPAGE_MULTIPLAYER, 240, 180, MENUALIGN_CENTRE},  // OK
    }},
    // 25 MENUPAGE_MP_NO_HOSTS: MULTIPLAYER
    {"FEH_MP", {
        {MENUACTION_LABEL, "NOSVRS", 0, MENUPAGE_STATS, 0, 0, MENUALIGN_NONE},  // A host machine could not be found.
        {MENUACTION_CHANGEMENU, "FEM_OK", 0, MENUPAGE_MULTIPLAYER, 240, 180, MENUALIGN_CENTRE},  // OK
    }},
    // 26 MENUPAGE_MP_PLAYERS_LOST: MULTIPLAYER
    {"FEH_MP", {
        {MENUACTION_LABEL, "CLILOST", 0, MENUPAGE_STATS, 0, 0, MENUALIGN_NONE},  // Communication with other players has been lost.
        {MENUACTION_CHANGEMENU, "FEM_OK", 0, MENUPAGE_MULTIPLAYER, 240, 180, MENUALIGN_CENTRE},  // OK
    }},
    // 27 MENUPAGE_MP_BAD_TEAM: MULTIPLAYER
    {"FEH_MP", {
        {MENUACTION_LABEL, "BADTEAM", 0, MENUPAGE_STATS, 0, 0, MENUALIGN_NONE},  // One of the gangs had no players left.
        {MENUACTION_CHANGEMENU, "FEM_OK", 0, MENUPAGE_MULTIPLAYER, 240, 180, MENUALIGN_CENTRE},  // OK
    }},
};

const CMenuTab aMenuTabs[NUM_MENU_TABS + 1] = {
    // id, name, up, down, left, right
    {1, "FEH_MAP", -1, 6, 5, 2},  // MAP
    {2, "FEH_BRI", -1, 7, 1, 3},  // BRIEF
    {3, "FEH_LOA", -1, 8, 2, 4},  // GAME
    {4, "FEH_STA", -1, 8, 3, 5},  // STATS
    {5, "FEH_CON", -1, 8, 4, 1},  // CONTROLS
    {6, "FEH_AUD", 1, -1, 8, 7},  // AUDIO
    {7, "FEH_DIS", 2, -1, 6, 8},  // DISPLAY
    {8, "FEH_MP", 4, -1, 7, 6},  // MULTIPLAYER
    {-1, nullptr, -1, -1, -1, -1},
};

const CMenuTab aMenuTabsAlternate[NUM_MENU_TABS + 1] = {
    // id, name, up, down, left, right
    {1, "FEH_MAP", -1, 5, 4, 2},  // MAP
    {2, "FEH_BRI", -1, 6, 1, 3},  // BRIEF
    {3, "FEH_LOA", -1, 7, 2, 4},  // GAME
    {4, "FEH_STA", -1, 8, 3, 1},  // STATS
    {5, "FEH_AUD", 1, -1, 8, 6},  // AUDIO
    {6, "FEH_DIS", 2, -1, 5, 7},  // DISPLAY
    {7, "FEH_MP", 3, -1, 6, 8},  // MULTIPLAYER
    {8, "FEH_CON", 4, -1, 7, 5},  // CONTROLS
    {-1, nullptr, -1, -1, -1, -1},
};

const CControlLegendEntry aControlLegends[NUM_CONTROL_LEGENDS][MAX_LEGEND_ENTRIES] = {
    // 0  SETUP1, horn on Down: on foot
    {
        {131, 176, "FEC_MOV", 1, -1},  // Movement
        {346, 127, "FEC_ENV", 0, -1},  // Enter vehicle
        {346, 141, "FEC_ATT", 0, -1},  // Attack/Fire weapon
        {346, 154, "FEC_RUN", 0, -1},  // Run
        {346, 167, "FEC_JUM", 0, -1},  // Jump
        {131, 108, "FEC_LFA", 1, -1},  // Look/Fine Aim
        {346, 108, "FEC_TAR", 0, -1},  // Target
        {131, 141, "FEC_CWT", 1, -1},  // Cycle Weapons/Targets
        {131, 123, "FEC_SMT", 1, -1},  // Special mission
        {131, 191, "FEC_CAM", 1, -1},  // Camera modes
        {346, 191, "FEC_PAU", 0, -1},  // Pause
        {131, 162, "FEC_FRA", 1, -1},  // Free Aim
        {-1, -1, "", 1, 0},
    },
    // 1  SETUP1, horn on Down: in car
    {
        {131, 168, "FEC_VES", 1, -1},  // Vehicle control
        {346, 127, "FEC_EXV", 0, -1},  // Exit vehicle
        {346, 141, "FEC_ATT", 0, -1},  // Attack/Fire weapon
        {346, 154, "FEC_ACC", 0, -1},  // Accelerate
        {346, 167, "FEC_BRA", 0, -1},  // Brake or Reverse
        {131, 108, "FEC_LL", 1, -1},  // Look left
        {346, 108, "FEC_LR", 0, -1},  // Look right
        {131, 154, "FEC_HOR", 1, -1},  // Horn
        {131, 131, "FEC_SMT", 1, -1},  // Special mission
        {131, 143, "FEC_RSC", 1, -1},  // Radio station cycle
        {131, 191, "FEC_CAM", 1, -1},  // Camera modes
        {346, 191, "FEC_PAU", 0, -1},  // Pause
        {346, 179, "FEC_HBB", 0, -1},  // Hand brake~h~ ~k~ ~VEACC~ ~w~and~h~ ~k~ ~VEBRK~
        {-1, -1, "", 1, -1},
    },
    // 2  SETUP1, horn on Up: on foot
    {
        {131, 142, "FEC_MOV", 1, -1},  // Movement
        {346, 127, "FEC_ENV", 0, -1},  // Enter vehicle
        {346, 141, "FEC_ATT", 0, -1},  // Attack/Fire weapon
        {346, 154, "FEC_RUN", 0, -1},  // Run
        {346, 167, "FEC_JUM", 0, -1},  // Jump
        {131, 108, "FEC_LFA", 1, -1},  // Look/Fine Aim
        {346, 108, "FEC_TAR", 0, -1},  // Target
        {131, 154, "FEC_FRA", 1, -1},  // Free Aim
        {131, 165, "FEC_CW", 1, -1},  // Cycle Weapons
        {131, 191, "FEC_CAM", 1, -1},  // Camera modes
        {346, 191, "FEC_PAU", 0, -1},  // Pause
        {131, 178, "FEC_SMT", 1, -1},  // Special mission
        {-1, -1, "", 1, 0},
    },
    // 3  SETUP1, horn on Up: in car
    {
        {131, 142, "FEC_VES", 1, -1},  // Vehicle control
        {346, 127, "FEC_EXV", 0, -1},  // Exit vehicle
        {346, 141, "FEC_ATT", 0, -1},  // Attack/Fire weapon
        {346, 154, "FEC_ACC", 0, -1},  // Accelerate
        {346, 167, "FEC_BRA", 0, -1},  // Brake or Reverse
        {131, 108, "FEC_LL", 1, -1},  // Look left
        {346, 108, "FEC_LR", 0, -1},  // Look right
        {131, 178, "FEC_SMT", 1, -1},  // Special mission
        {131, 154, "FEC_HOR", 1, -1},  // Horn
        {131, 165, "FEC_RSC", 1, -1},  // Radio station cycle
        {131, 191, "FEC_CAM", 1, -1},  // Camera modes
        {346, 191, "FEC_PAU", 0, -1},  // Pause
        {346, 179, "FEC_HBB", 0, -1},  // Hand brake~h~ ~k~ ~VEACC~ ~w~and~h~ ~k~ ~VEBRK~
        {-1, -1, "", 1, -1},
    },
    // 4  SETUP2, horn on Down: on foot
    {
        {131, 176, "FEC_MOV", 1, -1},  // Movement
        {346, 127, "FEC_ENV", 0, -1},  // Enter vehicle
        {346, 141, "FEC_ATT", 0, -1},  // Attack/Fire weapon
        {346, 154, "FEC_RUN", 0, -1},  // Run
        {346, 167, "FEC_JUM", 0, -1},  // Jump
        {131, 108, "FEC_LFA", 1, -1},  // Look/Fine Aim
        {346, 108, "FEC_TAR", 0, -1},  // Target
        {131, 141, "FEC_CWT", 1, -1},  // Cycle Weapons/Targets
        {131, 123, "FEC_SMT", 1, -1},  // Special mission
        {131, 191, "FEC_CAM", 1, -1},  // Camera modes
        {346, 191, "FEC_PAU", 0, -1},  // Pause
        {131, 162, "FEC_FRA", 1, -1},  // Free Aim
        {-1, -1, "", 1, 0},
    },
    // 5  SETUP2, horn on Down: in car
    {
        {131, 168, "FEC_VES", 1, -1},  // Vehicle control
        {346, 127, "FEC_EXV", 0, -1},  // Exit vehicle
        {346, 141, "FEC_ATT", 0, -1},  // Attack/Fire weapon
        {346, 154, "FEC_ACC", 0, -1},  // Accelerate
        {346, 167, "FEC_BRA", 0, -1},  // Brake or Reverse
        {131, 108, "FEC_LOF", 1, -1},  // Look
        {346, 108, "FEC_HAB", 0, -1},  // Hand brake
        {131, 154, "FEC_HOR", 1, -1},  // Horn
        {131, 131, "FEC_SMT", 1, -1},  // Special mission
        {131, 143, "FEC_RSC", 1, -1},  // Radio station cycle
        {131, 191, "FEC_CAM", 1, -1},  // Camera modes
        {346, 191, "FEC_PAU", 0, -1},  // Pause
        {-1, -1, "", 1, -1},
    },
    // 6  SETUP2, horn on Up: on foot
    {
        {131, 142, "FEC_MOV", 1, -1},  // Movement
        {346, 127, "FEC_ENV", 0, -1},  // Enter vehicle
        {346, 141, "FEC_ATT", 0, -1},  // Attack/Fire weapon
        {346, 154, "FEC_RUN", 0, -1},  // Run
        {346, 167, "FEC_JUM", 0, -1},  // Jump
        {131, 108, "FEC_LFA", 1, -1},  // Look/Fine Aim
        {346, 108, "FEC_TAR", 0, -1},  // Target
        {131, 154, "FEC_FRA", 1, -1},  // Free Aim
        {131, 165, "FEC_CW", 1, -1},  // Cycle Weapons
        {131, 191, "FEC_CAM", 1, -1},  // Camera modes
        {346, 191, "FEC_PAU", 0, -1},  // Pause
        {131, 178, "FEC_SMT", 1, -1},  // Special mission
        {-1, -1, "", 1, 0},
    },
    // 7  SETUP2, horn on Up: in car
    {
        {131, 142, "FEC_VES", 1, -1},  // Vehicle control
        {346, 127, "FEC_EXV", 0, -1},  // Exit vehicle
        {346, 141, "FEC_ATT", 0, -1},  // Attack/Fire weapon
        {346, 154, "FEC_ACC", 0, -1},  // Accelerate
        {346, 167, "FEC_BRA", 0, -1},  // Brake or Reverse
        {131, 108, "FEC_LOF", 1, -1},  // Look
        {346, 108, "FEC_HAB", 0, -1},  // Hand brake
        {131, 178, "FEC_SMT", 1, -1},  // Special mission
        {131, 154, "FEC_HOR", 1, -1},  // Horn
        {131, 165, "FEC_RSC", 1, -1},  // Radio station cycle
        {131, 191, "FEC_CAM", 1, -1},  // Camera modes
        {346, 191, "FEC_PAU", 0, -1},  // Pause
        {-1, -1, "", 1, -1},
    },
};

namespace {

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
