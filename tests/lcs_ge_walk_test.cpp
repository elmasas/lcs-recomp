#include "ge_gpu_backend.hpp"
#include "ge_renderer.hpp"
#include "lcs_ge_exec.hpp"

#include "psprecomp/runtime.hpp"

#include <array>
#include <cstdint>
#include <iostream>
#include <stdexcept>

namespace {
void check(bool value, const char *message) {
    if (!value) throw std::runtime_error(message);
}

void write_list(psprecomp::GuestMemory &memory, std::uint32_t address,
                const std::uint32_t *words, std::size_t count) {
    for (std::size_t i = 0u; i < count; ++i)
        memory.store32(address + static_cast<std::uint32_t>(i * 4u), words[i]);
}

void test_repeated_register_and_finish() {
    psprecomp::GuestMemory memory;
    const std::uint32_t list = 0x08000000u;
    const std::uint32_t first[] = {
        0x9C001000u, 0x9C001000u, 0x9D000400u, 0x9D000400u, 0x0F000011u, 0x0C000000u};
    write_list(memory, list, first, 6u);
    lcs::execute_ge_list_rendered(memory, list);
    check(lcs::rendered_render_target() == 0x04001000u, "repeated framebuffer pointer was dropped");
    check(lcs::rendered_render_stride() == 0x400u, "repeated stride was dropped");
    check(lcs::rendered_list_finished(), "finish did not run");
    check(lcs::rendered_finish_argument() == 0x11u, "finish argument was dropped");

    const std::uint32_t again[] = {0x0F000011u, 0x0C000000u};
    write_list(memory, list, again, 2u);
    lcs::execute_ge_list_rendered(memory, list);
    check(lcs::rendered_list_finished(), "repeated finish word was skipped");
    check(lcs::rendered_finish_argument() == 0x11u, "repeated finish argument was skipped");
    check(lcs::rendered_render_target() == 0x04001000u, "unchanged framebuffer pointer changed");
}

void test_repeated_matrix_cursor() {
    psprecomp::GuestMemory memory;
    const std::uint32_t list = 0x08000000u;
    // 2.0, 3.0, then the same cursor command, then 4.0 over the first slot.
    const std::uint32_t words[] = {
        0x3A000000u, 0x3B400000u, 0x3B404000u, 0x3A000000u, 0x3B408000u,
        0x2A000000u, 0x2B400000u, 0x2B404000u, 0x2A000000u, 0x2B408000u,
        0x0C000000u};
    write_list(memory, list, words, 11u);
    lcs::execute_ge_list_rendered(memory, list);
    check(lcs::rendered_world_element(0u) == 4.0f, "repeated world cursor did not restart");
    check(lcs::rendered_world_element(1u) == 3.0f, "second world element was overwritten");
    check(lcs::rendered_world_element(2u) == 0.0f, "world load ran past the restarted cursor");
    check(lcs::rendered_bone_element(0u) == 4.0f, "repeated bone cursor did not restart");
    check(lcs::rendered_bone_element(1u) == 3.0f, "second bone element was overwritten");
    check(lcs::rendered_bone_element(2u) == 0.0f, "bone load ran past the restarted cursor");
}

void test_vertex_address_follows_base() {
    psprecomp::GuestMemory memory;
    const std::uint32_t list = 0x08000000u;
    const std::uint32_t words[] = {
        0x10080000u, 0x01001000u, 0x10090000u, 0x01001000u, 0x0C000000u};
    write_list(memory, list, words, 5u);
    lcs::execute_ge_list_rendered(memory, list);
    check(lcs::rendered_vertex_address() == 0x09001000u,
          "repeated vertex address ignored the new base");
}

void fill_clut(psprecomp::GuestMemory &memory, std::uint32_t address, std::uint32_t pattern) {
    for (std::uint32_t i = 0u; i < 256u; ++i) memory.store32(address + i * 4u, pattern + i);
}

std::uint32_t checksum_of(psprecomp::GuestMemory &memory, std::uint32_t address) {
    lcs::GeGpuDrawDescriptor draw{};
    draw.texture_format = 5u;
    draw.clut_address = address;
    draw.clut_format = 3u;
    draw.clut_mask = 0xFFu;
    return lcs::ge_cached_clut_checksum(memory, draw);
}

void test_clut_checksum_follows_texflush() {
    psprecomp::GuestMemory memory;
    const std::uint32_t clut = 0x04000000u;
    fill_clut(memory, clut, 0x11110000u);
    const std::uint32_t first = checksum_of(memory, clut);
    const std::uint32_t second = checksum_of(memory, clut);
    check(first != 0u, "clut checksum was empty");
    check(second == first, "repeated clut checksum changed");
    fill_clut(memory, clut, 0x22220000u);
    check(checksum_of(memory, clut) == first, "clut checksum re-read a palette the GE still holds");
    const std::uint32_t flush[] = {0xCB000000u, 0x0C000000u};
    write_list(memory, 0x08000000u, flush, 2u);
    lcs::execute_ge_list_rendered(memory, 0x08000000u);
    const std::uint32_t after_flush = checksum_of(memory, clut);
    check(after_flush != first, "texflush did not drop the cached palette");
    fill_clut(memory, clut, 0x33330000u);
    const std::uint32_t end_only[] = {0x0C000000u};
    write_list(memory, 0x08000000u, end_only, 1u);
    lcs::execute_ge_list_rendered(memory, 0x08000000u);
    check(checksum_of(memory, clut) != after_flush, "a new list kept the previous palette");
}

void test_leaf_call_replays_and_matrix_call_still_writes() {
    psprecomp::GuestMemory memory;
    const std::uint32_t list = 0x08100000u;
    const std::uint32_t outer = 0x08100100u;
    const std::uint32_t inner = 0x08100200u;
    const std::uint32_t main_words[] = {
        0x13000000u, 0x10080000u, 0x01000000u, 0x9C00A000u, 0x0A100100u, 0x0C000000u};
    const std::uint32_t outer_words[] = {0x0A100200u, 0x01004400u, 0x0B000000u};
    const std::uint32_t inner_words[] = {0x10060000u, 0x9C00B000u, 0x0B000000u, 0x9C00C000u};
    write_list(memory, list, main_words, 6u);
    write_list(memory, outer, outer_words, 3u);
    write_list(memory, inner, inner_words, 4u);
    lcs::execute_ge_list_rendered(memory, list);
    check(lcs::rendered_render_target() == 0x0400B000u, "leaf call did not write the framebuffer");
    check(lcs::rendered_vertex_address() == 0x06004400u, "leaf call did not return to the caller");
    lcs::execute_ge_list_rendered(memory, list);
    check(lcs::rendered_render_target() == 0x0400B000u, "repeated leaf call dropped the framebuffer");
    check(lcs::rendered_vertex_address() == 0x06004400u, "repeated leaf call did not return");

    const std::uint32_t rewritten[] = {0x10070000u, 0x9C00D000u, 0x0B000000u, 0x9C00C000u};
    write_list(memory, inner, rewritten, 4u);
    lcs::execute_ge_list_rendered(memory, list);
    check(lcs::rendered_render_target() == 0x0400D000u, "rewritten leaf replayed the old framebuffer");
    check(lcs::rendered_vertex_address() == 0x07004400u, "rewritten leaf replayed the old base");

    const std::uint32_t matrix_list = 0x08200000u;
    const std::uint32_t matrix_outer = 0x08200100u;
    const std::uint32_t matrix_inner = 0x08200200u;
    const std::uint32_t matrix_main[] = {0x13000000u, 0x10080000u, 0x0A200100u, 0x0C000000u};
    const std::uint32_t matrix_outer_words[] = {0x0A200200u, 0x0B000000u};
    const std::uint32_t matrix_inner_words[] = {0x3A000000u, 0x3B40A000u, 0x0B000000u};
    write_list(memory, matrix_list, matrix_main, 4u);
    write_list(memory, matrix_outer, matrix_outer_words, 2u);
    write_list(memory, matrix_inner, matrix_inner_words, 3u);
    lcs::execute_ge_list_rendered(memory, matrix_list);
    check(lcs::rendered_world_element(0u) == 5.0f, "matrix call body was skipped");
    const std::uint32_t matrix_rewritten[] = {0x3A000000u, 0x3B40C000u, 0x0B000000u};
    write_list(memory, matrix_inner, matrix_rewritten, 3u);
    lcs::execute_ge_list_rendered(memory, matrix_list);
    check(lcs::rendered_world_element(0u) == 6.0f, "rewritten matrix call body was skipped");
}

void test_clip_matrix_follows_world() {
    lcs::GeTransformState state;
    lcs::reset_ge_transform_state(state);
    const std::array<std::uint32_t, 256> commands{};
    const auto first = lcs::ge_model_to_clip(commands, state);
    const auto second = lcs::ge_model_to_clip(commands, state);
    check(first == second, "repeated world matrix changed the clip matrix");
    check(first[0] != 0.0f, "clip matrix was empty");
    state.world[9] = 8.0f;
    const auto moved = lcs::ge_model_to_clip(commands, state);
    check(moved != first, "a new world matrix reused the previous clip matrix");
    state.world[9] = 0.0f;
    const auto restored = lcs::ge_model_to_clip(commands, state);
    check(restored == first, "restored world matrix did not restore the clip matrix");
}

void test_packed_material_follows_texture_word() {
    psprecomp::GuestMemory memory;
    const std::uint32_t list = 0x08300000u;
    const std::uint32_t first[] = {0xA0001000u, 0x21000001u, 0x0C000000u};
    write_list(memory, list, first, 3u);
    lcs::execute_ge_list_rendered(memory, list);
    lcs::GeGpuDrawDescriptor draw{};
    const auto &commands = lcs::rendered_ge_commands();
    const std::uint64_t applied = lcs::ge_sync_packed_material(commands, draw, 0u);
    check(draw.texture_address == 0x1000u, "texture address was not applied");
    check(draw.blend_enabled, "blend enable was not applied");
    draw.texture_address = 0xDEADu;
    draw.blend_enabled = false;
    const std::uint64_t again = lcs::ge_sync_packed_material(commands, draw, applied);
    check(again == applied, "unchanged material moved the revision");
    check(draw.texture_address == 0xDEADu, "unchanged texture word refreshed the descriptor");
    check(!draw.blend_enabled, "unchanged blend word refreshed the descriptor");

    const std::uint32_t same[] = {0xA0001000u, 0x9C00B000u, 0x0C000000u};
    write_list(memory, list, same, 3u);
    lcs::execute_ge_list_rendered(memory, list);
    const std::uint64_t held = lcs::ge_sync_packed_material(commands, draw, applied);
    check(held == applied, "a repeated texture word refreshed the descriptor");
    check(draw.texture_address == 0xDEADu, "framebuffer change refreshed the texture");

    const std::uint32_t moved[] = {0xA0002000u, 0x0C000000u};
    write_list(memory, list, moved, 2u);
    lcs::execute_ge_list_rendered(memory, list);
    const std::uint64_t next = lcs::ge_sync_packed_material(commands, draw, held);
    check(next != held, "a new texture word did not move the material revision");
    check(draw.texture_address == 0x2000u, "a new texture word kept the old address");
    check(draw.blend_enabled, "texture refresh dropped blend");

    const std::uint32_t restored[] = {0xA0001000u, 0x21000000u, 0x0C000000u};
    write_list(memory, list, restored, 3u);
    lcs::execute_ge_list_rendered(memory, list);
    lcs::ge_sync_packed_material(commands, draw, next);
    check(draw.texture_address == 0x1000u, "restored texture word kept the new address");
    check(!draw.blend_enabled, "blend disable was ignored");
}

void test_matrix_run_stops_at_the_next_opcode() {
    psprecomp::GuestMemory memory;
    const std::uint32_t list = 0x08400000u;
    std::uint32_t words[15]{};
    words[0] = 0x3A000000u;
    for (std::uint32_t i = 0u; i < 11u; ++i) words[1u + i] = 0x3B400000u;
    words[12] = 0x3B40C000u;
    words[13] = 0x9C00A000u;
    words[14] = 0x0C000000u;
    write_list(memory, list, words, 15u);
    lcs::execute_ge_list_rendered(memory, list);
    check(lcs::rendered_world_element(0u) == 2.0f, "matrix run dropped the first element");
    check(lcs::rendered_world_element(10u) == 2.0f, "matrix run dropped a middle element");
    check(lcs::rendered_world_element(11u) == 6.0f, "matrix run dropped the last element");
    check(lcs::rendered_render_target() == 0x0400A000u, "matrix run consumed the next command");

    const std::uint32_t split[] = {
        0x3A000000u, 0x3B400000u, 0x3B404000u, 0x9C00B000u, 0x3B408000u, 0x0C000000u};
    write_list(memory, list, split, 6u);
    lcs::execute_ge_list_rendered(memory, list);
    check(lcs::rendered_world_element(0u) == 2.0f, "split matrix run dropped the first element");
    check(lcs::rendered_world_element(1u) == 3.0f, "split matrix run dropped the second element");
    check(lcs::rendered_world_element(2u) == 4.0f, "split matrix run did not write past the break");
    check(lcs::rendered_render_target() == 0x0400B000u, "split matrix run skipped the framebuffer");
}

void test_texture_run_stops_at_the_matrix() {
    psprecomp::GuestMemory memory;
    const std::uint32_t list = 0x08600000u;
    const std::uint32_t first[] = {
        0xA0001000u, 0xC3000005u, 0x21000001u, 0x42400000u,
        0x3A000000u, 0x3B400000u, 0x9C00A000u, 0x0C000000u};
    write_list(memory, list, first, 8u);
    lcs::execute_ge_list_rendered(memory, list);
    const auto &commands = lcs::rendered_ge_commands();
    check(commands[0xA0u] == 0x001000u, "texture run dropped the address");
    check(commands[0xC3u] == 0x000005u, "texture run dropped the format");
    check(commands[0x21u] == 0x000001u, "texture run dropped blend");
    check(commands[0x42u] == 0x400000u, "viewport word was not stored");
    check(lcs::rendered_world_element(0u) == 2.0f, "texture run consumed the world matrix");
    check(lcs::rendered_render_target() == 0x0400A000u, "texture run consumed the framebuffer");
    lcs::GeGpuDrawDescriptor draw{};
    const std::uint64_t applied = lcs::ge_sync_packed_material(commands, draw, 0u);
    check(draw.texture_address == 0x1000u, "texture run did not apply the address");
    check(draw.texture_format == 5u, "texture run did not apply the format");
    check(draw.blend_enabled, "texture run did not apply blend");

    const std::uint32_t repeated[] = {
        0xA0001000u, 0xC3000005u, 0x21000001u, 0x42408000u,
        0x3A000000u, 0x3B404000u, 0x9C00B000u, 0x0C000000u};
    write_list(memory, list, repeated, 8u);
    lcs::execute_ge_list_rendered(memory, list);
    draw.texture_address = 0xDEADu;
    draw.texture_format = 9u;
    draw.blend_enabled = false;
    const std::uint64_t held = lcs::ge_sync_packed_material(commands, draw, applied);
    check(held == applied, "a repeated texture word or a viewport word moved the revision");
    check(draw.texture_address == 0xDEADu, "a viewport change refreshed the texture");
    check(commands[0x42u] == 0x408000u, "a new viewport word was dropped");
    check(lcs::rendered_world_element(0u) == 3.0f, "viewport word consumed the world matrix");
    check(lcs::rendered_render_target() == 0x0400B000u, "viewport word consumed the framebuffer");

    const std::uint32_t changed[] = {
        0xC3000004u, 0x3A000000u, 0x3B408000u, 0x9C00C000u, 0x0C000000u};
    write_list(memory, list, changed, 5u);
    lcs::execute_ge_list_rendered(memory, list);
    const std::uint64_t next = lcs::ge_sync_packed_material(commands, draw, held);
    check(next != held, "a changed format word did not move the material revision");
    check(draw.texture_format == 4u, "a changed format word kept the old format");
    check(draw.texture_address == 0x1000u, "a format change dropped the texture address");
    check(draw.blend_enabled, "a format change dropped blend");
    check(lcs::rendered_world_element(0u) == 4.0f, "a format word consumed the world matrix");
    check(lcs::rendered_render_target() == 0x0400C000u, "a format word consumed the framebuffer");
}

void test_prim_leaves_the_following_matrix() {
    psprecomp::GuestMemory memory;
    const std::uint32_t list = 0x08700000u;
    const std::uint32_t words[] = {
        0x10080000u, 0x12000115u, 0x01001000u, 0x04000000u,
        0x3A000000u, 0x3B400000u, 0x9C00A000u, 0x0F000022u, 0x0C000000u};
    write_list(memory, list, words, 9u);
    lcs::execute_ge_list_rendered(memory, list);
    const auto &commands = lcs::rendered_ge_commands();
    check(commands[0x12u] == 0x000115u, "vertex type was not stored");
    check(lcs::rendered_vertex_address() == 0x08001000u, "vertex address ignored the base");
    check(lcs::rendered_world_element(0u) == 2.0f, "a primitive consumed the world matrix");
    check(lcs::rendered_render_target() == 0x0400A000u, "a primitive consumed the framebuffer");
    check(lcs::rendered_list_finished(), "finish after a primitive did not run");
    check(lcs::rendered_finish_argument() == 0x22u, "finish argument after a primitive was dropped");
}

void test_bone_call_loads_twelve_and_returns() {
    psprecomp::GuestMemory memory;
    const std::uint32_t list = 0x08500000u;
    const std::uint32_t body = 0x08500100u;
    const std::uint32_t main_words[] = {
        0x13000000u, 0x10080000u, 0x2A000018u, 0x0A500100u, 0x2B40C000u, 0x9C00B000u, 0x0C000000u};
    std::uint32_t subroutine[14]{};
    for (std::uint32_t i = 0u; i < 12u; ++i) subroutine[i] = 0x2B400000u;
    subroutine[12] = 0x0B000000u;
    subroutine[13] = 0x9C00C000u;
    write_list(memory, list, main_words, 7u);
    write_list(memory, body, subroutine, 14u);
    lcs::execute_ge_list_rendered(memory, list);
    check(lcs::rendered_bone_element(24u) == 2.0f, "bone call did not load the first element");
    check(lcs::rendered_bone_element(35u) == 2.0f, "bone call did not load the twelfth element");
    check(lcs::rendered_bone_element(36u) == 6.0f, "bone call did not return to the next bone word");
    check(lcs::rendered_render_target() == 0x0400B000u, "bone call did not return to the caller");

    subroutine[12] = 0x9C00D000u;
    subroutine[13] = 0x0B000000u;
    write_list(memory, body, subroutine, 14u);
    const std::uint32_t again[] = {
        0x13000000u, 0x10080000u, 0x2A000018u, 0x0A500100u, 0x0C000000u};
    write_list(memory, list, again, 5u);
    lcs::execute_ge_list_rendered(memory, list);
    check(lcs::rendered_render_target() == 0x0400D000u,
          "a bone body without a return skipped its framebuffer");
}

void test_matrix_cursors_load_in_the_span() {
    psprecomp::GuestMemory memory;
    const std::uint32_t list = 0x08500000u;
    const std::uint32_t view[] = {
        0x3C000000u, 0x3D400000u, 0x3D404000u, 0x3D408000u, 0x9C00A000u, 0x0C000000u};
    write_list(memory, list, view, 6u);
    lcs::execute_ge_list_rendered(memory, list);
    check(lcs::rendered_view_element(0u) == 2.0f, "view cursor dropped the first element");
    check(lcs::rendered_view_element(1u) == 3.0f, "view cursor dropped the second element");
    check(lcs::rendered_view_element(2u) == 4.0f, "view cursor dropped the third element");
    check(lcs::rendered_render_target() == 0x0400A000u, "view cursor consumed the framebuffer");

    const std::uint32_t projection[] = {0x3E000000u, 0x3F40A000u, 0x9C00B000u, 0x0C000000u};
    write_list(memory, list, projection, 4u);
    lcs::execute_ge_list_rendered(memory, list);
    check(lcs::rendered_projection_element(0u) == 5.0f, "projection cursor dropped its element");
    check(lcs::rendered_render_target() == 0x0400B000u, "projection cursor consumed the framebuffer");

    const std::uint32_t texture[] = {0x40000000u, 0x4140C000u, 0x9C00C000u, 0x0C000000u};
    write_list(memory, list, texture, 4u);
    lcs::execute_ge_list_rendered(memory, list);
    check(lcs::rendered_texture_matrix_element(0u) == 6.0f, "texture cursor dropped its element");
    check(lcs::rendered_render_target() == 0x0400C000u, "texture cursor consumed the framebuffer");

    const std::uint32_t bone[] = {0x2A000004u, 0x2B400000u, 0x2C408000u, 0x9C00D000u, 0x0C000000u};
    write_list(memory, list, bone, 5u);
    lcs::execute_ge_list_rendered(memory, list);
    check(lcs::rendered_bone_element(4u) == 2.0f, "bone cursor dropped its element");
    check(lcs::rendered_morph_weight(0u) == 4.0f, "morph weight was dropped");
    check(lcs::rendered_render_target() == 0x0400D000u, "bone cursor consumed the framebuffer");
}

void test_lighting_words_stay_in_the_span() {
    psprecomp::GuestMemory memory;
    const std::uint32_t list = 0x08600000u;
    // Enable, material ambient, one light position, then a framebuffer word.
    // Unknown 0x52 sits in the gap the span store must not swallow.
    const std::uint32_t words[] = {
        0x17000001u, 0x55ABCDEFu, 0x63400000u, 0x51000001u,
        0x52000042u, 0x9C00E000u, 0x0C000000u};
    write_list(memory, list, words, 7u);
    lcs::execute_ge_list_rendered(memory, list);
    const auto &commands = lcs::rendered_ge_commands();
    check(commands[0x17u] == 0x000001u, "lighting enable was dropped");
    check(commands[0x55u] == 0xABCDEFu, "material ambient was dropped");
    check(commands[0x63u] == 0x400000u, "light position was dropped");
    check(commands[0x51u] == 0x000001u, "reverse normal was dropped");
    check(commands[0x52u] == 0x000042u, "unknown command was dropped");
    check(lcs::rendered_render_target() == 0x0400E000u, "lighting words consumed the framebuffer");
}

void test_state_words_stay_in_the_span() {
    psprecomp::GuestMemory memory;
    const std::uint32_t list = 0x08700000u;
    // Texture map mode, fog end, shade, and cull, then a load-clut word that
    // must stay on the old path, then the framebuffer.
    const std::uint32_t words[] = {
        0xC0000002u, 0xCD400000u, 0x50000001u, 0x1D000001u, 0x9B000001u,
        0xC4000007u, 0x9C00F000u, 0x0C000000u};
    write_list(memory, list, words, 8u);
    lcs::execute_ge_list_rendered(memory, list);
    const auto &commands = lcs::rendered_ge_commands();
    check(commands[0xC0u] == 0x000002u, "texture map mode was dropped");
    check(commands[0xCDu] == 0x400000u, "fog end was dropped");
    check(commands[0x50u] == 0x000001u, "shade mode was dropped");
    check(commands[0x1Du] == 0x000001u, "cull enable was dropped");
    check(commands[0x9Bu] == 0x000001u, "cull face was dropped");
    check(commands[0xC4u] == 0x000007u, "load clut was dropped");
    check(lcs::rendered_render_target() == 0x0400F000u, "state words consumed the framebuffer");
}

void test_partial_bone_call_still_runs() {
    psprecomp::GuestMemory memory;
    const std::uint32_t list = 0x08800000u;
    const std::uint32_t body = 0x08800100u;
    // Base 0x080000 plus call data 0x800100 is 0x08800100. Data 0x880100 is
    // 0x08880100, past this body. Slot 8 is not the bone the cursor test left
    // at 2.0, so a stale matrix cannot pass. The body starts with bone data
    // and is not twelve bone words plus a return, so the fast load must not
    // skip the material word.
    check(lcs::rendered_bone_element(8u) != 3.0f, "bone slot was already the body value");
    const std::uint32_t main_words[] = {
        0x55111111u, 0x13000000u, 0x10080000u, 0x2A000008u, 0x0A800100u, 0x9C00C000u, 0x0C000000u};
    const std::uint32_t subroutine[] = {0x2B404000u, 0x55222222u, 0x0B000000u, 0x55333333u};
    write_list(memory, list, main_words, 7u);
    write_list(memory, body, subroutine, 4u);
    lcs::execute_ge_list_rendered(memory, list);
    const auto &commands = lcs::rendered_ge_commands();
    check(lcs::rendered_bone_element(8u) == 3.0f, "partial bone call did not run its bone word");
    check(commands[0x55u] == 0x222222u, "partial bone call skipped the rest of the body");
    check(lcs::rendered_render_target() == 0x0400C000u, "partial bone call did not return");
}

void test_prim_run_stops_at_the_next_opcode() {
    psprecomp::GuestMemory memory;
    const std::uint32_t list = 0x08900000u;
    // Position-only 8-bit vertices are 3 bytes. Type 7 is not drawn; the
    // walker still advances the vertex pointer by count times that stride.
    // The two PRIM words are a run. The world matrix is not, so it must run.
    check(lcs::rendered_world_element(7u) != 5.0f, "world slot was already the prim-run value");
    const std::uint32_t words[] = {
        0x13000000u, 0x10080000u, 0x12000080u, 0x01001000u,
        0x04070001u, 0x04070002u, 0x3A000007u, 0x3B40A000u, 0x9C00E100u, 0x0C000000u};
    write_list(memory, list, words, 10u);
    lcs::execute_ge_list_rendered(memory, list);
    check(lcs::rendered_vertex_address() == 0x08001009u, "prim run skipped a primitive");
    check(lcs::rendered_world_element(7u) == 5.0f, "prim run consumed the world matrix");
    check(lcs::rendered_render_target() == 0x0400E100u, "prim run consumed the framebuffer");
}

void test_span_store_keeps_flow_and_matrix() {
    psprecomp::GuestMemory memory;
    const std::uint32_t list = 0x08A00000u;
    const std::uint32_t body = 0x08A00200u;
    // Base 0 makes the vertex address 0x00002000. A stored base would leave
    // the previous 0x08 base and produce 0x08002000. A stored vertex-address
    // word would leave the prim-run pointer 0x08001009. Slot 6 is not the
    // world element the prim run left at 5.0. Call data 0xA00200 with base
    // 0x080000 is this body. Data 0xA80200 is 0x08A80200.
    check(lcs::rendered_world_element(6u) != 6.0f, "world slot was already the span-store value");
    check(lcs::rendered_ge_commands()[0x55u] != 0x000099u, "material was already the call body");
    check(lcs::rendered_ge_commands()[0x12u] != 0x000083u, "vertex type was already the span-store value");
    const std::uint32_t main_words[] = {
        0x13000000u, 0x10000000u, 0xA0002000u, 0xC4000009u, 0x12000083u, 0x01002000u,
        0x10080000u, 0x3A000006u, 0x3B40C000u, 0x0AA00200u, 0x9C00E300u, 0x0C000000u};
    const std::uint32_t subroutine[] = {0x55000099u, 0x0B000000u};
    write_list(memory, list, main_words, 12u);
    write_list(memory, body, subroutine, 2u);
    lcs::execute_ge_list_rendered(memory, list);
    const auto &commands = lcs::rendered_ge_commands();
    check(commands[0xA0u] == 0x002000u, "texture word was dropped");
    check(commands[0x12u] == 0x000083u, "vertex type was dropped");
    check(commands[0xC4u] == 0x000009u, "load clut was dropped");
    check(lcs::rendered_vertex_address() == 0x00002000u, "base or vertex address was only stored");
    check(lcs::rendered_world_element(6u) == 6.0f, "world cursor was only stored");
    check(commands[0x55u] == 0x000099u, "call was only stored");
    check(lcs::rendered_render_target() == 0x0400E300u, "span store consumed the framebuffer");
}

void test_matrix_quad_matches_and_stops_at_the_end() {
    psprecomp::GuestMemory memory;
    const std::uint32_t list = 0x08B00000u;
    // Twelve world floats, three groups of four. The tail list starts at
    // element 10, so only two slots remain and the wide store must not run.
    check(lcs::rendered_world_element(11u) != 13.0f, "world slot was already the quad value");
    check(lcs::rendered_view_element(0u) != 4.0f, "view slot was already the overflow value");
    const float view0 = lcs::rendered_view_element(0u);
    const std::uint32_t full[] = {
        0x3A000000u, 0x3B400000u, 0x3B404000u, 0x3B408000u, 0x3B40A000u,
        0x3B40C000u, 0x3B40E000u, 0x3B410000u, 0x3B411000u,
        0x3B412000u, 0x3B413000u, 0x3B414000u, 0x3B415000u, 0x0C000000u};
    write_list(memory, list, full, 14u);
    lcs::execute_ge_list_rendered(memory, list);
    check(lcs::rendered_world_element(0u) == 2.0f, "matrix quad dropped the first element");
    check(lcs::rendered_world_element(4u) == 6.0f, "matrix quad dropped the second group");
    check(lcs::rendered_world_element(8u) == 10.0f, "matrix quad dropped the third group");
    check(lcs::rendered_world_element(11u) == 13.0f, "matrix quad dropped the last element");
    check(lcs::rendered_ge_commands()[0x3Bu] == 0x415000u, "matrix quad kept an earlier word");
    const std::uint32_t tail[] = {
        0x3A00000Au, 0x3B400000u, 0x3B404000u, 0x3B408000u, 0x3B40A000u,
        0x9C00E400u, 0x0C000000u};
    write_list(memory, list, tail, 7u);
    lcs::execute_ge_list_rendered(memory, list);
    check(lcs::rendered_world_element(10u) == 2.0f, "short matrix tail dropped its first element");
    check(lcs::rendered_world_element(11u) == 3.0f, "short matrix tail dropped its second element");
    check(lcs::rendered_view_element(0u) == view0, "short matrix tail wrote past the world matrix");
    check(lcs::rendered_render_target() == 0x0400E400u, "short matrix tail consumed the framebuffer");
}

void test_world_convert_follows_the_list() {
    psprecomp::GuestMemory memory;
    const std::uint32_t list = 0x08C00000u;
    check(lcs::rendered_world_element(9u) != 4.0f, "world element 9 was already 4");
    const std::uint32_t first[] = {
        0x3A000000u, 0x3B400000u, 0x3A000009u, 0x3B408000u, 0x0C000000u};
    write_list(memory, list, first, 5u);
    lcs::execute_ge_list_rendered(memory, list);
    check(lcs::rendered_world_element(0u) == 2.0f, "list did not store world element 0");
    check(lcs::rendered_world_element(9u) == 4.0f, "list did not store world element 9");

    lcs::GeTransformState state;
    lcs::reset_ge_transform_state(state);
    for (std::uint32_t i = 0u; i < 12u; ++i)
        state.world[i] = lcs::rendered_world_element(i);
    const std::array<std::uint32_t, 256> commands{};
    const auto once = lcs::ge_model_to_clip(commands, state);
    const auto twice = lcs::ge_model_to_clip(commands, state);
    check(once == twice, "repeated world matrix changed the clip matrix");
    check(once[12] == 4.0f, "clip matrix did not keep the list translation");

    const std::uint32_t moved[] = {0x3A000009u, 0x3B40A000u, 0x0C000000u};
    write_list(memory, list, moved, 3u);
    lcs::execute_ge_list_rendered(memory, list);
    check(lcs::rendered_world_element(0u) == 2.0f, "second list rewrote world element 0");
    check(lcs::rendered_world_element(9u) == 5.0f, "second list did not store world element 9");
    for (std::uint32_t i = 0u; i < 12u; ++i)
        state.world[i] = lcs::rendered_world_element(i);
    const auto changed = lcs::ge_model_to_clip(commands, state);
    check(changed != once, "a new world matrix reused the previous clip matrix");
    check(changed[12] == 5.0f, "clip matrix kept the previous translation");
}

void test_store_run_keeps_the_texture_block_and_stops() {
    psprecomp::GuestMemory memory;
    const std::uint32_t list = 0x08D00000u;
    // The distance-2 material body is this block: texture registers, the clut
    // words, alpha test, the vertex type, then two viewport words. The run has
    // to store every one of them and stop before BASE, so the vertex address
    // still follows that base. A repeated block must not move the material
    // revision. One changed texture word must.
    const std::uint32_t words[] = {
        0xA0001111u, 0xA1002222u, 0xA2003333u, 0xA3004444u, 0xA4005555u,
        0xA8006666u, 0xA9007777u, 0xAA008888u, 0xAB009999u, 0xAC00AAAAu,
        0xB000BBBBu, 0xB100CCCCu, 0xB800DDDDu, 0xB900EEEEu, 0xBA001111u,
        0xBB002222u, 0xBC003333u, 0xC2000001u, 0xC3000005u, 0xC4000009u,
        0xC5000011u, 0xC7000013u, 0x1E000021u, 0x17000001u, 0x12000115u,
        0x48000042u, 0x49000043u, 0x10000000u, 0x01003456u, 0x0C000000u};
    write_list(memory, list, words, 30u);
    lcs::execute_ge_list_rendered(memory, list);
    const auto &commands = lcs::rendered_ge_commands();
    check(commands[0xA0u] == 0x001111u, "store run dropped the texture address");
    check(commands[0xA4u] == 0x005555u, "store run dropped a middle texture word");
    check(commands[0xBCu] == 0x003333u, "store run dropped the texture size");
    check(commands[0xC2u] == 0x000001u, "store run dropped the texture mode");
    check(commands[0xC3u] == 0x000005u, "store run dropped the texture format");
    check(commands[0xC4u] == 0x000009u, "store run dropped the clut load");
    check(commands[0xC7u] == 0x000013u, "store run dropped the clut offset");
    check(commands[0x1Eu] == 0x000021u, "store run dropped the alpha test");
    check(commands[0x17u] == 0x000001u, "store run dropped the lighting enable");
    check(commands[0x12u] == 0x000115u, "store run dropped the vertex type");
    check(commands[0x48u] == 0x000042u, "store run dropped the viewport");
    check(commands[0x49u] == 0x000043u, "store run dropped the second viewport");
    check(lcs::rendered_vertex_address() == 0x00003456u,
          "store run did not stop for the base and the vertex address");
    lcs::GeGpuDrawDescriptor draw{};
    const std::uint64_t applied = lcs::ge_sync_packed_material(commands, draw, 0u);
    check(draw.texture_address == 0x001110u, "store run did not apply the texture address");
    check(draw.texture_format == 5u, "store run did not apply the texture format");

    write_list(memory, list, words, 30u);
    lcs::execute_ge_list_rendered(memory, list);
    draw.texture_address = 0xDEADu;
    const std::uint64_t held = lcs::ge_sync_packed_material(commands, draw, applied);
    check(held == applied, "a repeated texture block moved the material revision");
    check(draw.texture_address == 0xDEADu, "a repeated texture block refreshed the descriptor");
    check(lcs::rendered_vertex_address() == 0x00003456u,
          "a repeated base lost the vertex address");

    const std::uint32_t moved[] = {0xA0002222u, 0x10080000u, 0x01002000u, 0x0C000000u};
    write_list(memory, list, moved, 4u);
    lcs::execute_ge_list_rendered(memory, list);
    const std::uint64_t next = lcs::ge_sync_packed_material(commands, draw, held);
    check(next != held, "a changed texture word in the run did not move the revision");
    check(draw.texture_address == 0x002220u, "a changed texture word kept the old address");
    check(commands[0xA4u] == 0x005555u, "a short run cleared a texture word it did not write");
    check(lcs::rendered_vertex_address() == 0x08002000u,
          "the run after a new base ignored that base");
}

void test_1df_draw_lights_and_stops() {
    psprecomp::GuestMemory memory;
    const auto write_triangle = [&](std::uint32_t address, std::uint32_t color) {
        const std::uint32_t positions[9] = {
            0xBF000000u, 0xBF000000u, 0u,
            0x3F000000u, 0xBF000000u, 0u,
            0xBF000000u, 0x3F000000u, 0u,
        };
        for (int i = 0; i < 3; ++i) {
            const std::uint32_t base = address + static_cast<std::uint32_t>(i * 32);
            memory.store32(base, 0u);
            memory.store32(base + 4u, 0u);
            memory.store32(base + 8u, color);
            memory.store32(base + 12u, 0u);
            memory.store32(base + 16u, 0x00007FFFu);
            memory.store32(base + 20u, positions[i * 3]);
            memory.store32(base + 24u, positions[i * 3 + 1]);
            memory.store32(base + 28u, positions[i * 3 + 2]);
        }
    };
    write_triangle(0x09000000u, 0xFF00FF00u);
    write_triangle(0x09001000u, 0xFFFFFFFFu);

    std::uint32_t words[160]{};
    std::size_t count = 0u;
    const auto push = [&](std::uint32_t word) {
        check(count < 160u, "1df list overflowed");
        words[count++] = word;
    };
    const auto identity = [&](std::uint32_t cursor, std::uint32_t data, int elements, bool mat4) {
        push(cursor << 24u);
        for (int i = 0; i < elements; ++i) {
            const bool one = mat4 ? (i == 0 || i == 5 || i == 10 || i == 15)
                                  : (i == 0 || i == 4 || i == 8);
            push((data << 24u) | (one ? 0x3F8000u : 0u));
        }
    };
    const auto draw_state = [&](std::uint32_t framebuffer, bool lighting) {
        push(0x9C000000u | framebuffer);
        push(0x9D000020u);
        push(0xD2000003u);
        push(0xD4000000u);
        push(0xD5000000u);
        push(0xD3000000u);
        push(0x1E000000u);
        push(0x21000000u);
        push(0x22000000u);
        push(0x23000000u);
        push(0x1F000000u);
        push(0x1C000000u);
        push(0x1D000000u);
        push(0x50000001u);
        push(0xE7000001u);
        push(0xE8000000u);
        push(0xE9000000u);
        push(0xC0000000u);
        push(lighting ? 0x17000001u : 0x17000000u);
        push(0x51000000u);
        push(0x120001DFu);
        push(0x42408000u);
        push(0x43408000u);
        push(0x44000000u);
        push(0x45408000u);
        push(0x46408000u);
        push(0x47000000u);
        push(0x4C000000u);
        push(0x4D000000u);
        identity(0x3Au, 0x3Bu, 12, false);
        identity(0x3Cu, 0x3Du, 12, false);
        identity(0x3Eu, 0x3Fu, 16, true);
    };

    draw_state(0x002000u, false);
    push(0x10090000u);
    push(0x01000000u);
    push(0x04030003u);
    push(0x9C00E500u);
    push(0x0C000000u);
    write_list(memory, 0x08E00000u, words, count);
    lcs::execute_ge_list_rendered(memory, 0x08E00000u);
    check(memory.load32(0x0400218Cu) == 0xFF00FF00u, "unlit 1df triangle was not green");
    check(memory.load32(0x04002000u) == 0u, "unlit 1df triangle covered the framebuffer origin");
    check(lcs::rendered_vertex_address() == 0x09000060u,
          "unlit 1df draw did not advance three vertices");
    check(lcs::rendered_render_target() == 0x0400E500u,
          "unlit 1df draw consumed the next framebuffer");

    count = 0u;
    draw_state(0x004000u, true);
    push(0x53000000u);
    push(0x54000000u);
    push(0x55000000u);
    push(0x560000FFu);
    push(0x57000000u);
    push(0x580000FFu);
    push(0x5B000000u);
    push(0x5C000000u);
    push(0x5D000000u);
    push(0x18000001u);
    push(0x19000000u);
    push(0x1A000000u);
    push(0x1B000000u);
    push(0x5F000000u);
    push(0x60000000u);
    push(0x61000000u);
    push(0x62000000u);
    push(0x63000000u);
    push(0x64000000u);
    push(0x653F8000u);
    push(0x8F000000u);
    push(0x90FFFFFFu);
    push(0x91000000u);
    push(0x10090000u);
    push(0x01001000u);
    push(0x04030003u);
    push(0x9C00F500u);
    push(0x0C000000u);
    write_list(memory, 0x08E01000u, words, count);
    lcs::execute_ge_list_rendered(memory, 0x08E01000u);
    const std::uint32_t lit = memory.load32(0x0400418Cu);
    check((lit & 0xFFu) >= 250u, "lit 1df triangle was not red");
    check(((lit >> 8u) & 0xFFu) <= 1u, "lit 1df triangle kept a green channel");
    check(((lit >> 16u) & 0xFFu) <= 1u, "lit 1df triangle kept a blue channel");
    check(memory.load32(0x04004000u) == 0u, "lit 1df triangle covered the framebuffer origin");
    check(lcs::rendered_vertex_address() == 0x09001060u,
          "lit 1df draw did not advance three vertices");
    check(lcs::rendered_render_target() == 0x0400F500u,
          "lit 1df draw consumed the next framebuffer");
}

void test_second_list_does_not_submit() {
    psprecomp::Runtime runtime;
    const std::uint32_t first = 0x08300000u;
    const std::uint32_t second = 0x08400000u;
    const std::uint32_t list_a[] = {0x9C00A000u, 0x0C000000u};
    const std::uint32_t list_b[] = {0x9C00B000u, 0x0F000033u, 0x0C000000u};
    write_list(runtime.memory(), first, list_a, 2u);
    write_list(runtime.memory(), second, list_b, 3u);
    const auto splits = lcs::ge_gpu_backend_deferred_list_splits();
    const auto epoch = lcs::ge_gpu_backend_frame_epoch();
    lcs::execute_ge_list_frame(runtime, first, 1u);
    check(lcs::rendered_render_target() == 0x0400A000u, "first list did not run");
    check(lcs::ge_gpu_backend_deferred_list_splits() == splits, "first list deferred a split");
    check(lcs::ge_gpu_backend_frame_epoch() == epoch, "first list retired the texture generation");
    lcs::execute_ge_list_frame(runtime, first, 1u);
    check(lcs::ge_gpu_backend_deferred_list_splits() == splits, "the same list submitted a frame");
    check(lcs::ge_gpu_backend_frame_epoch() == epoch, "the same list retired the texture generation");
    lcs::execute_ge_list_frame(runtime, second, 1u);
    check(lcs::ge_gpu_backend_deferred_list_splits() == splits + 1u,
          "second list submitted a frame");
    check(lcs::ge_gpu_backend_frame_epoch() == epoch, "second list retired the texture generation");
    check(lcs::rendered_render_target() == 0x0400B000u, "second list did not run");
    check(lcs::rendered_list_finished(), "second list finish did not run");
    check(lcs::rendered_finish_argument() == 0x33u, "second list finish argument was dropped");
    check(lcs::ge_gpu_backend_finish_color_frame(1u) == false ||
              lcs::ge_gpu_backend_frame_epoch() == epoch + 1u,
          "present did not retire the texture generation");
    check(lcs::ge_gpu_backend_frame_epoch() == epoch + 1u,
          "present did not advance the texture generation by one");
}

void test_repeated_call_still_runs() {
    psprecomp::GuestMemory memory;
    const std::uint32_t list = 0x08000000u;
    const std::uint32_t body = 0x08000020u;
    const std::uint32_t words[] = {0x10080000u, 0x9C00A000u, 0x0A000020u, 0x0C000000u};
    const std::uint32_t subroutine[] = {0x9C00B000u, 0x0B000000u, 0x9C00C000u};
    write_list(memory, list, words, 4u);
    write_list(memory, body, subroutine, 3u);
    lcs::execute_ge_list_rendered(memory, list);
    check(lcs::rendered_render_target() == 0x0400B000u, "call body did not run");
    lcs::execute_ge_list_rendered(memory, list);
    check(lcs::rendered_render_target() == 0x0400B000u, "repeated call was skipped");
}
}

