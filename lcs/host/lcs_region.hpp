#pragma once
#include <filesystem>
#include <string>
#include <cstdint>

namespace lcs {

struct RegionInfo {
    std::string disc_id;    // stored without the dash redump adds, e.g. ULUS10041
    std::string title;
    bool known = false;
    bool is_primary = false;  // ULUS10041
};

// Reads PARAM.SFO from game_root/PSP_GAME/PARAM.SFO
RegionInfo detect_region(const std::filesystem::path &game_root);

// Known primary (best supported) disc
inline constexpr const char *kPrimaryDiscId = "ULUS10041";

}  // namespace lcs
