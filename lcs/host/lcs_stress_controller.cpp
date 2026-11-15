#include "lcs_stress_test.hpp"
#include "lcs_key_bindings.hpp"
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <string>

namespace lcs {
namespace {
double separation(const std::array<float, 3> &a, const std::array<float, 3> &b) {
    return std::hypot(static_cast<double>(a[0]) - b[0], static_cast<double>(a[1]) - b[1]);
}

// Portland safehouse interior and the doorway the bike QA walks. z stays above 20 until the yard.
bool portland_interior(const StressObservation &o) {
    if (o.position[2] < 20.0f) return false;
    return std::hypot(static_cast<double>(o.position[0]) - 1138.8,
                       static_cast<double>(o.position[1]) + 242.405) < 45.0;
}

HostInputState safehouse_exit_input(const StressObservation &o, unsigned &step, bool &done) {
    struct Point { float x, y, radius; };
    static constexpr Point points[] = {
        {1142.8f, -242.4f, 0.4f},
        {1142.8f, -246.0f, 0.5f},
        {1147.0f, -246.0f, 0.6f},
        {1156.7f, -265.2f, 0.6f},
    };
    if (step >= std::size(points)) step = static_cast<unsigned>(std::size(points) - 1);
    // Crossing the door jumps past the interior points. Keep going to the yard
    // instead of turning around to a waypoint that is now back inside.
    if (o.position[2] < 20.0f && step + 1u < std::size(points))
        step = static_cast<unsigned>(std::size(points) - 1);
    const Point &current = points[step];
    if (std::hypot(static_cast<double>(o.position[0]) - current.x,
                   static_cast<double>(o.position[1]) - current.y) < current.radius &&
        step + 1u < std::size(points))
        ++step;
    const Point &target = points[step];
    if (step + 1u == std::size(points) &&
        std::hypot(static_cast<double>(o.position[0]) - target.x,
                   static_cast<double>(o.position[1]) - target.y) < target.radius)
        done = true;
    DirectOrder order;
    order.hold = false;
    order.has_target = true;
    order.target_x = target.x;
    order.target_y = target.y;
    order.arrival_radius = target.radius;
    return apply_direct_order(order, o).input;
}

bool garage_stall_bike(const StressObservation &o) {
    return o.bike_near && o.bike[0] > 1152.0f && o.bike[0] < 1162.0f &&
           o.bike[1] < -266.0f && o.bike[1] > -275.0f;
}

// The enter prompt accepts a stand about 2.5 m north of the bike. Walking up to
// the bike origin puts Toni on the stall wall, where Triangle does nothing.
HostInputState garage_mount_input(const StressObservation &o, double seconds,
                                  double &enter_until, double &enter_hold_until) {
    // The enter animation walks Toni onto the bike. Steering again cancels it.
    if (seconds < enter_until) {
        HostInputState input;
        if (seconds < enter_hold_until) input.buttons = kPspTriangle;
        return input;
    }
    const float mount_x = o.bike[0];
    float mount_y = o.bike[1] + 2.5f;
    if (mount_y < -266.6f) mount_y = -266.6f;
    const double stand = std::hypot(static_cast<double>(o.position[0]) - mount_x,
                                     static_cast<double>(o.position[1]) - mount_y);
    if (stand < 0.7) {
        enter_until = seconds + 3.0;
        enter_hold_until = seconds + 0.8;
        HostInputState input;
        input.buttons = kPspTriangle;
        return input;
    }
    DirectOrder order;
    order.hold = false;
    order.has_target = true;
    order.target_x = mount_x;
    order.target_y = mount_y;
    order.arrival_radius = 0.55f;
    return apply_direct_order(order, o).input;
}

// The Portland block the bike QA rides, then repeats. Cruise is units/second.
HostInputState block_loop_input(const StressObservation &o, unsigned &step, int &turn_hold, float speed) {
    struct Point { float x, y, radius, cruise; };
    static constexpr Point points[] = {
        {1158.f, -239.f, 3.f, 5.5f},
        {1158.f, -217.f, 4.f, 5.5f},
        {1127.f, -212.f, 5.f, 7.f},
        {1127.f, -240.f, 4.f, 6.f},
        {1127.f, -276.f, 3.f, 8.f},
        {1146.f, -284.f, 4.f, 5.5f},
        {1187.f, -284.f, 5.f, 8.f},
        {1198.f, -265.f, 4.f, 5.5f},
        {1198.f, -217.f, 5.f, 8.f},
        {1184.f, -207.f, 4.f, 5.5f},
        {1163.f, -211.f, 2.f, 6.f},
        {1161.f, -223.f, 2.f, 4.5f},
        {1160.f, -235.f, 3.f, 5.5f},
        {1157.f, -261.f, 2.f, 4.f},
    };
    if (step >= std::size(points)) step = 0;
    for (unsigned n = 0; n < std::size(points); ++n) {
        const Point &current = points[step];
        if (std::hypot(static_cast<double>(o.position[0]) - current.x,
                       static_cast<double>(o.position[1]) - current.y) >= current.radius)
            break;
        step = static_cast<unsigned>((step + 1u) % std::size(points));
    }
    const Point &target = points[step];
    const double dx = static_cast<double>(target.x) - o.position[0];
    const double dy = static_cast<double>(target.y) - o.position[1];
    const double dist = std::max(0.001, std::hypot(dx, dy));
    HostInputState input;
    double fx = o.facing[0], fy = o.facing[1];
    const double flen = std::hypot(fx, fy);
    if (flen < 0.2) {
        input.analog_x = 255u;
        input.throttle = 40u;
        return input;
    }
    fx /= flen;
    fy /= flen;
    const double cross = (fx * dy - fy * dx) / dist;
    const double dot = (fx * dx + fy * dy) / dist;
    // Facing away, cross chatters around zero and full lock fishtails the bike
    // in place. Hold one moderate turn until the corner is in front again.
    if (dot < 0.15) {
        if (cross > 0.08) turn_hold = 1;
        else if (cross < -0.08) turn_hold = -1;
        else if (turn_hold == 0) turn_hold = -1;
        const int steering = turn_hold > 0 ? 48 : 208;
        input.analog_x = static_cast<std::uint8_t>(steering);
        input.throttle = speed < 2.f ? 70u : 0u;
        input.brake_pressure = speed > 1.5f ? 90u : 0u;
        return input;
    }
    turn_hold = 0;
    double turn = 0.0;
    if (std::fabs(cross) >= 0.025)
        turn = std::copysign(35.0 + 92.0 * std::min(1.0, std::fabs(cross) * 2.0), cross);
    int steering = static_cast<int>(std::lround(128.0 - turn));
    input.analog_x = static_cast<std::uint8_t>(std::clamp(steering, 0, 255));
    double desired = std::min(static_cast<double>(target.cruise), std::max(5.0, dist * 0.8));
    if (dot < 0.8) desired = std::min(desired, 3.0);
    const int throttle = static_cast<int>(std::lround(35.0 + 30.0 * (desired - speed)));
    const int brake = static_cast<int>(std::lround(18.0 * (speed - desired - 2.0)));
    input.throttle = static_cast<std::uint8_t>(std::clamp(throttle, 0, 255));
    input.brake_pressure = static_cast<std::uint8_t>(std::clamp(brake, 0, 100));
    return input;
}

HostInputState approach_vehicle_input(const StressObservation &o, double seconds) {
    const std::array<float, 3> *chosen = nullptr;
    double best = 0.0;
    bool garage_bike = false;
    const auto consider = [&](bool near, const std::array<float, 3> &pos, bool bike) {
        if (!near) return;
        const double dist = std::hypot(static_cast<double>(o.position[0]) - pos[0],
                                        static_cast<double>(o.position[1]) - pos[1]);
        // A bike in this yard is the one parked against the garage wall.
        if (bike && dist < 30.0) { chosen = &pos; best = dist; garage_bike = true; return; }
        if (garage_bike || (chosen != nullptr && dist >= best)) return;
        chosen = &pos; best = dist;
    };
    consider(o.bike_near, o.bike, true);
    consider(o.vehicle_near, o.vehicle, false);
    if (chosen == nullptr) return {};
    const bool pulse = std::fmod(seconds, 1.5) < 0.25;
    const bool stall = garage_bike && (*chosen)[0] > 1145.0f && (*chosen)[0] < 1170.0f &&
                       (*chosen)[1] < -258.0f && (*chosen)[1] > -280.0f;
    // The enter prompt is closer than the QA's two-metre mark on this save.
    const double mount_x = static_cast<double>((*chosen)[0]);
    const double mount_y = static_cast<double>((*chosen)[1]) + (stall ? 1.0 : 0.0);
    const double stand = std::hypot(static_cast<double>(o.position[0]) - mount_x,
                                     static_cast<double>(o.position[1]) - mount_y);
    if ((stall && stand < 0.8) || (!stall && best < 2.2)) {
        HostInputState input;
        if (pulse) input.buttons = kPspTriangle;
        return input;
    }
    double target_x = mount_x;
    double target_y = mount_y;
    if (!stall && best > 2.2) {
        const double dx = static_cast<double>((*chosen)[0]) - o.position[0];
        const double dy = static_cast<double>((*chosen)[1]) - o.position[1];
        target_x = (*chosen)[0] - dx / best * 2.0;
        target_y = (*chosen)[1] - dy / best * 2.0;
    }
    DirectOrder order;
    order.hold = false;
    order.has_target = true;
    order.target_x = static_cast<float>(target_x);
    order.target_y = static_cast<float>(target_y);
    order.arrival_radius = stall ? 0.8f : 1.0f;
    HostInputState input = apply_direct_order(order, o).input;
    if (best < 3.0 && pulse) input.buttons |= kPspTriangle;
    return input;
}
}
HostInputState StressController::sample(double seconds, const StressObservation &o) {
    HostInputState input;
    if (!o.ready) {
        tracking_ = false;
        // Cancel an incidental game menu (including save prompts), never confirm
        // it once the character is in gameplay. Missing/dead players stay neutral.
        if (started_ && o.menu && std::fmod(seconds, 2.0) < 0.25)
            input.buttons = kPspCircle;
        // Startup confirm pulses release between presses.
        if (!started_ && seconds >= 2.0 && std::fmod(seconds - 2.0, 3.0) < 0.25)
            input.buttons = kPspCross;
        return input;
    }
    last_ready_at_ = seconds;
    if (!started_) { started_ = true; started_at_ = seconds; }
    if (!tracking_ || entity_ != o.entity) {
        tracking_ = true; entity_ = o.entity;
        previous_ = anchor_ = o.position;
        observed_at_ = anchor_at_ = seconds; stalled_seconds_ = 0;
        exit_step_ = 0;
        exit_done_ = false;
        enter_until_ = -1.0;
        enter_hold_until_ = -1.0;
        stall_cleared_ = false;
        yard_left_ = false;
        block_step_ = 0;
        block_turn_ = 0;
        block_speed_ = 0.f;
        block_speed_at_ = -1.0;
    }
    if (block_speed_at_ < 0.0 || seconds < block_speed_at_) {
        block_speed_pos_ = o.position;
        block_speed_at_ = seconds;
        block_speed_ = 0.f;
    } else if (seconds - block_speed_at_ >= 0.05) {
        block_speed_ = static_cast<float>(separation(block_speed_pos_, o.position) /
                                           (seconds - block_speed_at_));
        block_speed_pos_ = o.position;
        block_speed_at_ = seconds;
    }
    if (seconds - observed_at_ >= 1.0) {
        const double moved = separation(previous_, o.position);
        if (moved >= 0.1) stalled_seconds_ = 0;
        else stalled_seconds_ += seconds - observed_at_;
        // Ignore teleports and respawns rather than counting them as travel.
        if (moved >= 0.1 && moved < 100.0) { distance_ += moved; ++moving_samples_; }
        if (o.driving && moved >= 0.1 && moved < 100.0) ++driving_samples_;
        previous_ = o.position; observed_at_ = seconds;
    }
    if (seconds - anchor_at_ >= 6.0) {
        if (separation(anchor_, o.position) < 1.5 && seconds - recovery_at_ >= 8.0) {
            recovery_at_ = seconds; ++recoveries_;
        }
        anchor_ = o.position; anchor_at_ = seconds;
    }
    const double phase = std::fmod(seconds - started_at_, 40.0);
    const double recovery = seconds - recovery_at_;
    const int turn = (recoveries_ % 2 == 0) ? 1 : -1;
    if (o.driving) {
        input.accelerate = true;
        input.analog_x = phase < 25.0 ? 128u : (phase < 32.0 ? 165u : 91u);
        if (recovery < 2.0) { input.accelerate = false; input.brake = true; }
        else if (recovery < 5.0) input.analog_x = turn > 0 ? 255u : 0u;
        if (recovery >= 5.0 && recovery < 5.25 && recoveries_ % 3 == 0)
            input.buttons |= kPspTriangle; // Abandon a vehicle that repeatedly cannot move.
    } else {
        input.analog_y = 0u;
        input.analog_x = phase < 24.0 ? 128u : (phase < 32.0 ? 190u : 66u);
        if (phase < 18.0) input.buttons |= kPspCross;
        if (std::fmod(seconds - started_at_, 7.0) < 0.2) input.buttons |= kPspSquare;
        if (phase >= 32.0) input.camera_x = 45;
        if (recovery < 1.5) { input.analog_y = 255u; input.buttons = 0u; }
        else if (recovery < 4.0) {
            input.analog_x = turn > 0 ? 255u : 0u;
            input.analog_y = 128u; input.camera_x = turn * 85;
            input.buttons = std::fmod(recovery, 1.0) < 0.2 ? kPspSquare : 0u;
        }
        if (seek_vehicle_ && std::fmod(seconds - started_at_, 12.0) >= 10.0 &&
            std::fmod(seconds - started_at_, 12.0) < 10.25)
            input.buttons |= kPspTriangle;
    }
    // Stay on the doorway polyline after z drops. A straight line to the bike hits the garage wall.
    const double from_safehouse = std::hypot(static_cast<double>(o.position[0]) - 1138.8,
                                              static_cast<double>(o.position[1]) + 242.405);
    const bool near_house = from_safehouse < 45.0;
    const bool on_exit = !exit_done_ && near_house &&
                         (portland_interior(o) || exit_step_ > 0);
    if (o.driving && o.position[1] > -254.0f &&
        o.position[0] > 1100.0f && o.position[0] < 1200.0f)
        stall_cleared_ = true;
    // The burnout is only for the garage mouth. Once the north street is reached
    // it must not come back on the south and west sides of the block.
    if (o.driving && stall_cleared_ && o.position[1] >= -230.0f)
        yard_left_ = true;
    const bool in_stall = !stall_cleared_ && o.position[2] < 20.0f &&
                          o.position[0] > 1150.0f && o.position[0] < 1168.0f &&
                          o.position[1] < -254.0f && o.position[1] > -280.0f;
    // Once the bike has left the stall, keep turning until it faces out. Reversing
    // again drives it back into the garage wall.
    const bool nose_in_wall = !yard_left_ && stall_cleared_ && o.position[2] < 25.0f &&
                              o.position[0] > 1100.0f && o.position[0] < 1200.0f &&
                              o.position[1] < -230.0f && o.facing[1] < 0.3f &&
                              std::hypot(static_cast<double>(o.facing[0]), o.facing[1]) > 0.5;
    if (!o.driving && on_exit)
        input = safehouse_exit_input(o, exit_step_, exit_done_);
    else if (!o.driving && seek_vehicle_ && near_house && garage_stall_bike(o))
        input = garage_mount_input(o, seconds, enter_until_, enter_hold_until_);
    else if (!o.driving && seek_vehicle_ && near_house && o.position[2] < 20.0f) {
        DirectOrder order;
        order.hold = false;
        order.has_target = true;
        order.target_x = 1156.7f;
        order.target_y = -266.5f;
        order.arrival_radius = 0.5f;
        input = apply_direct_order(order, o).input;
    } else if (!o.driving && seek_vehicle_ && (o.bike_near || o.vehicle_near))
        input = approach_vehicle_input(o, seconds);
    else if (o.driving && in_stall) {
        // Garage bikes face the back wall. Reverse until the opening is clear.
        input.accelerate = false;
        input.brake = true;
        input.analog_y = 255u;
        input.analog_x = 128u;
        input.buttons = 0u;
    } else if (o.driving && nose_in_wall) {
        input.accelerate = true;
        input.brake = true;
        input.analog_x = 255u;
        input.analog_y = 128u;
        input.buttons = 0u;
    } else if (o.driving && stall_cleared_ && recovery >= 5.0) {
        input = block_loop_input(o, block_step_, block_turn_, block_speed_);
    }
    return input;
}

bool stress_savedata_mutates(std::uint32_t mode) {
    switch (mode) {
    case 1u: case 3u: case 5u: case 6u: case 7u: case 9u: case 10u: case 13u: case 14u:
    case 17u: case 18u: case 19u: case 20u: case 21u: return true;
    default: return false;
    }
}

namespace {
std::string_view trim_copy(std::string_view text) {
    while (!text.empty() && (text.front() == ' ' || text.front() == '\t' || text.front() == '\r'))
        text.remove_prefix(1);
    while (!text.empty() && (text.back() == ' ' || text.back() == '\t' || text.back() == '\r'))
        text.remove_suffix(1);
    return text;
}
bool take_word(std::string_view &line, std::string_view &word) {
    line = trim_copy(line);
    if (line.empty()) return false;
    const auto cut = line.find_first_of(" \t");
    if (cut == std::string_view::npos) { word = line; line = {}; return true; }
    word = line.substr(0, cut);
    line.remove_prefix(cut);
    return true;
}
bool take_float(std::string_view &line, float &out) {
    std::string_view word;
    if (!take_word(line, word)) return false;
    const std::string text(word);
    char *end = nullptr;
    out = std::strtof(text.c_str(), &end);
    return end != text.c_str() && *end == '\0' && std::isfinite(out);
}
bool take_uint(std::string_view &line, unsigned long &out) {
    std::string_view word;
    if (!take_word(line, word)) return false;
    const std::string text(word);
    char *end = nullptr;
    out = std::strtoul(text.c_str(), &end, 0);
    return end != text.c_str() && *end == '\0';
}
}

DirectOrder parse_direct_order(std::string_view line) {
    DirectOrder order;
    std::string_view word;
    if (!take_word(line, word)) return order;
    if (word == "shot") {
        order.shot = true;
        if (!take_word(line, word)) return order;
    }
    if (word == "hold") return order;
    if (word == "distance") {
        float value{};
        if (take_float(line, value) && value >= 1 && value <= 4 && trim_copy(line).empty())
            order.view_distance = value;
        return order;
    }
    if (word == "camera") {
        unsigned long x = 128, y = 128;
        if (!take_uint(line, x) || !take_uint(line, y) || x > 255 || y > 255 ||
            !trim_copy(line).empty()) return order;
        order.hold = false;
        order.manual = true;
        order.camera_x = std::max(-127, static_cast<int>(x) - 128);
        order.camera_y = std::max(-127, static_cast<int>(y) - 128);
        return order;
    }
    if (word == "goto") {
        float x = 0.0f, y = 0.0f;
        if (!take_float(line, x) || !take_float(line, y)) return order;
        if (!trim_copy(line).empty() &&
            (!take_float(line, order.arrival_radius) || order.arrival_radius <= 0.0f)) return order;
        order.hold = false;
        order.has_target = true;
        order.target_x = x;
        order.target_y = y;
        return order;
    }
    if (word == "drive") {
        unsigned long steering = 0, throttle = 0, brake = 0;
        if (!take_uint(line, steering) || !take_uint(line, throttle) || !take_uint(line, brake) ||
            steering > 255ul || throttle > 255ul || brake > 255ul) return order;
        unsigned long pitch = 128;
        if (!trim_copy(line).empty() && (!take_uint(line, pitch) || pitch > 255ul)) return order;
        order.hold = false;
        order.manual = true;
        order.analog_x = static_cast<std::uint8_t>(steering);
        order.throttle = static_cast<std::uint8_t>(throttle);
        order.brake_pressure = static_cast<std::uint8_t>(brake);
        order.analog_y = static_cast<std::uint8_t>(pitch);
        order.pressure_mode = true;
        return order;
    }
    if (word == "stick") {
        unsigned long ax = 0, ay = 0, buttons = 0;
        if (!take_uint(line, ax) || !take_uint(line, ay) || !take_uint(line, buttons) ||
            ax > 255ul || ay > 255ul) return order;
        order.hold = false;
        order.manual = true;
        order.analog_x = static_cast<std::uint8_t>(ax);
        order.analog_y = static_cast<std::uint8_t>(ay);
        order.buttons = static_cast<std::uint32_t>(buttons);
        return order;
    }
    order.hold = false;
    order.manual = true;
    order.analog_x = 128u;
    order.analog_y = 128u;
    if (word == "forward" || word == "run") {
        order.analog_y = 0u;
        if (word == "run") order.buttons = kPspCross;
    } else if (word == "back") {
        order.analog_y = 255u;
    } else if (word == "left") {
        order.analog_x = 0u;
    } else if (word == "right") {
        order.analog_x = 255u;
    } else if (word == "enter") {
        order.buttons = kPspTriangle;
    } else {
        order.hold = true;
        order.manual = false;
    }
    return order;
}

DirectMove apply_direct_order(const DirectOrder &order, const StressObservation &observation) {
    DirectMove move;
    if (order.manual) {
        move.input.camera_x = order.camera_x;
        move.input.camera_y = order.camera_y;
        move.input.analog_x = order.analog_x;
        move.input.analog_y = order.analog_y;
        move.input.buttons = order.buttons;
        if (observation.driving) {
            move.input.accelerate = !order.pressure_mode && order.analog_y < 64u;
            move.input.brake = !order.pressure_mode && order.analog_y > 192u;
            move.input.throttle = order.throttle;
            move.input.brake_pressure = order.brake_pressure;
            move.input.buttons &= ~kPspCross;
        }
        return move;
    }
    if (!order.has_target) return move;
    const double dx = static_cast<double>(order.target_x) - observation.position[0];
    const double dy = static_cast<double>(order.target_y) - observation.position[1];
    const double dist = std::hypot(dx, dy);
    if (dist < order.arrival_radius) { move.arrived = true; return move; }
    const double tx = dx / dist, ty = dy / dist;
    // On foot the stick is camera-relative, and a fixed camera does not turn when we strafe.
    const double cx = observation.camera[0], cy = observation.camera[1];
    if (!observation.driving && std::hypot(cx, cy) >= 0.2) {
        const double clen = std::hypot(cx, cy);
        const double fx = cx / clen, fy = cy / clen;
        const double dot = fx * tx + fy * ty;
        const double cross = fx * ty - fy * tx;
        const auto axis = [](double toward_low) {
            const int value = static_cast<int>(std::lround(128.0 - toward_low * 128.0));
            return static_cast<std::uint8_t>(std::clamp(value, 0, 255));
        };
        // Positive dot is forward (low analog_y). Positive cross is left (low analog_x).
        move.input.analog_y = axis(dot);
        move.input.analog_x = axis(cross);
        if (dot > 0.5 && dist > 4.0) move.input.buttons |= kPspCross;
        return move;
    }
    double fx = observation.facing[0], fy = observation.facing[1];
    const double flen = std::hypot(fx, fy);
    // No facing yet: turn until a horizontal row appears.
    if (flen < 0.2) { move.input.analog_x = 255u; return move; }
    fx /= flen; fy /= flen;
    const double dot = fx * tx + fy * ty;
    const double cross = fx * ty - fy * tx;
    if (observation.driving) {
        // Partial lock. Full lock on a small heading error fishtails the car.
        const double swing = std::clamp(cross, -1.0, 1.0);
        move.input.analog_x = static_cast<std::uint8_t>(std::clamp(
            static_cast<int>(std::lround(128.0 - swing * 127.0)), 0, 255));
        const double clen = std::hypot(cx, cy);
        // Positive camera_y looks up. Anything short of level is still a roof shot.
        if (clen >= 0.45) {
            const double side = fx * (cy / clen) - fy * (cx / clen);
            if (std::fabs(side) > 0.12)
                move.input.camera_x = side > 0.0 ? 60 : -60;
        }
        if (clen < 0.96)
            move.input.camera_y = clen < 0.55 ? 110 : 90;
        // A stopped car does not yaw until throttle or reverse is held.
        if (dot >= 0.0) {
            move.input.analog_y = 0u;
            move.input.accelerate = true;
        } else {
            move.input.analog_y = 255u;
            move.input.brake = true;
        }
        return move;
    }
    if (cross > 0.25) move.input.analog_x = 0u;
    else if (cross < -0.25) move.input.analog_x = 255u;
    // Straight behind leaves cross near 0. Turn rather than stand.
    else if (dot <= 0.75) move.input.analog_x = cross > 0.0 ? 0u : 255u;
    if (dot > 0.75) {
        move.input.analog_y = 0u;
        if (dist > 4.0) move.input.buttons |= kPspCross;
    }
    return move;
}

bool is_automobile(int model) {
    return model >= 130 && model <= 191 && model != 164;
}

bool is_bike(int model) {
    return model >= 202 && model <= 210;
}

int nearest_vehicle(float x, float y, float z, const VehicleSample *samples, int count, float max_distance,
                    bool bikes_only) {
    int chosen = -1;
    if (samples == nullptr || count <= 0 || !(max_distance > 0.0f)) return chosen;
    float best = max_distance;
    for (int i = 0; i < count; ++i) {
        if (bikes_only && !is_bike(samples[i].model)) continue;
        const float sx = samples[i].x, sy = samples[i].y, sz = samples[i].z;
        if (!std::isfinite(sx) || !std::isfinite(sy) || !std::isfinite(sz)) continue;
        const float dist = std::hypot(sx - x, sy - y, sz - z);
        if (dist < best) { best = dist; chosen = i; }
    }
    return chosen;
}

std::array<float, 2> matrix_forward(const float (&rows)[3][2]) {
    const float x = rows[1][0];
    const float y = rows[1][1];
    if (!std::isfinite(x) || !std::isfinite(y)) return {};
    return {x, y};
}

bool write_ppm(const std::filesystem::path &path, const std::filesystem::path &copy_to,
               const unsigned char *rgb, std::size_t rgb_bytes, unsigned width, unsigned height) {
    if (rgb == nullptr && rgb_bytes != 0u) return false;
    std::ofstream image(path, std::ios::binary | std::ios::trunc);
    image << "P6\n" << width << ' ' << height << "\n255\n";
    if (rgb_bytes != 0u)
        image.write(reinterpret_cast<const char *>(rgb), static_cast<std::streamsize>(rgb_bytes));
    image.close();
    if (!image) return false;
    if (copy_to.empty()) return true;
    std::error_code copy_error;
    std::filesystem::copy_file(path, copy_to, std::filesystem::copy_options::overwrite_existing, copy_error);
    return !copy_error;
}
}
