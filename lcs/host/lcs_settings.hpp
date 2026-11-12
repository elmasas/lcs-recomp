#pragma once
// Options: every setting of the host as an int, with how to get, store and take a new value. The F10 menu and the main
// menu's Options are both drawn from this one list, so an option declared here shows in both.

#include <functional>
#include <string>
#include <vector>

namespace opts {

// What kind of control an option has: an on/off switch, a list of entries, a number in a range, or a button.
enum class Kind { Switch, List, Number, Button };
// When a new value takes effect: now, or the next time the game is launched (it's stored either way).
enum class When { Now, NextLaunch };

// One line of a list: what it shows, and the value it stands for.
struct Entry {
    std::string text;
    int value = 0;
};

struct Setting {
    // Where it shows, and what it says.
    std::string id;     // unique, as "section.Key" in the ini
    std::string tab;
    std::string group;  // a heading inside the tab
    std::string title;
    std::string about;  // one line, shown when the option is selected
    Kind kind = Kind::Switch;
    When when = When::Now;
    int fallback = 0;  // the value "reset" goes back to

    // The value.
    std::function<int()> get_value;   // the value in effect; fallback when not given
    std::function<void(int)> store;   // writes a new value to the ini
    std::function<void(int)> take;    // applies a new value now, or runs the button

    // Per kind.
    int lo = 0, hi = 1;                               // Number
    std::string shown_as = "%d";                      // Number, printf style
    std::vector<Entry> entries;                       // List
    std::function<std::vector<Entry>()> entries_now;  // List: built when needed instead; any value goes
    std::string button_text;                          // Button
    std::function<std::string()> button_text_now;     // Button: when its text changes

    // Off for now, because another option decides it.
    std::function<bool()> held;
    std::string held_note;  // added to `about` meanwhile
};

// Set while other code is capturing a key: the menus' own keys do nothing then.
inline bool keys_captured = false;
// Set by the main menu to leave out the tabs that need a game running. Empty: every tab shows.
inline std::function<bool(const std::string &)> tab_hidden;

// Adds an option. Its value starts as get_value() when given, otherwise fallback.
void declare(Setting setting);
// Every option, in the order declared.
const std::vector<Setting> &declared();
// The tabs that have an option, in the order first used, without hidden ones.
std::vector<std::string> tabs();
// The value now; 0 for an unknown id.
int current(const std::string &id);
// Stores and saves a value, and applies it if it takes effect now. False for an unknown id or a value the option
// can't have.
bool change(const std::string &id, int value);
// Whether the value is no longer the one the game was launched with.
bool changed_since_launch(const std::string &id);
// Reads again every option that takes effect now and has get_value(): the game may have changed it.
void reload();

}  // namespace opts
