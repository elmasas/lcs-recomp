#include "lcs_region.hpp"
#include <algorithm>
#include <cstdint>
#include <cstring>
#include <fstream>
#include <iterator>
#include <string>
#include <vector>

namespace lcs {

namespace {

std::uint32_t read_le(const std::vector<char> &data, std::size_t offset, std::size_t bytes) {
    std::uint32_t value = 0u;
    if (offset + bytes > data.size()) return value;
    for (std::size_t index = 0; index < bytes; ++index)
        value |= static_cast<std::uint32_t>(static_cast<unsigned char>(data[offset + index])) << (8u * index);
    return value;
}

std::string read_string(const std::vector<char> &data, std::size_t offset, std::size_t limit) {
    std::string out;
    while (offset < limit && offset < data.size() && data[offset] != '\0')
        out.push_back(data[offset++]);
    return out;
}

// PARAM.SFO is a 20-byte header followed by 16-byte records, one per key. The
// key area starts right after the table, so it bounds the record count.
bool parse_sfo(const std::filesystem::path &path, RegionInfo &out) {
    std::ifstream file(path, std::ios::binary);
    if (!file) return false;
    const std::vector<char> data((std::istreambuf_iterator<char>(file)),
                                 std::istreambuf_iterator<char>());
    if (data.size() < 36 || std::memcmp(data.data(), "\0PSF", 4) != 0) return false;

    const std::size_t key_start = read_le(data, 8, 4);
    const std::size_t data_start = read_le(data, 12, 4);
    for (std::size_t base = 20; base + 16 <= key_start; base += 16) {
        const std::size_t key_offset = read_le(data, base, 2);
        const std::size_t value_length = read_le(data, base + 4, 4);
        const std::size_t value_offset = read_le(data, base + 12, 4);
        const std::string name =
            read_string(data, key_start + key_offset, std::min(data.size(), key_start + key_offset + 32));
        const std::string value =
            read_string(data, data_start + value_offset, data_start + value_offset + value_length);
        if (name == "DISC_ID")
            out.disc_id = value;
        else if (name == "TITLE")
            out.title = value;
    }
    return !out.disc_id.empty();
}

}  // namespace

RegionInfo detect_region(const std::filesystem::path &game_root) {
    RegionInfo info;
    if (parse_sfo(game_root / "PSP_GAME" / "PARAM.SFO", info)) {
        info.disc_id.erase(std::remove(info.disc_id.begin(), info.disc_id.end(), '-'),
                           info.disc_id.end());
        info.known = true;
        info.is_primary = (info.disc_id == kPrimaryDiscId);
    }
    return info;
}

}  // namespace lcs
