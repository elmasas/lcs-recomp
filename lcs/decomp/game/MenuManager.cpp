#include "MenuManager.hpp"

#include "GameData.hpp"
#include "Pad.hpp"

#include "lcs_menu_pages.hpp"

#include <cstdio>
#include <cstring>

namespace lcs::game {

namespace {

// Guest functions the menu code calls that are still recompiled code.
namespace fn {
// Cannot block: no system import and no indirect call anywhere below them.
inline constexpr uint32 PlayFrontEndSound = 0x088649FCu;     // (audio, id, 0)
inline constexpr uint32 StopRadioPreview = 0x08864A90u;      // (audio)
inline constexpr uint32 SetRadioPreviewStation = 0x08864D7Cu;  // (audio, station)
inline constexpr uint32 SetRadioVolume = 0x088647F8u;        // (audio, volume)
inline constexpr uint32 SetSfxVolume = 0x088647C0u;          // (audio, volume)
inline constexpr uint32 sub_088B0A44 = 0x088B0A44u;          // called on every Circle/Triangle press
inline constexpr uint32 sub_08A092E8 = 0x08A092E8u;          // (multiplayer object A); reads the WLAN switch
inline constexpr uint32 sub_08935904 = 0x08935904u;          // returns byte 0x08B38845
inline constexpr uint32 sub_08AD37D8 = 0x08AD37D8u;
inline constexpr uint32 sub_08AD37E0 = 0x08AD37E0u;
inline constexpr uint32 sub_08A54684 = 0x08A54684u;
inline constexpr uint32 sub_08864D38 = 0x08864D38u;          // (audio, 1)
inline constexpr uint32 sub_08838A28 = 0x08838A28u;          // (custom tracks): non-zero when there are tracks
inline constexpr uint32 UsingCustomTracks = 0x08838234u;     // (custom tracks)
inline constexpr uint32 SetUsingCustomTracks = 0x0883822Cu;  // (custom tracks, on)

// Can block the PSP thread, or could not be shown not to (they reach file
// I/O, semaphore waits or thread creation, or call through pointers).
// InputNeedsOriginal() keeps every path that leads here out of the C++.
inline constexpr uint32 RunSaveSlotOperation = 0x08AD95F8u;  // memory card access
inline constexpr uint32 StartRadioPreview = 0x08864A64u;     // (audio, station, 1, 0); opens the stream
inline constexpr uint32 sub_0882BC80 = 0x0882BC80u;          // (multiplayer object B); leaving the multiplayer tab
inline constexpr uint32 sub_0882B958 = 0x0882B958u;          // (multiplayer object B); entering it
inline constexpr uint32 CreateMultiplayerObjectA = 0x08AFA53Cu;
inline constexpr uint32 CreateMultiplayerObjectB = 0x08AFA59Cu;
inline constexpr uint32 CreateCustomTracks = 0x08AFB030u;
inline constexpr uint32 sub_08AD9464 = 0x08AD9464u;          // (menu); starts the game
inline constexpr uint32 StartNewGame = 0x08AD9424u;          // (menu); calls 0x08AD9464
inline constexpr uint32 sub_08AD9620 = 0x08AD9620u;          // (menu); save slot list, first row
inline constexpr uint32 sub_08AD9648 = 0x08AD9648u;          // (menu); save slot list, other rows
inline constexpr uint32 ApplyLanguage = 0x08ADA8A4u;         // (menu)
inline constexpr uint32 sub_088646F8 = 0x088646F8u;          // (audio)
inline constexpr uint32 sub_089C11D8 = 0x089C11D8u;
inline constexpr uint32 sub_08AD9DA4 = 0x08AD9DA4u;          // (menu, GXT key)
inline constexpr uint32 sub_08A4CE28 = 0x08A4CE28u;
inline constexpr uint32 sub_08A54EFC = 0x08A54EFCu;
inline constexpr uint32 sub_089C16A4 = 0x089C16A4u;
inline constexpr uint32 sub_088BC4A8 = 0x088BC4A8u;
}  // namespace fn

inline constexpr uint32 kKeyFEA_CHD = 0x08B2DE08u;  // "FEA_CHD" in the EBOOT's data

// The tab bar as it is laid out in guest memory (CMenuTab holds a host pointer).
struct GuestMenuTab {
    int32 m_Id;
    uint32 m_Name;
    int32 m_Up;
    int32 m_Down;
    int32 m_Left;
    int32 m_Right;
};
static_assert(sizeof(GuestMenuTab) == 24);

enum { LANGUAGE_ALTERNATE_TABS = 4 };

// Screen behind each tab, by CMenuTab::m_Id - 1. On PC the MULTIPLAYER tab
// opens GRAPHICS (host/lcs_menu_pages.cpp renames it).
constexpr int32 kTabScreens[NUM_MENU_TABS] = {
    MENUPAGE_MAP, MENUPAGE_BRIEF, MENUPAGE_GAME, MENUPAGE_STATS,
    MENUPAGE_PC_CONTROLS, MENUPAGE_AUDIO, MENUPAGE_DISPLAY, MENUPAGE_PC_GRAPHICS,
};
constexpr int32 kTabScreensAlternate[NUM_MENU_TABS] = {
    MENUPAGE_MAP, MENUPAGE_BRIEF, MENUPAGE_GAME, MENUPAGE_STATS,
    MENUPAGE_AUDIO, MENUPAGE_DISPLAY, MENUPAGE_PC_GRAPHICS, MENUPAGE_PC_CONTROLS,
};
// The host adds a ninth tab, LANGUAGE (host/lcs_lang.cpp).
constexpr int32 kHostTabCount = NUM_MENU_TABS + 1;

template <typename T>
T &Global(uint32 address) { return guest_ref<T>(address); }

int32 PauseModeTime() { return Global<int32>(address::TimeInMillisecondsPauseMode); }
int32 Language() { return Global<int32>(address::nLanguage); }

const GuestMenuTab &Tab(int32 id) {
    const uint32 table = Language() == LANGUAGE_ALTERNATE_TABS ? address::aMenuTabsAlternate : address::aMenuTabs;
    return guest_ref<GuestMenuTab>(table + static_cast<uint32>(id - 1) * sizeof(GuestMenuTab));
}

// -1 when the id is not a tab.
int32 ScreenOfTab(int32 id) {
    if (id >= 1) {
        if (const int32 host = lcs::lcs_menu_tab_screen(static_cast<uint32>(id)); host >= 0) return host;
    }
    if (id < 1 || id > NUM_MENU_TABS) return -1;
    return Language() == LANGUAGE_ALTERNATE_TABS ? kTabScreensAlternate[id - 1] : kTabScreens[id - 1];
}

void PlayFrontEndSound(Context &ctx, eFrontendSound sound) {
    guest_call(ctx, fn::PlayFrontEndSound, {address::FrontendAudio, sound, 0u});
}

// For the callees listed as blocking above. Reaching one from the C++ means
// InputNeedsOriginal() missed a case; say so, because the symptom is a hang.
uint32 CallBlocking(Context &ctx, uint32 address, std::initializer_list<uint32> arguments = {}) {
    static bool reported = false;
    if (!reported) {
        reported = true;
        std::fprintf(stderr,
                     "[decomp] menu: C++ reached blocking guest code %08X; "
                     "set LCS_DECOMP_SKIP=08ADCBEC,08ADA094 and report this\n",
                     address);
    }
    return guest_call(ctx, address, arguments);
}

void StartRadioPreview(Context &ctx) {
    const uint32 station = static_cast<uint8>(Global<int8>(address::nRadioStation));
    CallBlocking(ctx, fn::StartRadioPreview, {address::FrontendAudio, station, 1u, 0u});
}

uint32 GetOrCreate(Context &ctx, uint32 pointer, uint32 create) {
    if (Global<uint32>(pointer) == 0u) CallBlocking(ctx, create);
    return Global<uint32>(pointer);
}

void Toggle(uint32 address) { Global<bool8>(address) = Global<bool8>(address) == 0u ? 1u : 0u; }

// Entries whose value keeps changing while left or right is held.
bool RepeatsWhileHeld(int32 action) {
    return action == MENUACTION_BRIGHTNESS || action == MENUACTION_RADIOVOLUME ||
           action == MENUACTION_SFXVOLUME || action == MENUACTION_RADIOSTATION || lcs::menu_action_repeats(action);
}

bool IsKey(const CMenuEntry &entry, const char *key) { return std::strcmp(entry.m_EntryName, key) == 0; }

}  // namespace

// ---------------------------------------------------------------------------
// Navigation queries
// ---------------------------------------------------------------------------

// 0x08AD9664
bool CMenuManager::NavUpJustDown() {
    if (!m_bInputEnabled) return false;
    return CPad::StickUpJustDown() || CPad::GetPad(0)->DPadUpJustDown();
}

// 0x08AD96C8
bool CMenuManager::NavDownJustDown() {
    if (!m_bInputEnabled) return false;
    return CPad::StickDownJustDown() || CPad::GetPad(0)->DPadDownJustDown();
}

// 0x08AD972C
bool CMenuManager::NavLeftJustDown() {
    if (!m_bInputEnabled) return false;
    if (m_bWaitLeftRightRelease) {
        if (CPad::StickLeftJustDown() || CPad::GetPad(0)->DPadLeftJustDown() ||
            CPad::StickRightJustDown() || CPad::GetPad(0)->DPadRightJustDown())
            return false;
        m_bWaitLeftRightRelease = 0;
    }
    return CPad::StickLeftJustDown() || CPad::GetPad(0)->DPadLeftJustDown();
}

// 0x08AD9814
bool CMenuManager::NavRightJustDown() {
    if (!m_bInputEnabled) return false;
    if (m_bWaitLeftRightRelease) {
        if (CPad::StickRightJustDown() || CPad::GetPad(0)->DPadRightJustDown() ||
            CPad::StickLeftJustDown() || CPad::GetPad(0)->DPadLeftJustDown())
            return false;
        m_bWaitLeftRightRelease = 0;
    }
    return CPad::StickRightJustDown() || CPad::GetPad(0)->DPadRightJustDown();
}

// 0x08AD98FC
int32 CMenuManager::ClampToField584(int32 value) { return field_584 < value ? field_584 : value; }

// 0x08ADAA94
void CMenuManager::ResetField588() { field_588 = 0; }

// ---------------------------------------------------------------------------
// Screens and entries
// ---------------------------------------------------------------------------

const CMenuEntry &CMenuManager::Entry(int32 screen, int32 row) const {
    return guest_ref<CMenuEntry>(address::aScreens + static_cast<uint32>(screen) * sizeof(CMenuScreen) +
                                 offsetof(CMenuScreen, m_aEntries) + static_cast<uint32>(row) * sizeof(CMenuEntry));
}

// Row 0 is a heading on some screens.
int32 CMenuManager::FirstSelectableRow() const {
    return Entry(m_nCurrScreen, 0).m_Action == MENUACTION_LABEL ? 1 : 0;
}

// 0x08ADA65C
void CMenuManager::RequestCloseMenu() { Global<bool8>(address::bCloseMenuRequested) = 1; }

// 0x08ADA00C: runs after m_nCurrScreen (or the tab) has changed.
void CMenuManager::OnScreenChanged() {
    field_584 = 0;
    m_bEditingOption = 0;
    ResetField588();
    // 0x08AD9D94
    field_12C = 0;
    field_550 = 300;

    if (m_nCurrScreen == MENUPAGE_8 && !field_137 && !field_132) {
        if (Global<uint8>(address::byte_08B59B30) != Global<uint8>(address::byte_08B59B2F))
            Global<uint8>(address::byte_08B59B2F) = Global<uint8>(address::byte_08B59B30);
        RequestCloseMenu();
    }
    m_nPrevScreen = m_nCurrScreen;
}

// 0x08AD9CFC
void CMenuManager::SwitchToScreen(int32 screen) {
    if (m_nCurrScreen == MENUPAGE_SAVE_SLOTS && screen != MENUPAGE_LOADGAME_CONFIRM)
        Global<bool8>(address::byte_08B59B13) = 1;
    m_nPrevScreen = m_nCurrScreen;
    ResetField588();
    m_nCurrScreen = screen;
    m_nCurrOption = 0;
    m_nScreenChangeTime = PauseModeTime();
    if (screen == MENUPAGE_SAVE_SLOTS) Global<bool8>(address::bSaveSlotOperationPending) = 1;
    field_584 = 0;
    OnScreenChanged();
}

// 0x08ADA094: flips the on/off option on the highlighted row.
void CMenuManager::ToggleOption(Context &ctx) {
    switch (CurrentAction()) {
    case MENUACTION_VIBRATION:
        Toggle(address::bVibration);
        if (Global<bool8>(address::bVibration)) {
            // CPad::GetPad(0)->StartShake(300, 150) is here; it is empty on PSP (0x08A96CF8).
            Global<int32>(address::int_08B58DDC) = PauseModeTime() + 500;
        }
        break;
    case MENUACTION_INVERTLOOK:
        Toggle(address::bInvertLook);
        break;
    case MENUACTION_CONTROLTYPE:
        Toggle(address::bControlLegendInCar);
        break;
    case MENUACTION_SUBTITLES:
        Toggle(address::bSubtitles);
        break;
    case MENUACTION_12:
        Toggle(address::byte_08B59B2E);
        break;
    case MENUACTION_33:
        Toggle(address::byte_08B59B2D);
        break;
    case MENUACTION_HUDMODE:
        Toggle(address::bHudOn);
        break;
    case MENUACTION_PLAYERMOVEMENT: {
        // Analog stick or directional buttons; the control setup's low bit follows it.
        bool8 &swap = Global<bool8>(address::bSwapNubAndDPad);
        swap = (swap ^ 1u) != 0u ? 1u : 0u;
        CPad *pad = CPad::GetPad(0);
        pad->Mode = static_cast<uint16>(static_cast<int16>(pad->Mode & 0xFFFEu) + swap);
        m_bWaitLeftRightRelease = 1;
        break;
    }
    case MENUACTION_CUSTOMTRACKS: {
        // Restarts the radio preview, which opens a stream: blocking.
        uint32 tracks = GetOrCreate(ctx, address::pCustomTracks, fn::CreateCustomTracks);
        if (guest_call(ctx, fn::sub_08838A28, {tracks}) == 0u) break;
        tracks = GetOrCreate(ctx, address::pCustomTracks, fn::CreateCustomTracks);
        const bool wasOn = guest_call(ctx, fn::UsingCustomTracks, {tracks}) != 0u;
        guest_call(ctx, fn::SetUsingCustomTracks, {tracks, wasOn ? 0u : 1u});
        tracks = GetOrCreate(ctx, address::pCustomTracks, fn::CreateCustomTracks);
        if (guest_call(ctx, fn::UsingCustomTracks, {tracks}) != 0u) {
            CallBlocking(ctx, fn::sub_088BC4A8, {0u});
            guest_call(ctx, fn::SetRadioPreviewStation, {address::FrontendAudio, 0x41u});
            CallBlocking(ctx, fn::StartRadioPreview, {address::FrontendAudio, 0x41u, 1u, 0u});
        } else {
            CallBlocking(ctx, fn::sub_088BC4A8, {0u});
            guest_call(ctx, fn::SetRadioPreviewStation,
                       {address::FrontendAudio, static_cast<uint32>(Global<int8>(address::nRadioStation))});
            StartRadioPreview(ctx);
        }
        break;
    }
    default:
        break;
    }
}

// 0x08ADA358: moves the slider on the highlighted row one step; it wraps at both ends.
void CMenuManager::AdjustSlider(Context &ctx, int32 delta) {
    switch (CurrentAction()) {
    case MENUACTION_BRIGHTNESS: {
        int32 &brightness = Global<int32>(address::nBrightness);
        if (brightness == 0x80 && delta < 0) brightness = 0x180;
        else if (brightness == 0x180 && delta > 0) brightness = 0x80;
        else brightness += delta * 0x20;
        if (brightness < 0x80) brightness = 0x80;
        if (brightness > 0x180) brightness = 0x180;
        break;
    }
    case MENUACTION_RADIOVOLUME:
    case MENUACTION_SFXVOLUME: {
        const bool radio = CurrentAction() == MENUACTION_RADIOVOLUME;
        int32 &volume = Global<int32>(radio ? address::nRadioVolume : address::nSfxVolume);
        if (volume == 0 && delta < 0) volume = 0x7F;
        else if (volume == 0x7F && delta > 0) volume = 0;
        else volume += delta * 0x10;
        if (volume < 0) volume = 0;
        if (volume > 0x7F) volume = 0x7F;
        guest_call(ctx, radio ? fn::SetRadioVolume : fn::SetSfxVolume,
                   {address::FrontendAudio, static_cast<uint32>(volume) & 0xFFu});
        break;
    }
    default:
        break;
    }
}

// ---------------------------------------------------------------------------
// Which frames stay with the recompiled original
// ---------------------------------------------------------------------------

// What Cross would do on this entry: does it lead to blocking guest code?
bool CMenuManager::EntryActionNeedsOriginal(const CMenuEntry &entry) const {
    if (static_cast<int8>(entry.m_TargetMenu) == MENUPAGE_NEWGAME_CONFIRM && field_137) return true;  // 0x08AD9464
    switch (static_cast<int16>(entry.m_Action)) {
    case MENUACTION_LOADGAME_CONFIRM:
    case MENUACTION_CANCEL:
    case MENUACTION_CHANGEMENU:
        if (IsKey(entry, "FEDS_TB")) return false;
        // The save slot list reads the memory card; field_1C starts or loads a game.
        return static_cast<int8>(entry.m_TargetMenu) == MENUPAGE_SAVE_SLOTS || field_1C != 0u;
    case MENUACTION_LANG_ENG:
    case MENUACTION_LANG_FRE:
    case MENUACTION_LANG_GER:
    case MENUACTION_LANG_ITA:
    case MENUACTION_LANG_SPA:        // 0x08ADA8A4 calls through pointers
    case MENUACTION_NEWGAME_CONFIRM:  // starts the game
    case MENUACTION_GOTO_AUDIO:       // starts the radio preview
    case MENUACTION_36:
    case MENUACTION_RESETSETTINGS_CONFIRM:  // may create the custom tracks object
    case MENUACTION_CUSTOMTRACKS:
        return true;
    default:
        return false;
    }
}

// Can the d-pad move from the highlighted tab onto MULTIPLAYER (or a tab
// whose screen is not known here)? On PC no tab leads to MULTIPLAYER.
bool CMenuManager::TabLinksToMultiplayer() const {
    if (m_nCurrTab < 1 || m_nCurrTab > kHostTabCount) return true;
    const GuestMenuTab &tab = Tab(m_nCurrTab);
    for (const int32 link : {tab.m_Up, tab.m_Down, tab.m_Left, tab.m_Right}) {
        if (link == -1) continue;
        const int32 screen = ScreenOfTab(link);
        if (screen == -1 || screen == MENUPAGE_MULTIPLAYER) return true;
    }
    return false;
}

bool CMenuManager::ToggleNeedsOriginal() const { return CurrentAction() == MENUACTION_CUSTOMTRACKS; }

// Decided from the pad and the menu state before anything is written. It
// errs towards the original: frames with more than one kind of input are
// handed over whenever the second input could change which entry is acted on.
bool CMenuManager::InputNeedsOriginal() const {
    const int32 screen = m_nCurrScreen;
    if (screen == MENUPAGE_SAVE_SLOTS) return Global<bool8>(address::bSaveSlotOperationPending) != 0u;
    // Every multiplayer screen (network code), except the two that hold the PC pages.
    if (screen >= MENUPAGE_MULTIPLAYER && !lcs::menu_screen_is_pc(screen)) return true;

    CPad *pad = CPad::GetPad(0);
    const CControllerState &now = pad->NewState;
    const bool cross = pad->CrossJustDown();
    const bool back = pad->CircleOrTriangleJustUp();
    const int32 stickX = pad->GetStickX();
    const int32 stickY = pad->GetStickY();
    const bool vertical = now.DPadUp || now.DPadDown || now.NubUp || now.NubDown || stickY < -15 || stickY > 15;
    const bool horizontal =
        now.DPadLeft || now.DPadRight || now.NubLeft || now.NubRight || stickX < -15 || stickX > 15;

    // These two change the screen before the rest of the handler looks at it.
    const bool leavesWarning = (screen == MENUPAGE_SAVE_CHEAT_WARNING && back) ||
                               (screen == MENUPAGE_LOADGAME_CONFIRM && field_1C == 1u);
    if (leavesWarning && (cross || vertical || horizontal)) return true;
    if (cross && back) return true;

    const bool onTabBar = !m_bInsideScreen && screen != MENUPAGE_SAVE_CHEAT_WARNING;
    if (onTabBar) {
        if (cross && screen == MENUPAGE_AUDIO) return true;  // entering AUDIO starts the radio preview
        return (vertical || horizontal) && TabLinksToMultiplayer();
    }

    if (cross) {
        // Up/down moves the highlight, and a link changes the screen, before the entry is used.
        if (vertical || horizontal) return true;
        if (EntryActionNeedsOriginal(CurrentEntry())) return true;
    }
    if (horizontal) {
        // Changing the radio station or the custom tracks option restarts the radio preview.
        // The row can still move this frame (up/down, or leaving the save slot rows).
        const bool anyRow = vertical || field_0C > 0;
        const int32 firstRow = anyRow ? 0 : m_nCurrOption;
        const int32 lastRow = anyRow ? NUM_MENUROWS - 1 : m_nCurrOption;
        for (int32 row = firstRow; row <= lastRow; ++row) {
            const int32 action = static_cast<int16>(Entry(screen, row).m_Action);
            if (action == MENUACTION_RADIOSTATION || action == MENUACTION_CUSTOMTRACKS) return true;
        }
    }
    return false;
}

// ---------------------------------------------------------------------------
// The input handler, 0x08ADCBEC
// ---------------------------------------------------------------------------

int32 CMenuManager::ProcessUserInput(Context &ctx) {
    if (m_nCurrScreen == MENUPAGE_SAVE_SLOTS) {
        // The save slot screen has its own input code; this only starts the pending card operation.
        if (Global<bool8>(address::bSaveSlotOperationPending)) {
            CallBlocking(ctx, fn::RunSaveSlotOperation, {guest_address(this)});
            Global<bool8>(address::bSaveSlotOperationPending) = 0;
        }
        return 0;
    }

    CPad *pad = CPad::GetPad(0);

    if (m_nCurrScreen == MENUPAGE_SAVE_CHEAT_WARNING) {
        if (pad->CircleOrTriangleJustUp() && m_bInputEnabled) {
            RequestCloseMenu();
            pad->JustOutOfFrontEnd = 10;
            SwitchToScreen(MENUPAGE_GAME);
            Global<bool8>(address::byte_08B48FB9) = 1;
        }
        m_bInsideScreen = 1;
    }

    if (m_nCurrScreen == MENUPAGE_LOADGAME_CONFIRM && field_1C == 1u) {
        SwitchToScreen(MENUPAGE_GAME);
        Global<bool8>(address::byte_08B5E7B0) = 0;
        RequestCloseMenu();
        field_1C = 0;
        Global<bool8>(address::byte_08B48FC8) = 1;
        Global<bool8>(address::byte_08B48FB9) = 1;
    }

    if (Global<int32>(address::int_08B58DE4) != 0 || Global<int32>(address::int_08B58DE8) != 0) return 0;

    // Input stays off until the d-pad and the nub have been let go once.
    if (!m_bInputEnabled && field_18 == 0xFF && !pad->NewState.DPadUp && !pad->NewState.DPadDown &&
        !pad->NewState.DPadLeft && !pad->NewState.DPadRight && pad->GetStickX() >= -4 && pad->GetStickX() < 5 &&
        pad->GetStickY() >= -4 && pad->GetStickY() < 5)
        m_bInputEnabled = 1;

    if (m_bInputEnabled) ApplyPointerHover(ctx);

    if ((m_nCurrScreen == MENUPAGE_SAVE_SLOTS || !m_bInsideScreen) && pad->CircleOrTriangleJustUp() &&
        m_bInputEnabled) {
        RequestCloseMenu();
        pad->JustOutOfFrontEnd = 10;
    }

    if (!m_bInsideScreen) {
        ProcessTabBarInput(ctx);
        return 0;
    }

    // Letting go of left/right after dragging a slider.
    if ((pad->DPadLeftJustUp() || pad->DPadRightJustUp()) && m_bEditingOption) {
        const int32 action = CurrentAction();
        if (action == MENUACTION_BRIGHTNESS) PlayFrontEndSound(ctx, SOUND_FRONTEND_HIGHLIGHT);
        else if (action == MENUACTION_SFXVOLUME) PlayFrontEndSound(ctx, SOUND_FRONTEND_SFX_TEST);
    }

    bool runAction = false;
    if (pad->CrossJustDown() && field_18 == 0xFF) runAction = OnCrossPressed(ctx);

    bool down = false;
    bool up = false;
    if (!m_bEditingOption) {
        down = NavDownJustDown();
        up = NavUpJustDown();
    }

    if (pad->CircleOrTriangleJustUp() && m_nCurrScreen != MENUPAGE_SAVE_SLOTS) OnBackPressed(ctx);

    const int32 delta = ReadLeftRight(ctx);

    const int32 optionBefore = m_nCurrOption;
    if (down) {
        MoveDown(ctx);
        if (m_nCurrOption != optionBefore) ResetField588();
    }
    if (up) {
        MoveUp(ctx);
        if (m_nCurrOption != optionBefore) ResetField588();
    }

    if (runAction && RunEntryAction(ctx)) return 1;

    if (delta != 0) ChangeOption(ctx, delta);
    return 0;
}

// PC: when the mouse moved, highlight the row (inside a screen) or the tab
// (on the bar) under it, as moving there with the d-pad would. A click then
// arrives as Cross and acts on it.
void CMenuManager::ApplyPointerHover(Context &ctx) {
    float x = 0.0f;
    float y = 0.0f;
    if (!lcs::lcs_menu_pointer_moved(x, y)) return;

    if (!m_bInsideScreen) {
        const int32 tab = lcs::lcs_menu_tab_at(x, y);
        if (tab < 1 || tab == m_nCurrTab || m_nCurrScreen == MENUPAGE_SAVE_SLOTS) return;
        if (ScreenOfTab(tab) == -1) return;
        PlayFrontEndSound(ctx, SOUND_FRONTEND_HIGHLIGHT);
        m_nCurrTab = tab;
        field_58C = 0;
        OnScreenChanged();
        m_nCurrScreen = ScreenOfTab(tab);
        return;
    }

    // Screens whose rows are not table entries keep the keyboard.
    const int32 screen = m_nCurrScreen;
    if (screen == MENUPAGE_MAP || screen == MENUPAGE_STATS || screen == MENUPAGE_BRIEF ||
        screen == MENUPAGE_SAVE_SLOTS || field_0C > 0 || m_bEditingOption)
        return;
    if (x < 20.0f || x > 460.0f) return;
    int32 best = -1;
    float bestGap = 9.0f;
    for (int32 row = 0; row < NUM_MENUROWS; ++row) {
        const CMenuEntry &entry = Entry(screen, row);
        const int32 action = static_cast<int16>(entry.m_Action);
        if (action == MENUACTION_NOTHING || action == MENUACTION_LABEL || action == MENUACTION_24) continue;
        if (entry.m_EntryName[0] == '\0' || (entry.m_X == 0 && entry.m_Y == 0)) continue;
        // m_Y is the top of the text; aim for its middle.
        const float gap = y - (static_cast<float>(entry.m_Y) + 5.0f);
        const float distance = gap < 0.0f ? -gap : gap;
        if (distance < bestGap) {
            bestGap = distance;
            best = row;
        }
    }
    if (best < 0 || best == m_nCurrOption) return;
    PlayFrontEndSound(ctx, SOUND_FRONTEND_HIGHLIGHT);
    m_nCurrOption = best;
    ResetField588();
}

// Cross enters the highlighted tab's screen; the d-pad and the nub move
// along the links in aMenuTabs.
void CMenuManager::ProcessTabBarInput(Context &ctx) {
    CPad *pad = CPad::GetPad(0);

    if (pad->CrossJustDown()) {
        PlayFrontEndSound(ctx, SOUND_FRONTEND_SELECT);
        m_bInsideScreen = 1;
        if (m_nCurrScreen == MENUPAGE_MULTIPLAYER) {
            GetOrCreate(ctx, address::pMultiplayerObjectB, fn::CreateMultiplayerObjectB);
            const uint32 object = GetOrCreate(ctx, address::pMultiplayerObjectA, fn::CreateMultiplayerObjectA);
            // Stay on the tab bar unless both checks pass (the first reads the WLAN switch).
            if (guest_call(ctx, fn::sub_08A092E8, {object}) == 0u || guest_call(ctx, fn::sub_08935904) == 0u)
                m_bInsideScreen = 0;
        }
        m_nCurrOption = 0;
        ResetField588();
        if (m_nCurrScreen == MENUPAGE_AUDIO) StartRadioPreview(ctx);
    }

    // The links are those of the tab highlighted when the frame began.
    const GuestMenuTab tab = Tab(m_nCurrTab);
    bool moved = false;
    const auto follow = [&](int32 link) {
        PlayFrontEndSound(ctx, SOUND_FRONTEND_HIGHLIGHT);
        if (link == -1) return;
        m_nCurrTab = link;
        moved = true;
    };
    if (NavUpJustDown() && !pad->GetCross()) follow(tab.m_Up);
    if (NavDownJustDown() && !pad->GetCross()) follow(tab.m_Down);
    if (NavLeftJustDown() && !pad->GetCross()) follow(tab.m_Left);
    if (NavRightJustDown() && !pad->GetCross()) follow(tab.m_Right);

    if (!moved || m_nCurrScreen == MENUPAGE_SAVE_SLOTS) return;

    if (m_nCurrScreen == MENUPAGE_MULTIPLAYER) {
        const uint32 object = GetOrCreate(ctx, address::pMultiplayerObjectB, fn::CreateMultiplayerObjectB);
        CallBlocking(ctx, fn::sub_0882BC80, {object});
    }
    field_58C = 0;
    OnScreenChanged();

    const int32 screen = ScreenOfTab(m_nCurrTab);
    if (screen != -1) m_nCurrScreen = screen;

    if (m_nCurrScreen == MENUPAGE_MULTIPLAYER) {
        const uint32 object = GetOrCreate(ctx, address::pMultiplayerObjectB, fn::CreateMultiplayerObjectB);
        if (CallBlocking(ctx, fn::sub_0882B958, {object}) == 0u) m_bInsideScreen = 0;
    }
}

// Cross inside a screen: plays the entry's sound and says whether its action
// runs this frame (after up/down has been applied).
bool CMenuManager::OnCrossPressed(Context &ctx) {
    const int32 action = CurrentAction();

    if (lcs::menu_action_is_pc(action)) {
        PlayFrontEndSound(ctx, SOUND_FRONTEND_SELECT);
        lcs::lcs_menu_pages_cross(m_nCurrScreen, m_nCurrOption, action);
        ResetField588();
        return false;
    }

    if (m_nCurrScreen == MENUPAGE_GAME || m_nCurrScreen == MENUPAGE_LANGUAGE) {
        if (field_0C > 0) {
            // Choosing a save slot.
            const int32 slot = static_cast<int8>(CurrentEntry().m_SaveSlot);
            const int32 status =
                Global<int32>(address::aSaveSlotStatus + static_cast<uint32>(slot - 2) * sizeof(int32));
            if (status == 1) {
                PlayFrontEndSound(ctx, SOUND_FRONTEND_DENIED);
                return false;
            }
            PlayFrontEndSound(ctx, SOUND_FRONTEND_HIGHLIGHT);
            ResetField588();
            return true;
        }
        if (field_14 != 0 && (action == MENUACTION_29 || action == MENUACTION_30)) {
            PlayFrontEndSound(ctx, SOUND_FRONTEND_DENIED);
            return true;
        }
        PlayFrontEndSound(ctx, SOUND_FRONTEND_HIGHLIGHT);
        if (m_nCurrScreen != MENUPAGE_LANGUAGE) ResetField588();
        return true;
    }

    switch (action) {
    case MENUACTION_LOADGAME_CONFIRM:
        if (m_nCurrScreen != MENUPAGE_LOADGAME_CONFIRM) PlayFrontEndSound(ctx, SOUND_FRONTEND_SELECT);
        return true;
    case MENUACTION_CANCEL:
        PlayFrontEndSound(ctx, SOUND_FRONTEND_BACK);
        return true;
    case MENUACTION_REQUEST_CLOSE:
        return true;
    case MENUACTION_33:
        PlayFrontEndSound(ctx, SOUND_FRONTEND_SELECT);
        ToggleOption(ctx);
        ResetField588();
        return false;

    // Options: Cross does nothing, left and right change them.
    case MENUACTION_VIBRATION:
    case MENUACTION_INVERTLOOK:
    case MENUACTION_CONTROLCONFIG:
    case MENUACTION_CONTROLTYPE:
    case MENUACTION_SUBTITLES:
    case MENUACTION_12:
    case MENUACTION_BRIGHTNESS:
    case MENUACTION_RADIOVOLUME:
    case MENUACTION_SFXVOLUME:
    case MENUACTION_16:
    case MENUACTION_RADIOSTATION:
    case MENUACTION_RADARMODE:
    case MENUACTION_HUDMODE:
    case MENUACTION_PLAYERMOVEMENT:
    case MENUACTION_CUSTOMTRACKS:
        return false;

    default:
        m_bEditingOption = m_bEditingOption == 0u ? 1u : 0u;
        PlayFrontEndSound(ctx, action == MENUACTION_28 ? SOUND_FRONTEND_HIGHLIGHT : SOUND_FRONTEND_SELECT);
        if (m_nCurrScreen != MENUPAGE_LANGUAGE) ResetField588();
        return true;
    }
}

// What MENUACTION_BACK_TO_TABS and Circle both do: back to the tab bar.
void CMenuManager::LeaveToTabBar() {
    Global<float>(address::float_08B59AF4) = 150.0f;
    Global<float>(address::float_08B59AFC) = 0.0f;
    m_bInsideScreen = 0;
    m_bEditingOption = 0;
    field_0C = 0;
    ResetField588();
    field_58C = 0;
}

// Circle or Triangle released inside a screen.
void CMenuManager::OnBackPressed(Context &ctx) {
    guest_call(ctx, fn::sub_088B0A44);

    if (m_nCurrScreen == MENUPAGE_PC_KEYBOARD || m_nCurrScreen == MENUPAGE_CONTROLS) {
        // Back to the CONTROLS chooser they were opened from, on their row.
        PlayFrontEndSound(ctx, SOUND_FRONTEND_BACK);
        const bool keyboard = m_nCurrScreen == MENUPAGE_PC_KEYBOARD;
        m_nPrevScreen = m_nCurrScreen;
        ResetField588();
        m_nCurrScreen = MENUPAGE_PC_CONTROLS;
        m_nCurrOption = keyboard ? lcs::kChooserKeyboardRow : lcs::kChooserControllerRow;
        m_nScreenChangeTime = PauseModeTime();
        field_584 = 0;
        OnScreenChanged();
        return;
    }

    if (m_nCurrScreen == MENUPAGE_GAME && field_0C > 0) {
        // Out of the save slot rows, back onto the entry that opened them.
        PlayFrontEndSound(ctx, SOUND_FRONTEND_BACK);
        m_nCurrOption = field_0C == 1 ? 0 : 1;
        field_0C = 0;
        ResetField588();
        return;
    }

    LeaveToTabBar();
    PlayFrontEndSound(ctx, SOUND_FRONTEND_BACK);
    const bool hasTab = static_cast<uint32>(m_nCurrScreen) <= MENUPAGE_MAP || m_nCurrScreen == MENUPAGE_MULTIPLAYER ||
                        m_nCurrScreen == MENUPAGE_PC_GRAPHICS || m_nCurrScreen == MENUPAGE_PC_CONTROLS;
    if (!hasTab) field_584 = 0;
    if (m_nCurrScreen == MENUPAGE_AUDIO) guest_call(ctx, fn::StopRadioPreview, {address::FrontendAudio});
}

// Left and right: -1, 0 or +1. A held d-pad repeats every 151 ms on sliders
// and on the radio station; a press or a nub flick always counts.
int32 CMenuManager::ReadLeftRight(Context &ctx) {
    CPad *pad = CPad::GetPad(0);
    bool right = false;
    bool left = false;

    if (pad->NewState.DPadLeft) {
        int32 &last = Global<int32>(address::nLastLeftRepeatTime);
        if (static_cast<uint32>(PauseModeTime() - last) >= 151u) {
            if (RepeatsWhileHeld(CurrentAction())) left = true;
            last = PauseModeTime();
        }
    } else if (pad->NewState.DPadRight) {
        int32 &last = Global<int32>(address::nLastRightRepeatTime);
        if (static_cast<uint32>(PauseModeTime() - last) >= 151u) {
            if (RepeatsWhileHeld(CurrentAction())) right = true;
            last = PauseModeTime();
        }
    }
    if (NavRightJustDown()) right = true;
    if (NavLeftJustDown()) left = true;

    const int32 delta = (right ? 1 : 0) - (left ? 1 : 0);
    if (delta != 0 && m_nCurrScreen != MENUPAGE_MAP) {
        if (RepeatsWhileHeld(CurrentAction())) {
            PlayFrontEndSound(ctx, SOUND_FRONTEND_SLIDER);
        } else {
            ResetField588();
            PlayFrontEndSound(ctx, SOUND_FRONTEND_HIGHLIGHT);
        }
    }
    return delta;
}

void CMenuManager::MoveDown(Context &ctx) {
    if (m_nCurrScreen != MENUPAGE_MAP) PlayFrontEndSound(ctx, SOUND_FRONTEND_HIGHLIGHT);
    ++m_nCurrOption;

    if (field_0C > 0) {
        // Save slot rows wrap among themselves.
        if (m_nCurrOption == NUM_MENUROWS || CurrentAction() == MENUACTION_NOTHING) m_nCurrOption = field_08;
        return;
    }
    if (m_nCurrOption == NUM_MENUROWS || CurrentAction() == MENUACTION_NOTHING ||
        CurrentAction() == MENUACTION_24)
        m_nCurrOption = FirstSelectableRow();
}

void CMenuManager::MoveUp(Context &ctx) {
    if (m_nCurrScreen != MENUPAGE_MAP) PlayFrontEndSound(ctx, SOUND_FRONTEND_HIGHLIGHT);
    const int32 first = FirstSelectableRow();
    const auto nextAction = [this] { return static_cast<int16>(Entry(m_nCurrScreen, m_nCurrOption + 1).m_Action); };

    if (m_nCurrScreen != MENUPAGE_GAME) {
        if (first < m_nCurrOption) {
            --m_nCurrOption;
            return;
        }
        // Wrap to the last row in use.
        while (m_nCurrOption != NUM_MENUROWS - 1 && nextAction() != MENUACTION_NOTHING) ++m_nCurrOption;
        return;
    }

    if (m_nCurrOption != first && m_nCurrOption != field_08) {
        --m_nCurrOption;
        return;
    }
    if (field_0C > 0) {
        m_nCurrOption = field_08 + 7;  // last save slot row
        return;
    }
    // Wrap to the last row above the save slot rows.
    while (m_nCurrOption != NUM_MENUROWS - 1 && nextAction() != MENUACTION_NOTHING &&
           nextAction() != MENUACTION_24 && field_0C == 0)
        ++m_nCurrOption;
}

// Runs the highlighted entry. True when the handler has to return 1 at once.
bool CMenuManager::RunEntryAction(Context &ctx) {
    const CMenuEntry &entry = CurrentEntry();
    if (static_cast<int8>(entry.m_TargetMenu) == MENUPAGE_NEWGAME_CONFIRM && field_137) {
        CallBlocking(ctx, fn::sub_08AD9464, {guest_address(this)});
        return false;
    }

    switch (static_cast<int16>(entry.m_Action)) {
    case MENUACTION_LOADGAME_CONFIRM:
    case MENUACTION_CANCEL:
    case MENUACTION_CHANGEMENU:
        FollowMenuLink(ctx);
        break;
    case MENUACTION_LANG_ENG: SetLanguage(ctx, 0); break;
    case MENUACTION_LANG_FRE: SetLanguage(ctx, 1); break;
    case MENUACTION_LANG_GER: SetLanguage(ctx, 2); break;
    case MENUACTION_LANG_ITA: SetLanguage(ctx, 3); break;
    case MENUACTION_LANG_SPA: SetLanguage(ctx, 4); break;
    case MENUACTION_NEWGAME_CONFIRM:
        CallBlocking(ctx, fn::StartNewGame, {guest_address(this)});
        Global<bool8>(address::byte_08B48FB9) = 1;
        break;
    case MENUACTION_26:
        return true;
    case MENUACTION_REQUEST_CLOSE:
        RequestCloseMenu();
        break;
    case MENUACTION_GOTO_AUDIO:
        m_nPrevScreen = m_nCurrScreen;
        ResetField588();
        m_nCurrScreen = MENUPAGE_AUDIO;
        m_nCurrOption = 0;
        StartRadioPreview(ctx);
        field_584 = 0;
        m_nScreenChangeTime = PauseModeTime();
        break;
    case MENUACTION_36:
        RunAction36(ctx);
        break;
    case MENUACTION_BACK_TO_TABS:
        field_138 = 0;
        LeaveToTabBar();
        break;
    case MENUACTION_RESETSETTINGS_CONFIRM:
        RestoreDefaultSettings(ctx);
        break;
    default:
        break;
    }
    return false;
}

// Actions 2, 3 and 4: go to the entry's m_TargetMenu.
void CMenuManager::FollowMenuLink(Context &ctx) {
    if (m_nCurrScreen == MENUPAGE_LOADGAME_CONFIRM) {
        if (CurrentAction() == MENUACTION_LOADGAME_CONFIRM) {
            RequestCloseMenu();
            field_1C = 0;
            Global<bool8>(address::byte_08B48FC8) = 1;
            Global<bool8>(address::byte_08B48FB9) = 1;
        } else {
            guest_call(ctx, fn::sub_088B0A44);
        }
    }

    const CMenuEntry &entry = CurrentEntry();
    m_nPrevScreen = m_nCurrScreen;
    ResetField588();
    if (!IsKey(entry, "FEDS_TB")) {
        m_nCurrScreen = static_cast<int8>(entry.m_TargetMenu);
        if (m_nCurrScreen == MENUPAGE_SAVE_SLOTS) {
            if (m_nPrevScreen == MENUPAGE_SAVE_CHEAT_WARNING) {
                Global<bool8>(address::bSaveSlotOperationPending) = 1;
            } else {
                CallBlocking(ctx, m_nCurrOption == 0 ? fn::sub_08AD9620 : fn::sub_08AD9648, {guest_address(this)});
            }
            m_nCurrOption = 0;
        }
        if (field_1C) {
            if (m_nCurrScreen == MENUPAGE_NEWGAME_CONFIRM) {
                CallBlocking(ctx, fn::StartNewGame, {guest_address(this)});
                Global<bool8>(address::byte_08B48FB9) = 1;
            } else if (m_nCurrScreen == MENUPAGE_GAME && m_nCurrOption == 0) {
                CallBlocking(ctx, fn::sub_08AD9620, {guest_address(this)});
            }
        }
    }
    m_nCurrOption = 0;
    m_nScreenChangeTime = PauseModeTime();
    field_584 = 0;
    OnScreenChanged();
}

void CMenuManager::SetLanguage(Context &ctx, int32 language) {
    Global<int32>(address::nLanguage) = language;
    Global<bool8>(address::bReloadText) = 1;
    CallBlocking(ctx, fn::ApplyLanguage, {guest_address(this)});
}

// "YES" on the reset settings warning.
void CMenuManager::RestoreDefaultSettings(Context &ctx) {
    Global<int32>(address::nBrightness) = 0x120;
    Global<bool8>(address::bHudOn) = 1;
    Global<bool8>(address::bSubtitles) = Language() != 0 ? 1u : 0u;  // off in English only
    Global<int32>(address::nRadarMode) = 0;
    Global<bool8>(address::byte_08B355E0) = 1;
    Global<int32>(address::nRadioVolume) = 0x50;
    Global<int32>(address::nSfxVolume) = 0x60;
    Global<int8>(address::nRadioStation) = 0;
    Global<bool8>(address::byte_08B59B40) = 1;
    CPad::GetPad(0)->Mode = 2;
    Global<bool8>(address::bSwapNubAndDPad) = 0;
    Global<bool8>(address::bInvertLook) = 0;

    m_nPrevScreen = m_nCurrScreen;
    m_nCurrScreen = MENUPAGE_GAME;
    OnScreenChanged();

    const uint32 tracks = GetOrCreate(ctx, address::pCustomTracks, fn::CreateCustomTracks);
    guest_call(ctx, fn::SetUsingCustomTracks, {tracks, 0u});
    m_nCurrOption = 3;
}

// Action 36: no screen as shipped uses it. It resets several subsystems,
// passes the key FEA_CHD to 0x08AD9DA4 and ends on the AUDIO screen, row 2.
void CMenuManager::RunAction36(Context &ctx) {
    CallBlocking(ctx, fn::sub_088646F8, {address::FrontendAudio});
    CallBlocking(ctx, fn::sub_089C11D8, {0u, 0u, 0u, 0u, 0u, 0u, 0u});
    guest_call(ctx, fn::sub_08AD37D8);
    guest_call(ctx, fn::sub_08AD37E0);
    guest_call(ctx, fn::sub_08A54684);
    CallBlocking(ctx, fn::sub_08AD9DA4, {address::FrontEndMenuManager, kKeyFEA_CHD});
    CallBlocking(ctx, fn::sub_08A4CE28);
    CallBlocking(ctx, fn::sub_08A54EFC);
    CallBlocking(ctx, fn::sub_089C16A4, {1u});
    Toggle(address::byte_08B59B40);
    guest_call(ctx, fn::sub_08864D38, {address::FrontendAudio, 1u});

    m_nPrevScreen = m_nCurrScreen;
    ResetField588();
    m_nCurrScreen = MENUPAGE_AUDIO;
    field_584 = 0;
    OnScreenChanged();
    m_nCurrOption = 2;
}

// Left or right on the highlighted row.
void CMenuManager::ChangeOption(Context &ctx, int32 delta) {
    if (field_0C > 0) {
        m_nCurrOption = field_0C == 1 ? 0 : 1;
        field_0C = 0;
        ResetField588();
    }

    if (lcs::menu_action_is_pc(CurrentAction())) {
        lcs::lcs_menu_pages_change(m_nCurrScreen, m_nCurrOption, CurrentAction(), delta);
        return;
    }

    switch (CurrentAction()) {
    case MENUACTION_RADARMODE: {
        int32 &mode = Global<int32>(address::nRadarMode);
        mode += delta;
        if (mode < 0) mode = 2;
        if (mode >= 3) mode = 0;
        break;
    }
    case MENUACTION_RADIOSTATION: {
        const uint32 tracks = GetOrCreate(ctx, address::pCustomTracks, fn::CreateCustomTracks);
        guest_call(ctx, fn::SetUsingCustomTracks, {tracks, 0u});
        int8 &station = Global<int8>(address::nRadioStation);
        station = static_cast<int8>(station + delta);
        PlayFrontEndSound(ctx, SOUND_FRONTEND_HIGHLIGHT);
        if (station < 0) station = 9;
        if (station >= 10) station = 0;
        guest_call(ctx, fn::SetRadioPreviewStation, {address::FrontendAudio, static_cast<uint32>(station)});
        StartRadioPreview(ctx);
        break;
    }
    case MENUACTION_CONTROLCONFIG: {
        // SETUP1 and SETUP2: the control setup moves in steps of two, its low bit is the stick option.
        CPad *pad = CPad::GetPad(0);
        int32 mode = pad->Mode;
        if (delta < 0) {
            mode -= 2;
            if (mode < 0) mode += 4;
        } else {
            mode += 2;
            if (mode >= 4) mode -= 4;
        }
        pad->Mode = static_cast<uint16>(mode);
        break;
    }
    default:
        break;
    }

    AdjustSlider(ctx, delta);
    if (CurrentAction() != MENUACTION_33) ToggleOption(ctx);
}

}  // namespace lcs::game
