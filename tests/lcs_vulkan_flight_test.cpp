#include "ge_gpu_backend.hpp"
#include "lcs_render_config.hpp"

#include <cstdint>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
#include <unistd.h>
#include <vector>

namespace {

void check(bool value, const char *message) {
    if (!value) throw std::runtime_error(message);
}

std::filesystem::path test_directory() {
    const auto path = std::filesystem::path("/tmp") /
                      ("lcs-vulkan-flight-" + std::to_string(static_cast<long long>(::getpid())));
    std::filesystem::create_directories(path);
    return path;
}

void draw_frame(std::uint32_t triangles, std::uint32_t rgba) {
    lcs::GeGpuDrawDescriptor draw{};
    draw.framebuffer_address = 0x04000000u;
    draw.scissor_x0 = 0;
    draw.scissor_y0 = 0;
    draw.scissor_x1 = 479;
    draw.scissor_y1 = 271;
    std::vector<lcs::GeGpuVertex> vertices(static_cast<std::size_t>(triangles) * 3u);
    for (std::uint32_t triangle = 0u; triangle < triangles; ++triangle) {
        lcs::GeGpuVertex &a = vertices[static_cast<std::size_t>(triangle) * 3u];
        lcs::GeGpuVertex &b = vertices[static_cast<std::size_t>(triangle) * 3u + 1u];
        lcs::GeGpuVertex &c = vertices[static_cast<std::size_t>(triangle) * 3u + 2u];
        a.x = 0.0f;
        a.y = 0.0f;
        b.x = 2000.0f;
        b.y = 0.0f;
        c.x = 0.0f;
        c.y = 2000.0f;
        a.w = b.w = c.w = 1.0f;
        a.rgba = b.rgba = c.rgba = rgba;
    }
    lcs::ge_gpu_backend_accumulate_color_triangles(draw, vertices);
}

std::vector<std::byte> exact_frame(std::uint32_t index, std::size_t bytes) {
    std::vector<std::byte> frame(bytes);
    check(lcs::ge_gpu_backend_copy_completed_readback(index, frame), "completed readback copy failed");
    return frame;
}

std::vector<std::byte> presenter_frame(std::size_t bytes) {
    std::vector<std::byte> frame(bytes);
    check(lcs::ge_gpu_backend_copy_game_frame_rgba(frame), "presenter readback copy failed");
    return frame;
}

lcs::GeGpuVertex at(float x, float y, float u, float v) {
    lcs::GeGpuVertex vertex{};
    vertex.x = x;
    vertex.y = y;
    vertex.w = 1.0f;
    vertex.q = 1.0f;
    vertex.rgba = 0xFFFFFFFFu;
    vertex.u = u;
    vertex.v = v;
    return vertex;
}

void paint(const lcs::GeGpuDrawDescriptor &draw, lcs::GeGpuVertex a, lcs::GeGpuVertex b, lcs::GeGpuVertex c) {
    const lcs::GeGpuVertex vertices[3] = {a, b, c};
    lcs::ge_gpu_backend_accumulate_color_triangles(draw, vertices);
}

std::uint32_t pixel_at(const std::vector<std::byte> &frame, std::uint32_t width, std::uint32_t x,
                       std::uint32_t y) {
    const std::size_t index = (static_cast<std::size_t>(y) * width + x) * 4u;
    check(index + 3u < frame.size(), "pixel is outside the readback");
    return static_cast<std::uint32_t>(frame[index]) |
           (static_cast<std::uint32_t>(frame[index + 1u]) << 8u) |
           (static_cast<std::uint32_t>(frame[index + 2u]) << 16u) |
           (static_cast<std::uint32_t>(frame[index + 3u]) << 24u);
}

// The second list clears the display, so the two texture samples land on an
// offscreen target and a following draw copies that target to the display.
void check_deferred_texture_versions() {
    constexpr std::uint32_t kDisplay = 0x04000000u;
    constexpr std::uint32_t kOffscreen = 0x04100000u;
    lcs::ge_finish_shows_this_frame() = true;
    lcs::ge_gpu_backend_set_display_framebuffer(kDisplay, 480u, 272u);
    lcs::GeGpuDrawDescriptor offscreen{};
    offscreen.framebuffer_address = kOffscreen;
    offscreen.scissor_x1 = 479;
    offscreen.scissor_y1 = 271;
    paint(offscreen, at(0.0f, 0.0f, 0.0f, 0.0f), at(8.0f, 0.0f, 0.0f, 0.0f), at(0.0f, 8.0f, 0.0f, 0.0f));
    lcs::GeGpuDrawDescriptor display{};
    display.framebuffer_address = kDisplay;
    display.scissor_x1 = 479;
    display.scissor_y1 = 271;
    paint(display, at(0.0f, 0.0f, 0.0f, 0.0f), at(8.0f, 0.0f, 0.0f, 0.0f), at(0.0f, 8.0f, 0.0f, 0.0f));
    (void)lcs::ge_gpu_backend_finish_color_frame(1u);
    check(lcs::ge_gpu_backend_drain_flight(), "offscreen target drain failed");

    lcs::GeGpuDrawDescriptor sampled = offscreen;
    sampled.texture_enabled = true;
    sampled.texture_function = 3u;
    // 0x09000000 masks to the offscreen target. A distinct VRAM address stays a texture.
    sampled.texture_address = 0x00020000u;
    sampled.texture_width = 1u;
    sampled.texture_height = 1u;
    sampled.texture_cache_key_hint = 0x51u;
    sampled.texture_clamp_u = true;
    sampled.texture_clamp_v = true;
    const std::vector<std::byte> red{std::byte{255}, std::byte{0}, std::byte{0}, std::byte{255}};
    const std::vector<std::byte> green{std::byte{0}, std::byte{255}, std::byte{0}, std::byte{255}};
    const lcs::GeGpuVertex left_a = at(0.0f, 0.0f, 0.0f, 0.0f);
    const lcs::GeGpuVertex left_b = at(200.0f, 0.0f, 0.0f, 0.0f);
    const lcs::GeGpuVertex left_c = at(0.0f, 272.0f, 0.0f, 0.0f);
    const lcs::GeGpuVertex right_a = at(280.0f, 0.0f, 0.0f, 0.0f);
    const lcs::GeGpuVertex right_b = at(480.0f, 0.0f, 0.0f, 0.0f);
    const lcs::GeGpuVertex right_c = at(480.0f, 272.0f, 0.0f, 0.0f);
    lcs::GeGpuDrawDescriptor blit{};
    blit.framebuffer_address = kDisplay;
    blit.scissor_x1 = 479;
    blit.scissor_y1 = 271;
    blit.texture_enabled = true;
    blit.texture_function = 3u;
    blit.texture_address = kOffscreen;
    blit.texture_width = 480u;
    blit.texture_height = 272u;
    blit.texture_clamp_u = true;
    blit.texture_clamp_v = true;
    const lcs::GeGpuVertex blit_a = at(0.0f, 0.0f, 0.0f, 0.0f);
    const lcs::GeGpuVertex blit_b = at(960.0f, 0.0f, 960.0f, 0.0f);
    const lcs::GeGpuVertex blit_c = at(0.0f, 544.0f, 0.0f, 544.0f);

    auto finish_copy = [] {
        (void)lcs::ge_gpu_backend_finish_color_frame(1u);
        check(lcs::ge_gpu_backend_drain_flight(), "texture drain failed");
        const lcs::GeGpuBackendReport report = lcs::ge_gpu_backend_report();
        const std::size_t bytes =
            static_cast<std::size_t>(report.offscreen_width) * report.offscreen_height * 4u;
        check(bytes >= 4u, "texture readback is empty");
        return presenter_frame(bytes);
    };

    check(lcs::ge_gpu_backend_upload_decoded_texture(sampled, 1u, 1u, red), "red upload failed");
    paint(sampled, left_a, left_b, left_c);
    paint(blit, blit_a, blit_b, blit_c);
    const std::vector<std::byte> drained_first = finish_copy();
    check(lcs::ge_gpu_backend_upload_decoded_texture(sampled, 1u, 1u, green), "green upload failed");
    paint(sampled, right_a, right_b, right_c);
    paint(blit, blit_a, blit_b, blit_c);
    const std::vector<std::byte> drained_second = finish_copy();

    check(lcs::ge_gpu_backend_upload_decoded_texture(sampled, 1u, 1u, red), "deferred red upload failed");
    paint(sampled, left_a, left_b, left_c);
    check(lcs::ge_gpu_backend_defer_list_split(), "list split was not deferred");
    check(lcs::ge_gpu_backend_upload_decoded_texture(sampled, 1u, 1u, green), "deferred green upload failed");
    paint(sampled, right_a, right_b, right_c);
    paint(blit, blit_a, blit_b, blit_c);
    const std::vector<std::byte> deferred = finish_copy();

    const lcs::GeGpuBackendReport report = lcs::ge_gpu_backend_report();
    const std::uint32_t width = report.offscreen_width;
    const std::uint32_t height = report.offscreen_height;
    const std::uint32_t left_x = width * 100u / 480u;
    const std::uint32_t right_x = width * 400u / 480u;
    const std::uint32_t y = height * 40u / 272u;
    const std::uint32_t deferred_left = pixel_at(deferred, width, left_x, y);
    const std::uint32_t deferred_right = pixel_at(deferred, width, right_x, y);
    const std::uint32_t drained_left = pixel_at(drained_first, width, left_x, y);
    const std::uint32_t drained_right = pixel_at(drained_second, width, right_x, y);
    std::cout << "texture width=" << width << " height=" << height
              << " deferred_left=" << std::hex << deferred_left
              << " drained_left=" << drained_left
              << " deferred_right=" << deferred_right
              << " drained_right=" << drained_right << std::dec << '\n';
    check(drained_left != drained_right, "drained texture pixels did not change");
    check(deferred_left == drained_left, "deferred first list sampled the replaced texture");
    check(deferred_right == drained_right, "deferred second list missed the replaced texture");
    std::cout << "texture_versions=pass\n";
}

// A 2x1 nearest texture at through-mode u=0.6. Dividing by the width samples
// texel 0. Leaving the coordinate untouched samples texel 1.
void check_deferred_texture_uv() {
    constexpr std::uint32_t kDisplay = 0x04000000u;
    constexpr std::uint32_t kOffscreen = 0x04100000u;
    lcs::ge_finish_shows_this_frame() = true;
    lcs::ge_gpu_backend_set_display_framebuffer(kDisplay, 480u, 272u);
    lcs::GeGpuDrawDescriptor offscreen{};
    offscreen.framebuffer_address = kOffscreen;
    offscreen.scissor_x1 = 479;
    offscreen.scissor_y1 = 271;
    paint(offscreen, at(0.0f, 0.0f, 0.0f, 0.0f), at(8.0f, 0.0f, 0.0f, 0.0f), at(0.0f, 8.0f, 0.0f, 0.0f));
    lcs::GeGpuDrawDescriptor display{};
    display.framebuffer_address = kDisplay;
    display.scissor_x1 = 479;
    display.scissor_y1 = 271;
    paint(display, at(0.0f, 0.0f, 0.0f, 0.0f), at(8.0f, 0.0f, 0.0f, 0.0f), at(0.0f, 8.0f, 0.0f, 0.0f));
    (void)lcs::ge_gpu_backend_finish_color_frame(1u);
    check(lcs::ge_gpu_backend_drain_flight(), "uv offscreen drain failed");

    lcs::GeGpuDrawDescriptor sampled = offscreen;
    sampled.texture_enabled = true;
    sampled.texture_function = 3u;
    sampled.texture_address = 0x00030000u;
    sampled.texture_width = 2u;
    sampled.texture_height = 1u;
    sampled.texture_cache_key_hint = 0x52u;
    sampled.texture_clamp_u = true;
    sampled.texture_clamp_v = true;
    sampled.texture_mag_linear = false;
    sampled.texture_min_linear = false;
    const std::vector<std::byte> old_tex{
        std::byte{255}, std::byte{0}, std::byte{0}, std::byte{255},
        std::byte{0}, std::byte{0}, std::byte{255}, std::byte{255},
    };
    const std::vector<std::byte> new_tex{
        std::byte{0}, std::byte{255}, std::byte{0}, std::byte{255},
        std::byte{255}, std::byte{255}, std::byte{255}, std::byte{255},
    };
    const float texel0_u = 0.6f;
    const float texel1_u = 1.6f;
    const lcs::GeGpuVertex left_a = at(0.0f, 0.0f, texel0_u, 0.0f);
    const lcs::GeGpuVertex left_b = at(200.0f, 0.0f, texel0_u, 0.0f);
    const lcs::GeGpuVertex left_c = at(0.0f, 272.0f, texel0_u, 0.0f);
    const lcs::GeGpuVertex right_a = at(280.0f, 0.0f, texel0_u, 0.0f);
    const lcs::GeGpuVertex right_b = at(480.0f, 0.0f, texel0_u, 0.0f);
    const lcs::GeGpuVertex right_c = at(480.0f, 272.0f, texel0_u, 0.0f);
    const lcs::GeGpuVertex witness_a = at(210.0f, 0.0f, texel1_u, 0.0f);
    const lcs::GeGpuVertex witness_b = at(270.0f, 0.0f, texel1_u, 0.0f);
    const lcs::GeGpuVertex witness_c = at(210.0f, 80.0f, texel1_u, 0.0f);
    lcs::GeGpuDrawDescriptor blit{};
    blit.framebuffer_address = kDisplay;
    blit.scissor_x1 = 479;
    blit.scissor_y1 = 271;
    blit.texture_enabled = true;
    blit.texture_function = 3u;
    blit.texture_address = kOffscreen;
    blit.texture_width = 480u;
    blit.texture_height = 272u;
    blit.texture_clamp_u = true;
    blit.texture_clamp_v = true;
    const lcs::GeGpuVertex blit_a = at(0.0f, 0.0f, 0.0f, 0.0f);
    const lcs::GeGpuVertex blit_b = at(960.0f, 0.0f, 960.0f, 0.0f);
    const lcs::GeGpuVertex blit_c = at(0.0f, 544.0f, 0.0f, 544.0f);

    auto finish_copy = [] {
        (void)lcs::ge_gpu_backend_finish_color_frame(1u);
        check(lcs::ge_gpu_backend_drain_flight(), "uv drain failed");
        const lcs::GeGpuBackendReport report = lcs::ge_gpu_backend_report();
        const std::size_t bytes =
            static_cast<std::size_t>(report.offscreen_width) * report.offscreen_height * 4u;
        check(bytes >= 4u, "uv readback is empty");
        return presenter_frame(bytes);
    };
    auto sample = [](const std::vector<std::byte> &frame, std::uint32_t width, std::uint32_t height,
                     std::uint32_t logical_x, std::uint32_t logical_y) {
        return pixel_at(frame, width, width * logical_x / 480u, height * logical_y / 272u);
    };

    check(lcs::ge_gpu_backend_upload_decoded_texture(sampled, 2u, 1u, old_tex), "uv warmup upload failed");
    paint(sampled, at(0.0f, 0.0f, texel0_u, 0.0f), at(4.0f, 0.0f, texel0_u, 0.0f),
          at(0.0f, 4.0f, texel0_u, 0.0f));
    paint(display, at(0.0f, 0.0f, 0.0f, 0.0f), at(4.0f, 0.0f, 0.0f, 0.0f), at(0.0f, 4.0f, 0.0f, 0.0f));
    (void)lcs::ge_gpu_backend_finish_color_frame(1u);
    check(lcs::ge_gpu_backend_drain_flight(), "uv image drain failed");

    paint(sampled, left_a, left_b, left_c);
    paint(blit, blit_a, blit_b, blit_c);
    const std::vector<std::byte> drained_first = finish_copy();
    check(lcs::ge_gpu_backend_upload_decoded_texture(sampled, 2u, 1u, new_tex), "uv drained replace failed");
    paint(sampled, right_a, right_b, right_c);
    paint(sampled, witness_a, witness_b, witness_c);
    paint(blit, blit_a, blit_b, blit_c);
    const std::vector<std::byte> drained_second = finish_copy();

    check(lcs::ge_gpu_backend_upload_decoded_texture(sampled, 2u, 1u, old_tex), "uv deferred old upload failed");
    paint(sampled, left_a, left_b, left_c);
    check(lcs::ge_gpu_backend_defer_list_split(), "uv list split was not deferred");
    check(lcs::ge_gpu_backend_upload_decoded_texture(sampled, 2u, 1u, new_tex), "uv deferred replace failed");
    paint(sampled, right_a, right_b, right_c);
    paint(blit, blit_a, blit_b, blit_c);
    const std::vector<std::byte> deferred = finish_copy();

    const lcs::GeGpuBackendReport report = lcs::ge_gpu_backend_report();
    const std::uint32_t width = report.offscreen_width;
    const std::uint32_t height = report.offscreen_height;
    const std::uint32_t deferred_left = sample(deferred, width, height, 100u, 40u);
    const std::uint32_t deferred_right = sample(deferred, width, height, 400u, 40u);
    const std::uint32_t drained_left = sample(drained_first, width, height, 100u, 40u);
    const std::uint32_t drained_right = sample(drained_second, width, height, 400u, 40u);
    const std::uint32_t drained_other = sample(drained_second, width, height, 230u, 10u);
    std::cout << "texture_uv width=" << width << " height=" << height
              << " deferred_left=" << std::hex << deferred_left
              << " drained_left=" << drained_left
              << " deferred_right=" << deferred_right
              << " drained_right=" << drained_right
              << " drained_other_texel=" << drained_other << std::dec << '\n';
    check(drained_right != drained_other, "2x1 nearest samples did not separate the texels");
    check(deferred_left == drained_left, "deferred first list changed the 2x1 sample");
    check(deferred_right == drained_right, "deferred second list missed the 2x1 texel");
    std::cout << "texture_uv=pass\n";
}

bool solid_clear(const std::vector<std::byte> &frame);

void check_readback_is_bounded() {
    lcs::ge_gpu_backend_reset_flight_observation();
    lcs::ge_gpu_backend_keep_completed_readbacks(false);
    constexpr std::uint32_t finishes = 8u;
    for (std::uint32_t index = 0u; index < finishes; ++index) {
        draw_frame(1u, 0xFF3355AAu);
        (void)lcs::ge_gpu_backend_finish_color_frame(20u + index);
    }
    check(lcs::ge_gpu_backend_drain_flight(), "bounded drain failed");
    const std::uint32_t history = lcs::ge_gpu_backend_completed_readback_count();
    const lcs::GeGpuBackendReport report = lcs::ge_gpu_backend_report();
    const std::size_t bytes =
        static_cast<std::size_t>(report.offscreen_width) * report.offscreen_height * 4u;
    const std::vector<std::byte> latest = presenter_frame(bytes);
    std::cout << "readback_history_after_" << finishes << "=" << history
              << " presenter_bytes=" << latest.size()
              << " solid_clear=" << solid_clear(latest) << '\n';
    check(history < finishes, "retained readbacks grew with the finish count");
    check(history <= 1u, "retained readbacks are not bounded by one frame");
    check(!solid_clear(latest), "the presenter lost the latest CPU readback");
    std::cout << "readback_bound=pass\n";
}

bool solid_clear(const std::vector<std::byte> &frame) {
    if (frame.size() < 4u) return true;
    for (std::size_t index = 0u; index + 3u < frame.size(); index += 4u) {
        if (frame[index] != std::byte{0} || frame[index + 1u] != std::byte{0} ||
            frame[index + 2u] != std::byte{0} || frame[index + 3u] != std::byte{255})
            return false;
    }
    return true;
}

std::uint64_t cache_file_bytes(const std::filesystem::path &path) {
    std::error_code error;
    const auto size = std::filesystem::file_size(path, error);
    check(!error, "pipeline cache file is missing");
    return static_cast<std::uint64_t>(size);
}

void write_rejected_blob(const std::filesystem::path &path) {
    std::ofstream out(path, std::ios::binary | std::ios::trunc);
    check(static_cast<bool>(out), "could not write a rejected pipeline cache");
    const std::vector<char> garbage(64u, static_cast<char>(0xA5));
    out.write(garbage.data(), static_cast<std::streamsize>(garbage.size()));
    check(static_cast<bool>(out), "rejected pipeline cache write failed");
}

}  // namespace

