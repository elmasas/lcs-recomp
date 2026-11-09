// The settings menu's connection to the window and to the DX12 frame. Windows only: other builds keep the simple overlay.
#pragma once

#if defined(_WIN32)

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <d3d12.h>
#include <dxgi1_6.h>

#include "imgui.h"
#include <cstddef>
#include <cstdint>
#include <vector>

namespace lcs {

// Window thread: passes a message on for the render thread. Dear ImGui's input is not thread-safe, so it is replayed
// on the thread that draws. True when the menu takes this message from the game.
bool imgui_menu_note_message(HWND window, UINT message, WPARAM wparam, LPARAM lparam) noexcept;

// Render thread, inside the frame: a texture for the draw list, kept until the program ends. Null if that fails.
ImTextureID imgui_menu_upload_rgba(std::uint32_t width, std::uint32_t height, const std::vector<std::byte> &rgba) noexcept;
// A plain font for long text. Dear ImGui's own if the system's can't be read.
[[nodiscard]] ImFont *imgui_menu_regular_font() noexcept;

// GE worker thread, with the back buffer bound as the render target, once per presented frame.
void imgui_menu_record(ID3D12Device *device, ID3D12CommandQueue *queue, ID3D12GraphicsCommandList *list, HWND window,
                       DXGI_FORMAT format, UINT frames_in_flight) noexcept;

}  // namespace lcs

#endif
