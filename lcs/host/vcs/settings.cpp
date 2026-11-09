// See settings.h. Adapted from VCS Recomp (GPL-3.0; see lcs/VCS_IMPORT.md).
#include "settings.h"

#include <algorithm>
#include <unordered_map>

namespace settings {
namespace {

std::vector<Spec> g_specs;
std::unordered_map<std::string, std::size_t> g_index;
std::unordered_map<std::string, int> g_values, g_start_values;

bool valid(const Spec &s, int v) {
    switch (s.type) {
    case Type::Toggle: return v == 0 || v == 1;
    case Type::Integer: return v >= s.min && v <= s.max;
    case Type::Action: return false;
    case Type::Choice:
        if (s.dynamicChoices) return true;
        return std::any_of(s.choices.begin(), s.choices.end(), [&](const Choice &c) { return c.value == v; });
    }
    return false;
}

}  // namespace

void add(Spec spec) {
    const int start = spec.read ? spec.read() : spec.defaultValue;
    g_index[spec.key] = g_specs.size();
    g_values[spec.key] = start;
    g_start_values[spec.key] = start;
    g_specs.push_back(std::move(spec));
}

const std::vector<Spec> &all() { return g_specs; }

std::vector<std::string> pages() {
    std::vector<std::string> out;
    for (const Spec &s : g_specs) {
        if (pageHidden && pageHidden(s.page)) continue;
        if (std::find(out.begin(), out.end(), s.page) == out.end()) out.push_back(s.page);
    }
    return out;
}

int value(const std::string &key) {
    const auto it = g_values.find(key);
    return it != g_values.end() ? it->second : 0;
}

bool changedSinceStart(const std::string &key) {
    const auto it = g_start_values.find(key);
    return it != g_start_values.end() && it->second != value(key);
}

bool set(const std::string &key, int v) {
    const auto it = g_index.find(key);
    if (it == g_index.end()) return false;
    const Spec &s = g_specs[it->second];
    if (!valid(s, v)) return false;
    if (g_values[key] == v) return true;
    g_values[key] = v;
    if (s.persist) s.persist(v);
    if (s.apply == Apply::Live && s.onChange) s.onChange(v);
    return true;
}

void refresh() {
    for (const Spec &s : g_specs)
        if (s.read && s.apply == Apply::Live) g_values[s.key] = s.read();
}

}  // namespace settings
