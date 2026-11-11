#include "lcs_frontend_menu.hpp"
#include "lcs_frontend_options.hpp"
#include "lcs_radio_wheel.hpp"
#include "lcs_weapon_wheel.hpp"
#include "display_window.hpp"

#include <string>
#include <iostream>
#include <span>
#include "ge_gpu_backend.hpp"
#include "lcs_mouse.hpp"
#include "lcs_controls.hpp"
#include "lcs_display_menu.hpp"
#include "lcs_perf_log.hpp"
#include "lcs_imgui_menu.hpp"
#include "lcs_menu.hpp"
#include "lcs_key_bindings.hpp"
#include "lcs_state.hpp"
#include "lcs_render_config.hpp"

#if defined(_WIN32)

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <mutex>
#include <vector>

namespace lcs {
namespace {

HWND g_window{};
bool g_closed{};
bool g_fullscreen{};
WINDOWPLACEMENT g_windowed_placement{};
std::vector<std::uint32_t> g_pixels;
std::uint32_t g_pixel_width{};
std::uint32_t g_pixel_height{};
std::atomic<int> g_wheel{0};
std::atomic<std::int32_t> g_mouse_dx{0};
std::atomic<std::int32_t> g_mouse_dy{0};

void discard_pending_pointer() noexcept {
    g_wheel.store(0, std::memory_order_relaxed);
    g_mouse_dx.store(0, std::memory_order_relaxed);
    g_mouse_dy.store(0, std::memory_order_relaxed);
}

int win32_virtual_key(HostKey key) noexcept {
    const int id = static_cast<int>(key);
    if (host_key_in(key, HostKey::A, HostKey::Z))
        return 'A' + (id - static_cast<int>(HostKey::A));
    if (host_key_in(key, HostKey::Digit0, HostKey::Digit9))
        return '0' + (id - static_cast<int>(HostKey::Digit0));
    if (host_key_in(key, HostKey::F1, HostKey::F12))
        return VK_F1 + (id - static_cast<int>(HostKey::F1));
    if (host_key_in(key, HostKey::Numpad0, HostKey::Numpad9))
        return VK_NUMPAD0 + (id - static_cast<int>(HostKey::Numpad0));
    switch (key) {
    case HostKey::Space: return VK_SPACE;
    case HostKey::Enter: return VK_RETURN;
    case HostKey::Escape: return VK_ESCAPE;
    case HostKey::Tab: return VK_TAB;
    case HostKey::Backspace: return VK_BACK;
    case HostKey::LeftShift: return VK_LSHIFT;
    case HostKey::RightShift: return VK_RSHIFT;
    case HostKey::LeftCtrl: return VK_LCONTROL;
    case HostKey::RightCtrl: return VK_RCONTROL;
    case HostKey::LeftAlt: return VK_LMENU;
    case HostKey::RightAlt: return VK_RMENU;
    case HostKey::Up: return VK_UP;
    case HostKey::Down: return VK_DOWN;
    case HostKey::Left: return VK_LEFT;
    case HostKey::Right: return VK_RIGHT;
    case HostKey::NumpadPlus: return VK_ADD;
    case HostKey::NumpadMinus: return VK_SUBTRACT;
    case HostKey::Delete: return VK_DELETE;
    case HostKey::Insert: return VK_INSERT;
    case HostKey::Home: return VK_HOME;
    case HostKey::End: return VK_END;
    case HostKey::PageUp: return VK_PRIOR;
    case HostKey::PageDown: return VK_NEXT;
    case HostKey::Comma: return VK_OEM_COMMA;
    case HostKey::Period: return VK_OEM_PERIOD;
    case HostKey::Minus: return VK_OEM_MINUS;
    case HostKey::Equals: return VK_OEM_PLUS;
    case HostKey::MouseLeft: return VK_LBUTTON;
    case HostKey::MouseRight: return VK_RBUTTON;
    case HostKey::MouseMiddle: return VK_MBUTTON;
    case HostKey::Mouse4: return VK_XBUTTON1;
    case HostKey::Mouse5: return VK_XBUTTON2;
    default: return 0;
    }
}

bool key_down(int virtual_key) noexcept {
    return (GetAsyncKeyState(virtual_key) & 0x8000) != 0;
}

bool cursor_in_client(HWND hwnd) noexcept {
    POINT cursor{};
    if (!GetCursorPos(&cursor) || WindowFromPoint(cursor) != hwnd) return false;
    RECT client{};
    if (!GetClientRect(hwnd, &client) || !ScreenToClient(hwnd, &cursor)) return false;
    return PtInRect(&client, cursor) != FALSE;
}

struct XInputGamepad {
    std::uint16_t buttons;
    std::uint8_t left_trigger;
    std::uint8_t right_trigger;
    std::int16_t lx, ly, rx, ry;
};
struct XInputStatePacket {
    std::uint32_t packet;
    XInputGamepad gamepad;
};
using PfnXInputGetState = DWORD(WINAPI *)(DWORD, XInputStatePacket *);

constexpr std::uint16_t kPadDpadUp = 0x0001u;
constexpr std::uint16_t kPadDpadDown = 0x0002u;
constexpr std::uint16_t kPadDpadLeft = 0x0004u;
constexpr std::uint16_t kPadDpadRight = 0x0008u;
constexpr std::uint16_t kPadStart = 0x0010u;
constexpr std::uint16_t kPadBack = 0x0020u;
constexpr std::uint16_t kPadLeftThumb = 0x0040u;
constexpr std::uint16_t kPadRightThumb = 0x0080u;
constexpr std::uint16_t kPadLeftShoulder = 0x0100u;
constexpr std::uint16_t kPadRightShoulder = 0x0200u;
constexpr std::uint16_t kPadA = 0x1000u;
constexpr std::uint16_t kPadB = 0x2000u;
constexpr std::uint16_t kPadX = 0x4000u;
constexpr std::uint16_t kPadY = 0x8000u;

PfnXInputGetState xinput_get_state() noexcept {
    static PfnXInputGetState resolved = []() -> PfnXInputGetState {
        for (const wchar_t *name : {L"xinput1_4.dll", L"xinput1_3.dll", L"xinput9_1_0.dll"}) {
            if (HMODULE module = LoadLibraryW(name)) {
                if (auto function = reinterpret_cast<PfnXInputGetState>(
                        reinterpret_cast<void *>(GetProcAddress(module, "XInputGetState"))))
                    return function;
            }
        }
        return nullptr;
    }();
    return resolved;
}

void update_cursor_clip(HWND hwnd, bool capture) noexcept {
    if (!capture || hwnd == nullptr || !lcs_camera_hook_enabled() || !lcs_camera_in_use()) {
        ClipCursor(nullptr);
        return;
    }
    RECT client{};
    if (!GetClientRect(hwnd, &client)) return;
    POINT top_left{client.left, client.top};
    POINT bottom_right{client.right, client.bottom};
    ClientToScreen(hwnd, &top_left);
    ClientToScreen(hwnd, &bottom_right);
    const RECT wanted{top_left.x, top_left.y, bottom_right.x, bottom_right.y};
    RECT current{};
    if (GetClipCursor(&current) && EqualRect(&current, &wanted)) return;
    ClipCursor(&wanted);
}

void set_fullscreen(HWND hwnd, bool fullscreen) noexcept {
    if (hwnd == nullptr || fullscreen == g_fullscreen) return;
    const LONG_PTR style = GetWindowLongPtrW(hwnd, GWL_STYLE);
    if (fullscreen) {
        MONITORINFO monitor{};
        monitor.cbSize = sizeof(monitor);
        g_windowed_placement.length = sizeof(g_windowed_placement);
        if (!GetWindowPlacement(hwnd, &g_windowed_placement) ||
            !GetMonitorInfoW(MonitorFromWindow(hwnd, MONITOR_DEFAULTTONEAREST), &monitor))
            return;
        SetWindowLongPtrW(hwnd, GWL_STYLE, (style & ~WS_OVERLAPPEDWINDOW) | WS_POPUP);
        const RECT &area = monitor.rcMonitor;
        SetWindowPos(hwnd, HWND_TOP, area.left, area.top, area.right - area.left,
                     area.bottom - area.top, SWP_NOOWNERZORDER | SWP_FRAMECHANGED);
    } else {
        SetWindowLongPtrW(hwnd, GWL_STYLE, (style & ~WS_POPUP) | WS_OVERLAPPEDWINDOW);
        SetWindowPlacement(hwnd, &g_windowed_placement);
        SetWindowPos(hwnd, nullptr, 0, 0, 0, 0,
                     SWP_NOMOVE | SWP_NOSIZE | SWP_NOZORDER | SWP_NOOWNERZORDER | SWP_FRAMECHANGED);
    }
    g_fullscreen = fullscreen;
}

void note_host_frame() noexcept {
    host_fps_note_presented_frame();
}

void paint_host_overlay(HDC hdc) noexcept {
    if (hdc == nullptr || g_window == nullptr) return;
    RECT client{};
    GetClientRect(g_window, &client);
    const int client_w = client.right - client.left;
    const int client_h = client.bottom - client.top;
    if (client_w <= 0 || client_h <= 0) return;
    const int font_h = std::max(16, client_h / 36);
    HFONT font = CreateFontW(-font_h, 0, 0, 0, FW_NORMAL, FALSE, FALSE, FALSE, ANSI_CHARSET,
                             OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, CLEARTYPE_QUALITY,
                             DEFAULT_PITCH | FF_DONTCARE, L"Segoe UI");
    HGDIOBJ previous = SelectObject(hdc, font);
    SetBkMode(hdc, TRANSPARENT);
    if (lcs_render_configuration().display.show_fps) {
        char label[24];
        host_fps_format(label, sizeof(label));
        RECT box{12, 12, 12 + font_h * 6, 12 + font_h + 10};
        HBRUSH background = CreateSolidBrush(RGB(8, 12, 28));
        FillRect(hdc, &box, background);
        DeleteObject(background);
        SetTextColor(hdc, RGB(232, 248, 255));
        TextOutA(hdc, 18, 16, label, static_cast<int>(std::strlen(label)));
    }
    if (host_settings_open()) {
        const HostSettingsView view = host_settings_view();
        const int line = font_h + 8;
        const int panel_w = font_h * 22;
        const int panel_h = line * 10;
        const int origin_x = std::max(12, client_w - panel_w - 12);
        const int origin_y = 12;
        RECT panel{origin_x, origin_y, origin_x + panel_w, origin_y + panel_h};
        HBRUSH background = CreateSolidBrush(RGB(8, 12, 28));
        FillRect(hdc, &panel, background);
        DeleteObject(background);
        SetTextColor(hdc, RGB(180, 200, 230));
        TextOutA(hdc, origin_x + 12, origin_y + 8, "HOST SETTINGS", 13);
        TextOutA(hdc, origin_x + 12, origin_y + 8 + line, "F10 CLOSE", 9);
        for (int row = 0; row < 5; ++row) {
            const int y = origin_y + 8 + line * (2 + row);
            if (row == view.selected) {
                RECT highlight{origin_x + 6, y - 2, origin_x + panel_w - 6, y + font_h + 4};
                HBRUSH brush = CreateSolidBrush(RGB(40, 70, 120));
                FillRect(hdc, &highlight, brush);
                DeleteObject(brush);
                SetTextColor(hdc, RGB(255, 255, 255));
            } else {
                SetTextColor(hdc, RGB(170, 190, 220));
            }
            TextOutA(hdc, origin_x + 12, y, view.rows[row], static_cast<int>(std::strlen(view.rows[row])));
        }
        if (view.resolution_pending) {
            SetTextColor(hdc, RGB(220, 180, 80));
            TextOutA(hdc, origin_x + 12, origin_y + 8 + line * 7, "RESTART TO APPLY", 16);
        }
    }
    SelectObject(hdc, previous);
    DeleteObject(font);
}

void blit_stored_frame() noexcept {
    if (g_window == nullptr || g_pixels.empty() || g_pixel_width == 0u || g_pixel_height == 0u) return;
    HDC hdc = GetDC(g_window);
    if (hdc == nullptr) return;
    BITMAPINFO info{};
    info.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    info.bmiHeader.biWidth = static_cast<LONG>(g_pixel_width);
    info.bmiHeader.biHeight = -static_cast<LONG>(g_pixel_height);
    info.bmiHeader.biPlanes = 1;
    info.bmiHeader.biBitCount = 32;
    info.bmiHeader.biCompression = BI_RGB;
    RECT client{};
    GetClientRect(g_window, &client);
    SetStretchBltMode(hdc, HALFTONE);
    SetBrushOrgEx(hdc, 0, 0, nullptr);
    StretchDIBits(hdc, 0, 0, client.right - client.left, client.bottom - client.top, 0, 0,
                 static_cast<int>(g_pixel_width), static_cast<int>(g_pixel_height), g_pixels.data(),
                 &info, DIB_RGB_COLORS, SRCCOPY);
    paint_host_overlay(hdc);
    ReleaseDC(g_window, hdc);
}

LRESULT CALLBACK window_proc(HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam) {
    const Win32HostKeyDecision host_key = classify_win32_host_key(
        static_cast<std::uint32_t>(message), static_cast<std::uint32_t>(wparam),
        (lparam & (1 << 30)) != 0);
    if (host_key.consume) {
        if (host_key.toggle_settings) {
            const bool was_open = host_settings_open();
            host_settings_handle(HostSettingsKey::Toggle);
            if (was_open) discard_pending_pointer();
        }
        return 0;
    }
    if (message == WM_KEYDOWN) {
        const bool repeat = (lparam & (1 << 30)) != 0;
        if (wparam == VK_F11 && !repeat) {
            set_fullscreen(hwnd, !g_fullscreen);
            host_settings_note_fullscreen(g_fullscreen);
            return 0;
        }
    }
    // The open menu takes the keyboard and mouse. Only keys it consumes stop here: the rest still reach Windows.
    if (imgui_menu_note_message(hwnd, message, wparam, lparam)) {
        discard_pending_pointer();
        return 0;
    }
    if (message == WM_ACTIVATE) {
        update_cursor_clip(hwnd, LOWORD(wparam) != WA_INACTIVE && HIWORD(wparam) == 0);
        return DefWindowProcW(hwnd, message, wparam, lparam);
    }
    if (message == WM_SIZE || message == WM_MOVE || message == WM_EXITSIZEMOVE) {
        if (GetForegroundWindow() == hwnd) update_cursor_clip(hwnd, true);
        return DefWindowProcW(hwnd, message, wparam, lparam);
    }
    if (message == WM_ENTERSIZEMOVE) {
        update_cursor_clip(hwnd, false);
        return DefWindowProcW(hwnd, message, wparam, lparam);
    }
    if (message == WM_INPUT) {
        UINT size = 0u;
        GetRawInputData(reinterpret_cast<HRAWINPUT>(lparam), RID_INPUT, nullptr, &size,
                        sizeof(RAWINPUTHEADER));
        if (size != 0u && size <= 256u) {
            alignas(8) std::byte buffer[256];
            if (GetRawInputData(reinterpret_cast<HRAWINPUT>(lparam), RID_INPUT, buffer, &size,
                                sizeof(RAWINPUTHEADER)) == size) {
                const RAWINPUT *raw = reinterpret_cast<const RAWINPUT *>(buffer);
                if (raw->header.dwType == RIM_TYPEMOUSE &&
                    (raw->data.mouse.usFlags & MOUSE_MOVE_ABSOLUTE) == 0 &&
                    !host_settings_open()) {
                    g_mouse_dx.fetch_add(raw->data.mouse.lLastX, std::memory_order_relaxed);
                    g_mouse_dy.fetch_add(raw->data.mouse.lLastY, std::memory_order_relaxed);
                }
            }
        }
        return DefWindowProcW(hwnd, message, wparam, lparam);
    }
    if (message == WM_SETCURSOR && LOWORD(lparam) == HTCLIENT && (host_settings_open() || frontend_menu_active())) {
        SetCursor(LoadCursorA(nullptr, IDC_ARROW));
        return TRUE;
    }
    if (message == WM_SETCURSOR && LOWORD(lparam) == HTCLIENT && !lcs_menu_active()) {
        SetCursor(nullptr);
        return TRUE;
    }
    if (message == WM_MOUSEWHEEL) {
        if (!host_settings_open())
            g_wheel.fetch_add(GET_WHEEL_DELTA_WPARAM(wparam) / WHEEL_DELTA, std::memory_order_relaxed);
        return 0;
    }
    if (message == WM_DESTROY || message == WM_CLOSE) {
        ClipCursor(nullptr);
        g_closed = true;
        if (message == WM_DESTROY) {
            g_window = nullptr;
            return 0;
        }
    }
    return DefWindowProcW(hwnd, message, wparam, lparam);
}

std::uint32_t unpack_pixel(const std::uint8_t *src, std::uint32_t format) {
    switch (format) {
    case 0u: {  // GU_PSM_5650
        const std::uint16_t value = static_cast<std::uint16_t>(src[0] | (src[1] << 8));
        const std::uint32_t r = (value & 0x1Fu) * 255u / 31u;
        const std::uint32_t g = ((value >> 5u) & 0x3Fu) * 255u / 63u;
        const std::uint32_t b = ((value >> 11u) & 0x1Fu) * 255u / 31u;
        return 0xFF000000u | (r << 16u) | (g << 8u) | b;
    }
    case 1u: {  // GU_PSM_5551
        const std::uint16_t value = static_cast<std::uint16_t>(src[0] | (src[1] << 8));
        const std::uint32_t r = (value & 0x1Fu) * 255u / 31u;
        const std::uint32_t g = ((value >> 5u) & 0x1Fu) * 255u / 31u;
        const std::uint32_t b = ((value >> 10u) & 0x1Fu) * 255u / 31u;
        return 0xFF000000u | (r << 16u) | (g << 8u) | b;
    }
    case 2u: {  // GU_PSM_4444
        const std::uint16_t value = static_cast<std::uint16_t>(src[0] | (src[1] << 8));
        const std::uint32_t r = (value & 0xFu) * 17u;
        const std::uint32_t g = ((value >> 4u) & 0xFu) * 17u;
        const std::uint32_t b = ((value >> 8u) & 0xFu) * 17u;
        return 0xFF000000u | (r << 16u) | (g << 8u) | b;
    }
    default: {  // GU_PSM_8888
        return 0xFF000000u | (static_cast<std::uint32_t>(src[0]) << 16u) |
            (static_cast<std::uint32_t>(src[1]) << 8u) | src[2];
    }
    }
}

std::uint32_t bytes_per_pixel(std::uint32_t format) { return format == 3u ? 4u : 2u; }

}  // namespace

void display_window_init() {
    if (g_window != nullptr) return;
    WNDCLASSW wc{};
    wc.lpfnWndProc = window_proc;
    wc.hInstance = GetModuleHandleW(nullptr);
    wc.lpszClassName = L"LCSNativeWindow";
    wc.hCursor = LoadCursorW(nullptr, MAKEINTRESOURCEW(32512));  // IDC_ARROW
    wc.hIcon = LoadIconW(wc.hInstance, MAKEINTRESOURCEW(1));
    RegisterClassW(&wc);
    const DisplaySurfaceDimensions surface = resolve_window_dimensions();
    g_window = CreateWindowExW(0, wc.lpszClassName, L"LCSNative - GTA: Liberty City Stories",
                               WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT,
                               static_cast<int>(surface.width), static_cast<int>(surface.height),
                               nullptr, nullptr, wc.hInstance, nullptr);
    if (g_window == nullptr) return;

    RECT outer{};
    RECT client{};
    GetWindowRect(g_window, &outer);
    GetClientRect(g_window, &client);
    const int frame_width = (outer.right - outer.left) - client.right;
    const int frame_height = (outer.bottom - outer.top) - client.bottom;

    RECT work{0, 0, GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN)};
    SystemParametersInfoW(SPI_GETWORKAREA, 0, &work, 0);
    const int work_width = static_cast<int>(work.right - work.left);
    const int work_height = static_cast<int>(work.bottom - work.top);

