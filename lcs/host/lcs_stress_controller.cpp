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
