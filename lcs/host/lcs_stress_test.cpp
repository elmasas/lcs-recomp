#include "lcs_stress_test.hpp"
#include "lcs_controls.hpp"
#include "lcs_menu.hpp"
#include "lcs_render_config.hpp"
#include "ge_gpu_backend.hpp"

#include <atomic>
#include <bit>
#include <chrono>
#include <cmath>
#include <iostream>
#include <fstream>
#include <stdexcept>
#include <vector>

namespace lcs {
namespace {
using Clock = std::chrono::steady_clock;
bool enabled{};
bool driving_required{};
StressController controller;
Clock::time_point start;
std::filesystem::path output;
std::ofstream telemetry;
unsigned blocked_writes{};
double last_log{-10.0};
// Only the presentation thread updates these; finish reads after worker shutdown.
std::uint64_t presents{};
double frame_sum{}, frame_max{};
Clock::time_point previous_present;
double last_snapshot{-15.0};
unsigned snapshots{};
std::filesystem::path direct_dir;
std::filesystem::file_time_type command_stamp{};
bool command_seen{};
DirectOrder direct_order{};
bool direct_arrived{};
std::atomic<bool> shot_request{};
unsigned directed_shots{};

double elapsed() { return std::chrono::duration<double>(Clock::now() - start).count(); }
StressObservation observe(psprecomp::Runtime &runtime) {
    StressObservation result;
    result.menu = lcs_menu_active();
    auto &memory = runtime.memory();
    const auto slot = memory.load8(0x08B5E054u);
    if (slot > 1u) return result;
    const auto ped = memory.load32(0x08B89A10u + slot * 368u);
    if (ped == 0u || !memory.contains(ped, 1337u)) return result;
    result.driving = memory.load8(ped + 1336u) != 0u;
    result.entity = result.driving ? memory.load32(ped + 1332u) : ped;
    if (result.entity == 0u || !memory.contains(result.entity, 64u)) return result;
    // US 1.05 FindPlayerCoors (0x089D5730): inline matrix translation at +48.
    for (unsigned i = 0; i < 3; ++i) {
        result.position[i] = std::bit_cast<float>(memory.load32(result.entity + 48u + i * 4u));
        if (!std::isfinite(result.position[i]) || std::abs(result.position[i]) > 100000.0f)
            return StressObservation{};
    }
    // CMatrix rows are right, forward, up. Forward is the second row.
    float rows[3][2]{};
    for (int i = 0; i < 3; ++i) {
        const auto offset = static_cast<std::uint32_t>(i) * 16u;
        rows[i][0] = std::bit_cast<float>(memory.load32(result.entity + offset));
        rows[i][1] = std::bit_cast<float>(memory.load32(result.entity + offset + 4u));
    }
    result.facing = matrix_forward(rows);
    if (result.driving) {
        const float forward_z = std::bit_cast<float>(memory.load32(result.entity + 24u));
        if (std::isfinite(forward_z))
            result.vehicle_pitch = std::atan2(forward_z, std::hypot(result.facing[0], result.facing[1]));
    }
    // US 1.05 model index is the uint16 at +0x58 (CheatDevice getVehicleID).
    if (result.driving && memory.contains(result.entity + 0x58u, 2u))
        result.vehicle_model = static_cast<int>(memory.load16(result.entity + 0x58u));
    // US 1.05 free-aim reads this same active-cam front (unit 0080).
    const std::uint32_t active = memory.load8(0x08B832A0u + 127u);
    const std::uint32_t cam = 0x08B832A0u + 400u + active * 656u;
    if (memory.contains(cam + 416u, 8u)) {
        const float x = std::bit_cast<float>(memory.load32(cam + 416u));
        const float y = std::bit_cast<float>(memory.load32(cam + 420u));
        if (std::isfinite(x) && std::isfinite(y) && std::hypot(x, y) >= 0.2f)
            result.camera = {x, y};
    }
    // US 1.05 vehicle pool: +0 objects, +4 flags, +8 count. Bit 0x80 is free. Stride 1760.
    if (!result.driving && memory.contains(0x08B4C430u, 4u)) {
        const auto pool = memory.load32(0x08B4C430u);
        if (pool != 0u && memory.contains(pool, 12u)) {
            const auto base = memory.load32(pool);
            const auto flags = memory.load32(pool + 4u);
            const auto raw_count = memory.load32(pool + 8u);
            const int count = raw_count > 128u ? 128 : static_cast<int>(raw_count);
            VehicleSample samples[128];
            int found = 0;
            for (int i = 0; i < count; ++i) {
                const auto flag_at = flags + static_cast<std::uint32_t>(i);
                if (!memory.contains(flag_at, 1u)) break;
                if ((memory.load8(flag_at) & 0x80u) != 0u) continue;
                const auto obj = base + static_cast<std::uint32_t>(i) * 1760u;
                if (obj == result.entity || !memory.contains(obj + 48u, 12u)) continue;
                if (!memory.contains(obj + 0x58u, 2u)) continue;
                const int model = static_cast<int>(memory.load16(obj + 0x58u));
                if (!is_automobile(model) && !is_bike(model)) continue;
                VehicleSample sample;
                sample.x = std::bit_cast<float>(memory.load32(obj + 48u));
                sample.y = std::bit_cast<float>(memory.load32(obj + 52u));
                sample.z = std::bit_cast<float>(memory.load32(obj + 56u));
                sample.model = model;
                samples[found++] = sample;
            }
            const int chosen = nearest_vehicle(result.position[0], result.position[1], result.position[2],
                                                samples, found, 80.0f);
            if (chosen >= 0) {
                result.vehicle_near = true;
                result.vehicle = {samples[chosen].x, samples[chosen].y, samples[chosen].z};
                result.vehicle_model = samples[chosen].model;
            }
            const int bike = nearest_vehicle(result.position[0], result.position[1], result.position[2],
                                              samples, found, 80.0f, true);
            if (bike >= 0) {
                result.bike_near = true;
                result.bike = {samples[bike].x, samples[bike].y, samples[bike].z};
                result.bike_model = samples[bike].model;
            }
        }
    }
    // Camera hooks can be more than 250 ms apart at low frame rates; their
    // wall-clock freshness must not disable the automated controller.
    result.ready = !result.menu;
    return result;
}

bool refresh_direct_order() {
    const auto path = direct_dir / "command.txt";
    std::error_code error;
    const auto stamp = std::filesystem::last_write_time(path, error);
    if (error) {
        if (!command_seen) return false;
        command_seen = false;
        direct_order = {};
        return true;
    }
    if (command_seen && stamp == command_stamp) return false;
    command_seen = true;
    command_stamp = stamp;
    std::ifstream in(path);
    std::string line;
    std::getline(in, line);
    direct_order = parse_direct_order(line);
    return true;
}

void write_direct_state(double seconds, const StressObservation &observation) {
    static double last = -1.0;
    if (seconds - last < 0.2 && last >= 0.0) return;
    last = seconds;
    std::ofstream out(direct_dir / "state.json", std::ios::trunc);
    out << "{\"t\":" << seconds
        << ",\"view_distance\":" << view_distance_scale()
        << ",\"ready\":" << (observation.ready ? "true" : "false")
        << ",\"driving\":" << (observation.driving ? "true" : "false")
        << ",\"menu\":" << (observation.menu ? "true" : "false")
        << ",\"x\":" << observation.position[0]
        << ",\"y\":" << observation.position[1]
        << ",\"z\":" << observation.position[2]
        << ",\"facing_x\":" << observation.facing[0]
        << ",\"facing_y\":" << observation.facing[1]
        << ",\"camera_x\":" << observation.camera[0]
        << ",\"camera_y\":" << observation.camera[1]
        << ",\"vehicle_near\":" << (observation.vehicle_near ? "true" : "false")
        << ",\"vehicle_x\":" << observation.vehicle[0]
        << ",\"vehicle_y\":" << observation.vehicle[1]
        << ",\"vehicle_z\":" << observation.vehicle[2]
        << ",\"vehicle_model\":" << observation.vehicle_model
        << ",\"bike_near\":" << (observation.bike_near ? "true" : "false")
        << ",\"bike_x\":" << observation.bike[0]
        << ",\"bike_y\":" << observation.bike[1]
        << ",\"bike_z\":" << observation.bike[2]
        << ",\"bike_model\":" << observation.bike_model
        << ",\"vehicle_pitch\":" << observation.vehicle_pitch
        << ",\"arrived\":" << (direct_arrived ? "true" : "false")
        << "}\n";
}
} // namespace

void stress_test_init(bool active, bool driving, const std::filesystem::path &directory) {
    enabled = active;
    if (!enabled) { telemetry.close(); return; }
    controller = StressController(driving);
    driving_required = driving;
    output = directory;
    std::filesystem::create_directories(output);
    telemetry.open(output / "movement.csv");
    if (!telemetry) throw std::runtime_error("Cannot open stress movement log");
    telemetry << "seconds,ready,driving,entity,x,y,z,distance,recoveries,buttons,analog_x,analog_y,vehicle_model\n";
    start = Clock::now();
    std::cerr << "[stress] enabled; ALL guest writes and savedata mutations blocked; output="
              << output.string() << "\n";
}
void stress_test_set_direct(const std::filesystem::path &directory) {
    direct_dir = directory;
    if (!direct_dir.empty()) std::filesystem::create_directories(direct_dir);
}
bool stress_test_enabled() { return enabled; }
void stress_test_note_blocked_write() {
    if (++blocked_writes <= 10u) std::cerr << "[stress] blocked guest write/delete request\n";
}
HostInputState stress_test_input(psprecomp::Runtime &runtime, HostInputState physical) {
    if (!enabled) return physical;
    const double seconds = elapsed();
    const auto observation = observe(runtime);
    auto input = controller.sample(seconds, observation);
    lcs_camera_set_axes(input.camera_x, input.camera_y);
    lcs_set_host_drive_inputs(input.accelerate, input.brake, input.throttle, input.brake_pressure);
    if (!direct_dir.empty()) {
        if (refresh_direct_order()) {
            if (direct_order.shot) shot_request.store(true);
            if (direct_order.view_distance) lcs_set_view_distance(direct_order.view_distance);
        }
        if (observation.ready) {
            const DirectMove move = apply_direct_order(direct_order, observation);
            input = move.input;
            direct_arrived = move.arrived;
            lcs_camera_set_axes(input.camera_x, input.camera_y);
            lcs_set_host_drive_inputs(input.accelerate, input.brake, input.throttle, input.brake_pressure);
        }
        write_direct_state(seconds, observation);
    }
    if (controller.startup_failed(seconds)) runtime.stop("Stress test failed: gameplay not reached within 120 seconds");
    if (controller.gameplay_lost(seconds)) runtime.stop("Stress test failed: gameplay unavailable for 120 seconds");
    // A directed check stands still to photograph. That is not a failed soak.
    if (direct_dir.empty() && controller.movement_stalled())
        runtime.stop("Stress test failed: no movement for 60 seconds despite recovery");
    if (seconds - last_log >= 1.0) {
        telemetry << seconds << ',' << observation.ready << ',' << observation.driving << ','
                  << observation.entity << ',' << observation.position[0] << ','
                  << observation.position[1] << ',' << observation.position[2] << ','
                  << controller.distance() << ',' << controller.recoveries() << ','
                  << input.buttons << ',' << unsigned(input.analog_x) << ',' << unsigned(input.analog_y)
                  << ',' << observation.vehicle_model << '\n';
        telemetry.flush();
        if (seconds - last_log > 5.0 || static_cast<unsigned>(seconds) % 10u == 0u)
            std::cerr << "[stress] t=" << seconds << " ready=" << observation.ready
                      << " driving=" << observation.driving << " distance=" << controller.distance()
                      << " recoveries=" << controller.recoveries() << "\n";
        last_log = seconds;
    }
    return input;
}

void stress_test_present(psprecomp::Runtime &runtime, std::uint32_t buffer,
                         std::uint32_t stride, std::uint32_t format) {
    if (!enabled) return;
    const auto now = Clock::now();
    if (presents++ != 0u) {
        const double ms = std::chrono::duration<double, std::milli>(now - previous_present).count();
        frame_sum += ms; frame_max = std::max(frame_max, ms);
    }
    previous_present = now;
    const double seconds = std::chrono::duration<double>(now - start).count();
    const bool requested = shot_request.exchange(false);
    if (!requested && seconds - last_snapshot < 15.0) return;
    if (!requested) last_snapshot = seconds;
    // Direct swapchain presentation has no CPU pixels. Do not label stale guest
    // VRAM as a screenshot of that GPU frame.
    if (ge_gpu_backend_presents_directly()) {
        if (requested && !direct_dir.empty()) {
            std::ofstream miss(direct_dir / "shot-unavailable.txt");
            miss << "direct swapchain has no CPU pixels\n";
        }
        return;
    }
    const auto gpu = ge_gpu_backend_report();
    const auto rgba = ge_gpu_backend_game_frame_rgba();
    unsigned width = 480, height = 272;
    std::vector<unsigned char> rgb;
    if (!rgba.empty() && rgba.size() == std::size_t(gpu.offscreen_width) * gpu.offscreen_height * 4u) {
        width = gpu.offscreen_width; height = gpu.offscreen_height;
        rgb.reserve(std::size_t(width) * height * 3u);
        for (std::size_t i = 0; i < rgba.size(); i += 4u)
            for (unsigned c = 0; c < 3; ++c) rgb.push_back(std::to_integer<unsigned char>(rgba[i + c]));
    } else if (!ge_gpu_backend_active() && buffer != 0 && stride >= width && format <= 3u) {
        const unsigned bpp = format == 3u ? 4u : 2u;
        auto &memory = runtime.memory();
        if (!memory.contains(buffer, std::size_t(stride) * height * bpp)) {
            if (requested && !direct_dir.empty()) {
                std::ofstream miss(direct_dir / "shot-unavailable.txt");
                miss << "guest frame is outside RAM\n";
            }
            return;
        }
        rgb.reserve(std::size_t(width) * height * 3u);
        for (unsigned y = 0; y < height; ++y) for (unsigned x = 0; x < width; ++x) {
            const auto address = buffer + (y * stride + x) * bpp;
            const auto pixel = bpp == 4u ? memory.load32(address) : memory.load16(address);
            if (format == 3u) {
                for (unsigned c = 0; c < 3; ++c) rgb.push_back((pixel >> (8u * c)) & 255u);
            } else {
                const unsigned bits = format == 2u ? 4u : 5u;
                const unsigned green = format == 0u ? 6u : bits;
                rgb.push_back((pixel & ((1u << bits) - 1u)) * 255u / ((1u << bits) - 1u));
                rgb.push_back(((pixel >> bits) & ((1u << green) - 1u)) * 255u / ((1u << green) - 1u));
                rgb.push_back(((pixel >> (bits + green)) & ((1u << bits) - 1u)) * 255u / ((1u << bits) - 1u));
            }
        }
    } else {
        if (requested && !direct_dir.empty()) {
            std::ofstream miss(direct_dir / "shot-unavailable.txt");
            miss << "no CPU frame\n";
        }
        return;
    }
    const bool directed = requested && !direct_dir.empty();
    const auto path = directed
        ? direct_dir / ("shot-" + std::to_string(directed_shots + 1u) + ".ppm")
        : output / ("frame-" + std::to_string(static_cast<unsigned>(seconds)) + ".ppm");
    const auto copy_to = directed ? direct_dir / "latest.ppm" : std::filesystem::path{};
    if (!write_ppm(path, copy_to, rgb.data(), rgb.size(), width, height)) return;
    ++snapshots;
    if (!directed) return;
    ++directed_shots;
    std::ofstream note(direct_dir / "shot.json");
    note << "{\"file\":\"" << path.filename().string() << "\",\"seconds\":" << seconds
         << ",\"width\":" << width << ",\"height\":" << height << "}\n";
    std::error_code ignore;
    std::filesystem::remove(direct_dir / "shot-unavailable.txt", ignore);
}
bool stress_test_finish(bool completed_duration) {
    if (!enabled) return true;
    const bool passed = controller.started() && controller.moving_samples() >= 5 && controller.distance() >= 10.0;
    const bool driving_verified = controller.driving_samples() >= 5u;
    const bool success = passed && completed_duration && (!driving_required || driving_verified);
    std::ofstream report(output / "summary.json");
    report << "{\n  \"movement_verified\": " << (passed ? "true" : "false")
           << ",\n  \"completed_duration\": " << (completed_duration ? "true" : "false")
           << ",\n  \"driving_verified\": " << (driving_verified ? "true" : "false")
           << ",\n  \"success\": " << (success ? "true" : "false")
           << ",\n  \"elapsed_seconds\": " << elapsed()
           << ",\n  \"distance\": " << controller.distance()
           << ",\n  \"moving_samples\": " << controller.moving_samples()
           << ",\n  \"driving_samples\": " << controller.driving_samples()
           << ",\n  \"recoveries\": " << controller.recoveries()
           << ",\n  \"blocked_writes\": " << blocked_writes
           << ",\n  \"presents\": " << presents
           << ",\n  \"mean_present_interval_ms\": " << (presents > 1 ? frame_sum / (presents - 1) : 0.0)
           << ",\n  \"max_present_interval_ms\": " << frame_max
           << ",\n  \"snapshots\": " << snapshots << "\n}\n";
    std::cerr << "[stress] movement_verified=" << passed << " distance=" << controller.distance()
              << " moving_samples=" << controller.moving_samples() << "\n";
    return success && bool(report);
}
}
