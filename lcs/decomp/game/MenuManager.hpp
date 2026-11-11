// CMenuManager (FrontEndMenuManager at 0x08B8ED20): the pause menu's state.
//
// Only the members the decompiled functions touch are named. The layout
// below is what the input handler at 0x08ADCBEC and its helpers read and
// write; the rest of the object is padding until the code that uses it is
// decompiled.
#pragma once

#include "../guest.hpp"
#include "MenuData.hpp"

namespace lcs::game {

using namespace lcs::decomp;

// Ids passed to the front end sound call (0x088649FC).
enum eFrontendSound : uint32 {
    SOUND_FRONTEND_SLIDER = 0xA9,     // a value changed while left/right is held
    SOUND_FRONTEND_SELECT = 0xC3,
    SOUND_FRONTEND_HIGHLIGHT = 0xC4,  // moved to another tab or row
    SOUND_FRONTEND_BACK = 0xC5,
    SOUND_FRONTEND_DENIED = 0xC6,
    SOUND_FRONTEND_SFX_TEST = 0xC7,   // played when the SFX volume slider is released
};

class CMenuManager {
public:
    int32 m_nCurrTab;            // 0x000  CMenuTab::m_Id of the highlighted tab
    uint8 pad_004[0x04];
    int32 field_08;              // 0x008  first save slot row on the GAME screen
    int32 field_0C;              // 0x00C  save slot sub-mode on the GAME screen (0: off)
    uint8 pad_010[0x04];
    int32 field_14;              // 0x014
    int32 field_18;              // 0x018  0xFF while no transition is running
    bool8 field_1C;              // 0x01C
    uint8 pad_01D[0x10F];
    int32 field_12C;             // 0x12C
    uint8 pad_130[0x01];
    bool8 m_bMenuActive;         // 0x131
    bool8 field_132;             // 0x132
    uint8 pad_133[0x04];
    bool8 field_137;             // 0x137
    bool8 field_138;             // 0x138
    uint8 pad_139[0x08];
    bool8 m_bInputEnabled;       // 0x141  set once every button has been released
    uint8 pad_142[0x342];
    bool8 m_bWaitLeftRightRelease;  // 0x484  swallow left/right until neither is pressed
    uint8 pad_485[0xCB];
    int32 field_550;             // 0x550
    uint8 pad_554[0x10];
    int32 m_nCurrScreen;         // 0x564  eMenuScreen
    int32 m_nCurrOption;         // 0x568  row in aScreens[m_nCurrScreen]
    bool8 m_bEditingOption;      // 0x56C
    uint8 pad_56D[0x07];
    int32 m_nPrevScreen;         // 0x574
    uint8 pad_578[0x08];
    int32 m_nScreenChangeTime;   // 0x580  pause-mode timer when the screen last changed
    int32 field_584;             // 0x584
    int32 field_588;             // 0x588
    int32 field_58C;             // 0x58C
    bool8 m_bInsideScreen;       // 0x590  0: on the tab bar, 1: inside the screen

    // A d-pad press or a flick of the nub, once input is enabled.
    bool NavUpJustDown();        // 0x08AD9664
    bool NavDownJustDown();      // 0x08AD96C8
    bool NavLeftJustDown();      // 0x08AD972C
    bool NavRightJustDown();     // 0x08AD9814
    int32 ClampToField584(int32 value);  // 0x08AD98FC
    void ResetField588();        // 0x08ADAA94

    void SwitchToScreen(int32 screen);              // 0x08AD9CFC
    void OnScreenChanged();                         // 0x08ADA00C
    void ToggleOption(Context &ctx);                // 0x08ADA094
    void AdjustSlider(Context &ctx, int32 delta);   // 0x08ADA358
    static void RequestCloseMenu();                 // 0x08ADA65C

    // The pause menu's input handler. Returns 1 when the highlighted entry
    // asks the caller to act (MENUACTION_26), otherwise 0.
    int32 ProcessUserInput(Context &ctx);           // 0x08ADCBEC

    // True when this frame's input could take ProcessUserInput() or
    // ToggleOption() into guest code that blocks the PSP thread. Reads only;
    // the thunk then leaves the call to the recompiled original.
    [[nodiscard]] bool InputNeedsOriginal() const;
    [[nodiscard]] bool ToggleNeedsOriginal() const;

private:
    [[nodiscard]] const CMenuEntry &Entry(int32 screen, int32 row) const;
    [[nodiscard]] const CMenuEntry &CurrentEntry() const { return Entry(m_nCurrScreen, m_nCurrOption); }
    [[nodiscard]] int32 CurrentAction() const { return static_cast<int16>(CurrentEntry().m_Action); }
    [[nodiscard]] int32 FirstSelectableRow() const;
    [[nodiscard]] bool EntryActionNeedsOriginal(const CMenuEntry &entry) const;
    [[nodiscard]] bool TabLinksToMultiplayer() const;

