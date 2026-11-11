#pragma once

#include <array>
#include <cstddef>
#include <cstdint>
#include <memory>
#include <span>
#include <string>
#include <vector>

namespace lcs {

enum class GeGpuBackendKind : std::uint8_t {
    Software,
    DirectX12,
    Vulkan,
};

struct GeGpuDrawDescriptor {
    std::uint32_t primitive{};
    std::uint32_t vertex_count{};
    std::uint32_t vertex_type{};
    std::uint32_t framebuffer_address{};
    std::uint32_t framebuffer_stride{};
    std::uint32_t framebuffer_format{};
    std::uint32_t texture_format{};
    std::uint32_t texture_address{};
    std::uint32_t texture_buffer_width{};
    std::uint32_t texture_width{};
    std::uint32_t texture_height{};
    std::uint32_t texture_function{};
    bool texture_use_alpha{};
    bool texture_double_color{};
    std::uint32_t texture_env{};
    std::uint32_t clut_address{};
    std::uint32_t clut_format{};
    std::uint32_t clut_shift{};
    std::uint32_t clut_mask{};
    std::uint32_t clut_start{};
    std::uint32_t clut_checksum{};
    std::uint64_t texture_content_signature{};
    std::uint64_t texture_cache_key_hint{};
    std::uint64_t texture_image_key_hint{};
    bool texture_swizzled{};
    bool texture_linear{};
    bool texture_min_linear{};
    bool texture_mag_linear{};
    bool texture_mipmap_enabled{};
    bool texture_mipmap_linear{};
    std::uint32_t texture_max_level{};
    std::uint32_t texture_level_mode{};
    std::int32_t texture_level_offset16{};
    float texture_lod_slope{};
    std::uint32_t texture_selected_level{};
    std::array<std::uint32_t, 8> texture_level_addresses{};
    std::array<std::uint32_t, 8> texture_level_buffer_widths{};
    std::array<std::uint32_t, 8> texture_level_widths{};
    std::array<std::uint32_t, 8> texture_level_heights{};
    bool texture_clamp_u{};
    bool texture_clamp_v{};
    std::int32_t scissor_x0{};
    std::int32_t scissor_y0{};
    std::int32_t scissor_x1{479};
    std::int32_t scissor_y1{271};
    bool through{};
    bool widescreen_hud{};
    bool texture_enabled{};
    bool blend_enabled{};
    std::uint32_t blend_equation{};
    std::uint32_t blend_source_factor{};
    std::uint32_t blend_dest_factor{};
    std::uint32_t blend_fix_source{};
    std::uint32_t blend_fix_dest{};
    std::uint32_t color_write_mask{};
    bool alpha_test_enabled{};
    std::uint32_t alpha_function{};
    std::uint32_t alpha_reference{};
    std::uint32_t alpha_mask{};
    bool depth_test_enabled{};
    bool depth_write_enabled{};
    std::uint32_t depth_function{};
    bool fog_enabled{};
    std::uint32_t fog_color{};
    float fog_end{};
    float fog_slope{};
    bool clear_mode{};
    bool clear_color{};
    bool clear_alpha{};
    bool clear_depth{};
};

struct GeGpuHardwareTransform {
    std::array<float, 16> model_to_clip{};
    std::array<float, 4> model_to_view_z{};
    float viewport_scale_x{};
    float viewport_scale_y{};
    float viewport_scale_z{};
    float viewport_center_x{};
    float viewport_center_y{};
    float viewport_center_z{};
    float viewport_offset_x{};
    float viewport_offset_y{};
    float uv_scale_u{1.0f};
    float uv_scale_v{1.0f};
    float uv_offset_u{};
    float uv_offset_v{};
    float fog_end{};
    float fog_slope{};
    bool depth_clip_enabled{};
    bool cull_enabled{};
    bool accept_counter_clockwise{};
    std::uint32_t primitive{3u};
    bool vertex_color_affine{};
    std::array<float, 4> vertex_color_mul{1.0f, 1.0f, 1.0f, 1.0f};
    std::array<float, 4> vertex_color_add{};
    std::uint32_t logical_prim_batches{1u};
    std::uint32_t unique_vertices_decoded{};
    std::uint32_t index_reuses{};
};

struct GeGpuVertex {
    float x{};
    float y{};
    float z{};
    float w{1.0f};
    std::uint32_t rgba{0xFFFFFFFFu};
    float u{};
    float v{};
    std::uint32_t alpha_control{0xFF000100u};
    std::uint32_t texture_control{};
    std::uint32_t texture_env{};
    float fog_factor{1.0f};
    std::uint32_t fog_control{};
    float q{1.0f};
    std::uint32_t transform_control{};
};

struct GeGpuDecodedMipLevel {
    std::uint32_t width{};
    std::uint32_t height{};
    std::span<const std::byte> rgba8{};
};

struct GeGpuBackendReport {
    GeGpuBackendKind requested{GeGpuBackendKind::Software};
    GeGpuBackendKind active{GeGpuBackendKind::Software};
    bool strict{};
    bool loader_opened{};
    bool instance_created{};
    bool device_created{};
    bool transfer_buffer_created{};
    bool transfer_memory_mapped{};
    bool command_pool_created{};
    bool transfer_self_test_passed{};
    bool offscreen_image_created{};
    bool offscreen_image_memory_bound{};
    bool offscreen_image_view_created{};
    bool render_pass_created{};
    bool framebuffer_created{};
    bool shader_modules_created{};
    bool graphics_pipeline_created{};
    bool offscreen_self_test_passed{};
    std::uint32_t physical_device_count{};
    std::uint32_t graphics_queue_family{0xFFFFFFFFu};
    std::uint32_t memory_type_index{0xFFFFFFFFu};
    std::uint64_t draw_calls{};
    std::uint64_t vertices{};
    std::uint64_t textured_draw_calls{};
    std::uint64_t unique_pipeline_keys{};
    std::uint64_t unique_texture_keys{};
    std::uint64_t unique_texture_image_keys{};
    std::uint64_t shared_texture_images{};
    std::uint64_t captured_draws{};
    std::uint64_t draw_ring_capacity{};
    std::uint64_t draw_ring_overwrites{};
    std::uint64_t upload_capacity_bytes{};
    std::uint32_t frames_in_flight_capacity{1u};
    std::uint64_t staged_draw_calls{};
    std::uint64_t staged_vertices{};
    std::uint64_t staged_bytes{};
    std::uint64_t upload_wraps{};
    std::uint64_t transfer_submissions{};
    std::uint64_t transfer_bytes{};
    std::uint64_t perf_wait_for_frame_calls{};
    std::uint64_t perf_wait_for_frame_ns{};
    std::uint64_t perf_upload_flush_wait_calls{};
    std::uint64_t perf_upload_flush_wait_ns{};
    std::uint64_t perf_acquire_calls{};
    std::uint64_t perf_acquire_ns{};
    std::uint64_t perf_queue_submit_calls{};
    std::uint64_t perf_queue_submit_ns{};
    std::uint64_t perf_queue_present_calls{};
    std::uint64_t perf_queue_present_ns{};
    std::uint64_t perf_finish_frame_calls{};
    std::uint64_t perf_finish_frame_ns{};
    std::uint64_t rejected_gpu_draws{};
    std::uint32_t offscreen_width{};
    std::uint32_t offscreen_height{};
    std::uint32_t offscreen_center_rgba{};
    std::uint64_t offscreen_draw_calls{};
    std::uint64_t offscreen_readback_bytes{};
    std::uint64_t offscreen_changed_pixels{};
    std::uint64_t offscreen_checksum{};
    std::uint64_t game_frames{};
    std::uint64_t game_draw_calls{};
    std::uint64_t game_triangles{};
    std::uint64_t game_vertices{};
    std::uint64_t hw_transform_draw_calls{};
    std::uint64_t hw_transform_vertices{};
    std::uint64_t hw_transform_prim_batches{};
    std::uint64_t hw_transform_unique_vertices_decoded{};
    std::uint64_t hw_transform_index_reuses{};
    std::uint64_t game_textured_draws_without_texture{};
    std::uint64_t game_vertex_overflows{};
    std::uint64_t game_frame_readback_bytes{};
    std::uint64_t game_frame_changed_pixels{};
    std::uint64_t game_frame_checksum{};
    std::uint64_t game_frame_vblank{};
    std::uint64_t texture_decode_requests{};
    std::uint64_t texture_cache_hits{};
    std::uint64_t decoded_texture_uploads{};
    std::uint64_t decoded_texture_bytes{};
    std::uint64_t decoded_t4_textures{};
    std::uint64_t decoded_t8_textures{};
    std::uint64_t texture_images_created{};
    std::uint64_t texture_image_uploads{};
    std::uint64_t texture_image_upload_bytes{};
    bool texture_descriptor_layout_created{};
    bool texture_descriptor_pool_created{};
    bool textured_shader_modules_created{};
    bool textured_pipeline_created{};
    bool depth_image_created{};
    bool depth_image_memory_bound{};
    bool depth_image_view_created{};
    bool depth_attachment_active{};
    std::uint64_t depth_pipeline_variants_created{};
    std::uint64_t depth_tested_game_draw_calls{};
    std::uint64_t depth_writing_game_draw_calls{};
    bool alpha_test_shader_active{};
    std::uint64_t alpha_tested_game_draw_calls{};
    bool standard_alpha_blend_pipeline_active{};
    bool observed_blend_modes_pipeline_active{};
    std::uint64_t blend_pipeline_variants_created{};
    std::uint64_t standard_alpha_blended_game_draw_calls{};
    std::uint64_t fixed_replace_blended_game_draw_calls{};
    std::uint64_t additive_blended_game_draw_calls{};
    std::uint64_t unsupported_blend_game_draw_calls{};
    bool observed_texture_function_shader_active{};
    bool complete_texture_function_shader_active{};
    bool color_write_mask_pipeline_active{};
    bool base_texture_formats_active{};
    std::uint64_t modulate_texture_game_draw_calls{};
    std::uint64_t decal_texture_game_draw_calls{};
    std::uint64_t blend_texture_game_draw_calls{};
    std::uint64_t replace_texture_game_draw_calls{};
    std::uint64_t add_texture_game_draw_calls{};
    std::uint64_t double_color_texture_game_draw_calls{};
    std::uint64_t unsupported_texture_function_game_draw_calls{};
    std::uint64_t color_mask_pipeline_variants_created{};
    std::uint64_t masked_color_game_draw_calls{};
    std::uint64_t unsupported_partial_color_mask_game_draw_calls{};
    std::uint64_t decoded_direct16_textures{};
    std::uint64_t decoded_direct32_textures{};
    std::uint64_t decoded_indexed16_textures{};
    std::uint64_t decoded_indexed32_textures{};
    bool compressed_texture_formats_active{};
    bool mipmap_state_active{};
    bool fog_shader_active{};
    std::uint64_t decoded_dxt1_textures{};
    std::uint64_t decoded_dxt3_textures{};
    std::uint64_t decoded_dxt5_textures{};
    std::uint64_t mipmapped_game_draw_calls{};
    std::uint64_t mip_linear_game_draw_calls{};
    std::uint64_t fixed_lod_game_draw_calls{};
    std::uint64_t selected_nonzero_mip_game_draw_calls{};
    bool full_mip_chain_active{};
    std::uint64_t uploaded_mip_levels{};
    std::uint64_t automatic_lod_game_draw_calls{};
    std::uint64_t slope_lod_game_draw_calls{};
    std::uint64_t fogged_game_draw_calls{};
    std::uint64_t framebuffer_targets_observed{};
    std::uint64_t display_framebuffer_sampled_draws{};
    std::uint64_t evicted_textures{};
    std::uint64_t recycled_texture_descriptor_sets{};
    std::uint64_t vram_feedback_refreshes{};
    std::uint64_t native_framebuffer_targets{};
    std::uint64_t gpu_feedback_draws{};
    std::uint64_t self_feedback_snapshots{};
    // DirectX 12 records these. The Vulkan backend leaves them untouched.
    std::uint32_t dx12_msaa_samples{1u};
    std::uint32_t dx12_depth_bits{32u};
    std::uint64_t dx12_resolves{};
    std::uint64_t dx12_device_recoveries{};
    std::uint32_t presented_framebuffer_target{};
    bool swapchain_active{};
    std::uint64_t frames_without_displayed_target{};
    bool gpu_frame_presented_to_window{};
    bool release_candidate_ready{};
    std::uint64_t texture_samplers_created{};
    std::uint64_t texture_descriptor_sets_allocated{};
    std::uint64_t textured_game_draw_calls{};
    std::uint64_t textured_game_triangles{};
    std::uint64_t textured_game_vertices{};
    std::uint64_t missing_texture_draw_calls{};
    std::uint64_t rejected_texture_decodes{};
    std::uint64_t texture_upload_wraps{};
    std::uint64_t last_texture_key{};
    std::uint64_t last_texture_checksum{};
    std::uint32_t last_texture_width{};
    std::uint32_t last_texture_height{};
    std::uint32_t last_texture_format{};
    std::string message;
};

[[nodiscard]] bool initialize_ge_gpu_backend(std::string &error);
void shutdown_ge_gpu_backend() noexcept;

[[nodiscard]] bool ge_gpu_backend_active() noexcept;
[[nodiscard]] bool ge_gpu_backend_transfer_ready() noexcept;
[[nodiscard]] bool ge_gpu_backend_graphics_ready() noexcept;
void ge_gpu_backend_record_draw(const GeGpuDrawDescriptor &draw) noexcept;

void ge_gpu_backend_observe_camera(const std::array<float, 12> &view,
                                   const std::array<float, 16> &projection,
                                   const std::array<float, 6> &viewport,
                                   const std::array<float, 3> &camera_position,
                                   const GeGpuDrawDescriptor &draw,
                                   std::uint32_t vertex_weight) noexcept;

[[nodiscard]] bool ge_gpu_backend_stage_vertices(
    const GeGpuDrawDescriptor &draw,
    std::span<const GeGpuVertex> vertices) noexcept;

[[nodiscard]] bool ge_gpu_backend_texture_needed(
    const GeGpuDrawDescriptor &draw) noexcept;

void ge_gpu_backend_prepare_texture_keys(GeGpuDrawDescriptor &draw) noexcept;
[[nodiscard]] bool ge_gpu_backend_texture_signature_needed(
    const GeGpuDrawDescriptor &draw) noexcept;

[[nodiscard]] bool ge_gpu_backend_is_framebuffer_feedback_texture(
    const GeGpuDrawDescriptor &draw) noexcept;

struct GeGpuWidescreenHud {
    float shrink{1.0f};
    float source_center{240.0f};
    float display_scale_x{1.0f};
};
[[nodiscard]] GeGpuWidescreenHud ge_gpu_backend_widescreen_hud(
    const GeGpuDrawDescriptor &draw) noexcept;

void ge_gpu_backend_note_through_extent(const GeGpuDrawDescriptor &draw,
                                        float max_x, float max_y) noexcept;

[[nodiscard]] bool ge_gpu_backend_adopt_shared_texture(
    const GeGpuDrawDescriptor &draw) noexcept;

[[nodiscard]] bool ge_gpu_backend_texture_available(
    const GeGpuDrawDescriptor &draw) noexcept;

[[nodiscard]] bool ge_gpu_backend_upload_decoded_texture(
    const GeGpuDrawDescriptor &draw,
    std::uint32_t width, std::uint32_t height,
    std::span<const std::byte> rgba8) noexcept;

[[nodiscard]] bool ge_gpu_backend_upload_decoded_texture_chain(
    const GeGpuDrawDescriptor &draw,
    std::span<const GeGpuDecodedMipLevel> levels) noexcept;

[[nodiscard]] bool ge_gpu_backend_upload_decoded_texture_chain_packed(
    const GeGpuDrawDescriptor &draw,
    std::uint32_t base_width, std::uint32_t base_height,
    std::uint32_t mip_levels, std::vector<std::byte> rgba8) noexcept;

// An image that never changes while this pointer lives (a texture pack's): shared rather than copied, and not hashed.
// `mips` holds its smaller levels (1..levels-1), sampled for distant surfaces; null with levels == 1.
[[nodiscard]] bool ge_gpu_backend_upload_shared_texture(
    const GeGpuDrawDescriptor &draw, std::uint32_t width, std::uint32_t height,
    std::shared_ptr<const std::vector<std::byte>> rgba8, std::uint32_t levels = 1u,
    std::shared_ptr<const std::vector<std::byte>> mips = nullptr) noexcept;

[[nodiscard]] bool ge_gpu_backend_copy_last_texture_rgba(
    std::span<std::byte> destination) noexcept;

void ge_gpu_backend_accumulate_color_triangles(
    const GeGpuDrawDescriptor &draw,
    std::span<const GeGpuVertex> triangle_vertices) noexcept;

void ge_gpu_backend_accumulate_hardware_triangles(
    const GeGpuDrawDescriptor &draw,
    const GeGpuHardwareTransform &transform,
    std::span<const GeGpuVertex> vertices,
    std::span<const std::uint32_t> triangle_indices) noexcept;

[[nodiscard]] bool ge_gpu_backend_accumulate_hardware_packed_0115(
    const GeGpuDrawDescriptor &draw,
    const GeGpuHardwareTransform &transform,
    std::span<const std::byte> packed_vertices,
    std::uint32_t vertex_count,
    std::span<const std::uint32_t> triangle_indices) noexcept;

void ge_gpu_backend_set_native_window(void *native_window) noexcept;

void ge_gpu_backend_set_display_framebuffer(std::uint32_t address,
                                            std::uint32_t logical_width = 480u,
                                            std::uint32_t logical_height = 272u) noexcept;

void ge_gpu_backend_display_logical_size(std::uint32_t &width, std::uint32_t &height) noexcept;

[[nodiscard]] bool ge_gpu_backend_finish_color_frame(std::uint64_t vblank) noexcept;

// The list-split flush sets this false. Only the present finish is shown.
inline bool &ge_finish_shows_this_frame() noexcept {
    static bool show = true;
    return show;
}

[[nodiscard]] bool ge_gpu_backend_copy_game_frame_rgba(
    std::span<std::byte> destination) noexcept;

[[nodiscard]] bool ge_gpu_backend_presents_directly() noexcept;

// Empty until a backend that can show a guest frame assigns it.
struct GeGuestPresent {
    bool (*available)() noexcept {};
    bool (*present)(std::span<const std::byte>, std::uint32_t, std::uint32_t) noexcept {};
};

inline GeGuestPresent &ge_guest_present() noexcept {
    static GeGuestPresent present;
    return present;
}

[[nodiscard]] inline bool ge_gpu_backend_guest_present_available() noexcept {
    const auto available = ge_guest_present().available;
    return available != nullptr && available();
}

// False leaves the caller on its own blit.
[[nodiscard]] inline bool ge_gpu_backend_present_guest_rgba(
    std::span<const std::byte> rgba, std::uint32_t width, std::uint32_t height) noexcept {
    const auto present = ge_guest_present().present;
    return present != nullptr && present(rgba, width, height);
}

[[nodiscard]] std::uint32_t ge_gpu_backend_owned_framebuffer() noexcept;

[[nodiscard]] std::uint32_t ge_gpu_backend_display_framebuffer() noexcept;

[[nodiscard]] std::span<const std::byte> ge_gpu_backend_game_frame_rgba() noexcept;

[[nodiscard]] bool ge_gpu_backend_copy_offscreen_rgba(
    std::span<std::byte> destination) noexcept;

void ge_gpu_backend_mark_window_presented() noexcept;

[[nodiscard]] GeGpuBackendReport ge_gpu_backend_report();

}
