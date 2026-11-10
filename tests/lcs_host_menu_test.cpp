#include "lcs_display_menu.hpp"
#include "lcs_key_bindings.hpp"
#include "lcs_render_config.hpp"

#include <cstdint>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

namespace lcs {
void display_window_request_fullscreen(bool) noexcept {}
}

namespace {

int fail(const char *message) {
    std::cerr << "FAIL " << message << '\n';
    return 1;
}

int menu_keys() {
    using namespace lcs;
    if (host_settings_open()) return fail("menu started open");
    if (!host_settings_handle(HostSettingsKey::Toggle) || !host_settings_open())
        return fail("toggle did not open");
    const HostSettingsView opened = host_settings_view();
    if (opened.selected != 0) return fail("initial selection");
    const char *labels[]{"View distance", "Fullscreen", "Resolution", "FPS counter", "Frame rate"};
    for (const char *label : labels) {
        bool found = false;
        for (const char (&row)[48] : opened.rows)
            if (std::string(row).find(label) != std::string::npos) found = true;
        if (!found) return fail(label);
    }
    if (!host_settings_handle(HostSettingsKey::Up)) return fail("up");
    const int moved = host_settings_view().selected;
    if (moved == opened.selected) return fail("up did not move");
    if (!host_settings_handle(HostSettingsKey::Down)) return fail("down");
    if (host_settings_view().selected != opened.selected) return fail("down did not return");
    if (!host_settings_handle(HostSettingsKey::Close) || host_settings_open())
        return fail("close");
    std::cout << "open=1 moved=" << moved << " returned=0 closed=1 rows=5\n";
    return 0;
}

int present_policy() {
    using namespace lcs;
    if (!host_settings_handle(HostSettingsKey::Toggle)) return fail("open");
    const Dx12FramePresentDecision open = decide_dx12_frame_present(true);
    if (!open.present_directly) return fail("menu did not present directly");
    if (open.map_full_frame_readback) return fail("menu mapped a full-frame readback");
    if (!open.composite_settings) return fail("menu was not composited");
    if (open.composite_fps) return fail("menu turned the fps counter on");
    if (std::string(open.settings.rows[0]).find("View distance") == std::string::npos)
        return fail("missing view distance");
    if (std::string(open.settings.rows[1]).find("Fullscreen") == std::string::npos)
        return fail("missing fullscreen");
    if (std::string(open.settings.rows[2]).find("Resolution") == std::string::npos)
        return fail("missing resolution");
    if (std::string(open.settings.rows[3]).find("FPS counter") == std::string::npos)
        return fail("missing fps");
    if (std::string(open.settings.rows[4]).find("Frame rate") == std::string::npos)
        return fail("missing frame rate");
    std::vector<std::uint8_t> rgba(static_cast<std::size_t>(kSettingsOverlayWidth) *
                                   kSettingsOverlayHeight * 4u);
    rasterize_settings_overlay(open.settings, rgba.data(), kSettingsOverlayWidth, kSettingsOverlayHeight);
    std::size_t text_pixels = 0u;
    for (std::size_t index = 0u; index + 3u < rgba.size(); index += 4u) {
        if (rgba[index + 3u] == 255u && rgba[index] > 80u) ++text_pixels;
    }
    if (text_pixels < 40u) return fail("settings view was not painted into the frame");
    if (!host_settings_handle(HostSettingsKey::Close)) return fail("close");
    const Dx12FramePresentDecision closed = decide_dx12_frame_present(true);
    if (!closed.present_directly || closed.map_full_frame_readback || closed.composite_settings)
        return fail("closing the menu disabled direct presentation");
    std::cout << "direct=1 readback=0 composite=1 text_pixels=" << text_pixels
              << " closed_direct=1 closed_readback=0 closed_composite=0\n";
    return 0;
}

int fps_counter() {
    using namespace lcs;
    lcs_set_show_fps(false);
    const Dx12FramePresentDecision hidden = decide_dx12_frame_present(true);
    if (!hidden.present_directly || hidden.map_full_frame_readback || hidden.composite_fps)
        return fail("hidden counter changed presentation");
    lcs_set_show_fps(true);
    const Dx12FramePresentDecision shown = decide_dx12_frame_present(true);
    if (!shown.present_directly || shown.map_full_frame_readback || !shown.composite_fps)
        return fail("counter did not composite on the direct present");
    if (shown.composite_settings) return fail("counter opened the menu");
    char label[24];
    host_fps_format(label, sizeof(label));
    if (std::string(label).find("FPS") == std::string::npos) return fail("fps label");
    std::vector<std::uint8_t> rgba(static_cast<std::size_t>(kFpsOverlayWidth) *
                                   kFpsOverlayHeight * 4u);
    rasterize_fps_overlay(rgba.data(), kFpsOverlayWidth, kFpsOverlayHeight);
    std::size_t text_pixels = 0u;
    std::size_t badge_pixels = 0u;
    for (std::size_t index = 0u; index + 3u < rgba.size(); index += 4u) {
        if (rgba[index + 3u] == 255u && rgba[index] > 200u) ++text_pixels;
        if (rgba[index + 3u] == 210u) ++badge_pixels;
    }
    if (text_pixels < 40u) return fail("fps text was not painted");
    if (badge_pixels == 0u) return fail("fps badge was transparent");
    lcs_set_show_fps(false);
    const Dx12FramePresentDecision closed = decide_dx12_frame_present(true);
    if (!closed.present_directly || closed.map_full_frame_readback || closed.composite_fps)
        return fail("turning the counter off left it on the frame");
    std::cout << "hidden_direct=1 shown_direct=1 shown_readback=0 shown_composite=1"
                 " text_pixels=" << text_pixels << " closed_composite=0\n";
    return 0;
}

int bindings() {
    using namespace lcs;
    const ControlBindings defaults = default_control_bindings();
    if (!binding_has(defaults, BindAction::Sprint, HostKey::Space)) return fail("default sprint");
    if (!binding_has(defaults, BindAction::Aim, HostKey::MouseRight)) return fail("default aim");
    if (!binding_has(defaults, BindAction::Handbrake, HostKey::Space)) return fail("default handbrake");
    {   // In a vehicle the Down key pitches without the horn (d-pad down), and Horn sounds it.
        const auto held = [](HostKey wanted) { return [wanted](HostKey key) { return key == wanted; }; };
        const KeyboardSample down = sample_keyboard(defaults, true, held(HostKey::Down));
        if (down.move_y <= 0 || (down.buttons & kPspDown) != 0) return fail("down in a vehicle");
        if ((sample_keyboard(defaults, true, held(HostKey::G)).buttons & kPspDown) == 0) return fail("horn");
        if ((sample_keyboard(defaults, false, held(HostKey::Down)).buttons & kPspDown) == 0) return fail("down on foot");
        if (sample_keyboard(defaults, false, held(HostKey::G)).buttons != 0u) return fail("horn on foot");
    }
    if (binding_wheel_buttons(defaults, true, false) != kPspLeft) return fail("wheel up");
    if (binding_wheel_buttons(defaults, false, true) != kPspRight) return fail("wheel down");

    const auto held = [](HostKey key) {
        return key == HostKey::W || key == HostKey::Space || key == HostKey::MouseRight ||
               key == HostKey::LeftAlt || key == HostKey::Up || key == HostKey::A;
    };
    const KeyboardSample foot = sample_keyboard(defaults, false, held);
    if (foot.move_x != -1 || foot.move_y != -1 || !foot.accelerate || foot.brake || foot.reach != 60)
        return fail("foot axes");
    if ((foot.buttons & kPspCross) == 0 || (foot.buttons & kPspRTrigger) == 0 ||
        (foot.buttons & kPspUp) == 0)
        return fail("foot buttons");

    const KeyboardSample car = sample_keyboard(defaults, true, held);
    if (car.move_x != -1 || car.move_y != -1 || !car.accelerate || car.brake)
        return fail("car axes");
    if ((car.buttons & kPspCross) != 0 || (car.buttons & kPspRTrigger) == 0)
        return fail("car buttons");

    const auto aim_only = [](HostKey key) { return key == HostKey::MouseRight; };
    if ((sample_keyboard(defaults, true, aim_only).buttons & kPspRTrigger) != 0)
        return fail("aim suppressed in a vehicle");

    ControlBindings edited = defaults;
    std::string warning;
    if (!apply_control_binding(edited, "Jump", "Shift", warning) || !warning.empty() ||
        !binding_has(edited, BindAction::Jump, HostKey::LeftShift) ||
        !binding_has(edited, BindAction::Jump, HostKey::RightShift))
        return fail("shift alias");
    if (!apply_control_binding(edited, "Aim", "F10", warning) ||
        warning.find("unchanged") == std::string::npos ||
        !binding_has(edited, BindAction::Aim, HostKey::MouseRight))
        return fail("reserved key");
    if (!apply_control_binding(edited, "Sprint", "None", warning) || !warning.empty() ||
        edited.count[bind_index(BindAction::Sprint)] != 0u)
        return fail("clear");

    const auto path = std::filesystem::temp_directory_path() / "lcs-key-bindings-test.ini";
    {
        std::ofstream out(path);
        out << "[Controls]\n"
               "MouseSensitivity=40\n"
               "Sprint=E\n"
               "WeaponPrevious=Q\n"
               "Attack=MouseMiddle, Nope\n"
               "Handbrake=MouseRight\n";
    }
    const LcsConfiguration loaded = load_lcs_render_configuration(path);
    std::filesystem::remove(path);
    if (loaded.controls.mouse_sensitivity != 40u) return fail("sensitivity");
    if (!binding_has(loaded.controls.bindings, BindAction::Sprint, HostKey::E) ||
        loaded.controls.bindings.count[bind_index(BindAction::Sprint)] != 1u)
        return fail("loaded sprint");
    if (binding_has(loaded.controls.bindings, BindAction::WeaponPrevious, HostKey::WheelUp))
        return fail("wheel left bound");
    if (!binding_has(loaded.controls.bindings, BindAction::Attack, HostKey::MouseMiddle) ||
        !binding_has(loaded.controls.bindings, BindAction::MoveForward, HostKey::W))
        return fail("partial rebind");
    if ((sample_keyboard(loaded.controls.bindings, true, aim_only).buttons & kPspRTrigger) == 0)
        return fail("handbrake rebound");
    bool saw_unknown = false;
    for (const std::string &message : loaded.warnings)
        if (message.find("nope") != std::string::npos) saw_unknown = true;
    if (!saw_unknown) return fail("missing warning");

    const auto shipped_path = std::filesystem::path(__FILE__).parent_path() / ".." / "lcs" /
                              "config" / "LCSNative.ini";
    const LcsConfiguration shipped = load_lcs_render_configuration(shipped_path);
    if (!shipped.warnings.empty()) {
        for (const std::string &message : shipped.warnings)
            std::cerr << message << '\n';
        return fail("shipped ini");
    }
    if (!binding_has(shipped.controls.bindings, BindAction::CenterCamera, HostKey::H) ||
        !binding_has(shipped.controls.bindings, BindAction::CenterCamera, HostKey::MouseMiddle))
        return fail("shipped center");

    const auto pad_a = [](PadButton button) { return button == PadButton::A; };
    const auto pad_rt = [](PadButton button) { return button == PadButton::RightTrigger; };
    const auto pad_rb = [](PadButton button) { return button == PadButton::RightShoulder; };
    const auto pad_lt = [](PadButton button) { return button == PadButton::LeftTrigger; };
    const auto pad_l3 = [](PadButton button) { return button == PadButton::LeftClick; };
    const PadSample pad_foot = sample_pad(defaults, false, pad_rt);
    if (!pad_foot.accelerate || (pad_foot.buttons & kPspRTrigger) == 0)
        return fail("trigger on foot");
    const PadSample pad_car = sample_pad(defaults, true, pad_rt);
    if (!pad_car.accelerate || (pad_car.buttons & kPspRTrigger) != 0)
        return fail("trigger in a vehicle");
    if ((sample_pad(defaults, true, pad_a).buttons & kPspCross) == 0)
        return fail("pad run in a vehicle");
    if ((sample_pad(defaults, true, pad_rb).buttons & kPspRTrigger) == 0)
        return fail("shoulder handbrake");
    if (!sample_pad(defaults, true, pad_lt).brake ||
        (sample_pad(defaults, true, pad_lt).buttons & kPspLTrigger) != 0)
        return fail("left trigger");
    if (!apply_pad_binding(edited, "Cross", "Attack", warning) || !warning.empty() ||
        (sample_pad(edited, false, pad_a).buttons & kPspCircle) == 0)
        return fail("pad rebind");
    if (!apply_stick_binding(edited, "LeftStick", "Camera", warning) || !warning.empty() ||
        edited.left_stick != StickRole::Camera)
        return fail("stick swap");
    const StickReading sdl_move = interpret_stick(StickRole::Move, 0, -20000, false, false);
    if (!sdl_move.move || sdl_move.move_y != stick_to_psp(-20000, false))
        return fail("sdl stick");
    const StickReading xinput_look = interpret_stick(StickRole::Camera, 0, 20000, true, false);
    if (!xinput_look.camera ||
        xinput_look.camera_y != static_cast<int>(stick_to_psp(20000, false)) - 128)
        return fail("xinput stick");
    if ((sample_pad(defaults, true, pad_l3).buttons & kPspDown) == 0)
        return fail("left stick horn");
    if (!pad_has(shipped.controls.bindings, PadButton::A, BindAction::Sprint) ||
        !pad_has(shipped.controls.bindings, PadButton::LeftClick, BindAction::Down) ||
        shipped.controls.bindings.left_stick != StickRole::Move ||
        shipped.controls.bindings.right_stick != StickRole::Camera ||
        shipped.controls.bindings.pad_count[static_cast<std::size_t>(PadButton::RightClick)] != 0u)
        return fail("shipped pad");
    std::cout << "defaults=1 rebound=1 shipped=1 pad=1\n";
    return 0;
}

int f10_key() {
    using namespace lcs;
    const Win32HostKeyDecision sys_down =
        classify_win32_host_key(kWin32SysKeyDown, kWin32VkF10, false);
    const Win32HostKeyDecision sys_up =
        classify_win32_host_key(kWin32SysKeyUp, kWin32VkF10, false);
    const Win32HostKeyDecision key_down =
        classify_win32_host_key(kWin32KeyDown, kWin32VkF10, false);
    const Win32HostKeyDecision key_up =
        classify_win32_host_key(kWin32KeyUp, kWin32VkF10, false);
    const Win32HostKeyDecision system_menu =
        classify_win32_host_key(kWin32SysCommand, kWin32ScKeyMenu, false);
    if (!sys_down.consume || !sys_down.toggle_settings) return fail("system F10 press");
    if (!sys_up.consume || sys_up.toggle_settings) return fail("system F10 release");
    if (!key_down.consume || !key_down.toggle_settings) return fail("F10 press");
    if (!key_up.consume || key_up.toggle_settings) return fail("F10 release");
    if (!system_menu.consume || system_menu.toggle_settings) return fail("system key menu");
    std::cout << "sys_down=consume+toggle sys_up=consume key_down=consume+toggle"
                 " key_up=consume syscommand=consume\n";
    return 0;
}

}  // namespace

int main(int argc, char **argv) {
    if (argc != 2) return 2;
    const std::string mode = argv[1];
    if (mode == "menu") return menu_keys();
    if (mode == "present") return present_policy();
    if (mode == "f10") return f10_key();
    if (mode == "bindings") return bindings();
    if (mode == "fps") return fps_counter();
    return 2;
}