int main() {
    try {
        const std::filesystem::path directory = test_directory();
        const std::filesystem::path cache = directory / "pipeline-cache.bin";
        std::filesystem::remove(cache);
        lcs::initialize_lcs_render_configuration(directory);
        lcs::ge_gpu_backend_set_pipeline_cache_file(cache.string().c_str());

        std::string error;
        check(lcs::initialize_ge_gpu_backend(error), "Vulkan initialize failed");
        if (!error.empty()) std::cerr << error << '\n';
        check(lcs::ge_gpu_backend_active(), "Vulkan backend is not active");
        const lcs::GeGpuPipelineCacheObservation cold = lcs::ge_gpu_backend_pipeline_cache_observation();
        std::cout << "cold cache_non_null=" << cold.cache_non_null
                  << " from_saved_blob=" << cold.from_saved_blob
                  << " graphics_pipeline_created=" << cold.graphics_pipeline_created
                  << " init_bytes=" << cold.init_bytes
                  << " empty_bytes=" << cold.empty_bytes
                  << " passed_cache=" << cold.passed_cache << '\n';
        check(cold.cache_non_null, "pipeline cache was null");
        check(!cold.from_saved_blob, "missing cache file was treated as a saved blob");
        check(cold.graphics_pipeline_created, "graphics pipeline was not created");
        check(cold.passed_cache != 0u, "vkCreateGraphicsPipelines did not receive the cache");
        check(cold.empty_bytes >= 16u, "empty pipeline cache was not measured");
        const std::uint64_t empty_bytes = cold.empty_bytes;
        lcs::shutdown_ge_gpu_backend();
        const std::uint64_t saved_bytes = cache_file_bytes(cache);
        std::cout << "saved_bytes=" << saved_bytes << " empty_bytes=" << empty_bytes << '\n';
        check(saved_bytes > empty_bytes, "saved pipeline cache is not larger than an empty cache");
        check(saved_bytes > 32u, "saved pipeline cache is not larger than the cache header");

        check(lcs::initialize_ge_gpu_backend(error), "Vulkan reload failed");
        check(lcs::ge_gpu_backend_active(), "Vulkan backend did not come back");
        const lcs::GeGpuPipelineCacheObservation reloaded = lcs::ge_gpu_backend_pipeline_cache_observation();
        std::cout << "reloaded cache_non_null=" << reloaded.cache_non_null
                  << " from_saved_blob=" << reloaded.from_saved_blob
                  << " graphics_pipeline_created=" << reloaded.graphics_pipeline_created
                  << " init_bytes=" << reloaded.init_bytes
                  << " empty_bytes=" << reloaded.empty_bytes
                  << " passed_cache=" << reloaded.passed_cache << '\n';
        check(reloaded.cache_non_null, "reloaded pipeline cache was null");
        check(reloaded.from_saved_blob, "pipeline cache was not initialized from the saved blob");
        check(reloaded.graphics_pipeline_created, "reload did not create a graphics pipeline");
        check(reloaded.passed_cache != 0u, "reload did not pass the cache to vkCreateGraphicsPipelines");
        check(reloaded.init_bytes > reloaded.empty_bytes, "saved blob was not larger than an empty cache");
        check(reloaded.init_bytes == saved_bytes, "init did not use the saved blob size");

        check_deferred_texture_versions();
        check_deferred_texture_uv();
        check_readback_is_bounded();

        constexpr std::uint32_t color_a = 0xFF3355AAu;
        constexpr std::uint32_t color_b = 0xFF00FF00u;
        lcs::ge_gpu_backend_set_display_framebuffer(0x04000000u, 480u, 272u);
        lcs::ge_finish_shows_this_frame() = true;
        lcs::ge_gpu_backend_reset_flight_observation();
        lcs::ge_gpu_backend_keep_completed_readbacks(true);
        draw_frame(1u, color_a);
        const bool baseline_ready = lcs::ge_gpu_backend_finish_color_frame(1u);
        std::cout << "baseline_ready=" << baseline_ready << '\n';
        check(lcs::ge_gpu_backend_drain_flight(), "baseline drain failed");
        const lcs::GeGpuBackendReport report = lcs::ge_gpu_backend_report();
        const std::size_t frame_bytes =
            static_cast<std::size_t>(report.offscreen_width) * report.offscreen_height * 4u;
        std::cout << "frame_bytes=" << frame_bytes << " draws=" << report.game_draw_calls << '\n';
        check(frame_bytes >= 4u, "readback size is empty");
        check(lcs::ge_gpu_backend_completed_readback_count() >= 1u, "baseline readback was not copied");
        const std::vector<std::byte> baseline_a = exact_frame(0u, frame_bytes);
        std::cout << "baseline_bytes=" << baseline_a.size()
                  << " solid_clear=" << solid_clear(baseline_a) << '\n';
        check(!solid_clear(baseline_a), "baseline readback is the clear color");

        lcs::ge_gpu_backend_reset_flight_observation();
        lcs::ge_gpu_backend_keep_completed_readbacks(true);
        draw_frame(1u, color_b);
        const bool baseline_b_ready = lcs::ge_gpu_backend_finish_color_frame(1u);
        std::cout << "baseline_b_ready=" << baseline_b_ready << '\n';
        check(lcs::ge_gpu_backend_drain_flight(), "second baseline drain failed");
        check(lcs::ge_gpu_backend_completed_readback_count() >= 1u, "second baseline readback was not copied");
        const std::vector<std::byte> baseline_b = exact_frame(0u, frame_bytes);
        const bool baselines_differ = baseline_a.size() == baseline_b.size() &&
                                      std::memcmp(baseline_a.data(), baseline_b.data(), baseline_a.size()) != 0;
        std::cout << "baseline_b_bytes=" << baseline_b.size()
                  << " solid_clear=" << solid_clear(baseline_b)
                  << " baselines_differ=" << baselines_differ << '\n';
        check(!solid_clear(baseline_b), "second baseline readback is the clear color");
        check(baselines_differ, "the two drained colors produced the same pixels");

        lcs::ge_gpu_backend_reset_flight_observation();
        lcs::ge_gpu_backend_keep_completed_readbacks(true);
        draw_frame(1024u, color_a);
        const bool first_ready = lcs::ge_gpu_backend_finish_color_frame(2u);
        draw_frame(1u, color_b);
        const bool second_ready = lcs::ge_gpu_backend_finish_color_frame(3u);
        draw_frame(1u, color_a);
        const bool third_ready = lcs::ge_gpu_backend_finish_color_frame(4u);
        std::cout << "finish_ready=" << first_ready << "," << second_ready << "," << third_ready << '\n';
        const lcs::GeGpuFlightObservation flight = lcs::ge_gpu_backend_flight_observation();
        std::cout << "saw_other_outstanding=" << flight.saw_other_outstanding
                  << " slot_written_only_after_complete=" << flight.slot_written_only_after_complete
                  << " finish_records=" << flight.finish_records
                  << " slot_reuses=" << flight.slot_reuses
                  << " frames_in_flight_capacity=" << flight.frames_in_flight_capacity
                  << " active=" << flight.active << '\n';
        check(flight.active, "flight observation ran without a Vulkan device");
        check(flight.frames_in_flight_capacity >= 2u, "fewer than two frames can be in flight");
        check(flight.finish_records >= 3u, "three finishes were not recorded");
        check(flight.saw_other_outstanding, "second recording did not observe an outstanding submission");
        check(flight.slot_written_only_after_complete, "a slot was written before its submission completed");
        check(flight.slot_reuses >= 1u, "no slot was reused");

        check(lcs::ge_gpu_backend_drain_flight(), "overlap drain failed");
        const std::uint32_t frames = lcs::ge_gpu_backend_completed_readback_count();
        std::cout << "overlapped_frames=" << frames << '\n';
        check(frames == 3u, "overlapped readbacks are missing");
        int matched_a = 0;
        int matched_b = 0;
        for (std::uint32_t index = 0u; index < frames; ++index) {
            const std::vector<std::byte> frame = exact_frame(index, frame_bytes);
            const bool match_a = frame.size() == baseline_a.size() &&
                                 std::memcmp(frame.data(), baseline_a.data(), baseline_a.size()) == 0;
            const bool match_b = frame.size() == baseline_b.size() &&
                                 std::memcmp(frame.data(), baseline_b.data(), baseline_b.size()) == 0;
            std::cout << "frame " << index << " bytes=" << frame.size()
                      << " match_a=" << match_a << " match_b=" << match_b << '\n';
            check(match_a || match_b, "overlapped frame pixels differ from its drained baseline");
            check(!(match_a && match_b), "overlapped frame matched both drained colors");
            if (match_a) ++matched_a;
            if (match_b) ++matched_b;
        }
        std::cout << "matched_a=" << matched_a << " matched_b=" << matched_b << '\n';
        check(matched_a == 2 && matched_b == 1, "overlapped frames did not reproduce both drained colors");

        lcs::shutdown_ge_gpu_backend();
        write_rejected_blob(cache);
        check(lcs::initialize_ge_gpu_backend(error), "rejected cache initialize failed");
        check(lcs::ge_gpu_backend_active(), "rejected cache left the backend inactive");
        const lcs::GeGpuPipelineCacheObservation rejected = lcs::ge_gpu_backend_pipeline_cache_observation();
        std::cout << "rejected cache_non_null=" << rejected.cache_non_null
                  << " from_saved_blob=" << rejected.from_saved_blob
                  << " graphics_pipeline_created=" << rejected.graphics_pipeline_created
                  << " init_bytes=" << rejected.init_bytes
                  << " passed_cache=" << rejected.passed_cache << '\n';
        check(rejected.cache_non_null, "rejected blob did not fall back to a cache");
        check(!rejected.from_saved_blob, "rejected blob was accepted as saved cache data");
        check(rejected.graphics_pipeline_created, "pipeline creation failed after a rejected blob");
        check(rejected.passed_cache != 0u, "fallback cache was not passed to pipeline creation");
        lcs::shutdown_ge_gpu_backend();
        std::filesystem::remove_all(directory);
    } catch (const std::exception &failure) {
        std::cerr << "vulkan flight test failed: " << failure.what() << '\n';
        return 1;
    }
    std::cout << "vulkan flight: overlapped recording, matching pixels, pipeline cache reloaded\n";
    return 0;
}