    const int client_width = std::clamp(static_cast<int>(surface.width), 1,
                                        std::max(1, work_width - frame_width));
    const int client_height = std::clamp(static_cast<int>(surface.height), 1,
                                         std::max(1, work_height - frame_height));
    const int window_width = client_width + frame_width;
    const int window_height = client_height + frame_height;

    SetWindowPos(g_window, nullptr,
                 static_cast<int>(work.left) + (work_width - window_width) / 2,
                 static_cast<int>(work.top) + (work_height - window_height) / 2,
                 window_width, window_height, SWP_NOZORDER | SWP_NOACTIVATE);
    set_fullscreen(g_window, lcs_render_configuration().display.fullscreen);
    ge_gpu_backend_set_native_window(g_window);
    ShowWindow(g_window, SW_SHOW);
    const RAWINPUTDEVICE mouse{0x01u, 0x02u, 0u, g_window};
    RegisterRawInputDevices(&mouse, 1u, sizeof(mouse));
}

void display_window_attach_gpu_backend() {
    if (g_window != nullptr) ge_gpu_backend_set_native_window(g_window);
}

bool display_window_closed() { return g_closed; }

void display_window_request_close() {
    if (g_window != nullptr) PostMessageW(g_window, WM_CLOSE, 0u, 0);
}

