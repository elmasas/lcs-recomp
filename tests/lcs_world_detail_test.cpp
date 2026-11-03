#include "lcs_world_detail.hpp"
#include "lcs_render_config.hpp"
#include "psprecomp/runtime.hpp"

#include <array>
#include <bit>
#include <chrono>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <stdexcept>

namespace {
using Bytes = std::vector<std::uint8_t>;
void check(bool value, const char *message) { if (!value) throw std::runtime_error(message); }
void put(Bytes &b, std::size_t at, std::uint32_t value, unsigned size = 4) {
    for (unsigned i = 0; i < size; ++i) b.at(at + i) = (value >> (i * 8)) & 255;
}
std::uint32_t get(const Bytes &b, std::size_t at) {
    std::uint32_t value{};
    for (unsigned i = 0; i < 4; ++i) value |= std::uint32_t(b.at(at + i)) << (i * 8);
    return value;
}
std::uint32_t command(float value) { return 0x3B000000u | (std::bit_cast<std::uint32_t>(value) >> 8); }

lcs::WorldSectorSource source(bool neighbour) {
    lcs::WorldSectorSource s;
    s.x = neighbour ? 24 : 25; s.y = 16;
    auto &b = s.data;
    b.resize(48);
    for (unsigned pass = 0; pass < 8; ++pass) {
        put(b, 8 + pass * 4, b.size() + 32);
        s.relocations.push_back(40 + pass * 4);
        if (pass == 1 || pass == 3 || pass == 4) {
            const std::vector<unsigned> ids = pass == 1
                ? (neighbour ? std::vector<unsigned>{200} : std::vector<unsigned>{100, 200})
                : std::vector<unsigned>{pass == 4 ? (neighbour ? 4u : 3u) : (neighbour ? 2u : 1u)};
            for (auto id : ids) {
                const auto at = b.size(); b.resize(at + 68);
                put(b, at, id, 2); put(b, at + 2, id, 2);
                // Coarse 100 and detailed 2 describe the same world-space sphere.
                put(b, at + 4, id == 100 || id == 2 ? 0x5640 : 0x6000, 2);
                put(b, at + 10, 0x5400, 2); // radius 64
                put(b, at + 12, 0x3A000000);
                for (unsigned i = 0; i < 12; ++i) put(b, at + 16 + i * 4, command(0));
                put(b, at + 52, command(neighbour ? 20 : 10));
            }
        }
    }
    put(b, 0, b.size() + 32); put(b, 4, 1, 2); s.relocations.push_back(32);
    const auto overlay = b.size(); b.resize(overlay + 8);
    put(b, overlay, neighbour ? 8 : 7);
    put(b, overlay + 4, b.size() + 32); s.relocations.push_back(overlay + 36);
    const auto resource = b.size(); b.resize(resource + 12);
    put(b, resource, 0x12345678); put(b, resource + 4, resource + 40);
    put(b, resource + 8, 0x87654321); s.relocations.push_back(resource + 36);
    put(b, 40, 1, 2); put(b, 44, b.size() + 32); s.relocations.push_back(76);
    const auto swap = b.size(); b.resize(swap + 4); put(b, swap, neighbour ? 0x10002 : 0x10001);
    s.data_size = b.size() + 32;
    return s;
}

void pure_merge() {
    auto a = source(false), b = source(true);
    const auto merged = lcs::merge_world_sectors({a, b});
    const auto &data = merged.data;
    check(get(data, 16) - get(data, 12) == 68, "coarse replacement was not removed");
    check(get(data, 24) - get(data, 20) == 136, "detailed models were not combined");
    check(get(data, 28) - get(data, 24) == 68, "blended scenery must retain target membership");
    auto unaligned = b;
    unaligned.data.push_back(0); ++unaligned.data_size;
    const auto aligned = lcs::merge_world_sectors({a, unaligned});
    check((get(aligned.data, 8) & 15) == 0, "merged GE lists must be aligned");
    check(get(data, get(data, 12) - 32) % 65536 == 200, "far LOD was removed");
    const auto donor = get(data, 20) - 32 + 68;
    check(get(data, donor + 52) == command(-105), "donor matrix was not translated to the target sector");
    auto odd_row = b;
    odd_row.y = 17;
    const auto staggered = lcs::merge_world_sectors({a, odd_row});
    const auto odd_instance = get(staggered.data, 20) - 32 + 68;
    check(get(staggered.data, odd_instance + 52) == command(-167.5f) &&
          get(staggered.data, odd_instance + 56) == command(108.25f),
          "staggered-row donor translation incorrect");
    auto other_coarse_pass = b;
    // Move target's coarse 100 into the donor's other coarse pass without
    // changing list sizes; its matching high model must not imply omission.
    const auto coarse_start = get(other_coarse_pass.data, 12) - 32;
    put(other_coarse_pass.data, coarse_start, 100, 2);
    put(other_coarse_pass.data, coarse_start + 2, 100, 2);
    put(other_coarse_pass.data, 12, get(other_coarse_pass.data, 16));
    const auto retained = lcs::merge_world_sectors({a, other_coarse_pass});
    check(get(retained.data, 16) - get(retained.data, 12) == 136,
          "coarse model retained in another donor pass must remain");
    const auto overlays = get(data, 0) - 32;
    check(data[4] == 2, "overlay resources were not combined");
    for (unsigned i = 0; i < 2; ++i) {
        const auto resource = get(data, overlays + i * 8 + 4) - 32;
        check(get(data, resource) == 0x12345678, "overlay points at the wrong resource");
        check(get(data, get(data, resource + 4) - 32) == 0x87654321, "nested resource relocation was lost");
    }
    for (auto at : merged.relocations) {
        const auto pointer = get(data, at - 32);
        check(pointer >= 32 && pointer <= data.size() + 32, "merged relocation escaped its chunk");
    }
    auto unmatched = b;
    const auto high = get(unmatched.data, 20) - 32;
    put(unmatched.data, high + 4, 0x6400, 2);
    const auto preserved = lcs::merge_world_sectors({a, unmatched});
    check(get(preserved.data, 16) - get(preserved.data, 12) == 136,
          "LOD omitted by a donor without a matching high model must remain");
    put(unmatched.data, high + 16, 32); // Valid pointer: exercise the instance-specific rejection.
    unmatched.relocations.push_back(get(unmatched.data, 20) + 16);
    bool pointer_rejected = false;
    try { (void)lcs::merge_world_sectors({a, unmatched}); } catch (const std::runtime_error &) { pointer_rejected = true; }
    check(pointer_rejected, "instance pointer must not be copied without relocation");
    auto blended = b;
    const auto part = get(blended.data, 24) - 32;
    put(blended.data, part + 4, 0x5640, 2);
    const auto with_parts = lcs::merge_world_sectors({a, blended});
    check(get(with_parts.data, 16) - get(with_parts.data, 12) == 136,
          "coarse model with missing blended replacement parts must remain");
    auto cross_pass = b;
    const auto opaque = get(cross_pass.data, 20) - 32;
    put(cross_pass.data, opaque, 1, 2); put(cross_pass.data, opaque + 2, 1, 2);
    put(cross_pass.data, 20, get(cross_pass.data, 24));
    const auto unique = lcs::merge_world_sectors({a, cross_pass});
    check(get(unique.data, 20) == get(unique.data, 16), "donor duplicated target in another pass");
    auto precise = a;
    put(precise.data, get(precise.data, 20) - 32 + 52, command(0.000001f));
    const auto exact = lcs::merge_world_sectors({precise, b});
    check(get(exact.data, get(exact.data, 20) - 32 + 52) == command(0.000001f),
          "target matrix translation changed during merge");
    for (bool duplicate : {false, true}) {
        auto invalid = b;
        if (duplicate) invalid.relocations.push_back(invalid.relocations.front());
        else put(invalid.data, get(invalid.data, 0) - 32 + 4, 0);
        bool rejected = false;
        try { (void)lcs::merge_world_sectors({a, invalid}); }
        catch (const std::runtime_error &) { rejected = true; }
        check(rejected, "malformed overlay or duplicate relocation accepted");
    }
    b.relocations.push_back(1);
    bool rejected = false;
    try { (void)lcs::merge_world_sectors({a, b}); } catch (const std::runtime_error &) { rejected = true; }
    check(rejected, "invalid relocations must be rejected before guest memory is written");
}

void load_and_switch(const std::filesystem::path &root) {
    const auto path = root / "PSP_GAME/USRDIR/MODELS";
    std::filesystem::create_directories(path);
    auto a = source(false), b = source(true);
    std::ofstream image(path / "INDUST.IMG", std::ios::binary);
    auto emit = [&](const lcs::WorldSectorSource &s) {
        const auto offset = static_cast<std::uint32_t>(image.tellp());
        image.write(reinterpret_cast<const char *>(s.data.data()), s.data.size());
        for (auto at : s.relocations) {
            Bytes word(4); put(word, 0, at);
            image.write(reinterpret_cast<const char *>(word.data()), word.size());
        }
        return offset;
    };
    const auto off_b = emit(b), off_a = emit(a); image.close();
    psprecomp::Runtime runtime(64u * 1024u * 1024u);
    runtime.set_game_root(root);
    auto &m = runtime.memory();
    constexpr std::uint32_t level = 0x08800000, world = 0x08802000, headers = 0x08800400, list = 0x08803000;
    for (unsigned row = 0; row <= 36; ++row) {
        m.store32(level + 4 + row * 8, row <= 16 ? headers : headers + 64);
        m.store32(level + 8 + row * 8, 24);
    }
    auto header = [&](std::uint32_t at, const lcs::WorldSectorSource &s, std::uint32_t offset) {
        m.store32(at, 0x57524C44);
        m.store32(at + 8, s.data_size + s.relocations.size() * 4);
        m.store32(at + 12, s.data_size); m.store32(at + 16, s.data_size);
        m.store32(at + 20, s.relocations.size()); m.store32(at + 24, offset);
    };
    header(headers, b, off_b); header(headers + 32, a, off_a);
    m.store32(world + 12, 1); m.store32(world + 16, level);
    m.store32(world + 32, list); m.store32(world + 36, list + 4);
    m.store32(list, lcs::kWorldBufferBase);
    lcs::reset_world_detail(); lcs::lcs_set_view_distance(2);
    check(lcs::expand_world_sector(runtime, world, headers + 32, lcs::kWorldBufferBase), "native expansion failed");
    const auto count = [&](unsigned pass) {
        return (m.load32(lcs::kWorldBufferBase + 12 + pass * 4) -
                m.load32(lcs::kWorldBufferBase + 8 + pass * 4)) / 68;
    };
    check(count(1) == 1 && count(3) == 2, "native expanded lists incorrect");
    check(!lcs::select_world_detail(runtime, world), "unchanged detail must not reactivate resources");
    constexpr auto previous = lcs::kWorldBufferBase + lcs::kWorldBufferSize;
    lcs::lcs_set_view_distance(1.75f);
    check(lcs::expand_world_sector(runtime, world, headers + 32, previous), "previous sector load failed");
    m.store32(world + 76, list + 16); m.store32(world + 80, list + 20);
    m.store32(list + 16, previous);
    const auto previous_pass = m.load32(previous + 20);
    // Additional current entries are not initialized by the game's activation
    // routine either; only the first current entry may change lists.
    m.store32(list + 4, previous); m.store32(world + 36, list + 8);
    std::array<std::uint32_t, 12> previous_header{};
    for (unsigned i = 0; i < previous_header.size(); ++i)
        previous_header[i] = m.load32(previous + i * 4);
    lcs::lcs_set_view_distance(2);
    check(!lcs::select_world_detail(runtime, world), "unchanged current sector must not reactivate previous lists");
    check(m.load32(previous + 20) == previous_pass, "fading previous sector must keep its initialized lists");
    m.store32(lcs::kWorldBufferBase + 20, previous_pass);
    check(lcs::select_world_detail(runtime, world), "a change beyond pass zero must request activation");
    check(count(3) == 2, "current detailed lists were not restored");
    lcs::lcs_set_view_distance(1.75f);
    for (unsigned pass : {1u, 2u}) {
        check(!lcs::request_world_detail_refresh(runtime, world, pass),
              "later render passes must not replace collected geometry");
        check(count(1) == 1 && count(3) == 2,
              "pending detail changes must wait for the first render pass");
    }
    lcs::lcs_set_view_distance(2);
    constexpr std::uint32_t activation_stack = 0x08804000;
    m.store32(world + 44, 25); m.store32(world + 48, 16);
    m.store32(world + 52, std::bit_cast<std::uint32_t>(1.5f));
    lcs::lcs_set_view_distance(1.75f);
    check(!lcs::request_world_detail_refresh(runtime, world, 1) &&
          !lcs::request_world_detail_refresh(runtime, world, 2),
          "later passes must not request activation");
    check(!lcs::begin_world_detail_refresh(runtime, world, activation_stack),
          "refresh must require a request");
    check(lcs::request_world_detail_refresh(runtime, world, 0), "first pass must request pending detail change");
    check(count(1) == 1 && count(3) == 2, "request must not modify live lists before activation");
    check(lcs::begin_world_detail_refresh(runtime, world, activation_stack), "refresh request was not consumed");
    check(m.load32(world + 32) == list && m.load32(list) == lcs::kWorldBufferBase &&
          m.load32(world + 76) == list + 16 && m.load32(list + 16) == previous,
          "detail refresh must not swap active and fading sectors");
    check(m.load32(activation_stack + 16) == std::bit_cast<std::uint32_t>(1187.5f) &&
          m.load32(activation_stack + 20) == std::bit_cast<std::uint32_t>(-213.875f) &&
          m.load32(activation_stack + 24) == std::bit_cast<std::uint32_t>(1.5f),
          "refresh must rebuild matrices relative to the current sector origin");
    check(!lcs::begin_world_detail_refresh(runtime, world, activation_stack), "refresh request consumed twice");
    check(lcs::select_world_detail(runtime, world), "activation must select pending lists");
    lcs::lcs_set_view_distance(2);
    check(lcs::select_world_detail(runtime, world), "restore detailed lists after refresh test");
    m.store32(world + 48, 17);
    lcs::lcs_set_view_distance(1.75f);
    check(lcs::request_world_detail_refresh(runtime, world, 0) &&
          lcs::begin_world_detail_refresh(runtime, world, activation_stack), "odd-row refresh failed");
    check(m.load32(activation_stack + 16) == std::bit_cast<std::uint32_t>(1125.f) &&
          m.load32(activation_stack + 20) == std::bit_cast<std::uint32_t>(-105.625f),
          "refresh must preserve staggered odd-row sector origins");
    m.store32(world + 48, 16);
    lcs::lcs_set_view_distance(2);
    bool previous_detail = true;
    for (float distance : {1.f, 1.25f, 1.5f, 1.75f, 1.999f, 2.f, 2.5f, 3.f, 4.f,
                           3.f, 2.5f, 2.f, 1.999f, 1.75f, 2.f}) {
        lcs::lcs_set_view_distance(distance);
        const bool detailed = distance >= 2.f;
        check(lcs::select_world_detail(runtime, world) == (detailed != previous_detail),
              "only crossing the detail boundary must request resource activation");
        check(count(1) == (detailed ? 1u : 2u) && count(3) == (detailed ? 2u : 1u),
              "distance 2 and above must select detailed scenery; below 2 must select original");
        for (unsigned i = 0; i < previous_header.size(); ++i)
            check(m.load32(previous + i * 4) == previous_header[i],
                  "live detail changes must preserve fading and additional current chunks");
        previous_detail = detailed;
    }
    const auto overlays = m.load32(lcs::kWorldBufferBase);
    const auto resource = m.load32(overlays + 4);
    check(m.load32(resource) == 0x12345678 && m.load32(m.load32(resource + 4)) == 0x87654321,
          "native pointer relocation incorrect");
    // An unsupported neighbour must leave the target usable.
    m.store32(headers, 0);
    check(lcs::expand_world_sector(runtime, world, headers + 32, lcs::kWorldBufferBase),
          "bad neighbour discarded the valid target");
    check(count(3) == 1, "bad neighbour was included");
    m.store32(headers, 0x57524C44);
    constexpr auto offset = lcs::kWorldBufferBase + 4096;
    check(lcs::expand_world_sector(runtime, world, headers + 32, offset),
          "nonzero buffer offset expansion failed");
    check(m.load32(world + 124) + 0x106800u <= lcs::kWorldBufferBase + lcs::kWorldBufferSize,
          "expansion left no room for the next raw load");
    constexpr auto tight = lcs::kWorldBufferBase + lcs::kWorldBufferSize - 0x106800u;
    m.store32(tight, 0x12345678);
    check(!lcs::expand_world_sector(runtime, world, headers + 32, tight),
          "expansion consumed the raw-load reserve");
    check(m.load32(tight) == 0x12345678, "rejected expansion wrote guest memory");
    lcs::reset_world_detail();
}
}

int main() {
    const auto root = std::filesystem::temp_directory_path() /
        ("lcs-world-detail-" + std::to_string(std::chrono::steady_clock::now().time_since_epoch().count()));
    try {
        pure_merge(); load_and_switch(root);
        std::filesystem::remove_all(root);
        std::cout << "world detail merge, relocation, and live selection passed\n";
        return 0;
    } catch (const std::exception &error) {
        std::filesystem::remove_all(root);
        std::cerr << error.what() << '\n';
        return 1;
    }
}
