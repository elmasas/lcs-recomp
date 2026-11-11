#include "decomp.hpp"

#include "game/GameData.hpp"
#include "game/MenuData.hpp"
#include "game/PadDevice.hpp"
#include "guest.hpp"
#include "thunks.hpp"

#include <array>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <string_view>
#include <vector>

namespace lcs::decomp {

std::uint8_t g_hook_active[kHookCount] = {};

namespace {

enum class Mode { Off, On, Verify };
enum class Result { VOID, V0 };
enum class Regions { Pad, PadDevice, Menu, Text };

using Thunk = void (*)(Runtime &, Context &);

struct Hook {
    uint32 address;
    const char *name;
    Thunk thunk;
    Result result;
    Regions regions;
};

constexpr Hook kHooks[] = {
#define DECOMP_FN(address, name, result, regions) {address, #name, &thunk::name, Result::result, Regions::regions},
#include "decomp_functions.def"
#undef DECOMP_FN
};

struct HookStats {
    std::uint64_t calls{};
    std::uint64_t mismatches{};
    std::uint64_t declined{};
};

// A guest function entered through guest_call() returns here; nothing is
// registered at this address, so the dispatch loop below sees it and stops.
constexpr uint32 kReturnSentinel = 0x08803FF0u;
constexpr uint32 kUserRamBase = 0x08800000u;

Runtime *g_runtime{};
std::uint8_t *g_user_ram{};
Mode g_mode = Mode::On;
// Depth of reference runs in progress: hooks stand down so the original runs.
int g_reference_depth{};
// Set by decline(): the thunk that just ran wants the original to run instead.
bool g_declined{};
std::array<HookStats, kHookCount> g_stats{};
std::uint8_t g_scratch[64]{};

struct Region {
    uint32 address;
    uint32 size;
};

void collect_regions(Regions kind, std::vector<Region> &out) {
    using namespace lcs::game;
    out.push_back({address::Pads, 0x180u});
    out.push_back({address::StickFlickLast, 8u});
    out.push_back({address::bDisplayNoControllerMessage, 3u});
    out.push_back({address::byte_08B58CAC, 1u});
    out.push_back({address::byte_08B562F0, 5u});
    if (kind == Regions::Menu) {
        out.push_back({address::FrontEndMenuManager, 0x5A0u});
        // Globals the input handler and its helpers write.
        out.push_back({0x08B59AF0u, 0x90u});  // options, requests and the left/right repeat timers
        out.push_back({0x08B58DDCu, 0x08u});  // int_08B58DDC, bReloadText
        out.push_back({0x08B48FB8u, 0x11u});  // byte_08B48FB9, byte_08B48FC8
        out.push_back({0x08B5E7B0u, 0x01u});
        out.push_back({0x08B355E0u, 0x01u});
    }
    if (kind == Regions::PadDevice) {
        out.push_back({address::PadDeviceInstance, 4u});
        const uint32 device = guest_ref<uint32>(address::PadDeviceInstance);
        if (device != 0u) out.push_back({device, sizeof(CPadDevice)});
    }
}

std::vector<std::uint8_t> snapshot(const std::vector<Region> &regions) {
    std::vector<std::uint8_t> bytes;
    for (const Region &region : regions) {
        const std::uint8_t *source = guest_bytes(region.address, region.size);
        const std::size_t offset = bytes.size();
        bytes.resize(offset + region.size);
        if (source != nullptr) std::memcpy(bytes.data() + offset, source, region.size);
    }
    return bytes;
}

void restore(const std::vector<Region> &regions, const std::vector<std::uint8_t> &bytes) {
    std::size_t offset = 0;
    for (const Region &region : regions) {
        std::uint8_t *destination = guest_bytes(region.address, region.size);
        if (destination != nullptr) std::memcpy(destination, bytes.data() + offset, region.size);
        offset += region.size;
    }
}

void report_mismatch(const Hook &hook, HookStats &stats, const Context &entry, const Context &native,
                     const Context &reference, const std::vector<Region> &regions,
                     const std::vector<std::uint8_t> &native_bytes,
                     const std::vector<std::uint8_t> &reference_bytes) {
    ++stats.mismatches;
    if (stats.mismatches > 5u) return;
    std::fprintf(stderr, "[decomp] MISMATCH %s (%08X) a0=%08X a1=%08X ra=%08X\n", hook.name, hook.address,
                 entry.gpr[4], entry.gpr[5], entry.gpr[31]);
    if (hook.result == Result::V0 && native.gpr[2] != reference.gpr[2])
        std::fprintf(stderr, "[decomp]   v0 rewrite=%08X original=%08X\n", native.gpr[2], reference.gpr[2]);
    std::size_t offset = 0;
    int shown = 0;
    for (const Region &region : regions) {
        for (uint32 i = 0; i < region.size && shown < 12; ++i) {
            const std::uint8_t a = native_bytes[offset + i];
            const std::uint8_t b = reference_bytes[offset + i];
            if (a == b) continue;
            std::fprintf(stderr, "[decomp]   [%08X] rewrite=%02X original=%02X\n", region.address + i, a, b);
            ++shown;
        }
        offset += region.size;
    }
}

bool verify_hook(std::size_t index, Runtime &rt, Context &ctx) {
    if (g_reference_depth != 0) return false;
    const Hook &hook = kHooks[index];
    HookStats &stats = g_stats[index];
    ++stats.calls;

    std::vector<Region> regions;
    collect_regions(hook.regions, regions);
    const std::vector<std::uint8_t> before = snapshot(regions);

    Context native = ctx;
    g_declined = false;
    hook.thunk(rt, native);
    if (g_declined) {
        // Nothing was written; the caller falls through to the original.
        g_declined = false;
        ++stats.declined;
        return false;
    }
    // The rewrite may have created the pad device; compare what both runs can see.
    std::vector<Region> regions_after;
    collect_regions(hook.regions, regions_after);
    const bool same_layout = regions_after.size() == regions.size();
    const std::vector<std::uint8_t> native_bytes = snapshot(regions);
    restore(regions, before);

    Context reference = ctx;
    ++g_reference_depth;
    guest_call(reference, hook.address);
    --g_reference_depth;
    const std::vector<std::uint8_t> reference_bytes = snapshot(regions);

    if (std::getenv("LCS_DECOMP_REGS") != nullptr) {
        // Registers the caller gets back that differ between the rewrite and the original.
        static int reported = 0;
        for (int reg = 1; reg < 32 && reported < 60; ++reg) {
            if (reg == 2 || reg == 26 || reg == 27) continue;
            if (native.gpr[reg] == reference.gpr[reg]) continue;
            ++reported;
            std::fprintf(stderr, "[decomp] REG %s r%d rewrite=%08X original=%08X entry=%08X\n", hook.name, reg,
                         native.gpr[reg], reference.gpr[reg], ctx.gpr[reg]);
        }
    }
    const bool result_differs = hook.result == Result::V0 && native.gpr[2] != reference.gpr[2];
    if (same_layout && (result_differs || native_bytes != reference_bytes))
        report_mismatch(hook, stats, ctx, native, reference, regions, native_bytes, reference_bytes);

    // The original's outcome stands.
    const uint32 return_address = ctx.gpr[31];
    ctx = reference;
    ctx.gpr[31] = return_address;
    return true;
}

void report_verify_summary() {
    std::uint64_t calls = 0, mismatches = 0;
    std::size_t exercised = 0;
    for (std::size_t i = 0; i < kHookCount; ++i) {
        calls += g_stats[i].calls;
        mismatches += g_stats[i].mismatches;
        if (g_stats[i].calls != 0u) ++exercised;
    }
    std::FILE *log = std::fopen("decomp_verify.log", "w");
    for (std::FILE *out : {stderr, log}) {
        if (out == nullptr) continue;
        std::fprintf(out, "[decomp] verify: %zu of %zu functions exercised, %llu calls, %llu mismatches\n",
                     exercised, kHookCount, static_cast<unsigned long long>(calls),
                     static_cast<unsigned long long>(mismatches));
        for (std::size_t i = 0; i < kHookCount; ++i) {
            if (out == stderr && g_stats[i].mismatches == 0u) continue;
            std::fprintf(out, "[decomp]   %08X %-32s calls=%llu mismatches=%llu left_to_original=%llu\n",
                         kHooks[i].address, kHooks[i].name, static_cast<unsigned long long>(g_stats[i].calls),
                         static_cast<unsigned long long>(g_stats[i].mismatches),
                         static_cast<unsigned long long>(g_stats[i].declined));
        }
    }
    if (log != nullptr) std::fclose(log);
}

}  // namespace

void bind_runtime(Runtime &runtime) {
    g_runtime = &runtime;
    g_user_ram = runtime.memory().raw_pointer(kUserRamBase, 1u);
}

Runtime &runtime() noexcept { return *g_runtime; }

std::uint8_t *guest_bytes(uint32 address, std::size_t length) noexcept {
    return g_runtime->memory().raw_pointer(address, length);
}

std::uint8_t *guest_unmapped_scratch() noexcept {
    std::memset(g_scratch, 0, sizeof(g_scratch));
    return g_scratch;
}

uint32 guest_address(const void *pointer) noexcept {
    if (pointer == nullptr) return 0u;
    return kUserRamBase + static_cast<uint32>(static_cast<const std::uint8_t *>(pointer) - g_user_ram);
}

uint32 guest_call(Context &ctx, uint32 address, std::initializer_list<uint32> arguments) {
    Runtime &rt = *g_runtime;
    GuestFrame frame(ctx, 0x20u);
    std::size_t reg = 4;
    for (const uint32 argument : arguments) ctx.gpr[reg++] = argument;
    const uint32 return_address = ctx.gpr[31];
    ctx.gpr[31] = kReturnSentinel;
    ctx.pc = address;
    while (ctx.pc != kReturnSentinel && !rt.stopped()) {
        if (!rt.invoke_isolated_aot(ctx.pc, ctx)) {
            rt.stop("decomp: guest_call reached unregistered code");
            break;
        }
    }
    ctx.gpr[31] = return_address;
    return ctx.gpr[2];
}

uint32 guest_import(Context &ctx, const char *library, uint32 nid, std::initializer_list<uint32> arguments) {
    std::size_t reg = 4;
    for (const uint32 argument : arguments) ctx.gpr[reg++] = argument;
    const uint32 pc = ctx.pc;
    g_runtime->invoke_import(library, nid, ctx);
    ctx.pc = pc;
    return ctx.gpr[2];
}

bool verify_reference_running() noexcept { return g_reference_depth != 0; }

void decline() noexcept { g_declined = true; }

bool run_hook(std::size_t index, Runtime &rt, Context &ctx) {
    if (g_mode == Mode::Verify) return verify_hook(index, rt, ctx);
    g_declined = false;
    kHooks[index].thunk(rt, ctx);
    if (!g_declined) return true;
    g_declined = false;
    return false;
}

void install(Runtime &runtime) {
    bind_runtime(runtime);

    const char *mode = std::getenv("LCS_DECOMP");
    const std::string_view requested = mode != nullptr ? mode : "on";
    if (requested == "off" || requested == "0") g_mode = Mode::Off;
    else if (requested == "verify") g_mode = Mode::Verify;
    else g_mode = Mode::On;

    for (std::size_t i = 0; i < kHookCount; ++i) g_hook_active[i] = g_mode != Mode::Off ? 1u : 0u;

    if (const char *skip = std::getenv("LCS_DECOMP_SKIP")) {
        const char *cursor = skip;
        while (*cursor != '\0') {
            char *end = nullptr;
            const uint32 address = static_cast<uint32>(std::strtoul(cursor, &end, 16));
            if (end == cursor) break;
            const std::size_t index = hook_index(address);
            if (index < kHookCount) g_hook_active[index] = 0u;
            cursor = *end == ',' ? end + 1 : end;
        }
    }

    // The menu tables in game/MenuData.cpp replace the EBOOT's copies.
    const uint32 menu_differences = game::CompareMenuData();
    if (menu_differences != 0u || g_mode == Mode::Verify)
        std::fprintf(stderr, "[decomp] menu tables differ from the EBOOT in %u bytes\n", menu_differences);
    if (g_mode == Mode::On) game::InstallMenuData();

    if (g_mode == Mode::Verify) std::atexit(&report_verify_summary);
    std::fprintf(stderr, "[decomp] %zu hand-written functions, mode=%s\n", kHookCount,
                 g_mode == Mode::Off ? "off" : g_mode == Mode::Verify ? "verify" : "on");
}

}  // namespace lcs::decomp
