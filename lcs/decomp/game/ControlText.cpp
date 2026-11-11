#include "ControlText.hpp"

#include "lcs_hint_keys.hpp"

#include <cstring>
#include <string>

namespace lcs::game {

namespace {

using lcs::BindAction;

constexpr CControlPart Key(BindAction action) { return {CONTROLPART_ACTION, action}; }
constexpr CControlPart Look() { return {CONTROLPART_LOOK, BindAction::Count}; }
constexpr CControlPart ZoomIn() { return {CONTROLPART_ZOOM_IN, BindAction::Count}; }
constexpr CControlPart ZoomOut() { return {CONTROLPART_ZOOM_OUT, BindAction::Count}; }
constexpr CControlPart None() { return {CONTROLPART_NONE, BindAction::Count}; }

}  // namespace

// What each PSP button does on PC follows the default [Controls] mapping
// (lcs_key_bindings.hpp action_buttons): Cross = Sprint on foot and
// MoveForward in a vehicle, Square = Jump / MoveBack, Triangle =
// EnterVehicle, Circle = Attack, L = CenterCamera, R = Aim on foot and
// Handbrake in a vehicle, d-pad left/right = weapon or radio, up = Up,
// down = Down, select = Camera. The examples are the hints that use each one.
const CControlToken aControlTokens[] = {
    // token, PSP setup 1, PC, joiner
    {"AMBUY", "~X~", {Key(BindAction::Sprint), None()}, ""},                       // A_H1 "to buy"
    {"AMEXI", "~O~", {Key(BindAction::Attack), None()}, ""},                       // A_H1 "to exit"
    {"AMLEF", "left button", {Key(BindAction::WeaponPrevious), None()}, ""},       // VIC4_A3 select weapons
    {"AMRIG", "right button", {Key(BindAction::WeaponNext), None()}, ""},
    {"ANS", "L button", {Key(BindAction::CenterCamera), None()}, ""},              // ANSWER the phone
    {"CVEIW", "select button", {Key(BindAction::Camera), None()}, ""},             // HELP25 camera modes
    {"FREE1", "down button", {Key(BindAction::Down), None()}, ""},                 // HELP42 enter Free Aim
    {"FREE2", "analog stick", {Look(), None()}, ""},                               // HELP42 adjust aim
    {"PDBAK", "L button + R button", {Key(BindAction::CenterCamera), Key(BindAction::Aim)}, " + "},
    {"PDCTL", "left button and right button",                                      // HELP59 change targets
     {Key(BindAction::WeaponPrevious), Key(BindAction::WeaponNext)}, " and "},
    {"PDCWE", "left button and right button",                                      // HELP21 change weapons
     {Key(BindAction::WeaponPrevious), Key(BindAction::WeaponNext)}, " and "},
    {"PDFW", "~O~", {Key(BindAction::Attack), None()}, ""},                        // HELP58 fire
    {"PDLO1", "L button", {Key(BindAction::CenterCamera), None()}, ""},            // HELP40 look around
    {"PDLO2", "analog stick", {Look(), None()}, ""},
    {"PDLT", "R button", {Key(BindAction::Aim), None()}, ""},                      // HELP58 lock on
    {"PDSPR", "~X~", {Key(BindAction::Sprint), None()}, ""},                       // HELP2 sprint
    // No C<n> text ships for this one, so the PSP shows nothing (GA_6, GA_6B).
    {"PED_FIREWEAPON", "", {Key(BindAction::Attack), None()}, ""},
    {"PUCF", "L button", {Key(BindAction::CenterCamera), None()}, ""},             // H_WE_02 take weapon
    {"SNSLO", "L button", {Key(BindAction::CenterCamera), None()}, ""},            // HELP9 fine aim
    {"SNZI", "~S~", {ZoomIn(), None()}, ""},                                       // HELP8 zoom in
    {"SNZO", "~X~", {ZoomOut(), None()}, ""},                                      // HELP8 zoom out
    {"TGSUB", "up button", {Key(BindAction::Up), None()}, ""},                     // side missions on/off
    {"TRSK", "~X~", {Key(BindAction::Sprint), None()}, ""},                        // FERR_SK skip trip
    {"VEACC", "~X~", {Key(BindAction::MoveForward), None()}, ""},                  // accelerate
    {"VEBRK", "~S~", {Key(BindAction::MoveBack), None()}, ""},                     // brake
    {"VECRS", "left button and right button",                                      // HELP30 radio
     {Key(BindAction::WeaponPrevious), Key(BindAction::WeaponNext)}, " and "},
    {"VEEE", "~T~", {Key(BindAction::EnterVehicle), None()}, ""},                  // exit, hang up
    {"VEHB", "~S~ + ~X~", {Key(BindAction::Handbrake), None()}, ""},               // HELP6 handbrake
    {"VEHN", "down button", {Key(BindAction::Down), None()}, ""},                  // HELP29 horn
    {"VELB", "R button + L button", {Key(BindAction::Handbrake), Key(BindAction::CenterCamera)}, " + "},
    {"VELL", "L button", {Key(BindAction::CenterCamera), None()}, ""},             // HELP19A look left
    {"VELR", "R button", {Key(BindAction::Handbrake), None()}, ""},                // look right (R in a car)
    {"VESTR", "analog stick left and analog stick right",                          // steer, browse outfits
     {Key(BindAction::MoveLeft), Key(BindAction::MoveRight)}, " and "},
    {"VEWEI", "analog stick up and analog stick down",                             // HELP39 bike lean
     {Key(BindAction::Up), Key(BindAction::Down)}, " and "},
    {"VEWEL", "left button and right button",                                      // FHOSE_2 cannon aim
     {Key(BindAction::WeaponPrevious), Key(BindAction::WeaponNext)}, " and "},
    {"VEWEP", "~O~", {Key(BindAction::Attack), None()}, ""},                       // vehicle weapon
    {"VEWEU", "analog stick up and analog stick down",                             // FHOSE_2 cannon aim
     {Key(BindAction::Up), Key(BindAction::Down)}, " and "},
};
const uint32 nControlTokens = sizeof(aControlTokens) / sizeof(aControlTokens[0]);

const CControlToken *FindControlToken(const char *token) {
    for (const CControlToken &entry : aControlTokens)
        if (std::strcmp(entry.m_Token, token) == 0) return &entry;
    return nullptr;
}

namespace {

std::string PartName(const CControlPart &part, lcs::HintStyle style) {
    switch (part.m_Kind) {
    case CONTROLPART_ACTION: return lcs::lcs_hint_action_name(part.m_Action, style);
    case CONTROLPART_LOOK: return lcs::lcs_hint_look_name(style);
    case CONTROLPART_ZOOM_IN: return lcs::lcs_hint_zoom_name(true, style);
    case CONTROLPART_ZOOM_OUT: return lcs::lcs_hint_zoom_name(false, style);
    case CONTROLPART_NONE: break;
    }
    return "";
}

constexpr uint16 kTilde = '~';
constexpr uint32 kLanguage = 0x08B59B5Cu;  // 0 English
constexpr int32 kMaxToken = 63;

}  // namespace

// 0x0887B534
int32 ResolveControlToken(uint32 src, uint32 out) {
    const lcs::HintStyle style = lcs::lcs_hint_style();
    if (style == lcs::HintStyle::Original) return -1;

    // Find the token exactly as the original does. When src[0] is not '~' it
    // skips to the first '~' after it; the count starts at 1 either way and
    // grows by one per token character.
    uint32 cursor = src + 2u;
    if (guest_ref<uint16>(src) != kTilde) {
        int32 guard = 0;
        while (guest_ref<uint16>(cursor) != kTilde && guard++ < kMaxToken) cursor += 2u;
        cursor += 2u;
    }
    char token[kMaxToken + 1] = {};
    int32 length = 0;
    int32 consumed = 1;
    for (uint16 ch = guest_ref<uint16>(cursor); ch != kTilde && ch != 0u; ch = guest_ref<uint16>(cursor)) {
        if (length >= kMaxToken) return -1;  // not a token; let the original deal with it
        token[length++] = static_cast<char>(ch < 0x80u ? ch : '?');
        ++consumed;
        cursor += 2u;
    }
    if (guest_ref<uint16>(cursor) != kTilde) return -1;  // unterminated: the original's business

    const CControlToken *entry = FindControlToken(token);
    if (entry == nullptr) return -1;

    std::string text = PartName(entry->m_Parts[0], style);
    if (entry->m_Parts[1].m_Kind != CONTROLPART_NONE) {
        const std::string second = PartName(entry->m_Parts[1], style);
        if (second != text) {
            // The joiners are English; other languages get a neutral slash.
            const bool english = guest_ref<uint32>(kLanguage) == 0u;
            const char *joiner = english || std::strcmp(entry->m_Joiner, " + ") == 0 ? entry->m_Joiner : " / ";
            text += joiner;
            text += second;
        }
    }
    if (text.empty()) return -1;

    // The caller's buffer is 0x200 bytes and zeroed; keep well inside it.
    const std::size_t count = text.size() < 200u ? text.size() : 200u;
    for (std::size_t i = 0; i < count; ++i)
        guest_ref<uint16>(out + static_cast<uint32>(i) * 2u) = static_cast<uint8>(text[i]);
    guest_ref<uint16>(out + static_cast<uint32>(count) * 2u) = 0u;
    return consumed;
}

}  // namespace lcs::game
