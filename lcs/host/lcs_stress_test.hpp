#pragma once

#include "display_window.hpp"

#include <array>
#include <cstdint>
#include <filesystem>
#include <string_view>

namespace lcs {

struct StressObservation {
    bool ready{};
    bool driving{};
    std::uint32_t entity{};
    std::array<float, 3> position{};
    bool menu{};
    // CMatrix forward, the second inline row. Position stays at +48.
    std::array<float, 2> facing{};
    // Active camera front. On foot the stick moves in this frame.
    std::array<float, 2> camera{};
    // Nearest allocated road vehicle within the search radius. Empty when none.
    bool vehicle_near{};
    std::array<float, 3> vehicle{};
    // Model index of that vehicle, or of the vehicle being driven.
    int vehicle_model{};
    // Separate bike target so direct control never substitutes a nearer car.
    bool bike_near{};
    std::array<float, 3> bike{};
    int bike_model{};
    float vehicle_pitch{};
};

struct VehicleSample {
    float x{};
    float y{};
    float z{};
    int model{};
};

// command.txt: hold, shot, goto X Y [RADIUS], stick AX AY BUTTONS,
// forward, run, back, left, right, enter.
// drive STEERING THROTTLE BRAKE [PITCH] uses independent 0-255 pressures.
struct DirectOrder {
    bool hold{true};
    bool shot{};
    bool has_target{};
    bool manual{};
    float view_distance{};
    float target_x{};
    float target_y{};
    float arrival_radius{2.0f};
    std::uint8_t analog_x{128u};
    std::uint8_t analog_y{128u};
    std::uint32_t buttons{};
    std::uint8_t throttle{};
    std::uint8_t brake_pressure{};
    bool pressure_mode{};
    int camera_x{};
    int camera_y{};
};

struct DirectMove {
    HostInputState input{};
    bool arrived{};
};

[[nodiscard]] DirectOrder parse_direct_order(std::string_view line);
[[nodiscard]] DirectMove apply_direct_order(const DirectOrder &order, const StressObservation &observation);
// Index of the closest finite sample inside max_distance, or -1.
[[nodiscard]] int nearest_vehicle(float x, float y, float z, const VehicleSample *samples, int count,
                                  float max_distance, bool bikes_only = false);
// US 1.05 cars are 130-163 and 165-191. 164 is the Dodo. Bikes are 202-210.
[[nodiscard]] bool is_automobile(int model);
[[nodiscard]] bool is_bike(int model);
// rows are right, forward, up. Forward is the second row, not the longest one.
[[nodiscard]] std::array<float, 2> matrix_forward(const float (&rows)[3][2]);
// Closes the PPM before copying so the copy is not a partial buffer.
[[nodiscard]] bool write_ppm(const std::filesystem::path &path, const std::filesystem::path &copy_to,
                              const unsigned char *rgb, std::size_t rgb_bytes, unsigned width, unsigned height);

// Time comes from the caller so scripts and obstacle recovery can be replayed in tests.
class StressController {
public:
    explicit StressController(bool seek_vehicle = false) : seek_vehicle_(seek_vehicle) {}
    HostInputState sample(double seconds, const StressObservation &observation);
    double distance() const { return distance_; }
    unsigned recoveries() const { return recoveries_; }
    unsigned moving_samples() const { return moving_samples_; }
    unsigned driving_samples() const { return driving_samples_; }
    bool gameplay_lost(double seconds) const { return started_ && seconds - last_ready_at_ >= 120.0; }
    bool movement_stalled() const { return stalled_seconds_ >= 60.0; }
    bool started() const { return started_; }
    bool startup_failed(double seconds) const { return !started_ && seconds >= 120.0; }
private:
    bool seek_vehicle_{};
    bool started_{};
    bool tracking_{};
    std::uint32_t entity_{};
    std::array<float, 3> previous_{};
    std::array<float, 3> anchor_{};
    double started_at_{};
    double last_ready_at_{};
    double observed_at_{};
    double anchor_at_{};
    double recovery_at_{-100.0};
    double distance_{};
    double stalled_seconds_{};
    unsigned recoveries_{};
    unsigned moving_samples_{};
    unsigned driving_samples_{};
};

// Explicit opt-in; enabling this also disables ALL guest filesystem writes.
void stress_test_init(bool enabled, bool driving, const std::filesystem::path &output);
void stress_test_set_direct(const std::filesystem::path &directory);
bool stress_test_enabled();
bool stress_savedata_mutates(std::uint32_t mode);
void stress_test_note_blocked_write();
HostInputState stress_test_input(psprecomp::Runtime &runtime, HostInputState physical);
void stress_test_present(psprecomp::Runtime &runtime, std::uint32_t buffer,
                         std::uint32_t stride, std::uint32_t format);
bool stress_test_finish(bool completed_duration);

}
