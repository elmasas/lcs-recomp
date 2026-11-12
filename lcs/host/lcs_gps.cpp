#include "lcs_gps.hpp"

#include "lcs_render_config.hpp"
#include "lcs_trainer.hpp"

#include <algorithm>
#include <bit>
#include <cmath>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <mutex>
#include <queue>
#include <string>
#include <vector>

namespace lcs {
namespace {

// ULUS-10041 v1.05, read from the game's own code.
constexpr std::uint32_t kPaths = 0x08B3970Cu;  // CPathFind *: nodes at +0, links at +8, counts at +0x14 and +0x18
constexpr std::uint32_t kNodeSize = 20u;
constexpr std::uint32_t kWorldToRadar = 0x08967BB0u;  // (CVector2D *out, const CVector2D *in)
constexpr std::uint32_t kRadarToScreen = 0x089678F0u;  // (CVector2D *out, const CVector2D *in)
constexpr std::uint32_t kBlipColour = 0x08967DB0u;     // (colour id, bright) -> RGBA
// (f12..f19: x1,y1 .. x4,y4; a0: const CRGBA *) as a triangle fan of corners 3, 4, 2, 1. Scales by kScreenScale and stores
// whole pixels.
constexpr std::uint32_t kDrawPolygon = 0x08AD3FB4u;
constexpr std::uint32_t kScreenScaleX = 0x08B58D14u, kScreenScaleY = 0x08B58D18u;
constexpr std::uint32_t kMakeColour = 0x088629DCu;     // (CRGBA *out, r, g, b, a)
constexpr std::uint32_t kMenuActive = 0x08B8ED20u + 320u;

// Above the distant lights' scratch memory.
constexpr std::uint32_t kScratch = 0x0BF20000u;
constexpr std::uint32_t kScratchStackTop = kScratch + 0x10000u;
constexpr std::uint32_t kIn = kScratch, kOut = kScratch + 16u, kColour = kScratch + 64u;

constexpr float kArrivedDistance = 25.0f;
constexpr int kRouteEveryFrames = 30;
constexpr float kMovedFar = 60.0f;
constexpr int kMaxShapes = 600;

struct Node {
    float x, y, z;
    std::uint32_t first_link, link_count;
};
std::vector<Node> nodes;
std::vector<std::uint16_t> links;
bool graph_failed = false;

struct Point {
    float x, y;
};
std::vector<Point> route;
float route_from_x = 1e9f, route_from_y = 1e9f, route_to_x = 1e9f, route_to_y = 1e9f;
int frames_to_route = 0;

float load_float(const psprecomp::GuestMemory &memory, std::uint32_t address) {
    return std::bit_cast<float>(memory.load32(address));
}

// The road nodes never change once the game has loaded them. Cars use the first ones.
bool build_graph(psprecomp::GuestMemory &memory) {
    if (!nodes.empty()) return true;
    if (graph_failed) return false;
    const std::uint32_t paths = memory.load32(kPaths);
    if (paths == 0u || !memory.contains(paths, 0x20u)) return false;  // not loaded yet: try again
    const std::uint32_t node_array = memory.load32(paths), link_array = memory.load32(paths + 8u);
    const std::uint32_t all = memory.load32(paths + 0x14u), cars = memory.load32(paths + 0x18u);
    if (cars < 100u || cars > all || all > 32767u || !memory.contains(node_array, all * kNodeSize) || !memory.contains(link_array, 2u)) {
        graph_failed = true;
        std::cerr << "[gps] off: the road data isn't as expected\n";
        return false;
    }
    nodes.reserve(cars);
    std::uint32_t total_links = 0u;
    for (std::uint32_t i = 0u; i < cars; ++i) {
        const std::uint32_t node = node_array + i * kNodeSize;
        const auto coordinate = [&](std::uint32_t offset) { return static_cast<float>(static_cast<std::int16_t>(memory.load16(node + offset))) / 8.0f; };
        const auto first = static_cast<std::uint32_t>(memory.load16(node + 12u));
        const std::uint32_t count = memory.load8(node + 16u) & 15u;
        nodes.push_back({coordinate(4u), coordinate(6u), coordinate(8u), static_cast<std::uint32_t>(links.size()), 0u});
        for (std::uint32_t k = 0u; k < count; ++k) {
            const std::uint32_t at = link_array + (first + k) * 2u;
            if (!memory.contains(at, 2u)) continue;
            const std::uint32_t other = memory.load16(at) & 0x3FFFu;
            if (other >= cars) continue;
            links.push_back(static_cast<std::uint16_t>(other));
            ++nodes.back().link_count;
            ++total_links;
        }
    }
    if (total_links < cars) {
        nodes.clear();
        links.clear();
        graph_failed = true;
        std::cerr << "[gps] off: the road links aren't as expected\n";
        return false;
    }
    std::cerr << "[gps] " << nodes.size() << " road nodes, " << total_links << " links\n";
    return true;
}

std::uint32_t nearest_node(float x, float y) {
    std::uint32_t best = 0u;
    float best_distance = 1e18f;
    for (std::uint32_t i = 0u; i < nodes.size(); ++i) {
        const float dx = nodes[i].x - x, dy = nodes[i].y - y;
        const float distance = dx * dx + dy * dy;
        // A node with no road out is a stub cut off from the rest.
        if (distance < best_distance && nodes[i].link_count != 0u) {
            best_distance = distance;
            best = i;
        }
    }
    return best;
}

}  // namespace

bool gps_nearest_road(psprecomp::GuestMemory &memory, float x, float y, float (&out)[3]) {
    if (!build_graph(memory) || nodes.empty()) return false;
    const Node &node = nodes[nearest_node(x, y)];
    out[0] = node.x;
    out[1] = node.y;
    out[2] = node.z;
    return true;
}

namespace {

void find_route(float from_x, float from_y, float to_x, float to_y) {
    route.clear();
    const std::uint32_t start = nearest_node(from_x, from_y), goal = nearest_node(to_x, to_y);
    struct Open {
        float estimate;
        std::uint32_t node;
        bool operator<(const Open &other) const noexcept { return estimate > other.estimate; }
    };
    static std::vector<float> best;
    static std::vector<std::int32_t> came;
    best.assign(nodes.size(), 1e18f);
    came.assign(nodes.size(), -1);
    std::priority_queue<Open> open;
    best[start] = 0.0f;
    open.push({0.0f, start});
    bool found = false;
    while (!open.empty()) {
        const std::uint32_t at = open.top().node;
        open.pop();
        if (at == goal) {
            found = true;
            break;
        }
        const Node &node = nodes[at];
        for (std::uint32_t k = 0u; k < node.link_count; ++k) {
            const std::uint32_t next = links[node.first_link + k];
            const Node &other = nodes[next];
            const float length = best[at] + std::hypot(other.x - node.x, other.y - node.y, other.z - node.z);
            if (length < best[next]) {
                best[next] = length;
                came[next] = static_cast<std::int32_t>(at);
                open.push({length + std::hypot(other.x - nodes[goal].x, other.y - nodes[goal].y), next});
            }
        }
    }
    if (!found) return;  // cut off by water, or a road the network doesn't join: no line rather than a wrong one
    std::vector<std::uint32_t> path;
    for (std::int32_t at = static_cast<std::int32_t>(goal); at >= 0; at = came[static_cast<std::size_t>(at)]) path.push_back(static_cast<std::uint32_t>(at));
    std::reverse(path.begin(), path.end());
    // Not back to a node behind you when the next one is nearer.
    std::size_t begin = 0u;
    if (path.size() >= 2u) {
        const Node &a = nodes[path[0]], &b = nodes[path[1]];
        if (std::hypot(b.x - from_x, b.y - from_y) < std::hypot(b.x - a.x, b.y - a.y)) begin = 1u;
    }
    route.push_back({from_x, from_y});
    for (std::size_t i = begin; i < path.size(); ++i) route.push_back({nodes[path[i]].x, nodes[path[i]].y});
    route.push_back({to_x, to_y});
}

// Runs a guest function to its return.
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

struct Vec {
    float x, y;
};

bool transform(psprecomp::Runtime &runtime, psprecomp::AllegrexContext &ctx, std::uint32_t function, Vec in, Vec &out) {
    auto &memory = runtime.memory();
    memory.store32(kIn, std::bit_cast<std::uint32_t>(in.x));
    memory.store32(kIn + 4u, std::bit_cast<std::uint32_t>(in.y));
    ctx.gpr[4] = kOut;
    ctx.gpr[5] = kIn;
    if (!call(runtime, ctx, function)) return false;
    out = {load_float(memory, kOut), load_float(memory, kOut + 4u)};
    return true;
}

// Both transforms are linear, so three points give them for the whole frame without calling the game for each dot.
struct Linear {
    Vec origin, x_axis, y_axis;
    [[nodiscard]] Vec apply(float x, float y) const noexcept {
        return {origin.x + x_axis.x * x + y_axis.x * y, origin.y + x_axis.y * x + y_axis.y * y};
    }
};

bool measure(psprecomp::Runtime &runtime, psprecomp::AllegrexContext &ctx, std::uint32_t function, Vec at, float span, Linear &out) {
    Vec a{}, b{}, c{};
    if (!transform(runtime, ctx, function, at, a) || !transform(runtime, ctx, function, {at.x + span, at.y}, b) ||
        !transform(runtime, ctx, function, {at.x, at.y + span}, c))
        return false;
    out.x_axis = {(b.x - a.x) / span, (b.y - a.y) / span};
    out.y_axis = {(c.x - a.x) / span, (c.y - a.y) / span};
    out.origin = {a.x - out.x_axis.x * at.x - out.y_axis.x * at.y, a.y - out.x_axis.y * at.x - out.y_axis.y * at.y};
    return true;
}

// The exact corners of the shapes drawn this frame and the one before (the renderer may run a frame behind).
struct ExactQuad {
    float x[4], y[4];
};
std::mutex exact_mutex;
std::vector<ExactQuad> exact_now, exact_before;
std::uint8_t exact_r = 0u, exact_g = 0u, exact_b = 0u;
int exact_refined = 0;  // for LCS_TEST_GPS's log

}  // namespace

bool gps_refine_quad(float (&x)[4], float (&y)[4], std::uint8_t r, std::uint8_t g, std::uint8_t b) {
    std::lock_guard lock(exact_mutex);
    if (r != exact_r || g != exact_g || b != exact_b || (exact_now.empty() && exact_before.empty())) return false;
    for (const auto *list : {&exact_now, &exact_before}) {
        for (const ExactQuad &quad : *list) {
            int used = 0, match[4]{};
            for (int v = 0; v < 4; ++v) {
                int found = -1;
                for (int c = 0; c < 4; ++c) {
                    if ((used & (1 << c)) == 0 && std::abs(x[v] - quad.x[c]) < 1.01f && std::abs(y[v] - quad.y[c]) < 1.01f) {
                        found = c;
                        break;
                    }
                }
                if (found < 0) break;
                used |= 1 << found;
                match[v] = found;
            }
            if (used != 15) continue;
            ++exact_refined;
            for (int v = 0; v < 4; ++v) {
                x[v] = quad.x[match[v]];
                y[v] = quad.y[match[v]];
            }
            return true;
        }
    }
    return false;
}

void gps_draw(psprecomp::Runtime &runtime, const psprecomp::AllegrexContext &caller) {
    {
        std::lock_guard lock(exact_mutex);
        exact_before.swap(exact_now);
        exact_now.clear();
    }
    if (!lcs_render_configuration().display.gps) return;
    auto &memory = runtime.memory();
    if (!build_graph(memory)) return;

    TrainerRouteInfo info = trainer_route_info(runtime);
    // LCS_TEST_GPS=x,y: a destination for unattended runs, on foot too.
    static const char *const test = std::getenv("LCS_TEST_GPS");
    if (test != nullptr && info.player_known) {
        float x = 0.0f, y = 0.0f;
        const char *comma = std::strchr(test, ',');
        if (comma != nullptr) {
            x = static_cast<float>(std::atof(test));
            y = static_cast<float>(std::atof(comma + 1));
            info.has_destination = true;
            info.destination_x = x;
            info.destination_y = y;
            info.in_vehicle = true;
            info.colour = 5u;
        }
    }
    const bool in_menu = memory.load8(kMenuActive) != 0u;
    if (!info.player_known || !info.has_destination || (!info.in_vehicle && !in_menu)) {
        route.clear();
        route_to_x = 1e9f;
        return;
    }
    if (std::hypot(info.destination_x - info.player_x, info.destination_y - info.player_y) < kArrivedDistance) {
        route.clear();
        return;
    }
    constexpr float kTargetMoved = 25.0f;
    const bool new_target = std::hypot(info.destination_x - route_to_x, info.destination_y - route_to_y) > kTargetMoved;
    const bool moved = std::hypot(info.player_x - route_from_x, info.player_y - route_from_y) > kMovedFar;
    if (new_target || moved || --frames_to_route <= 0) {
        frames_to_route = kRouteEveryFrames;
        route_from_x = info.player_x;
        route_from_y = info.player_y;
        route_to_x = info.destination_x;
        route_to_y = info.destination_y;
        find_route(info.player_x, info.player_y, info.destination_x, info.destination_y);
        static bool logged = false;
        if (!logged || new_target) std::cerr << "[gps] route to " << info.destination_x << "," << info.destination_y << ": " << route.size() << " points\n";
        logged = true;
    }
    if (route.size() < 2u) return;

    psprecomp::AllegrexContext ctx = caller;
    Linear world_to_radar{}, radar_to_screen{};
    if (!measure(runtime, ctx, kWorldToRadar, {info.player_x, info.player_y}, 100.0f, world_to_radar) ||
        !measure(runtime, ctx, kRadarToScreen, {0.0f, 0.0f}, 1.0f, radar_to_screen))
        return;

    ctx.gpr[4] = info.colour;
    ctx.gpr[5] = 1u;
    if (!call(runtime, ctx, kBlipColour)) return;
    const std::uint32_t rgba = ctx.gpr[2];
    ctx.gpr[4] = kColour;
    ctx.gpr[5] = (rgba >> 24u) & 255u;
    ctx.gpr[6] = (rgba >> 16u) & 255u;
    ctx.gpr[7] = (rgba >> 8u) & 255u;
    ctx.gpr[8] = 255u;
    if (!call(runtime, ctx, kMakeColour)) return;

    const std::uint8_t cr = static_cast<std::uint8_t>(rgba >> 24u), cg = static_cast<std::uint8_t>(rgba >> 16u),
                       cb = static_cast<std::uint8_t>(rgba >> 8u);
    const float scale_x = load_float(memory, kScreenScaleX), scale_y = load_float(memory, kScreenScaleY);
    if (!(scale_x > 0.1f && scale_x < 10.0f && scale_y > 0.1f && scale_y < 10.0f)) return;
    std::vector<ExactQuad> drawn;

    // One shape of four corners, in order around it.
    int shapes = 0;
    const auto shape = [&](Vec a, Vec b, Vec c, Vec d) {
        if (++shapes > kMaxShapes) return false;
        // The game's corners 1, 2, 3, 4 are drawn as 3, 4, 2, 1: so 3 = a, 4 = b, 2 = c, 1 = d.
        ctx.fpr[12] = d.x;
        ctx.fpr[13] = d.y;
        ctx.fpr[14] = c.x;
        ctx.fpr[15] = c.y;
        ctx.fpr[16] = a.x;
        ctx.fpr[17] = a.y;
        ctx.fpr[18] = b.x;
        ctx.fpr[19] = b.y;
        ctx.gpr[4] = kColour;
        if (!call(runtime, ctx, kDrawPolygon)) return false;
        drawn.push_back({{a.x * scale_x, b.x * scale_x, c.x * scale_x, d.x * scale_x},
                         {a.y * scale_y, b.y * scale_y, c.y * scale_y, d.y * scale_y}});
        return true;
    };
    const float half = static_cast<float>(lcs_render_configuration().display.gps_width) * 0.5f;
    // A round joint: an octagon, as three shapes.
    const auto joint = [&](Vec p) {
        Vec v[8];
        for (int k = 0; k < 8; ++k) {
            const float angle = (static_cast<float>(k) + 0.5f) * 0.785398163f;
            v[k] = {p.x + std::cos(angle) * half * 1.0824f, p.y + std::sin(angle) * half * 1.0824f};
        }
        return shape(v[0], v[1], v[2], v[3]) && shape(v[0], v[3], v[4], v[7]) && shape(v[4], v[5], v[6], v[7]);
    };

    bool previous_shown = false;
    for (std::size_t i = 0u; i + 1u < route.size(); ++i) {
        Vec ra = world_to_radar.apply(route[i].x, route[i].y), rb = world_to_radar.apply(route[i + 1u].x, route[i + 1u].y);
        bool shown_a = true;
        // Only what the radar's circle shows. The map has no circle: it shows the whole route.
        if (!in_menu) {
            const float dx = rb.x - ra.x, dy = rb.y - ra.y;
            const float qa = dx * dx + dy * dy, qb = 2.0f * (ra.x * dx + ra.y * dy), qc = ra.x * ra.x + ra.y * ra.y - 1.0f;
            const float disc = qb * qb - 4.0f * qa * qc;
            if (qa < 1e-12f || disc <= 0.0f) {
                previous_shown = false;
                continue;
            }
            const float root = std::sqrt(disc);
            const float t0 = std::max(0.0f, (-qb - root) / (2.0f * qa)), t1 = std::min(1.0f, (-qb + root) / (2.0f * qa));
            if (t0 >= t1) {
                previous_shown = false;
                continue;
            }
            shown_a = t0 <= 0.0f;
            const Vec from = {ra.x + dx * t0, ra.y + dy * t0}, to = {ra.x + dx * t1, ra.y + dy * t1};
            ra = from;
            rb = to;
        }
        const Vec sa = radar_to_screen.apply(ra.x, ra.y), sb = radar_to_screen.apply(rb.x, rb.y);
        const float length = std::hypot(sb.x - sa.x, sb.y - sa.y);
        if (length < 0.01f) continue;
        const Vec n = {-(sb.y - sa.y) / length * half, (sb.x - sa.x) / length * half};
        if (!shape({sa.x - n.x, sa.y - n.y}, {sb.x - n.x, sb.y - n.y}, {sb.x + n.x, sb.y + n.y}, {sa.x + n.x, sa.y + n.y})) break;
        if (previous_shown && shown_a && !joint(sa)) break;
        previous_shown = in_menu || std::hypot(rb.x - world_to_radar.apply(route[i + 1u].x, route[i + 1u].y).x,
                                               rb.y - world_to_radar.apply(route[i + 1u].x, route[i + 1u].y).y) < 1e-4f;
    }
    std::lock_guard lock(exact_mutex);
    static int frames = 0;
    if (test != nullptr && ++frames % 120 == 0) {
        std::cerr << "[gps] shapes " << drawn.size() << ", exact corners used " << exact_refined << " since last" << '\n';
        exact_refined = 0;
    }
    exact_now.swap(drawn);
    exact_r = cr;
    exact_g = cg;
    exact_b = cb;
}

}  // namespace lcs
