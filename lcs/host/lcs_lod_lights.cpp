// The logic of Project2DFX's StoryLights (ThirteenAG; source/console/shared/PortableLights.hpp at commit 5bba677, MIT),
// on the host: the plugin runs as MIPS inside the guest, while here the game's code is compiled C++ called through the
// runtime.
// Addresses are for ULUS-10041 v1.05, resolved with the plugin's own instruction patterns.
#include "lcs_lod_lights.hpp"

#include "lcs_perf_log.hpp"
#include "lcs_render_config.hpp"
#include "thirteenag/Lights.hpp"
#include "thirteenag/data/LCSLights.hpp"

#include <algorithm>
#include <bit>
#include <cmath>
#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <vector>

namespace lcs {
namespace {

using console::LightData;
using console::Vector3;
using console::saturate;

constexpr std::uint32_t kCameraPosition = 0x08B832A0u + 0xA70u;
constexpr std::uint32_t kClockHour = 0x08B5E090u;
constexpr std::uint32_t kClockMinute = 0x08B5E091u;
constexpr std::uint32_t kTimer = 0x08B5E02Cu;
constexpr std::uint32_t kCoronaTextures = 0x08B4BDF4u;
constexpr std::uint32_t kScreenWidth = 0x08B5698Cu;
constexpr std::uint32_t kScreenHeight = 0x08B56990u;
constexpr std::uint32_t kArena = 0x08B8EBD0u;  // GE buffer: head at +0, tail at +12

constexpr std::uint32_t kProject = 0x08A25A6Cu;
constexpr std::uint32_t kSprite = 0x08A27194u;
constexpr std::uint32_t kState = 0x088B7AF8u;
constexpr std::uint32_t kFlush = 0x08A26060u;
constexpr std::uint32_t kSignals[2] = {0x08865A68u, 0x08865ACCu};

constexpr std::uint32_t kStateZTest = 6u, kStateZWrite = 8u, kStateSrcBlend = 10u, kStateDestBlend = 11u;
constexpr std::uint32_t kStateRaster = 1u;

// US 1.05 CCoronas: 56 slots of 112 bytes: position at +0, owner at +16 (0: free), draw distance at +36.
constexpr std::uint32_t kCoronas = 0x08E53BC0u, kCoronaStride = 112u, kCoronaCount = 56u, kCoronaOwner = 16u, kCoronaFar = 36u;
// A slot this close to a lamp in the table is that lamp's own light: they differ by hundredths where measured.
constexpr float kSameLampSquared = 1.0f;

// Above the scenery buffers (lcs_world_detail.hpp), which end at 0x0BE00000: a stack and the projection's quads.
constexpr std::uint32_t kScratch = 0x0BF00000u;
constexpr std::uint32_t kScratchStackTop = kScratch + 0x10000u;
constexpr std::uint32_t kPointIn = kScratch, kPointOut = kScratch + 16u, kWidthOut = kScratch + 32u,
                        kHeightOut = kScratch + 36u;

constexpr auto &lights = console::lcs::lights;
constexpr std::size_t kLightCount = sizeof(lights) / sizeof(lights[0]);

struct Visible {
    float distance;
    float x, y, z, width, height;
    std::uint16_t index;
    std::uint8_t alpha;
};

// Past where the game's own pools of light on the road end, a flat patch of the same colour stands in for each: one
// sprite instead of polygons cut from the collision mesh, so it reaches much further for the cost of a distant light.
struct GroundPatch {
    float distance;
    float x, y, z, width, height;
    std::uint16_t index;
    std::uint8_t alpha;
};
constexpr std::size_t kMaxPatches = 300u;
GroundPatch patches[kMaxPatches];
std::size_t patch_count = 0u;
constexpr float kPatchRadius = 9.0f;
constexpr float kPatchStrength = 0.4f;
constexpr float kLampHeight = 10.0f;  // over the road, where no road node is near
float ground_heights[kLightCount]{};
bool grounds_ready = false;

struct GameCorona {
    Vector3 position;
    float far;
};
GameCorona game_coronas[kCoronaCount];
std::uint32_t game_corona_count = 0u;

console::LightGrid<kLightCount> grid;
console::NearestLights<Visible, 2048> visible;
std::uint8_t traffic_groups[kLightCount]{};
bool initialized = false;
bool failed = false;

unsigned traffic_group(float x, float y) noexcept {
    if (y < 0.0f) {
        x = -x;
        y = -y;
    }
    return 0.5f * y - 0.8660254f * x > 0.0f && -0.8660254f * y - 0.5f * x < 0.0f ? 1u : 2u;
}

void initialize() {
    grid.initialize(lights);
    for (std::size_t i = 0u; i < kLightCount; ++i) {
        if (!console::trafficLight(lights[i])) continue;
        // LCS stacks its signal lamps vertically, so the orientation gives the facing.
        const float z = lights[i].orientation;
        const float w = std::sqrt(std::max(0.0f, 1.0f - z * z));
        traffic_groups[i] = static_cast<std::uint8_t>(traffic_group(-2.0f * z * w, 1.0f - 2.0f * z * z));
    }
    initialized = true;
    std::cerr << "[lod-lights] " << kLightCount << " lights\n";
}

float load_float(psprecomp::GuestMemory &memory, std::uint32_t address) {
    return std::bit_cast<float>(memory.load32(address));
}

// The game lights its lamps from 20:00 to 7:00, measured from its own coronas. These fade over the half hour outside
// that, so they aren't faint next to the lamp the game has just lit.
float lamp_intensity(unsigned hour, unsigned minute) noexcept {
    const int time = static_cast<int>(hour % 24u) * 60 + static_cast<int>(minute % 60u);
    constexpr int kOn = 20 * 60, kOff = 7 * 60, kFade = 30;
    if (time >= kOn || time < kOff) return 1.0f;
    if (time >= kOn - kFade) return static_cast<float>(time - (kOn - kFade)) / kFade;
    if (time < kOff + kFade) return 1.0f - static_cast<float>(time - kOff) / kFade;
    return 0.0f;
}

void read_game_coronas(psprecomp::GuestMemory &memory) {
    game_corona_count = 0u;
    for (std::uint32_t i = 0u; i < kCoronaCount; ++i) {
        const std::uint32_t slot = kCoronas + i * kCoronaStride;
        if (memory.load32(slot + kCoronaOwner) == 0u) continue;
        game_coronas[game_corona_count++] = {{load_float(memory, slot), load_float(memory, slot + 4u), load_float(memory, slot + 8u)},
                                             load_float(memory, slot + kCoronaFar)};
    }
}

// The road's height under each lamp, from the game's road nodes.
void find_ground_heights(psprecomp::GuestMemory &memory) {
    grounds_ready = true;
    for (std::size_t i = 0u; i < kLightCount; ++i) ground_heights[i] = lights[i].position.z - kLampHeight;
    constexpr std::uint32_t kPaths = 0x08B3970Cu, kNodeSize = 20u;
    const std::uint32_t paths = memory.load32(kPaths);
    if (paths == 0u || !memory.contains(paths, 0x20u)) {
        grounds_ready = false;  // not loaded yet
        return;
    }
    const std::uint32_t nodes = memory.load32(paths), cars = memory.load32(paths + 0x18u);
    if (cars == 0u || cars > 32767u || !memory.contains(nodes, cars * kNodeSize)) return;
    std::vector<Vector3> road(cars);
    for (std::uint32_t i = 0u; i < cars; ++i) {
        const auto axis = [&](std::uint32_t offset) { return static_cast<float>(static_cast<std::int16_t>(memory.load16(nodes + i * kNodeSize + offset))) / 8.0f; };
        road[i] = {axis(4u), axis(6u), axis(8u)};
    }
    for (std::size_t i = 0u; i < kLightCount; ++i) {
        const Vector3 &lamp = lights[i].position;
        float best = 40.0f * 40.0f;
        for (const Vector3 &node : road) {
            const float dx = node.x - lamp.x, dy = node.y - lamp.y;
            const float flat = dx * dx + dy * dy;
            // A road the lamp hangs over, not one on a bridge above it or far below.
            if (flat < best && node.z < lamp.z - 2.0f && node.z > lamp.z - 20.0f) {
                best = flat;
                ground_heights[i] = node.z;
            }
        }
    }
}

// The draw distance of the game's own light for this lamp at the moment, or 0 if it hasn't one: most of a lamp's range,
// the game only lights it when the lamp's model is close.
float game_corona_range(const Vector3 &position) noexcept {
    for (std::uint32_t i = 0u; i < game_corona_count; ++i) {
        if (console::distanceSquared(game_coronas[i].position, position) <= kSameLampSquared) return game_coronas[i].far;
    }
    return 0.0f;
}

// Runs a guest function to its return. A generated unit stops where it leaves for another one, so this keeps going.
bool call(psprecomp::Runtime &runtime, psprecomp::AllegrexContext &ctx, std::uint32_t address) {
    ctx.gpr[29] = kScratchStackTop;
    ctx.gpr[31] = 0u;
    ctx.pc = address;
    for (int transfers = 0; transfers < 4096; ++transfers) {
        if (!runtime.invoke_isolated_aot(ctx.pc, ctx)) return false;
        if (ctx.pc == 0u) return true;
    }
    return false;
}

}  // namespace

bool lod_lights_enabled() noexcept {
    return !failed && lcs_render_configuration().rendering.lod_lights;
}

void lod_lights_render(psprecomp::Runtime &runtime, const psprecomp::AllegrexContext &caller) {
    if (!lod_lights_enabled()) return;
    const perf::Scope perf_scope(perf::kLodUs);
    if (!initialized) initialize();
    auto &memory = runtime.memory();

    const std::uint32_t corona = memory.load32(kCoronaTextures);
    const std::uint32_t raster = corona != 0u ? memory.load32(corona) : 0u;
    if (raster == 0u) return;

    // Each buffered sprite takes 96 bytes of the game's per-frame GE buffer, which it never bounds-checks.
    constexpr std::uint32_t kReserve = 96u * 1024u, kSpriteBytes = 96u;
    const std::uint32_t head = memory.load32(kArena), tail = memory.load32(kArena + 12u);
    if (head == 0u || tail <= head || tail - head <= kReserve) return;
    const std::uint32_t budget = (tail - head - kReserve) / kSpriteBytes;

    const RenderingConfiguration &config = lcs_render_configuration().rendering;
    const Vector3 camera{load_float(memory, kCameraPosition), load_float(memory, kCameraPosition + 4u),
                         load_float(memory, kCameraPosition + 8u)};
    const float night = lamp_intensity(memory.load8(kClockHour), memory.load8(kClockMinute));
    read_game_coronas(memory);
    const std::uint32_t milliseconds = memory.load32(kTimer);
    float phases[8];
    for (unsigned i = 0u; i < 8u; ++i) phases[i] = console::blinkIntensity(i, milliseconds);

    psprecomp::AllegrexContext ctx = caller;
    unsigned signals[3] = {3u, 0u, 0u};
    for (unsigned i = 0u; i < 2u; ++i) {
        if (!call(runtime, ctx, kSignals[i])) {
            failed = true;
            note_lod_lights_off();
            std::cerr << "[lod-lights] off: the traffic signal call did not return\n";
            return;
        }
        signals[i + 1u] = ctx.gpr[2];
    }

    const float range = config.lod_lights_range;
    const float max_squared = range * range;
    const float screen_width = static_cast<float>(memory.load32(kScreenWidth));
    const float screen_height = static_cast<float>(memory.load32(kScreenHeight));
    visible.clear(std::min(config.lod_lights_limit, budget));
    patch_count = 0u;
    if (config.lamp_patches && !grounds_ready) find_ground_heights(memory);
    const float pool_range = config.lamp_pool_range;
    const float patch_range = std::min(config.lamp_patch_range, range);

    bool project_failed = false;
    grid.visit(camera, range, [&](std::uint16_t i) {
        if (project_failed) return;
        const LightData &light = lights[i];
        float distance = console::distanceSquared(light.position, camera);
        // The range is horizontal: raising the camera must not remove the lights below it.
        const float hx = light.position.x - camera.x, hy = light.position.y - camera.y;
        const float horizontal = std::sqrt(hx * hx + hy * hy);
        if (!(horizontal * horizontal < max_squared)) return;
        float intensity = console::trafficLight(light)
            ? (signals[traffic_groups[i]] == console::trafficColor(light.color) ? 1.0f : 0.0f)
            : night * phases[light.blink < 8u ? light.blink : 0u];
        if (!(intensity > 0.0f) || light.color.a == 0u) return;
        // The patch: fades in over the last quarter of the game's pool, which fades out there, as far as it reaches.
        if (config.lamp_patches && grounds_ready && patch_count < kMaxPatches && horizontal > pool_range * 0.75f && horizontal < patch_range &&
            light.size >= 1.0f && light.blink == 0u && !light.noDistance && !console::trafficLight(light)) {
            const float ground = ground_heights[i];
            memory.store32(kPointIn, std::bit_cast<std::uint32_t>(light.position.x));
            memory.store32(kPointIn + 4u, std::bit_cast<std::uint32_t>(light.position.y));
            memory.store32(kPointIn + 8u, std::bit_cast<std::uint32_t>(ground));
            memory.store32(kPointIn + 12u, 0u);
            ctx.gpr[4] = kPointIn;
            ctx.gpr[5] = kPointOut;
            ctx.gpr[6] = kWidthOut;
            ctx.gpr[7] = kHeightOut;
            ctx.gpr[8] = 0u;
            if (!call(runtime, ctx, kProject)) {
                project_failed = true;
                return;
            }
            if (ctx.gpr[2] != 0u) {
                const float sz = load_float(memory, kPointOut + 8u);
                const float width = load_float(memory, kWidthOut) * kPatchRadius;
                // Seen from low down, a circle on the road is a thin ellipse.
                const float flatten = std::clamp((camera.z - ground) / std::max(horizontal, 1.0f), 0.04f, 1.0f);
                const float height = load_float(memory, kHeightOut) * kPatchRadius * flatten;
                const float sx = load_float(memory, kPointOut), sy = load_float(memory, kPointOut + 4u);
                if (sz > 0.0f && width > 0.0f && height > 0.0f && sx + width >= 0.0f && sx - width <= screen_width && sy + height >= 0.0f && sy - height <= screen_height) {
                    const float fade_in = saturate((horizontal - pool_range * 0.75f) / (pool_range * 0.25f));
                    const float fade_out = saturate((patch_range - horizontal) / (patch_range * 0.1f));
                    const auto alpha = static_cast<unsigned>(intensity * fade_in * fade_out * kPatchStrength * static_cast<float>(light.color.a));
                    if (alpha != 0u) {
                        patches[patch_count++] = {horizontal, sx, sy, sz, width, height, i, static_cast<std::uint8_t>(alpha)};
                    }
                }
            }
        }
        // Hand over to the game's light where it has one, which fades in over the far half of its range, so together
        // they stay as bright. Everywhere else this is the lamp's only light, right up to it.
        if (!light.noDistance && !console::trafficLight(light)) {
            const float game_range = game_corona_range(light.position);
            if (game_range > 0.0f) {
                const float handover = saturate((std::sqrt(distance) - game_range * 0.5f) / (game_range * 0.5f));
                if (!(handover > 0.0f)) return;
                intensity *= handover;
            }
        }

        memory.store32(kPointIn, std::bit_cast<std::uint32_t>(light.position.x));
        memory.store32(kPointIn + 4u, std::bit_cast<std::uint32_t>(light.position.y));
        memory.store32(kPointIn + 8u, std::bit_cast<std::uint32_t>(light.position.z));
        memory.store32(kPointIn + 12u, 0u);
        ctx.gpr[4] = kPointIn;
        ctx.gpr[5] = kPointOut;
        ctx.gpr[6] = kWidthOut;
        ctx.gpr[7] = kHeightOut;
        ctx.gpr[8] = 0u;
        if (!call(runtime, ctx, kProject)) {
            project_failed = true;
            return;
        }
        if (ctx.gpr[2] == 0u) return;
        const float sx = load_float(memory, kPointOut), sy = load_float(memory, kPointOut + 4u),
                    sz = load_float(memory, kPointOut + 8u);
        float width = load_float(memory, kWidthOut), height = load_float(memory, kHeightOut);

        distance = std::sqrt(distance);
        const float radius = 3.5f * light.size * config.lod_lights_radius * std::clamp(0.0025f * distance + 0.25f, 0.0f, 4.0f);
        width *= radius;
        height *= radius;
        if (!(sz > 0.0f && width > 0.0f && height > 0.0f) || sx + width < 0.0f || sx - width > screen_width ||
            sy + height < 0.0f || sy - height > screen_height)
            return;
        intensity *= saturate((range - horizontal) / (range * 0.1f));
        const auto alpha = static_cast<unsigned>(intensity * static_cast<float>(light.color.a));
        if (alpha != 0u)
            visible.insert({distance * distance, sx, sy, sz, width, height, i, static_cast<std::uint8_t>(alpha)});
    });
    if (project_failed) {
        failed = true;
        note_lod_lights_off();
        std::cerr << "[lod-lights] off: the projection call did not return\n";
        return;
    }
    if (visible.size() == 0u && patch_count == 0u) return;

    const auto set_state = [&](std::uint32_t state, std::uint32_t value) {
        ctx.gpr[4] = state;
        ctx.gpr[5] = value;
        return call(runtime, ctx, kState);
    };
    bool ok = call(runtime, ctx, kFlush);
    ok = ok && set_state(kStateZWrite, 0u) && set_state(kStateZTest, 1u) && set_state(kStateSrcBlend, 2u) &&
         set_state(kStateDestBlend, 2u) && set_state(kStateRaster, raster);
    for (std::size_t p = 0u; p < patch_count && ok; ++p) {
        const GroundPatch &item = patches[p];
        const auto &color = lights[item.index].color;
        // Pulled towards the camera by its own radius: the road in front of its centre would otherwise cover half of it.
        const float z = item.z * std::max(0.5f, 1.0f - kPatchRadius / std::max(item.distance, 1.0f));
        ctx.fpr[12] = item.x;
        ctx.fpr[13] = item.y;
        ctx.fpr[14] = z;
        ctx.fpr[15] = item.width;
        ctx.fpr[16] = item.height;
        ctx.fpr[17] = 1.0f / z;
        ctx.gpr[4] = color.r;
        ctx.gpr[5] = color.g;
        ctx.gpr[6] = color.b;
        ctx.gpr[7] = item.alpha;
        ctx.gpr[8] = item.alpha;
        ok = call(runtime, ctx, kSprite);
    }
    perf::add(perf::kLodDrawn, patch_count);
    for (const Visible &item : visible) {
        if (!ok) break;
        const auto &color = lights[item.index].color;
        // Flat sprites at the lamp's depth would be cut by the facade behind them: draw slightly in front, as the
        // game's coronas do.
        const float bias = 2.0f + 0.04f * item.z;
        const float z = bias < item.z * 0.5f ? item.z - bias : item.z * 0.5f;
        ctx.fpr[12] = item.x;
        ctx.fpr[13] = item.y;
        ctx.fpr[14] = z;
        ctx.fpr[15] = item.width;
        ctx.fpr[16] = item.height;
        ctx.fpr[17] = 1.0f / z;
        ctx.gpr[4] = color.r;
        ctx.gpr[5] = color.g;
        ctx.gpr[6] = color.b;
        ctx.gpr[7] = item.alpha;
        ctx.gpr[8] = item.alpha;
        ok = call(runtime, ctx, kSprite);
    }
    perf::add(perf::kLodDrawn, visible.size());
    ok = ok && call(runtime, ctx, kFlush);
    // CCoronas::Render's state as the game leaves it, before CParticle::Render.
    ok = ok && set_state(kStateZWrite, 1u) && set_state(kStateZTest, 1u) && set_state(kStateSrcBlend, 5u) &&
         set_state(kStateDestBlend, 6u) && set_state(kStateRaster, 0u);
    if (!ok) {
        failed = true;
        note_lod_lights_off();
        std::cerr << "[lod-lights] off: a drawing call did not return\n";
    }
}

}  // namespace lcs