    void ProcessTabBarInput(Context &ctx);
    void ApplyPointerHover(Context &ctx);  // PC: the mouse highlights a row or a tab
    bool OnCrossPressed(Context &ctx);
    void OnBackPressed(Context &ctx);
    int32 ReadLeftRight(Context &ctx);
    void MoveDown(Context &ctx);
    void MoveUp(Context &ctx);
    bool RunEntryAction(Context &ctx);
    void FollowMenuLink(Context &ctx);
    void SetLanguage(Context &ctx, int32 language);
    void RestoreDefaultSettings(Context &ctx);
    void RunAction36(Context &ctx);
    void LeaveToTabBar();
    void ChangeOption(Context &ctx, int32 delta);
};
static_assert(offsetof(CMenuManager, field_08) == 0x008);
static_assert(offsetof(CMenuManager, field_12C) == 0x12C);
static_assert(offsetof(CMenuManager, m_bMenuActive) == 0x131);
static_assert(offsetof(CMenuManager, field_137) == 0x137);
static_assert(offsetof(CMenuManager, m_bInputEnabled) == 0x141);
static_assert(offsetof(CMenuManager, m_bWaitLeftRightRelease) == 0x484);
static_assert(offsetof(CMenuManager, field_550) == 0x550);
static_assert(offsetof(CMenuManager, m_nCurrScreen) == 0x564);
static_assert(offsetof(CMenuManager, m_nPrevScreen) == 0x574);
static_assert(offsetof(CMenuManager, m_nScreenChangeTime) == 0x580);
static_assert(offsetof(CMenuManager, field_584) == 0x584);
static_assert(offsetof(CMenuManager, m_bInsideScreen) == 0x590);

// Globals the menu code reads and writes. A name says what the handler does
// with the value; byte_/int_/float_ are ones it only sets or tests.
namespace address {
inline constexpr uint32 TimeInMillisecondsPauseMode = 0x08B36ABCu;  // int32, runs while the menu is open
inline constexpr uint32 FrontendAudio = 0x08B5E055u;                // "this" of the front end sound calls
inline constexpr uint32 aSaveSlotStatus = 0x08DD4E20u;              // int32[], indexed by m_SaveSlot - 2; 1: unusable

// Options the menu edits.
inline constexpr uint32 nLanguage = 0x08B59B5Cu;            // int32, 0-4 (4 selects aMenuTabsAlternate)
inline constexpr uint32 nBrightness = 0x08B59B28u;          // int32, 0x80..0x180 in steps of 0x20
inline constexpr uint32 nRadioVolume = 0x08B59B3Cu;         // int32, 0..0x7F in steps of 0x10
inline constexpr uint32 nSfxVolume = 0x08B59B38u;           // int32, 0..0x7F in steps of 0x10
inline constexpr uint32 nRadioStation = 0x08B59B41u;        // int8, 0..9
inline constexpr uint32 nRadarMode = 0x08B59B0Cu;           // int32, 0..2
inline constexpr uint32 bHudOn = 0x08B59B0Au;               // MENUACTION_HUDMODE
inline constexpr uint32 bSubtitles = 0x08B59B2Cu;           // MENUACTION_SUBTITLES
inline constexpr uint32 bVibration = 0x08B59B09u;           // MENUACTION_VIBRATION
inline constexpr uint32 bControlLegendInCar = 0x08B59B10u;  // MENUACTION_CONTROLTYPE
inline constexpr uint32 byte_08B59B2D = 0x08B59B2Du;        // MENUACTION_33
inline constexpr uint32 byte_08B59B2E = 0x08B59B2Eu;        // MENUACTION_12
inline constexpr uint32 byte_08B59B40 = 0x08B59B40u;        // flipped by MENUACTION_36, 1 by default
inline constexpr uint32 byte_08B355E0 = 0x08B355E0u;        // 1 by default
inline constexpr uint32 byte_08B59B2F = 0x08B59B2Fu;
inline constexpr uint32 byte_08B59B30 = 0x08B59B30u;

// Requests the handler leaves for the rest of the front end.
inline constexpr uint32 bCloseMenuRequested = 0x08B59B11u;          // set by Circle on the tab bar and by "resume"-like entries
inline constexpr uint32 bSaveSlotOperationPending = 0x08B59B05u;    // set on entering MENUPAGE_SAVE_SLOTS
inline constexpr uint32 bReloadText = 0x08B58DE0u;                  // set when the language changes
inline constexpr uint32 byte_08B59B13 = 0x08B59B13u;                // set on leaving the save slots for anything but screen 10
inline constexpr uint32 byte_08B48FB9 = 0x08B48FB9u;
inline constexpr uint32 byte_08B48FC8 = 0x08B48FC8u;                // set with "YES" on the load warning
inline constexpr uint32 byte_08B5E7B0 = 0x08B5E7B0u;
inline constexpr uint32 int_08B58DE4 = 0x08B58DE4u;                 // either non-zero: the handler does nothing
inline constexpr uint32 int_08B58DE8 = 0x08B58DE8u;
inline constexpr uint32 int_08B58DDC = 0x08B58DDCu;                 // timer + 500 when vibration is switched on
inline constexpr uint32 float_08B59AF4 = 0x08B59AF4u;               // 150.0f on leaving a screen
inline constexpr uint32 float_08B59AFC = 0x08B59AFCu;               // 0.0f on leaving a screen
inline constexpr uint32 nLastLeftRepeatTime = 0x08B59B6Cu;          // int32
inline constexpr uint32 nLastRightRepeatTime = 0x08B59B70u;         // int32

// Objects created on first use.
inline constexpr uint32 pMultiplayerObjectA = 0x08B5AE3Cu;  // created by 0x08AFA53C
inline constexpr uint32 pMultiplayerObjectB = 0x08B5AE40u;  // created by 0x08AFA59C
inline constexpr uint32 pCustomTracks = 0x08B5AE58u;        // created by 0x08AFB030; byte 8 is "use custom tracks"
}  // namespace address

}  // namespace lcs::game
