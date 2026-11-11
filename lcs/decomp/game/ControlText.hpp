// Control names inside hint text: "~k~ ~TOKEN~" (ULUS-10041 v1.05).
//
// The hint boxes, the control legend and a few prompts name a control with
// "~k~ ~TOKEN~". 0x08879F84 walks the string and hands each one to
// 0x0887B534, which builds the GXT key "C<setup><TOKEN>" (setup is
// Pads[0].Mode), copies that text ("L button", "~X~") into the string and
// returns how many characters of "~TOKEN~" it used.
//
// On PC the replacement writes the bound key instead, San Andreas style
// (host/lcs_hint_keys.cpp names it). The table below is every token the
// English text uses, with what PSP setup 1 shows and what PC shows.
#pragma once

#include "../guest.hpp"

#include "lcs_key_bindings.hpp"

namespace lcs::game {

using namespace lcs::decomp;

enum eControlPart : uint8 {
    CONTROLPART_NONE,
    CONTROLPART_ACTION,    // the key bound to m_Action
    CONTROLPART_LOOK,      // the mouse (or the camera stick)
    CONTROLPART_ZOOM_IN,   // the wheel, while aiming a scoped weapon
    CONTROLPART_ZOOM_OUT,
};

struct CControlPart {
    eControlPart m_Kind;
    lcs::BindAction m_Action;
};

struct CControlToken {
    const char *m_Token;     // as written after "~k~ "
    const char *m_PspText;   // C0<token> in ENGLISH.GXT, for reference
    CControlPart m_Parts[2];
    const char *m_Joiner;    // between the two parts: " and ", " + ", " or "
};

extern const CControlToken aControlTokens[];
extern const uint32 nControlTokens;

[[nodiscard]] const CControlToken *FindControlToken(const char *token);

namespace address {
inline constexpr uint32 ResolveControlToken = 0x0887B534u;
}

// 0x0887B534. src points at "~TOKEN~..." just past "~k~ "; out is a zeroed
// wide buffer the caller splices in. Returns the characters of "~TOKEN"
// consumed (the caller skips one more for the closing '~'). Returns -1,
// with nothing written, when PC text is not wanted for this token; the thunk
// then leaves the call to the original.
[[nodiscard]] int32 ResolveControlToken(uint32 src, uint32 out);

}  // namespace lcs::game
