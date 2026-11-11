// The options store: every declared option with its value now and its value at launch. See lcs_settings.hpp.

#include "lcs_settings.hpp"

#include <algorithm>
#include <cstddef>
#include <unordered_map>
#include <utility>

namespace opts {
namespace {

// Everything the store keeps, built on first use so that declare() works from static initialisers in any file.
struct Store {
    std::vector<Setting> settings;   // in the order declared
    std::vector<int> now;            // the value in effect, per setting
    std::vector<int> at_launch;      // the value when it was declared, per setting
    std::unordered_map<std::string, std::size_t> index;
};

Store &store() {
    static Store instance;
    return instance;
}

// The position of an option, or nothing for an unknown id.
const std::size_t *find(const std::string &id) {
    const Store &s = store();
    const auto it = s.index.find(id);
    return it == s.index.end() ? nullptr : &it->second;
}

int initial_value(const Setting &setting) {
    return setting.get_value ? setting.get_value() : setting.fallback;
}

// Whether `value` is one the option can hold.
bool allowed(const Setting &setting, int value) {
    switch (setting.kind) {
    case Kind::Switch:
        return value == 0 || value == 1;
    case Kind::List:
        if (setting.entries_now) return true;
        return std::any_of(setting.entries.begin(), setting.entries.end(),
                           [value](const Entry &entry) { return entry.value == value; });
    case Kind::Number:
        return value >= setting.lo && value <= setting.hi;
    case Kind::Button:
        return false;
    }
    return false;
}

}  // namespace

void declare(Setting setting) {
    Store &s = store();
    const int value = initial_value(setting);
    if (const auto it = s.index.find(setting.id); it != s.index.end()) {
        // Declared again: the newer description wins, in the place of the first one.
        const std::size_t at = it->second;
        s.settings[at] = std::move(setting);
        s.now[at] = value;
        s.at_launch[at] = value;
        return;
    }
    s.index.emplace(setting.id, s.settings.size());
    s.settings.push_back(std::move(setting));
    s.now.push_back(value);
    s.at_launch.push_back(value);
}

const std::vector<Setting> &declared() {
    return store().settings;
}

std::vector<std::string> tabs() {
    std::vector<std::string> names;
    for (const Setting &setting : store().settings) {
        if (std::find(names.begin(), names.end(), setting.tab) != names.end()) continue;
        if (tab_hidden && tab_hidden(setting.tab)) continue;
        names.push_back(setting.tab);
    }
    return names;
}

int current(const std::string &id) {
    const std::size_t *at = find(id);
    return at != nullptr ? store().now[*at] : 0;
}

bool change(const std::string &id, int value) {
    const std::size_t *at = find(id);
    if (at == nullptr) return false;
    Store &s = store();
    const std::size_t i = *at;
    const Setting &setting = s.settings[i];
    if (!allowed(setting, value)) return false;
    if (s.now[i] == value) return true;
    s.now[i] = value;
    if (setting.store) setting.store(value);
    if (setting.when == When::Now && setting.take) setting.take(value);
    return true;
}

bool changed_since_launch(const std::string &id) {
    const std::size_t *at = find(id);
    return at != nullptr && store().now[*at] != store().at_launch[*at];
}

void reload() {
    Store &s = store();
    for (std::size_t i = 0; i < s.settings.size(); ++i) {
        const Setting &setting = s.settings[i];
        if (setting.when == When::Now && setting.get_value) s.now[i] = setting.get_value();
    }
}

}  // namespace opts
