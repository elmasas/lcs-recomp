#include "lcs_ge_exec.hpp"

#include "ge_renderer.hpp"
#include "lcs_menu.hpp"

#include <array>
#include <bit>
#include <cstdint>
#include <cstring>
#include <string>
#if defined(__SSE2__)
#include <emmintrin.h>
#endif

namespace lcs {
namespace {

std::array<std::uint32_t, 256> ge_commands{};
GeTransformState ge_transform{};
std::uint32_t ge_base_register = 0u;
std::uint32_t ge_offset_address = 0u;
std::uint32_t ge_vertex_address = 0u;
std::uint32_t ge_index_address = 0u;
bool ge_finish_seen = false;
std::uint32_t ge_finish_arg = 0u;

constexpr std::uint32_t kMaxCommands = 2'000'000u;

// One command word: one check and a copy, as GuestMemory::load32 does; false where the list leaves guest memory.
inline bool read_command(const psprecomp::GuestMemory &memory, std::uint32_t pc, std::uint32_t &word) {
    if (const std::uint8_t *raw = memory.raw_pointer(pc, 4u)) {
        std::memcpy(&word, raw, sizeof word);
        return true;
    }
    if (!memory.contains(pc, 4u)) return false;
    word = memory.load32(pc);
    return true;
}

std::uint32_t relative_address(std::uint32_t data24) {
    const std::uint32_t extended = ((ge_base_register & 0x000F0000u) << 8u) | (data24 & 0x00FFFFFFu);
    return (ge_offset_address + extended) & 0x0FFFFFFFu;
}

// Commands copied into the cached draw descriptor. Matrix, address, and flow
// commands are not in that set, so a run of world instances reuses it.
constexpr std::array<std::uint8_t, 256> descriptor_command = [] {
    std::array<std::uint8_t, 256> table{};
    constexpr std::uint32_t singles[] = {
        0x12u, 0x1Eu, 0x1Fu, 0x21u, 0x22u, 0x23u, 0x9Cu, 0x9Du,
        0xB0u, 0xB1u, 0xD0u, 0xD2u, 0xD3u, 0xD4u, 0xD5u,
        0xDBu, 0xDEu, 0xDFu, 0xE0u, 0xE1u, 0xE7u, 0xE8u, 0xE9u};
    for (const std::uint32_t command : singles) table[command] = 1u;
    for (std::uint32_t command = 0xA0u; command <= 0xAFu; ++command) table[command] = 1u;
    for (std::uint32_t command = 0xB8u; command <= 0xBFu; ++command) table[command] = 1u;
    for (std::uint32_t command = 0xC2u; command <= 0xCAu; ++command) table[command] = 1u;
    for (std::uint32_t command = 0xCDu; command <= 0xCFu; ++command) table[command] = 1u;
    return table;
}();

// Commands the repeat rereads, or that this emulator does not apply.
// Lighting and the vertex type still end the repeat.
constexpr std::array<std::uint8_t, 256> repeat_neutral_command = [] {
    std::array<std::uint8_t, 256> table{};
    constexpr std::uint32_t singles[] = {
        0x00u, 0x01u, 0x02u, 0x08u, 0x09u, 0x0Au, 0x0Bu, 0x0Eu, 0x0Fu, 0x10u, 0x13u,
        0x1Cu, 0x1Du, 0x9Bu, 0xCDu, 0xCEu,
        0xD6u, 0xD7u, 0xDCu, 0xDDu};
    for (const std::uint32_t command : singles) table[command] = 1u;
    for (std::uint32_t command = 0x2Au; command <= 0x41u; ++command) table[command] = 1u;
    for (std::uint32_t command = 0x42u; command <= 0x4Du; ++command) table[command] = 1u;
    return table;
}();

// Texture registers change per building. The repeat refreshes them from the
// command words. Blend, depth, and the framebuffer do not.
constexpr std::array<std::uint8_t, 256> texture_command = [] {
    std::array<std::uint8_t, 256> table{};
    for (std::uint32_t command = 0xA0u; command <= 0xAFu; ++command) table[command] = 1u;
    for (std::uint32_t command = 0xB8u; command <= 0xBFu; ++command) table[command] = 1u;
    for (std::uint32_t command = 0xC2u; command <= 0xCAu; ++command) table[command] = 1u;
    table[0xB0u] = table[0xB1u] = table[0xD0u] = 1u;
    return table;
}();

// Blend, depth, alpha, fog, and the color mask. The repeat copies these onto
// the draw. The vertex type, framebuffer, scissor, and clear mode do not.
constexpr std::array<std::uint8_t, 256> pixel_command = [] {
    std::array<std::uint8_t, 256> table{};
    constexpr std::uint32_t singles[] = {
        0x1Eu, 0x1Fu, 0x21u, 0x22u, 0x23u, 0xCFu,
        0xDBu, 0xDEu, 0xDFu, 0xE0u, 0xE1u, 0xE7u, 0xE8u, 0xE9u};
    for (const std::uint32_t command : singles) table[command] = 1u;
    return table;
}();

constexpr std::array<std::uint8_t, 256> pipeline_command = [] {
    std::array<std::uint8_t, 256> table{};
    constexpr std::uint32_t singles[] = {
        0x12u, 0x9Cu, 0x9Du, 0xD2u, 0xD3u, 0xD4u, 0xD5u};
    for (const std::uint32_t command : singles) table[command] = 1u;
    return table;
}();

// Lighting, material, and light parameters. PPSSPP's software table stores
// these with flags 0 (SoftGpu.cpp softgpuCommandTable): no execute handler.
// Unknowns 0x52, 0x59, and 0x5A have FLAG_EXECUTE. A changed word still
// disarms the repeat.
constexpr std::array<std::uint8_t, 256> lighting_command = [] {
    std::array<std::uint8_t, 256> table{};
    for (std::uint32_t command = 0x17u; command <= 0x1Bu; ++command) table[command] = 1u;
    table[0x51u] = 1u;
    for (std::uint32_t command = 0x53u; command <= 0x58u; ++command) table[command] = 1u;
    for (std::uint32_t command = 0x5Bu; command <= 0x9Au; ++command) table[command] = 1u;
    return table;
}();

// Remaining registers the software table stores with flags 0 and no handler.
// Fog coefficients, shade, cull, texture-map mode, region, and depth range.
// Load CLUT (0xC4), framebuffer, stride, scissor, clear, and transfer start
// stay on step(): those entries have an execute flag, or this walker treats
// them as pipeline state. A span that is not contiguous stays on step().
constexpr std::array<std::uint8_t, 256> state_command = [] {
    std::array<std::uint8_t, 256> table{};
    constexpr std::uint32_t singles[] = {
        0x0Eu, 0x15u, 0x16u, 0x1Cu, 0x1Du, 0x20u, 0x24u, 0x25u, 0x26u, 0x27u, 0x28u,
        0x36u, 0x37u, 0x38u, 0x50u, 0x9Bu, 0xB2u, 0xB3u, 0xB4u, 0xB5u,
        0xC0u, 0xC1u, 0xCCu, 0xCDu, 0xCEu,
        0xD6u, 0xD7u, 0xD8u, 0xD9u, 0xDAu, 0xDCu, 0xDDu, 0xE6u,
        0xEBu, 0xECu, 0xEEu};
    for (const std::uint32_t command : singles) table[command] = 1u;
    for (std::uint32_t command = 0xE2u; command <= 0xE5u; ++command) table[command] = 1u;
    return table;
}();

// One lookup for words the span loop only stores. FastRunLoop loads one
// command-info entry and calls a handler only when an execute flag is set
// (commit d60bb27). These predicates are the four tables above, plus
// viewport, nop, and vertex type. Flow, matrix, primitive, load-clut,
// framebuffer, and transfer start stay 0. A span that is not contiguous
// still uses step().
constexpr std::array<std::uint8_t, 256> span_store = [] {
    std::array<std::uint8_t, 256> table{};
    for (std::uint32_t command = 0u; command < table.size(); ++command) {
        const bool store =
            texture_command[command] != 0u || pixel_command[command] != 0u ||
            lighting_command[command] != 0u || state_command[command] != 0u ||
            (command >= 0x42u && command <= 0x4Du) || command == 0x00u || command == 0x12u;
        table[command] = store ? 1u : 0u;
    }
    return table;
}();

float decode_matrix_word(std::uint32_t data) noexcept {
    return std::bit_cast<float>((data & 0x00FFFFFFu) << 8u);
}

// The data word that follows a matrix cursor command. Zero when command is not a cursor.
std::uint32_t matrix_data_command(std::uint32_t command) noexcept {
    switch (command) {
    case 0x2Au: return 0x2Bu;
    case 0x3Au: return 0x3Bu;
    case 0x3Cu: return 0x3Du;
    case 0x3Eu: return 0x3Fu;
    case 0x40u: return 0x41u;
    default: return 0u;
    }
}

void store_matrix_data(std::uint32_t command, std::uint32_t data) noexcept {
    switch (command) {
    case 0x2Bu: {
        const std::uint32_t index = ge_transform.bone_cursor & 0x7Fu;
        if (index < ge_transform.bones.size())
            ge_transform.bones[index] = decode_matrix_word(data);
        ge_transform.bone_cursor = (index + 1u) & 0x7Fu;
        break;
    }
    case 0x3Bu: {
        const std::uint32_t index = ge_transform.world_cursor & 0xFu;
        if (index < ge_transform.world.size())
            ge_transform.world[index] = decode_matrix_word(data);
        ge_transform.world_cursor = (index + 1u) & 0xFu;
        break;
    }
    case 0x3Du: {
        const std::uint32_t index = ge_transform.view_cursor & 0xFu;
        if (index < ge_transform.view.size())
            ge_transform.view[index] = decode_matrix_word(data);
        ge_transform.view_cursor = (index + 1u) & 0xFu;
        break;
    }
    case 0x3Fu: {
        const std::uint32_t index = ge_transform.projection_cursor & 0xFu;
        ge_transform.projection[index] = decode_matrix_word(data);
        ge_transform.projection_cursor = (index + 1u) & 0xFu;
        break;
    }
    case 0x41u: {
        const std::uint32_t index = ge_transform.texture_cursor & 0xFu;
        if (index < ge_transform.texture.size())
            ge_transform.texture[index] = decode_matrix_word(data);
        ge_transform.texture_cursor = (index + 1u) & 0xFu;
        break;
    }
    default:
        break;
    }
}

// Four command words, shifted left 8, are four matrix floats. PPSSPP
// GEState::FastLoadBoneMatrix does that with one SSE shift per row
// (GPU/GPUState.cpp). The scalar store still runs when the cursor has fewer
// than four slots before the array ends or before the cursor mask wraps.
bool store_four_matrix_words(std::uint32_t command, const std::uint32_t words[4]) noexcept {
#if defined(__SSE2__)
    std::uint32_t *cursor = nullptr;
    float *dest = nullptr;
    std::uint32_t mask = 0u;
    std::size_t size = 0u;
    switch (command) {
    case 0x2Bu:
        cursor = &ge_transform.bone_cursor;
        dest = ge_transform.bones.data();
        mask = 0x7Fu;
        size = ge_transform.bones.size();
        break;
    case 0x3Bu:
        cursor = &ge_transform.world_cursor;
        dest = ge_transform.world.data();
        mask = 0xFu;
        size = ge_transform.world.size();
        break;
    case 0x3Du:
        cursor = &ge_transform.view_cursor;
        dest = ge_transform.view.data();
        mask = 0xFu;
        size = ge_transform.view.size();
        break;
    case 0x3Fu:
        cursor = &ge_transform.projection_cursor;
        dest = ge_transform.projection.data();
        mask = 0xFu;
        size = ge_transform.projection.size();
        break;
    case 0x41u:
        cursor = &ge_transform.texture_cursor;
        dest = ge_transform.texture.data();
        mask = 0xFu;
        size = ge_transform.texture.size();
        break;
    default:
        return false;
    }
    const std::uint32_t index = *cursor & mask;
    if (index + 4u > size || index + 3u > mask) return false;
    const __m128i shifted = _mm_slli_epi32(
        _mm_loadu_si128(reinterpret_cast<const __m128i *>(words)), 8);
    _mm_storeu_ps(dest + index, _mm_castsi128_ps(shifted));
    *cursor = (index + 4u) & mask;
    ge_commands[command] = words[3] & 0x00FFFFFFu;
    return true;
#else
    (void)command;
    (void)words;
    return false;
#endif
}

// Store one register and bump the same revisions step() would. An unchanged
// word is left as it is. The store run and step() both call this.
inline void remember_changed_register(std::uint32_t command, std::uint32_t data,
                                     std::uint64_t &draw_state_revision,
                                     std::uint64_t &pipeline_revision) noexcept {
    if (ge_commands[command] == data) return;
    ge_commands[command] = data;
    if (descriptor_command[command] != 0u && ++draw_state_revision == 0u)
        draw_state_revision = 1u;
    if (texture_command[command] != 0u || pixel_command[command] != 0u)
        ge_bump_material_revision();
    if (pipeline_command[command] != 0u) {
        if (++pipeline_revision == 0u) pipeline_revision = 1u;
        ge_set_pipeline_revision(pipeline_revision);
        ge_disarm_packed_repeat();
    } else if (command != 0x04u && repeat_neutral_command[command] == 0u &&
               texture_command[command] == 0u && pixel_command[command] == 0u) {
        ge_disarm_packed_repeat();
    }
}

// Texture and pixel words are about half of a distance-2 list, and they arrive
// as a straight run. FastRunLoop stays a small function so the command table
// stays in a register (commit d60bb27). Keeping one state pointer in a local
// was worth 10-15% on x86 in the IR interpreter (pull request #19128, commit
// c332d56). This run does only that store. A word that is not a store, including
// TEXFLUSH, a primitive, a call, and a matrix word, stops the run and the
// caller executes it. The 28-bit PC mask stays. An unchanged word still goes
// through remember_changed_register, which returns before the revision bumps.
[[gnu::noinline]] std::uint32_t walk_store_run(const std::uint8_t *words, std::uint32_t count,
                                              std::uint32_t &pc,
                                              std::uint64_t &draw_state_revision,
                                              std::uint64_t &pipeline_revision) noexcept {
    const std::uint8_t *store = span_store.data();
    std::uint32_t consumed = 0u;
    while (consumed < count) {
        std::uint32_t word = 0u;
        std::memcpy(&word, words + static_cast<std::size_t>(consumed) * 4u, sizeof word);
        const std::uint32_t command = word >> 24u;
        if (store[command] == 0u) break;
        const std::uint32_t data = word & 0x00FFFFFFu;
        pc = (pc + 4u) & 0x0FFFFFFFu;
        remember_changed_register(command, data, draw_state_revision, pipeline_revision);
        ++consumed;
    }
    return consumed;
}


}  // namespace

void execute_ge_list_rendered(psprecomp::GuestMemory &memory, std::uint32_t list_address) {
    ge_finish_seen = false;
    ge_finish_arg = 0u;
    if (list_address == 0u) return;
    // A new list must not reuse the previous list's descriptor just because
    // both happened to see the same number of state changes.
    static std::uint64_t draw_state_revision = 1u;
    static std::uint64_t pipeline_revision = 1u;
    if (++draw_state_revision == 0u) draw_state_revision = 1u;
    if (++pipeline_revision == 0u) pipeline_revision = 1u;
    ge_set_pipeline_revision(pipeline_revision);

    std::array<std::uint32_t, 16> call_stack{};
    std::uint32_t call_depth = 0u;
    std::uint32_t pc = list_address;
    std::uint32_t executed = 0u;
    ge_disarm_packed_repeat();
    // The game thread can upload a palette between lists. The next draw hashes it.
    ge_invalidate_clut_checksum();

    // 0 keeps walking a straight run, 1 ends the list, 2 follows a jump or call.
    constexpr int kWalk = 0, kStop = 1, kBranch = 2;
    auto take_call = [&](std::uint32_t data) -> int {
        const std::uint32_t target = relative_address(data);
        // PPSSPP DoExecuteCall reads the first word, and only then a bone body
        // (GPUCommon.cpp). A call that does not start with bone data skips that
        // read. The body still has to be twelve bone words and a return. PPSSPP
        // also accepts a body whose middle words were not checked; a mixed body
        // stays a real call.
        std::uint32_t first = 0u;
        if (const std::uint8_t *head = memory.raw_pointer(target, sizeof first)) {
            std::memcpy(&first, head, sizeof first);
            if ((first >> 24u) == 0x2Bu) {
                std::uint32_t body[13]{};
                if (const std::uint8_t *raw = memory.raw_pointer(target, sizeof body)) {
                    std::memcpy(body, raw, sizeof body);
                    bool bone_run = (body[12] >> 24u) == 0x0Bu;
                    for (std::uint32_t i = 0u; bone_run && i < 12u; ++i)
                        bone_run = (body[i] >> 24u) == 0x2Bu;
                    if (bone_run) {
                        std::uint32_t n = 0u;
                        while (n < 12u) {
                            if (n + 4u <= 12u && store_four_matrix_words(0x2Bu, body + n)) {
                                n += 4u;
                                continue;
                            }
                            const std::uint32_t bone_data = body[n] & 0x00FFFFFFu;
                            ge_commands[0x2Bu] = bone_data;
                            store_matrix_data(0x2Bu, bone_data);
                            ++n;
                        }
                        ge_commands[0x0Bu] = body[12] & 0x00FFFFFFu;
                        return kWalk;
                    }
                }
            }
        }
        if (call_depth < call_stack.size()) call_stack[call_depth++] = pc;
        pc = target;
        return kBranch;
    };
    auto take_prim = [&](std::uint32_t op_pc, std::uint32_t data) -> int {
        lcs_set_ge_command(op_pc);
        std::uint32_t next_vertex = ge_vertex_address;
        if (ge_try_packed_repeat(memory, ge_commands, ge_transform, ge_vertex_address, data,
                                 draw_state_revision, next_vertex)) {
            ge_vertex_address = next_vertex;
            return kWalk;
        }
        GeRenderStats stats{};
        // The string lives on this miss path. A std::string in the list function
        // kept a destructor on every return, which is the "object out of scope"
        // codegen note (commit ca94de8d4b).
        std::string primitive_error;
        if (!render_ge_primitive(memory, ge_commands, ge_transform, ge_vertex_address,
                                 ge_index_address, data, stats, primitive_error, 1u,
                                 draw_state_revision))
            return kStop;
        ge_vertex_address = stats.next_vertex_address;
        ge_index_address = stats.next_index_address;
        return kWalk;
    };
    auto step = [&](std::uint32_t word) -> int {
        const std::uint32_t op_pc = pc;
        pc = (pc + 4u) & 0x0FFFFFFFu;
        const std::uint32_t command = word >> 24u;
        const std::uint32_t data = word & 0x00FFFFFFu;
        // World, view, projection, and texture loads are the commands between
        // two buildings. Keep them in this function so each one is a store.
        if (command >= 0x2Au && command <= 0x41u) {
            if (command == 0x3Au) {
                ge_transform.world_cursor = data & 0xFu;
            } else if (command == 0x3Bu || command == 0x3Du || command == 0x3Fu ||
                       command == 0x41u || command == 0x2Bu) {
                store_matrix_data(command, data);
            } else if (command == 0x3Cu) {
                ge_transform.view_cursor = data & 0xFu;
            } else if (command == 0x3Eu) {
                ge_transform.projection_cursor = data & 0xFu;
            } else if (command == 0x40u) {
                ge_transform.texture_cursor = data & 0xFu;
            } else if (command <= 0x3Fu) {
                update_ge_transform_state(ge_transform, command, data);
            }
        }
        remember_changed_register(command, data, draw_state_revision, pipeline_revision);

        switch (command) {
        case 0x00u:
            break;
        case 0x01u:
            ge_vertex_address = relative_address(data);
            break;
        case 0x02u:
            ge_index_address = relative_address(data);
            break;
        case 0x10u:
            ge_base_register = data;
            break;
        case 0x13u:
            ge_offset_address = data << 8u;
            break;
        case 0x08u:
            pc = relative_address(data);
            return kBranch;
        case 0x09u:
            break;
        case 0x0Au:
            return take_call(data);
        case 0x0Bu:
            if (call_depth != 0u) {
                pc = call_stack[--call_depth];
                return kBranch;
            }
            break;
        case 0x0Fu:
            ge_finish_seen = true;
            ge_finish_arg = data;
            break;
        case 0xCBu:
            // TEXFLUSH drops the GE texture cache, including the palette.
            ge_invalidate_clut_checksum();
            break;
        case 0x0Cu:
            return kStop;
        case 0x04u:
            return take_prim(op_pc, data);
        default:
            break;
        }
        return kWalk;
    };

    // A straight run of the list is contiguous in host memory. Read it as words
    // until a jump, a call, or a return, instead of re-checking every address.
    constexpr std::size_t kSpanBytes = 4096u;
    while (executed < kMaxCommands) {
        const std::uint8_t *span = nullptr;
        std::size_t words = 1u;
        if ((pc & 3u) == 0u) {
            if (const std::uint8_t *wide = memory.raw_pointer(pc, kSpanBytes)) {
                span = wide;
                words = kSpanBytes / 4u;
            } else {
                span = memory.raw_pointer(pc, 4u);
            }
        }
        if (span == nullptr) {
            std::uint32_t word = 0u;
            if (!read_command(memory, pc, word)) break;
            ++executed;
            const int action = step(word);
            if (action == kStop) {
                flush_ge_deferred_rasterization(memory);
                return;
            }
            continue;
        }
        for (std::size_t i = 0u; i < words && executed < kMaxCommands; ++i) {
            std::uint32_t word = 0u;
            std::memcpy(&word, span + i * 4u, sizeof word);
            const std::uint32_t command = word >> 24u;
            const std::uint32_t data = word & 0x00FFFFFFu;
            // One span_store load, then the same store. FastRunLoop does one
            // cmdInfo lookup per word (commit d60bb27). Flow, matrix, and
            // primitive opcodes stay in the switch. A span that is not
            // contiguous stays on step(). The 28-bit PC mask stays.
            if (span_store[command] != 0u) {
                const std::uint32_t room = kMaxCommands - executed;
                const std::uint32_t available = room < static_cast<std::uint32_t>(words - i)
                    ? room : static_cast<std::uint32_t>(words - i);
                const std::uint32_t consumed = walk_store_run(
                    span + i * 4u, available, pc, draw_state_revision, pipeline_revision);
                // A zero count means the word was not a store after all. Fall
                // through and execute it once. Do not skip it.
                if (consumed != 0u) {
                    executed += consumed;
                    i += static_cast<std::size_t>(consumed) - 1u;
                    continue;
                }
            }
            int action = kWalk;
            switch (command) {
            case 0x01u:
            case 0x02u:
            case 0x08u:
            case 0x0Au:
            case 0x0Bu:
            case 0x0Cu:
            case 0x0Fu:
            case 0x10u:
            case 0x13u:
            case 0xCBu:
            case 0x04u: {
                const std::uint32_t op_pc = pc;
                pc = (pc + 4u) & 0x0FFFFFFFu;
                remember_changed_register(command, data, draw_state_revision, pipeline_revision);
                ++executed;
                switch (command) {
                case 0x01u: ge_vertex_address = relative_address(data); break;
                case 0x02u: ge_index_address = relative_address(data); break;
                case 0x10u: ge_base_register = data; break;
                case 0x13u: ge_offset_address = data << 8u; break;
                case 0x08u:
                    pc = relative_address(data);
                    action = kBranch;
                    break;
                case 0x0Au: action = take_call(data); break;
                case 0x0Bu:
                    if (call_depth != 0u) {
                        pc = call_stack[--call_depth];
                        action = kBranch;
                    }
                    break;
                case 0x0Fu:
                    ge_finish_seen = true;
                    ge_finish_arg = data;
                    break;
                case 0xCBu: ge_invalidate_clut_checksum(); break;
                case 0x0Cu: action = kStop; break;
                case 0x04u:
                    action = take_prim(op_pc, data);
                    // PPSSPP Execute_Prim keeps submitting while the next word is
                    // also PRIM (GPUCommonHW.cpp). Each one still uses this draw
                    // path. A different opcode stays for the outer loop, and the
                    // draws are not joined: the extend path reuses the first
                    // draw's clip flags. A span that is not contiguous uses step().
                    while (action == kWalk && i + 1u < words && executed < kMaxCommands) {
                        std::uint32_t next = 0u;
                        std::memcpy(&next, span + (i + 1u) * 4u, sizeof next);
                        if ((next >> 24u) != 0x04u) break;
                        const std::uint32_t next_data = next & 0x00FFFFFFu;
                        ++i;
                        const std::uint32_t next_pc = pc;
                        pc = (pc + 4u) & 0x0FFFFFFFu;
                        remember_changed_register(0x04u, next_data, draw_state_revision,
                                                  pipeline_revision);
                        ++executed;
                        action = take_prim(next_pc, next_data);
                    }
                    break;
                default: break;
                }
                break;
            }
            default:
                // World, view, projection, texture, bone, and morph words.
                // The same stores as step(). The data run below still stops
                // at the first word that is not this cursor's data opcode.
                if (command >= 0x2Au && command <= 0x41u) {
                    pc = (pc + 4u) & 0x0FFFFFFFu;
                    if (command == 0x3Au) {
                        ge_transform.world_cursor = data & 0xFu;
                    } else if (command == 0x3Bu || command == 0x3Du || command == 0x3Fu ||
                               command == 0x41u || command == 0x2Bu) {
                        store_matrix_data(command, data);
                    } else if (command == 0x3Cu) {
                        ge_transform.view_cursor = data & 0xFu;
                    } else if (command == 0x3Eu) {
                        ge_transform.projection_cursor = data & 0xFu;
                    } else if (command == 0x40u) {
                        ge_transform.texture_cursor = data & 0xFu;
                    } else if (command <= 0x3Fu) {
                        update_ge_transform_state(ge_transform, command, data);
                    }
                    remember_changed_register(command, data, draw_state_revision, pipeline_revision);
                    ++executed;
                    break;
                }
                ++executed;
                action = step(word);
                break;
            }
            if (action == kStop) {
                flush_ge_deferred_rasterization(memory);
                return;
            }
            if (action == kBranch) break;
            // PPSSPP consumes the matrix-data run in the cursor command and
            // skips those words in the interpreter. A word of any other opcode
            // stays for the next iteration. A cursor handled above starts the
            // run. A span that is not contiguous still starts it from step().
            if (command < 0x2Au || command > 0x40u) continue;
            const std::uint32_t data_command = matrix_data_command(word >> 24u);
            if (data_command == 0u) continue;
            while (i + 1u < words && executed < kMaxCommands) {
                if (i + 4u < words && executed + 4u <= kMaxCommands) {
                    std::uint32_t quad[4]{};
                    std::memcpy(quad, span + (i + 1u) * 4u, sizeof quad);
                    if ((quad[0] >> 24u) == data_command && (quad[1] >> 24u) == data_command &&
                        (quad[2] >> 24u) == data_command && (quad[3] >> 24u) == data_command &&
                        store_four_matrix_words(data_command, quad)) {
                        pc = (pc + 16u) & 0x0FFFFFFFu;
                        executed += 4u;
                        i += 4u;
                        continue;
                    }
                }
                std::uint32_t next = 0u;
                std::memcpy(&next, span + (i + 1u) * 4u, sizeof next);
                if ((next >> 24u) != data_command) break;
                const std::uint32_t data = next & 0x00FFFFFFu;
                ge_commands[data_command] = data;
                store_matrix_data(data_command, data);
                pc = (pc + 4u) & 0x0FFFFFFFu;
                ++executed;
                ++i;
            }
        }
    }
    flush_ge_deferred_rasterization(memory);
}

GeListPrescan prescan_ge_list(psprecomp::GuestMemory &memory, std::uint32_t list_address) {
    GeListPrescan result{};
    if (list_address == 0u) return result;
    std::uint32_t base_register = ge_base_register;
    std::uint32_t offset_address = ge_offset_address;
    const auto relative = [&](std::uint32_t data24) {
        const std::uint32_t extended = ((base_register & 0x000F0000u) << 8u) | (data24 & 0x00FFFFFFu);
        return (offset_address + extended) & 0x0FFFFFFFu;
    };
    std::array<std::uint32_t, 16> call_stack{};
    std::uint32_t call_depth = 0u;
    std::uint32_t pc = list_address;
    for (std::uint32_t executed = 0u; executed < kMaxCommands; ++executed) {
        std::uint32_t word;
        if (!read_command(memory, pc, word)) break;
        pc = (pc + 4u) & 0x0FFFFFFFu;
        const std::uint32_t command = word >> 24u;
        const std::uint32_t data = word & 0x00FFFFFFu;
        switch (command) {
        case 0x10u: base_register = data; break;
        case 0x13u: offset_address = data << 8u; break;
        case 0x08u: pc = relative(data); break;
        case 0x0Au:
            if (call_depth < call_stack.size()) call_stack[call_depth++] = pc;
            pc = relative(data);
            break;
        case 0x0Bu:
            if (call_depth != 0u) pc = call_stack[--call_depth];
            break;
        case 0x0Fu:
            result.finished = true;
            result.finish_argument = data;
            break;
        case 0x0Cu:
            return result;
        default:
            break;
        }
    }
    return result;
}

bool rendered_list_finished() { return ge_finish_seen; }
std::uint32_t rendered_finish_argument() { return ge_finish_arg; }

std::uint32_t rendered_render_target() {
    return 0x04000000u | (ge_commands[0x9Cu] & 0x001FFFF0u);
}

std::uint32_t rendered_render_stride() { return ge_commands[0x9Du] & 0x7FCu; }

float rendered_world_element(std::uint32_t index) {
    return index < ge_transform.world.size() ? ge_transform.world[index] : 0.0f;
}

float rendered_bone_element(std::uint32_t index) {
    return index < ge_transform.bones.size() ? ge_transform.bones[index] : 0.0f;
}

float rendered_view_element(std::uint32_t index) {
    return index < ge_transform.view.size() ? ge_transform.view[index] : 0.0f;
}

float rendered_projection_element(std::uint32_t index) {
    return index < ge_transform.projection.size() ? ge_transform.projection[index] : 0.0f;
}

float rendered_texture_matrix_element(std::uint32_t index) {
    return index < ge_transform.texture.size() ? ge_transform.texture[index] : 0.0f;
}

float rendered_morph_weight(std::uint32_t index) {
    return index < ge_transform.morph_weights.size() ? ge_transform.morph_weights[index] : 0.0f;
}

std::uint32_t rendered_vertex_address() { return ge_vertex_address; }

const std::array<std::uint32_t, 256> &rendered_ge_commands() noexcept { return ge_commands; }

}
