#include "lcs_stress_test.hpp"
#include "lcs_key_bindings.hpp"
#include <cmath>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <iterator>
#include <limits>
#include <stdexcept>

void check(bool condition, const char *message) {
    if (!condition) throw std::runtime_error(message);
}
int main() {
    try {
        lcs::StressController c;
        auto input = c.sample(2.1, {});
        check(input.buttons == lcs::kPspCross, "startup confirm pulse missing");
        check(c.sample(2.5, {}).buttons == 0, "startup pulse did not release");
        check(c.startup_failed(120), "startup must time out");
        lcs::StressObservation o{true, false, 123, {0, 0, 0}};
        input = c.sample(3, o);
        check(input.analog_y == 0 && (input.buttons & lcs::kPspCross), "running input missing");
        check(!c.startup_failed(130), "gameplay should clear startup failure");
        for (int i = 1; i <= 6; ++i) {
            o.position[0] = static_cast<float>(i * 3);
            c.sample(3 + i, o);
        }
        check(c.distance() == 18 && c.moving_samples() == 6, "movement evidence incorrect");
        o.position[0] = 1000;
        c.sample(10, o);
        check(c.distance() == 18, "teleport counted as movement");
        o.entity = 456;
        o.position[0] = 0;
        c.sample(11, o);
        check(c.distance() == 18, "entity switch counted as movement");
        c.sample(17, o);
        input = c.sample(17.1, o);
        check(c.recoveries() == 1 && input.analog_y == 255, "stuck character must back up");
        input = c.sample(19, o);
        check(input.analog_x != 128 && input.camera_x != 0, "recovery must turn");
        check(c.sample(21, {}).buttons == 0, "do not blindly confirm menus after gameplay");
        lcs::StressObservation menu;
        menu.menu = true;
        check(c.sample(20.1, menu).buttons == lcs::kPspCircle, "incidental menus should cancel, never confirm");
        check(c.sample(20.5, menu).buttons == 0, "menu cancel did not release");
        o.driving = true;
        o.entity = 789;
        c.sample(22, o);
        o.position[0] = 20;
        input = c.sample(23, o);
        check(input.accelerate && !(input.buttons & lcs::kPspCross), "vehicle acceleration hook missing");
        check(c.driving_samples() == 1, "driving movement not recorded");
        lcs::StressController driver(true);
        o.driving = false;
        driver.sample(0, o);
        check(driver.sample(10.1, o).buttons & lcs::kPspTriangle, "vehicle seeking missing");
        check(!(driver.sample(10.5, o).buttons & lcs::kPspTriangle), "vehicle button did not release");
        lcs::StressController stuck;
        o.entity = 123; o.driving = false;
        for (int i = 0; i <= 60; ++i) stuck.sample(i, o);
        check(stuck.movement_stalled(), "stationary test must fail rather than pass a soak");
        check(!stuck.gameplay_lost(179), "gameplay timeout triggered too early");
        check(stuck.gameplay_lost(180), "lost gameplay must time out");
        for (unsigned mode : {1u, 3u, 5u, 6u, 7u, 9u, 10u, 13u, 14u, 17u, 18u, 19u, 20u, 21u})
            check(lcs::stress_savedata_mutates(mode), "a savedata mutation is unprotected");
        for (unsigned mode : {0u, 2u, 4u, 8u, 11u, 12u, 15u, 16u, 22u})
            check(!lcs::stress_savedata_mutates(mode), "read-only savedata operation blocked");
        const auto hold = lcs::parse_direct_order("hold");
        check(hold.hold && !hold.shot && !hold.has_target, "hold should stand");
        for (float distance : {1.f, 1.25f, 1.5f, 1.75f, 2.f, 2.5f, 3.f, 4.f})
            check(lcs::parse_direct_order("distance " + std::to_string(distance)).view_distance == distance,
                  "QA distance command must accept every menu step");
        for (const auto command : {"distance", "distance nan", "distance 0", "distance 4.5", "distance 2 extra"})
            check(lcs::parse_direct_order(command).view_distance == 0, "invalid QA distance must be ignored");
        const auto camera = lcs::apply_direct_order(lcs::parse_direct_order("camera 0 255"), o).input;
        check(camera.camera_x == -127 && camera.camera_y == 127,
              "direct camera axes must cover the stick range");
        check(camera.analog_x == 128 && camera.analog_y == 128 && !camera.accelerate &&
              !camera.brake && camera.buttons == 0, "camera command must hold the player still");
        for (const auto command : {"camera", "camera 128", "camera -1 128", "camera 256 128",
                                   "camera 128 128 extra"})
            check(lcs::parse_direct_order(command).hold, "invalid camera command must hold");
        const auto shot = lcs::parse_direct_order("shot goto 12.5 -4");
        check(shot.shot && shot.has_target && shot.target_x == 12.5f && shot.target_y == -4.0f,
              "shot goto should keep both");
        const auto stick = lcs::parse_direct_order("stick 0 255 64");
        check(stick.manual && stick.analog_x == 0 && stick.analog_y == 255 && stick.buttons == 64u,
              "stick should copy the pad");
        check(lcs::parse_direct_order("run").buttons == lcs::kPspCross, "run should sprint");
        check(lcs::parse_direct_order("nope").hold, "unknown command should stand");
        check(lcs::parse_direct_order("goto 1 2 0.4").arrival_radius == 0.4f,
              "narrow doorway routes should accept a precise arrival radius");
        check(lcs::parse_direct_order("goto 1 2 0").hold &&
              lcs::parse_direct_order("goto 1 2 nan").hold,
              "invalid arrival radii must leave the controller neutral");
        check(lcs::parse_direct_order("shot goto 1 2 0").shot,
              "an invalid movement target should still preserve a shot request");
        lcs::StressObservation ped;
        ped.position = {0, 0, 0};
        ped.facing = {0, 1};
        check(lcs::apply_direct_order(lcs::parse_direct_order("goto 0 1"), ped).arrived &&
              !lcs::apply_direct_order(lcs::parse_direct_order("goto 0 1 0.4"), ped).arrived,
              "a precise waypoint must not stop at the default two-unit radius");
        const auto north = lcs::apply_direct_order(lcs::parse_direct_order("goto 0 10"), ped);
        check(!north.arrived && north.input.analog_x == 128 && north.input.analog_y == 0 &&
              (north.input.buttons & lcs::kPspCross), "aligned target should run forward");
        const auto east = lcs::apply_direct_order(lcs::parse_direct_order("goto 10 0"), ped);
        check(east.input.analog_x == 255 && east.input.analog_y == 128, "target on the right should turn right");
        const auto west = lcs::apply_direct_order(lcs::parse_direct_order("goto -10 0"), ped);
        check(west.input.analog_x == 0, "target on the left should turn left");
        ped.facing = {1, 0};
        const auto behind = lcs::apply_direct_order(lcs::parse_direct_order("goto -10 0"), ped);
        check(behind.input.analog_x == 255 && behind.input.analog_y == 128 &&
              !(behind.input.buttons & lcs::kPspCross),
              "target directly behind should turn");
        const auto behind_left = lcs::apply_direct_order(lcs::parse_direct_order("goto -10 2"), ped);
        check(behind_left.input.analog_x == 0 && behind_left.input.analog_y == 128,
              "a target just left of behind should turn left");
        ped.facing = {0, 1};
        const auto there = lcs::apply_direct_order(lcs::parse_direct_order("goto 0 1"), ped);
        check(there.arrived && there.input.analog_x == 128 && there.input.analog_y == 128,
              "arrival should stand");
        ped.facing = {0, 0};
        check(lcs::apply_direct_order(lcs::parse_direct_order("goto 0 10"), ped).input.analog_x == 255,
              "missing facing should turn");
        ped.facing = {1, 0};
        ped.camera = {0, 1};
        const auto doorway = lcs::apply_direct_order(lcs::parse_direct_order("goto 0 1 .4"), ped);
        check(!doorway.arrived && doorway.input.analog_y == 0 &&
              !(doorway.input.buttons & lcs::kPspCross),
              "a nearby doorway waypoint should walk rather than sprint past the opening");
        const auto cam_north = lcs::apply_direct_order(lcs::parse_direct_order("goto 0 10"), ped);
        check(cam_north.input.analog_x == 128 && cam_north.input.analog_y == 0 &&
              (cam_north.input.buttons & lcs::kPspCross),
              "on foot goto should follow the camera, not the body");
        const auto cam_east = lcs::apply_direct_order(lcs::parse_direct_order("goto 10 0"), ped);
        check(cam_east.input.analog_x == 255 && cam_east.input.analog_y == 128,
              "a target right of the camera should turn right");
        const auto cam_behind = lcs::apply_direct_order(lcs::parse_direct_order("goto 0 -10"), ped);
        check(cam_behind.input.analog_x == 128 && cam_behind.input.analog_y == 255 &&
              !(cam_behind.input.buttons & lcs::kPspCross),
              "a target behind a fixed camera should walk back");
        ped.driving = true;
        const auto cruise = lcs::apply_direct_order(lcs::parse_direct_order("drive 100 70 12"), ped);
        check(cruise.input.throttle == 70 && cruise.input.brake_pressure == 12 &&
              !cruise.input.accelerate && !cruise.input.brake && cruise.input.analog_y == 128,
              "partial throttle and brake pressures must remain independent of bike pitch");
        check(lcs::parse_direct_order("drive 100 256 0").hold &&
              lcs::parse_direct_order("drive 100 70").hold,
              "invalid drive pressures must leave the controller neutral");
        const auto wheelie = lcs::apply_direct_order(lcs::parse_direct_order("drive 128 180 0 255"), ped);
        check(wheelie.input.analog_y == 255 && wheelie.input.throttle == 180 &&
              !wheelie.input.brake && wheelie.input.brake_pressure == 0,
              "leaning back for a wheelie must not activate the brake");
        const auto burnout = lcs::apply_direct_order(lcs::parse_direct_order("drive 255 255 255"), ped);
        check(burnout.input.throttle == 255 && burnout.input.brake_pressure == 255 && burnout.input.analog_x == 255 &&
              burnout.input.analog_y == 128,
              "a burnout turn must hold accelerate and brake together without pitching the bike");
        ped.facing = {0, 1};
        ped.camera = {1, 0};
        const auto drive = lcs::apply_direct_order(lcs::parse_direct_order("goto 0 10"), ped);
        check(drive.input.accelerate && drive.input.analog_x == 128,
              "a vehicle should steer from its heading");
        const auto turning = lcs::apply_direct_order(lcs::parse_direct_order("goto 10 0"), ped);
        check(turning.input.accelerate && !turning.input.brake && turning.input.analog_x == 255 &&
              turning.input.analog_y == 0,
              "a vehicle should accelerate while turning");
        const auto reverse = lcs::apply_direct_order(lcs::parse_direct_order("goto 0 -10"), ped);
        check(reverse.input.brake && !reverse.input.accelerate && reverse.input.analog_y == 255,
              "a vehicle should reverse toward a target behind it");
        check(drive.input.camera_x < 0 && drive.input.camera_y == 0,
              "a level camera beside the nose should swing behind without pitching");
        check(turning.input.camera_x < 0, "turning should still swing the camera behind the car");
        ped.camera = {0, 1};
        const auto chase = lcs::apply_direct_order(lcs::parse_direct_order("goto 0 10"), ped);
        check(chase.input.camera_x == 0 && chase.input.camera_y == 0 && chase.input.analog_x == 128,
              "a camera already low and behind the car should stay put and steer straight");
        ped.camera = {0, 0};
        const auto overhead = lcs::apply_direct_order(lcs::parse_direct_order("goto 0 10"), ped);
        check(overhead.input.camera_y > 0 && overhead.input.camera_x == 0,
              "an overhead camera should pitch up out of the roof shot");
        ped.camera = {0.2f, 0.2f};
        const auto high = lcs::apply_direct_order(lcs::parse_direct_order("goto 0 10"), ped);
        check(high.input.camera_y > 0, "a steep camera should pitch up toward the horizon");
        ped.camera = {0.0f, 0.6f};
        const auto rising = lcs::apply_direct_order(lcs::parse_direct_order("goto 0 10"), ped);
        check(rising.input.camera_y > 0 && rising.input.camera_x == 0,
              "a short forward camera should keep pitching up without yawing");
        ped.camera = {0.0f, 0.9f};
        const auto sag = lcs::apply_direct_order(lcs::parse_direct_order("goto 0 10"), ped);
        check(sag.input.camera_y > 0 && sag.input.camera_x == 0,
              "a sagging chase camera should pitch up before it becomes a roof shot");
        const float rows[3][2] = {{3.0f, 0.0f}, {0.0f, 1.0f}, {0.0f, 4.0f}};
        const auto heading = lcs::matrix_forward(rows);
        check(heading[0] == 0.0f && heading[1] == 1.0f,
              "forward row should win over a longer right or up row");
        float missing[3][2] = {{1.0f, 0.0f}, {0.0f, 1.0f}, {0.0f, 0.0f}};
        missing[1][0] = std::numeric_limits<float>::quiet_NaN();
        const auto no_heading = lcs::matrix_forward(missing);
        check(no_heading[0] == 0.0f && no_heading[1] == 0.0f,
              "a non-finite forward row should be empty");
        const auto dir = std::filesystem::temp_directory_path() / "lcs-stress-ppm-test";
        std::filesystem::remove_all(dir);
        std::filesystem::create_directories(dir);
        const unsigned char rgb[6] = {1, 2, 3, 4, 5, 6};
        const auto ppm_path = dir / "shot.ppm";
        const auto latest = dir / "latest.ppm";
        check(lcs::write_ppm(ppm_path, latest, rgb, sizeof rgb, 2, 1), "ppm write should finish before copy");
        std::ifstream shot_in(ppm_path, std::ios::binary);
        std::ifstream latest_in(latest, std::ios::binary);
        const std::string shot_bytes((std::istreambuf_iterator<char>(shot_in)), {});
        const std::string latest_bytes((std::istreambuf_iterator<char>(latest_in)), {});
        check(!shot_bytes.empty() && shot_bytes == latest_bytes, "latest ppm should match the closed file");
        std::filesystem::remove_all(dir);
        lcs::VehicleSample cars[3] = {{100.0f, 0.0f, 0.0f}, {4.0f, 1.0f, 0.0f}, {8.0f, 0.0f, 0.0f}};
        check(lcs::nearest_vehicle(0.0f, 0.0f, 0.0f, cars, 3, 80.0f) == 1,
              "nearest vehicle should win");
        cars[1].x = std::numeric_limits<float>::quiet_NaN();
        check(lcs::nearest_vehicle(0.0f, 0.0f, 0.0f, cars, 3, 80.0f) == 2,
              "a non-finite vehicle should be ignored");
        check(lcs::nearest_vehicle(0.0f, 0.0f, 0.0f, cars, 3, 5.0f) == -1,
              "a vehicle past the search radius should be ignored");
        check(lcs::nearest_vehicle(0.0f, 0.0f, 0.0f, nullptr, 0, 80.0f) == -1,
              "no vehicles should report none");
        check(lcs::is_automobile(151) && lcs::is_automobile(145) && lcs::is_automobile(130),
              "a taxi, a mule, and a spider are automobiles");
        check(!lcs::is_automobile(210) && !lcs::is_automobile(202) && !lcs::is_automobile(206),
              "a Sanchez, an Angel, and a Faggio are not automobiles");
        check(!lcs::is_automobile(164) && !lcs::is_automobile(192) && !lcs::is_automobile(0),
              "the Dodo, the ferry, and an empty id are not automobiles");
        lcs::VehicleSample targets[] = {{1, 0, 0, 151}, {10, 0, 0, 206}, {15, 0, 0, 210}};
        check(lcs::nearest_vehicle(0, 0, 0, targets, 3, 80, true) == 1,
              "bike selection must ignore a nearer car and choose the nearest bike");
        check(lcs::nearest_vehicle(0, 0, 0, targets, 1, 80, true) == -1,
              "a car must not be substituted when there is no bike");
        check(lcs::nearest_vehicle(0, 0, 0, targets, 3, 5, true) == -1,
              "a bike beyond the search radius must not be reported");
        for (int model = 202; model <= 210; ++model)
            check(lcs::is_bike(model), "all garage bike models should be recognized");
        check(!lcs::is_bike(201) && !lcs::is_bike(211) && !lcs::is_bike(151),
              "bike model bounds must exclude other vehicles");
        std::cout << "Stress controller tests passed\n";
        return 0;
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
}