std::atomic<int> g_fullscreen_request{-1};

void apply_fullscreen_request() noexcept {
    const int request = g_fullscreen_request.exchange(-1, std::memory_order_relaxed);
    if (request < 0 || g_window == nullptr) return;
    set_fullscreen(g_window, request != 0);
}

void display_window_request_fullscreen(bool enabled) noexcept {
    g_fullscreen_request.store(enabled ? 1 : 0, std::memory_order_relaxed);
}

void display_window_pump() {
    apply_fullscreen_request();
    if (g_window == nullptr) return;
    MSG msg;
    while (PeekMessageW(&msg, nullptr, 0, 0, PM_REMOVE)) {
        TranslateMessage(&msg);
        DispatchMessageW(&msg);
    }
}

void display_window_present(psprecomp::Runtime &runtime, std::uint32_t frame_buffer,
                            std::uint32_t buffer_width, std::uint32_t pixel_format,
                            std::uint32_t width, std::uint32_t height) {
    if (g_window == nullptr) return;

    MSG msg;
    while (PeekMessageW(&msg, nullptr, 0, 0, PM_REMOVE)) {
        TranslateMessage(&msg);
        DispatchMessageW(&msg);
    }
    if (g_closed || g_window == nullptr) return;

    // Guest calls WaitVblankStart way faster than 60Hz (~90k times per 500k
    // dispatches), so cap the actual blit to ~30Hz real time.
    static auto last_present = std::chrono::steady_clock::time_point{};
    const auto now = std::chrono::steady_clock::now();
    if (now - last_present < std::chrono::milliseconds(33)) return;
    last_present = now;

    if (frame_buffer == 0u || width == 0u || height == 0u || buffer_width == 0u) return;
    const std::uint32_t stride_bytes = buffer_width * bytes_per_pixel(pixel_format);
    const std::size_t total_bytes = static_cast<std::size_t>(stride_bytes) * height;
    const std::uint8_t *source = runtime.memory().raw_pointer(frame_buffer, total_bytes);
    if (source == nullptr) return;

    g_pixels.resize(static_cast<std::size_t>(width) * height);
    g_pixel_width = width;
    g_pixel_height = height;
    const std::uint32_t bpp = bytes_per_pixel(pixel_format);
    for (std::uint32_t y = 0; y < height; ++y) {
        const std::uint8_t *row = source + static_cast<std::size_t>(y) * stride_bytes;
        for (std::uint32_t x = 0; x < width; ++x) {
            g_pixels[static_cast<std::size_t>(y) * width + x] = unpack_pixel(row + static_cast<std::size_t>(x) * bpp, pixel_format);
        }
    }

    HDC hdc = GetDC(g_window);
    BITMAPINFO info{};
    info.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    info.bmiHeader.biWidth = static_cast<LONG>(width);
    info.bmiHeader.biHeight = -static_cast<LONG>(height);
    info.bmiHeader.biPlanes = 1;
    info.bmiHeader.biBitCount = 32;
    info.bmiHeader.biCompression = BI_RGB;
    RECT client{};
    GetClientRect(g_window, &client);
    SetStretchBltMode(hdc, HALFTONE);
    SetBrushOrgEx(hdc, 0, 0, nullptr);
    StretchDIBits(hdc, 0, 0, client.right - client.left, client.bottom - client.top,
                 0, 0, static_cast<int>(width), static_cast<int>(height),
                 g_pixels.data(), &info, DIB_RGB_COLORS, SRCCOPY);
    note_host_frame();
    paint_host_overlay(hdc);
    ReleaseDC(g_window, hdc);
}

