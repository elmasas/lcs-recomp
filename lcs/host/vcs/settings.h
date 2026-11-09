// Player settings: a registry of typed settings the menu (settings_menu.h) is generated from, so a new setting is one
// add(). Adapted from VCS Recomp's src/settings/settings.h (GPL-3.0; see lcs/VCS_IMPORT.md). The values live in
// LCSNative.ini and the render configuration, so this keeps no file of its own: `read` gives a setting's current value
// and `persist` writes it back.
#pragma once

#include <functional>
#include <string>
#include <vector>

namespace settings {

enum class Type {
    Toggle,   // 0 / 1
    Choice,   // one of `choices` (their values)
    Integer,  // min..max
    Action,   // a button: onChange(0) when pressed; no value
};

enum class Apply {
    Live,     // onChange runs at once
    Restart,  // takes effect at the next start
};

struct Choice {
    std::string label;
    int value = 0;
};

struct Spec {
    std::string key;      // unique, e.g. "rendering.ViewDistance"
    std::string page;     // menu page (a tab)
    std::string section;  // heading inside the page
    std::string label;
    std::string help;     // one line, shown for the selected setting
    Type type = Type::Toggle;
    int defaultValue = 0;
    int min = 0, max = 1;       // Integer
    std::string format = "%d";  // Integer, as shown
    std::vector<Choice> choices;
    std::function<std::vector<Choice>()> dynamicChoices;  // Choice: asked each time the list is shown
    Apply apply = Apply::Live;
    std::function<int()> read;           // the current value
    std::function<void(int)> persist;    // writes it to LCSNative.ini
    std::function<void(int)> onChange;   // applies it to the running game
    std::function<bool()> locked;        // another setting decides this one for now
    std::string lockedNote;
    std::string button;  // Action: its text
    std::function<std::string()> buttonText;  // Action: its text, when it changes
};

// A key is being rebound: the menu's own keys (Esc, Q, E) don't act.
inline bool inputCaptured = false;
// Pages to leave out of the menu for now, as on the main menu, which has no game running.
inline std::function<bool(const std::string &)> pageHidden;

void add(Spec spec);
const std::vector<Spec> &all();
std::vector<std::string> pages();  // in registration order

int value(const std::string &key);
bool set(const std::string &key, int v);  // validates, persists, applies when Live; false if refused
bool changedSinceStart(const std::string &key);
void refresh();  // takes the live values (the menu calls it when it opens)

}  // namespace settings