int main() {
    try {
        test_repeated_register_and_finish();
        test_repeated_matrix_cursor();
        test_vertex_address_follows_base();
        test_repeated_call_still_runs();
        test_leaf_call_replays_and_matrix_call_still_writes();
        test_clip_matrix_follows_world();
        test_clut_checksum_follows_texflush();
        test_packed_material_follows_texture_word();
        test_matrix_run_stops_at_the_next_opcode();
        test_texture_run_stops_at_the_matrix();
        test_prim_leaves_the_following_matrix();
        test_bone_call_loads_twelve_and_returns();
        test_matrix_cursors_load_in_the_span();
        test_lighting_words_stay_in_the_span();
        test_state_words_stay_in_the_span();
        test_partial_bone_call_still_runs();
        test_prim_run_stops_at_the_next_opcode();
        test_span_store_keeps_flow_and_matrix();
        test_matrix_quad_matches_and_stops_at_the_end();
        test_world_convert_follows_the_list();
        test_store_run_keeps_the_texture_block_and_stops();
        test_second_list_does_not_submit();
        test_1df_draw_lights_and_stops();
    } catch (const std::exception &error) {
        std::cerr << "ge walk test failed: " << error.what() << '\n';
        return 1;
    }
    std::cout << "ge walk: same framebuffer kept, repeated finish ran, matrix and bone cursors restarted, vertex address followed base, repeated call ran, nested call kept the framebuffer and returned, matrix call still wrote the world matrix, clip matrix followed the world matrix, clut checksum held until texflush, unchanged texture kept the descriptor, changed texture word updated it, matrix run stopped at the next command, texture run left the world matrix and the viewport, primitive left the world matrix, bone call loaded twelve and returned, matrix cursors loaded view projection texture bone and morph, lighting words stayed and left the framebuffer, state words stayed and left the framebuffer, partial bone call ran and returned, prim run drew both and left the matrix, span store kept the texture word and still ran base, the vertex address, the world matrix, and the call, matrix quad loaded twelve and the short tail stopped at the end of the world matrix, world convert followed the list translation, store run kept the texture block and stopped before the vertex address, second list kept its framebuffer without a frame submit, 1df draw kept the green pixel, the lit red pixel, and the framebuffer after the primitive\n";
    return 0;
}