void display_window_present_rgba(std::span<const std::byte> rgba, std::uint32_t width,
                                 std::uint32_t height) {
    if (g_window == nullptr || width == 0u || height == 0u) return;

    MSG msg;
    while (PeekMessageW(&msg, nullptr, 0, 0, PM_REMOVE)) {
        TranslateMessage(&msg);
        DispatchMessageW(&msg);
    }
    if (g_window == nullptr) return;

    const std::size_t pixel_count = static_cast<std::size_t>(width) * height;
    if (rgba.size() < pixel_count * 4u) return;

    g_pixels.resize(pixel_count);
    g_pixel_width = width;
    g_pixel_height = height;
    const auto *source = reinterpret_cast<const std::uint8_t *>(rgba.data());
    for (std::size_t index = 0u; index < pixel_count; ++index) {
        const std::uint8_t *pixel = source + index * 4u;
        g_pixels[index] = (static_cast<std::uint32_t>(pixel[0]) << 16u) |
                          (static_cast<std::uint32_t>(pixel[1]) << 8u) |
                          static_cast<std::uint32_t>(pixel[2]);
    }

    HDC hdc = GetDC(g_window);
    BITMAPINFO info{};
    info.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    info.bmiHeader.biWidth = static_cast<LONG>(width);
    info.bmiHeader.biHeight = -static_cast<LONG>(height);
    info.bmiHeader.biPlanes = 1;
    info.bmiHeader.biBitCount = 32;
    info.bmiHeader.biCompression = BI_RGB;
    RECT client{};
    GetClientRect(g_window, &client);
    SetStretchBltMode(hdc, HALFTONE);
    SetBrushOrgEx(hdc, 0, 0, nullptr);
    StretchDIBits(hdc, 0, 0, client.right - client.left, client.bottom - client.top,
                  0, 0, static_cast<int>(width), static_cast<int>(height),
                  g_pixels.data(), &info, DIB_RGB_COLORS, SRCCOPY);
    note_host_frame();
    paint_host_overlay(hdc);
    ReleaseDC(g_window, hdc);
}

void display_window_shutdown() {
    ClipCursor(nullptr);
    if (g_window != nullptr) {
        DestroyWindow(g_window);
        g_window = nullptr;
    }
}

HostInputState display_window_input() {
    static std::mutex cache_mutex;
    static HostInputState cached{};
    static std::chrono::steady_clock::time_point cached_at{};
    const std::lock_guard<std::mutex> guard(cache_mutex);
    const auto poll_time = std::chrono::steady_clock::now();
    if (host_settings_open()) discard_pending_pointer();
    if (cached_at.time_since_epoch().count() != 0 &&
        poll_time - cached_at < std::chrono::milliseconds(4))
        return cached;
    cached_at = poll_time;
    if (host_settings_open()) {
        discard_pending_pointer();
        cached = {};
        lcs_camera_set_axes(0, 0);
        lcs_set_host_drive_inputs(false, false);
        return cached;
    }

    HostInputState input{};
    bool g_radio_key_held = false, g_radio_pad_held = false, g_weapon_key_held = false, g_weapon_pad_held = false;
    const auto publish = [&]() -> HostInputState {
        frontend_options_note_input(input.buttons);
        radio_wheel_input(g_radio_key_held || g_radio_pad_held, lcs_player_in_vehicle() && !lcs_menu_active() && !frontend_menu_active() && !host_settings_open());
        // On foot: the weapon wheel (not while free-aiming, when the weapon can't change).
        weapon_wheel_input(g_weapon_key_held || g_weapon_pad_held,
                           !lcs_player_in_vehicle() && lcs_camera_in_use() && !lcs_free_aim_active() && !lcs_menu_active() &&
                               !frontend_menu_active() && !host_settings_open());
        lcs_camera_set_axes(input.camera_x, input.camera_y);
        // While free-aiming: no sprint and no weapon switch (on foot, Cross and the d-pad's left and right).
        if (lcs_free_aim_active()) input.buttons &= ~(kPspCross | kPspLeft | kPspRight);
        lcs_set_host_drive_inputs(input.accelerate, input.brake);
        cached = input;
        return cached;
    };
    const int wheel = g_wheel.exchange(0, std::memory_order_relaxed);
    const std::int32_t mouse_dx = g_mouse_dx.exchange(0, std::memory_order_relaxed);
    const std::int32_t mouse_dy = g_mouse_dy.exchange(0, std::memory_order_relaxed);
    const bool focused = g_window != nullptr && GetForegroundWindow() == g_window;
    static bool was_captured = false;
    const bool in_game = lcs_camera_in_use() && !lcs_menu_active() && !frontend_menu_active();
    const bool moving_window = focused && (GetAsyncKeyState(VK_LBUTTON) & 0x8000) != 0 &&
                               GetCapture() != nullptr;
    const bool capture = focused && in_game && !moving_window && !IsIconic(g_window);
    if (capture || was_captured) update_cursor_clip(g_window, capture);
    if (capture != was_captured && focused) {
        POINT cursor{};
        GetCursorPos(&cursor);
        SetCursorPos(cursor.x, cursor.y);
    }
    was_captured = capture;
    const bool driving = lcs_player_in_vehicle();
    const ControlsConfiguration &controls = lcs_render_configuration().controls;

    // LCS_TEST_KEYS="seconds:Key;...": presses keys for 0.2 s through the same path, without the real keyboard or focus.
    struct TestKey {
        double at;
        HostKey key;
        double hold;
    };
    static const std::vector<TestKey> test_keys = [] {
        std::vector<TestKey> keys;
        const char *text = std::getenv("LCS_TEST_KEYS");
        std::string rest = text != nullptr ? text : "";
        while (!rest.empty()) {
            const auto end = rest.find(';');
            const std::string item = rest.substr(0u, end);
            rest = end == std::string::npos ? std::string{} : rest.substr(end + 1u);
            const auto colon = item.find(':');
            if (colon == std::string::npos) continue;
            HostKey key{}, extra{};
            std::string name = item.substr(colon + 1u);
            double hold = 0.2;  // "12:Tab*2" holds it for 2 s
            if (const auto star = name.find('*'); star != std::string::npos) {
                hold = std::atof(name.c_str() + star + 1u);
                name.resize(star);
            }
            if (lookup_host_key(normalize_binding_token(name), key, extra))
                keys.push_back({std::atof(item.c_str()), key, hold});
        }
        return keys;
    }();
    static const auto test_start = std::chrono::steady_clock::now();
    const double test_now = std::chrono::duration<double>(std::chrono::steady_clock::now() - test_start).count();
    if (focused || !test_keys.empty()) {
        const bool mouse_in_window = cursor_in_client(g_window);
        const auto is_down = [&](HostKey key) {
            for (const TestKey &test : test_keys) {
                if (test.key == key && test_now >= test.at && test_now < test.at + test.hold) return true;
            }
            if (!test_keys.empty()) return false;
            if (host_key_is_mouse(key) && !mouse_in_window) return false;
            const int virtual_key = win32_virtual_key(key);
            return virtual_key != 0 && key_down(virtual_key);
        };
        {   // Save-state keys: one action per press.
            static bool f5_was = false, f6_was = false, f7_was = false;
            const bool f5 = is_down(HostKey::F5), f6 = is_down(HostKey::F6), f7 = is_down(HostKey::F7);
            if (f5 && !f5_was) lcs_state_hotkey_save();
            if (f6 && !f6_was) lcs_state_hotkey_next_slot();
            if (f7 && !f7_was) lcs_state_hotkey_load();
            f5_was = f5; f6_was = f6; f7_was = f7;
            // With metrics on: the Pause key marks a stutter the player felt, for the report. Away from F5-F7, so that it
            // isn't pressed by mistake for a state key.
            static bool mark_was = false;
            const bool mark = test_keys.empty() && key_down(VK_PAUSE);
            if (mark && !mark_was && perf::mark()) host_toast("Stutter marked");
            mark_was = mark;
        }
        static MenuKeyFilter menu_keys;
        const bool game_menu = lcs_menu_active() || frontend_menu_active();
        const bool gameplay = (lcs_camera_in_use() || !lcs_camera_hook_enabled()) && !frontend_menu_active();
        const KeyboardSample keys = menu_keys.sample(controls.bindings, driving, game_menu, gameplay, is_down);
        g_radio_key_held = action_held(controls.bindings, BindAction::RadioWheel, is_down);
        g_weapon_key_held = action_held(controls.bindings, BindAction::WeaponWheel, is_down);
        if (!test_keys.empty()) {
            static std::uint32_t last_buttons = 0xFFFFFFFFu;
            static bool last_menu = false;
            static bool last_gameplay = false;
            if (keys.buttons != last_buttons || game_menu != last_menu || gameplay != last_gameplay) {
                last_gameplay = gameplay;
                std::cerr << "[menu-keys] t=" << test_now << " menu=" << game_menu << " gameplay=" << gameplay << " buttons=0x" << std::hex << keys.buttons << std::dec << "\n";
                last_buttons = keys.buttons;
                last_menu = game_menu;
            }
        }
        input.buttons |= keys.buttons;
        input.accelerate = keys.accelerate;
        input.brake = keys.brake;
        input.analog_x = static_cast<std::uint8_t>(
            std::clamp(128 + keys.move_x * keys.reach, 0, 255));
        input.analog_y = static_cast<std::uint8_t>(
            std::clamp(128 + keys.move_y * keys.reach, 0, 255));

        const int sensitivity = static_cast<int>(controls.mouse_sensitivity);
        const auto camera_response = [sensitivity](std::int32_t delta) {
            const double scaled = std::abs(delta) * (sensitivity / 12.0);
            const double magnitude = 127.0 * scaled / (scaled + 12.0);
            return static_cast<int>(std::lround(delta < 0 ? -magnitude : magnitude));
        };
        input.camera_x = camera_response(mouse_dx);
        input.camera_y = camera_response(-mouse_dy);
        if (radio_wheel_open()) {  // the mouse points at stations
            radio_wheel_pointer_mouse(mouse_dx, mouse_dy);
            input.camera_x = 0;
            input.camera_y = 0;
        } else if (weapon_wheel_open()) {  // or at weapons
            weapon_wheel_pointer_mouse(mouse_dx, mouse_dy);
            input.camera_x = 0;
            input.camera_y = 0;
        } else if (capture) {
            lcs_add_mouse_camera_delta(mouse_dx, mouse_dy);
        }
        if (controls.invert_camera_y) input.camera_y = -input.camera_y;
    }

    static int wheel_hold = 0;
    static std::uint32_t wheel_button = 0u;
    if (focused && wheel != 0) {
        if (lcs_player_aiming()) {
            wheel_button = wheel > 0 ? kPspSquare : kPspCross;
            wheel_hold = 8;
        } else {
            wheel_button = binding_wheel_buttons(controls.bindings, wheel > 0, driving);
            wheel_hold = 4;
        }
    }
    if (wheel_hold > 0) {
        --wheel_hold;
        input.buttons |= wheel_button;
    }

    if (!focused) return publish();
    if (const PfnXInputGetState get_state = xinput_get_state()) {
        XInputStatePacket pad{};
        if (get_state(0u, &pad) == ERROR_SUCCESS) {
            const std::uint16_t b = pad.gamepad.buttons;
            const auto pad_down = [&](PadButton button) {
                switch (button) {
                case PadButton::A: return (b & kPadA) != 0;
                case PadButton::B: return (b & kPadB) != 0;
                case PadButton::X: return (b & kPadX) != 0;
                case PadButton::Y: return (b & kPadY) != 0;
                case PadButton::LeftShoulder: return (b & kPadLeftShoulder) != 0;
                case PadButton::RightShoulder: return (b & kPadRightShoulder) != 0;
                case PadButton::Start: return (b & kPadStart) != 0;
                case PadButton::Back: return (b & kPadBack) != 0;
                case PadButton::DpadUp: return (b & kPadDpadUp) != 0;
                case PadButton::DpadDown: return (b & kPadDpadDown) != 0;
                case PadButton::DpadLeft: return (b & kPadDpadLeft) != 0;
                case PadButton::DpadRight: return (b & kPadDpadRight) != 0;
                case PadButton::LeftClick: return (b & kPadLeftThumb) != 0;
                case PadButton::RightClick: return (b & kPadRightThumb) != 0;
                case PadButton::LeftTrigger: return pad.gamepad.left_trigger > 64u;
                case PadButton::RightTrigger: return pad.gamepad.right_trigger > 64u;
                case PadButton::Count: return false;
                }
                return false;
            };
            for (std::size_t button = 0u; button < static_cast<std::size_t>(PadButton::Count); ++button) {
                if (pad_down(static_cast<PadButton>(button)) && pad_has(controls.bindings, static_cast<PadButton>(button), BindAction::RadioWheel)) g_radio_pad_held = true;
                if (pad_down(static_cast<PadButton>(button)) && pad_has(controls.bindings, static_cast<PadButton>(button), BindAction::WeaponWheel)) g_weapon_pad_held = true;
            }
            const PadSample pad_sample = sample_pad(controls.bindings, driving, pad_down);
            input.buttons |= pad_sample.buttons;
            if (pad_sample.accelerate) input.accelerate = true;
            if (pad_sample.brake) input.brake = true;
            const auto apply_stick = [&](std::int16_t raw_x, std::int16_t raw_y, StickRole role) {
                const StickReading reading =
                    interpret_stick(role, raw_x, raw_y, true, controls.invert_camera_y);
                if (reading.move) {
                    input.analog_x = reading.move_x;
                    input.analog_y = reading.move_y;
                }
                if (reading.camera) {
                    input.camera_x = reading.camera_x;
                    input.camera_y = reading.camera_y;
                }
            };
            apply_stick(pad.gamepad.lx, pad.gamepad.ly, controls.bindings.left_stick);
            if (radio_wheel_open() || weapon_wheel_open()) {
                const float x = static_cast<float>(pad.gamepad.rx) / 32767.0f, y = -static_cast<float>(pad.gamepad.ry) / 32767.0f;
                if (std::hypot(x, y) > 0.35f) {
                    if (radio_wheel_open()) radio_wheel_pointer_stick(x, y);
                    else weapon_wheel_pointer_stick(x, y);
                }
            } else {
                apply_stick(pad.gamepad.rx, pad.gamepad.ry, controls.bindings.right_stick);
            }
        }
    }
    return publish();
}

}  // namespace lcs

#endif  // _WIN32
