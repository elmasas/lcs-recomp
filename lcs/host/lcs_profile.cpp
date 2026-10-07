// LCS (GTA: Liberty City Stories) kernel HLE.

#include "lcs_profile.hpp"
#include "display_window.hpp"
#include "lcs_ge_exec.hpp"
#include "ge_renderer.hpp"
#include "lcs_sas.hpp"
#include "ge_gpu_backend.hpp"
#include "lcs_media_decoder.hpp"
#include "lcs_audio_output.hpp"
#include "lcs_fps_overlay.hpp"
#include "lcs_frame_limit.hpp"
#include "lcs_lang.hpp"
#include "lcs_menu.hpp"
#include "lcs_stress_test.hpp"

#include "psprecomp/common.hpp"

#include <algorithm>
#include <array>
#include <atomic>
#include <bit>
#include <chrono>
#include <condition_variable>
#include <deque>
#include <functional>
#include <mutex>
#include <thread>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <map>
#include <span>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace lcs {
namespace {

enum class ThreadState {
    Created,
    Ready,
    Running,
    Sleeping,
    Delayed,
    Completed,
    IoDeferred,
};

struct ThreadRecord {
    std::string name;
    std::uint32_t entry{};
    std::uint32_t priority{};
    std::uint32_t stack_size{};
    std::uint32_t attributes{};
    std::uint32_t stack_top{};
    std::uint32_t stack_bottom{};
    std::uint32_t kernel_context{};
    ThreadState state{ThreadState::Created};
    std::uint32_t exit_status{};
    bool externally_suspended{};
    psprecomp::AllegrexContext suspended_context{};
    std::uint32_t wakeup_count{};
    std::uint64_t delay_until_us{};
    std::uint64_t delay_sequence{};
};

struct ThreadContinuation {
    std::int32_t uid{};
    psprecomp::AllegrexContext context{};
    std::uint64_t ready_sequence{};
};

struct FreeThreadStack {
    std::uint32_t bottom{};
    std::uint32_t top{};
};

struct ThreadTable {
    std::int32_t next_uid{1};
    std::int32_t current_uid{0};

    std::uint32_t next_stack_top{0x0A000000u};
    std::uint64_t next_ready_sequence{1u};
    std::uint64_t next_delay_sequence{1u};
    std::unordered_map<std::int32_t, ThreadRecord> threads;
    std::vector<ThreadContinuation> continuations;
    std::unordered_map<std::int32_t, std::vector<ThreadContinuation>> thread_end_waiters;
    std::vector<FreeThreadStack> free_stacks;
};

struct PartitionBlock {
    std::string name;
    std::uint32_t address{};
    std::uint32_t size{};
};

struct PartitionTable {
    std::int32_t next_uid{0x100};
    std::uint32_t next_address{};
    std::unordered_map<std::int32_t, PartitionBlock> blocks;
};

struct CallbackRecord {
    std::string name;
    std::uint32_t function{};
    std::uint32_t common{};
    std::int32_t owner_uid{};
    std::uint32_t notify_count{};
    std::uint32_t notify_argument{};
};

struct CallbackTable {
    std::int32_t next_uid{0x200};
    std::unordered_map<std::int32_t, CallbackRecord> callbacks;
};

struct SemaphoreWaiter {
    std::int32_t uid{};
    psprecomp::AllegrexContext context{};
    std::int32_t requested{};
};

struct SemaphoreRecord {
    std::string name;
    std::int32_t count{};
    std::int32_t maximum{};
    std::vector<SemaphoreWaiter> waiters;
};

struct SemaphoreTable {
    std::int32_t next_uid{0x300};
    std::unordered_map<std::int32_t, SemaphoreRecord> semaphores;
};

struct EventFlagWaiter {
    std::int32_t uid{};
    psprecomp::AllegrexContext context{};
    std::uint32_t requested{};
    std::uint32_t mode{};
    std::uint32_t output_address{};
};

struct EventFlagRecord {
    std::string name;
    std::uint32_t attributes{};
    std::uint32_t initial_pattern{};
    std::uint32_t current_pattern{};
    std::vector<EventFlagWaiter> waiters;
};

struct EventFlagTable {
    std::int32_t next_uid{0x600};
    std::unordered_map<std::int32_t, EventFlagRecord> flags;
};

struct FixedPoolRecord {
    std::string name;
    std::uint32_t address{};
    std::uint32_t block_size{};
    std::uint32_t block_count{};
    std::vector<bool> allocated;
};

struct FixedPoolTable {
    std::int32_t next_uid{0x500};
    std::unordered_map<std::int32_t, FixedPoolRecord> pools;
};

enum class AsyncReturnKind {
    UserCallback,
    MpegRingbuffer,
    GeFinishThenDelay,
    SubInterrupt,
};

struct AsyncReturnFrame {
    psprecomp::AllegrexContext resume{};
    std::int32_t callback_uid{};
    AsyncReturnKind kind{AsyncReturnKind::UserCallback};
    std::uint32_t ring{};
    std::uint32_t delay_us{};
    bool vblank_wait{};
};

struct PendingGeCallback {
    std::int32_t callback_uid{};
    std::uint32_t function{};
    std::uint32_t finish_argument{};
    std::uint32_t user_argument{};
};

struct DirectoryHandle {
    std::vector<std::filesystem::directory_entry> entries;
    std::size_t index{};
};

// ELF directory names are uppercase.
std::string disc_directory_name(const std::filesystem::path &path) {
    std::string name = path.filename().string();
    for (char &ch : name) {
        if (ch >= 'a' && ch <= 'z') ch = static_cast<char>(ch - 'a' + 'A');
    }
    return name;
}

struct RawSectorFile {
    std::uint64_t base{};
    std::uint64_t size{};
};

struct VirtualDiscFile {
    std::filesystem::path native_path;
    std::uint32_t start_sector{};
    std::uint64_t size{};
};

struct VirtualDiscHandle {
    std::uint64_t base_offset{};
    std::uint64_t length{};
    std::uint64_t position{};
};

struct FileTable {
    std::int32_t next_fd{3};
    std::unordered_map<std::int32_t, std::fstream> files;
    std::unordered_map<std::int32_t, DirectoryHandle> directories;
    std::unordered_map<std::int32_t, RawSectorFile> raw_sector_files;
    std::uint32_t next_virtual_sector{32u};
    std::unordered_map<std::string, VirtualDiscFile> virtual_files_by_path;
    std::map<std::uint32_t, std::string> virtual_path_by_sector;
    std::unordered_map<std::int32_t, VirtualDiscHandle> virtual_disc_handles;
};

ThreadTable thread_table;
PartitionTable partition_table;
CallbackTable callback_table;
SemaphoreTable semaphore_table;
EventFlagTable event_flag_table;
FixedPoolTable fixed_pool_table;
FileTable file_table;

const VirtualDiscFile *register_virtual_disc_file(const std::filesystem::path &path) {
    std::error_code error;
    if (!std::filesystem::is_regular_file(path, error) || error) return nullptr;

    std::filesystem::path normalized = std::filesystem::weakly_canonical(path, error);
    if (error) normalized = path.lexically_normal();
    const std::string key = normalized.generic_string();

    if (const auto found = file_table.virtual_files_by_path.find(key);
        found != file_table.virtual_files_by_path.end()) {
        return &found->second;
    }

    const std::uint64_t size = std::filesystem::file_size(path, error);
    if (error) return nullptr;
    const std::uint64_t sector_count = std::max<std::uint64_t>(1u, (size + 2047u) / 2048u);
    if (static_cast<std::uint64_t>(file_table.next_virtual_sector) + sector_count > 0xFFFFFFFFull) {
        return nullptr;
    }

    VirtualDiscFile item{};
    item.native_path = path;
    item.start_sector = file_table.next_virtual_sector;
    item.size = size;
    file_table.next_virtual_sector += static_cast<std::uint32_t>(sector_count);
    const auto [inserted, ok] = file_table.virtual_files_by_path.emplace(key, std::move(item));
    if (!ok) return &inserted->second;
    file_table.virtual_path_by_sector.emplace(inserted->second.start_sector, key);
    return &inserted->second;
}

std::size_t read_virtual_disc(VirtualDiscHandle &handle, std::span<std::uint8_t> output) {
    if (handle.position >= handle.length || output.empty()) return 0u;
    const std::uint64_t available = handle.length - handle.position;
    const std::size_t requested =
        static_cast<std::size_t>(std::min<std::uint64_t>(available, output.size()));
    std::fill(output.begin(), output.begin() + requested, 0u);

    std::size_t written = 0u;
    while (written < requested) {
        const std::uint64_t absolute = handle.base_offset + handle.position + written;
        const std::uint64_t sector64 = absolute / 2048u;
        if (sector64 > 0xFFFFFFFFull) break;
        const auto next =
            file_table.virtual_path_by_sector.upper_bound(static_cast<std::uint32_t>(sector64));

        const VirtualDiscFile *file = nullptr;
        if (next != file_table.virtual_path_by_sector.begin()) {
            const auto previous = std::prev(next);
            const auto found = file_table.virtual_files_by_path.find(previous->second);
            if (found != file_table.virtual_files_by_path.end()) {
                const std::uint64_t file_start =
                    static_cast<std::uint64_t>(found->second.start_sector) * 2048u;
                if (absolute >= file_start && absolute < file_start + found->second.size) {
                    file = &found->second;
                }
            }
        }

        if (file != nullptr) {
            const std::uint64_t file_start = static_cast<std::uint64_t>(file->start_sector) * 2048u;
            const std::uint64_t file_offset = absolute - file_start;
            const std::size_t chunk = static_cast<std::size_t>(
                std::min<std::uint64_t>(requested - written, file->size - file_offset));
            std::ifstream input(file->native_path, std::ios::binary);
            if (!input) break;
            input.seekg(static_cast<std::streamoff>(file_offset), std::ios::beg);
            input.read(reinterpret_cast<char *>(output.data() + written),
                       static_cast<std::streamsize>(chunk));
            const auto actual = static_cast<std::size_t>(input.gcount());
            written += actual;
            if (actual != chunk) break;
            continue;
        }

        std::uint64_t zero_end = handle.base_offset + handle.length;
        if (next != file_table.virtual_path_by_sector.end())
            zero_end = std::min(zero_end, static_cast<std::uint64_t>(next->first) * 2048u);
        if (zero_end <= absolute) zero_end = absolute + 1u;
        const std::size_t filled = static_cast<std::size_t>(
            std::min<std::uint64_t>(requested - written, zero_end - absolute));
        written += filled;
    }

    handle.position += written;
    return written;
}

const VirtualDiscFile *find_virtual_disc_file(std::uint32_t start_sector) {
    const auto sector = file_table.virtual_path_by_sector.find(start_sector);
    if (sector == file_table.virtual_path_by_sector.end()) return nullptr;
    const auto file = file_table.virtual_files_by_path.find(sector->second);
    if (file == file_table.virtual_files_by_path.end()) return nullptr;
    return &file->second;
}

std::unordered_map<std::int32_t, bool> loaded_modules;
std::int32_t next_module_uid{0x400};
bool volatile_memory_locked{};
bool umd_activated{};
bool umd_callback_notified{};

void notify_umd_callback() {
    if (!umd_activated || umd_callback_notified) return;
    for (auto &[id, callback] : callback_table.callbacks) {
        if (callback.name != "UMDCallback") continue;
        callback.notify_count = 1u;
        callback.notify_argument = 0x6u;  // PSP_UMD_PRESENT | PSP_UMD_READY
        umd_callback_notified = true;
    }
}
std::uint32_t general_purpose_io{};
std::uint32_t memory_stick_fat_state = 1u;
struct AudioChannelState {
    bool reserved{};
    std::uint32_t sample_count{};
    std::uint32_t format{};
    std::uint64_t busy_until_us{};
    std::uint64_t queue_anchor_us{};
    std::uint64_t queued_frames{};
    bool queue_active{};
};

std::array<AudioChannelState, 8> audio_channels{};

struct MpegStreamState {
    std::uint32_t type{};
    std::uint32_t number{};
};

struct ParsedPsmfHeader {
    std::uint32_t raw_version{};
    std::uint32_t stream_offset{};
    std::uint32_t stream_size{};
    std::uint64_t first_timestamp{};
    std::uint64_t last_timestamp{};
    std::uint32_t width{};
    std::uint32_t height{};
};

struct MpegContextState {
    std::uint32_t ring_address{};
    std::unordered_map<std::uint32_t, MpegStreamState> streams;
    std::array<bool, 2> avc_es_buffers{};
    std::uint32_t video_au_count{};
    std::uint32_t audio_au_count{};
    ParsedPsmfHeader header{};
    bool analyzed{};
    std::filesystem::path source_path;
    VideoStreamDecoder video;
    bool video_eof{};
    PmfAudioDecoder audio;
    std::filesystem::path audio_source;
};

std::uint32_t read_be32(std::span<const std::uint8_t> bytes, std::size_t offset) {
    return (static_cast<std::uint32_t>(bytes[offset]) << 24u) |
        (static_cast<std::uint32_t>(bytes[offset + 1u]) << 16u) |
        (static_cast<std::uint32_t>(bytes[offset + 2u]) << 8u) |
        static_cast<std::uint32_t>(bytes[offset + 3u]);
}

std::uint64_t read_psmf_timestamp(std::span<const std::uint8_t> bytes, std::size_t offset) {
    return static_cast<std::uint64_t>(bytes[offset + 5u]) |
        (static_cast<std::uint64_t>(bytes[offset + 4u]) << 8u) |
        (static_cast<std::uint64_t>(bytes[offset + 3u]) << 16u) |
        (static_cast<std::uint64_t>(bytes[offset + 2u]) << 24u) |
        (static_cast<std::uint64_t>(bytes[offset + 1u]) << 32u) |
        (static_cast<std::uint64_t>(bytes[offset]) << 36u);
}

bool parse_psmf_header(std::span<const std::uint8_t> bytes, ParsedPsmfHeader &header) {
    if (bytes.size() < 2048u || bytes[0] != 'P' || bytes[1] != 'S' ||
        bytes[2] != 'M' || bytes[3] != 'F') return false;
    header.raw_version = static_cast<std::uint32_t>(bytes[4]) |
        (static_cast<std::uint32_t>(bytes[5]) << 8u) |
        (static_cast<std::uint32_t>(bytes[6]) << 16u) |
        (static_cast<std::uint32_t>(bytes[7]) << 24u);
    const bool known_version = header.raw_version == 0x32313030u ||
        header.raw_version == 0x33313030u || header.raw_version == 0x34313030u ||
        header.raw_version == 0x35313030u;
    if (!known_version) return false;
    header.stream_offset = read_be32(bytes, 8u);
    header.stream_size = read_be32(bytes, 12u);
    header.first_timestamp = read_psmf_timestamp(bytes, 0x54u);
    header.last_timestamp = read_psmf_timestamp(bytes, 0x5Au);
    header.width = static_cast<std::uint32_t>(bytes[142u]) * 16u;
    header.height = static_cast<std::uint32_t>(bytes[143u]) * 16u;
    return true;
}

void write_mpeg_timestamp(psprecomp::GuestMemory &memory, std::uint32_t address,
                          std::uint64_t value) {
    memory.store32(address, static_cast<std::uint32_t>(value >> 32u));
    memory.store32(address + 4u, static_cast<std::uint32_t>(value));
}

std::filesystem::path identify_pmf_source(const ParsedPsmfHeader &parsed) {
    const std::uint64_t expected_size =
        static_cast<std::uint64_t>(parsed.stream_offset) + parsed.stream_size;
    for (const auto &[key, file] : file_table.virtual_files_by_path) {
        if (file.size != expected_size) continue;
        std::string extension = file.native_path.extension().string();
        std::transform(extension.begin(), extension.end(), extension.begin(),
                       [](unsigned char ch) { return static_cast<char>(std::toupper(ch)); });
        if (extension != ".PMF") continue;
        std::array<std::uint8_t, 2048> candidate{};
        std::ifstream input(file.native_path, std::ios::binary);
        if (!input) continue;
        input.read(reinterpret_cast<char *>(candidate.data()),
                   static_cast<std::streamsize>(candidate.size()));
        ParsedPsmfHeader candidate_header{};
        if (!parse_psmf_header(candidate, candidate_header)) continue;
        if (candidate_header.stream_offset == parsed.stream_offset &&
            candidate_header.stream_size == parsed.stream_size &&
            candidate_header.width == parsed.width &&
            candidate_header.height == parsed.height) {
            return file.native_path;
        }
    }
    return {};
}

std::filesystem::path find_pmf_on_disc(const std::filesystem::path &root,
                                       const ParsedPsmfHeader &parsed) {
    const std::uint64_t expected_size =
        static_cast<std::uint64_t>(parsed.stream_offset) + parsed.stream_size;
    std::error_code error;
    if (root.empty() || !std::filesystem::is_directory(root, error)) return {};
    for (std::filesystem::recursive_directory_iterator it(root, error), end; it != end;
         it.increment(error)) {
        if (error) break;
        if (!it->is_regular_file(error)) continue;
        std::string extension = it->path().extension().string();
        std::transform(extension.begin(), extension.end(), extension.begin(),
                       [](unsigned char ch) { return static_cast<char>(std::toupper(ch)); });
        if (extension != ".PMF") continue;
        if (std::filesystem::file_size(it->path(), error) != expected_size || error) continue;
        std::array<std::uint8_t, 2048> candidate{};
        std::ifstream input(it->path(), std::ios::binary);
        if (!input) continue;
        input.read(reinterpret_cast<char *>(candidate.data()),
                   static_cast<std::streamsize>(candidate.size()));
        ParsedPsmfHeader candidate_header{};
        if (!parse_psmf_header(candidate, candidate_header)) continue;
        if (candidate_header.stream_offset == parsed.stream_offset &&
            candidate_header.stream_size == parsed.stream_size) {
            return it->path();
        }
    }
    return {};
}

bool open_video_decoder(MpegContextState &state) {
    if (state.video.is_open()) return true;
    if (state.source_path.empty() || state.header.width == 0u || state.header.height == 0u)
        return false;
    if (!state.video.open(state.source_path)) return false;
    state.video_eof = false;
    return true;
}

bool read_video_frame(MpegContextState &state, std::span<std::uint8_t> frame) {
    if (!open_video_decoder(state)) return false;
    if (state.video.read(frame) < frame.size()) {
        state.video_eof = true;
        return false;
    }
    return true;
}

std::uint32_t mpeg_au_limit(const MpegContextState &state) {
    if (state.analyzed && state.header.last_timestamp > state.header.first_timestamp) {
        return static_cast<std::uint32_t>(
            (state.header.last_timestamp - state.header.first_timestamp) / 3003u) + 1u;
    }
    return 0xFFFFFFFFu;
}

std::unordered_map<std::uint32_t, MpegContextState> mpeg_contexts;
std::uint32_t next_mpeg_stream_id{1u};

struct ParsedAtracHeader {
    std::uint16_t format_tag{};
    std::uint16_t channels{};
    std::uint32_t sample_rate{};
    std::uint32_t average_bytes_per_second{};
    std::uint16_t block_align{};
    std::uint16_t bits_per_sample{};
    std::uint32_t data_offset{};
    std::uint32_t data_size{};
    std::uint32_t file_size{};
    std::uint32_t total_samples{};
    std::int32_t loop_start{-1};
    std::int32_t loop_end{-1};
    bool atrac3plus{};
};

struct AtracContextState {
    bool allocated{};
    ParsedAtracHeader header{};
    std::uint32_t buffer_address{};
    std::uint32_t initial_read_size{};
    std::uint32_t buffer_size{};
    std::uint32_t buffered_encoded_bytes{};
    std::uint32_t next_file_offset{};
    std::uint32_t write_offset{};
    std::uint32_t last_writable_bytes{};
    std::uint64_t sample_position{};
    std::int32_t loop_num{};
    std::uint32_t internal_error{};
    std::filesystem::path source_path;
    AudioStreamDecoder decoder;
    bool decoder_eof{};
};

std::array<AtracContextState, 6> atrac_contexts{};

std::uint16_t read_le16(std::span<const std::uint8_t> bytes, std::size_t offset) {
    return static_cast<std::uint16_t>(bytes[offset]) |
        static_cast<std::uint16_t>(static_cast<std::uint16_t>(bytes[offset + 1u]) << 8u);
}

std::uint32_t read_le32(std::span<const std::uint8_t> bytes, std::size_t offset) {
    return static_cast<std::uint32_t>(bytes[offset]) |
        (static_cast<std::uint32_t>(bytes[offset + 1u]) << 8u) |
        (static_cast<std::uint32_t>(bytes[offset + 2u]) << 16u) |
        (static_cast<std::uint32_t>(bytes[offset + 3u]) << 24u);
}

bool parse_atrac_header(std::span<const std::uint8_t> bytes, ParsedAtracHeader &header) {
    if (bytes.size() < 12u || std::memcmp(bytes.data(), "RIFF", 4u) != 0 ||
        std::memcmp(bytes.data() + 8u, "WAVE", 4u) != 0) return false;
    const std::uint64_t declared_file_size = static_cast<std::uint64_t>(read_le32(bytes, 4u)) + 8u;
    if (declared_file_size > 0xFFFFFFFFull) return false;
    header = ParsedAtracHeader{};
    header.file_size = static_cast<std::uint32_t>(declared_file_size);
    bool have_fmt = false;
    bool have_data = false;
    for (std::size_t offset = 12u; offset + 8u <= bytes.size();) {
        const std::uint32_t chunk_size = read_le32(bytes, offset + 4u);
        const std::size_t payload = offset + 8u;
        const std::uint64_t next64 = static_cast<std::uint64_t>(payload) + chunk_size + (chunk_size & 1u);
        if (next64 > bytes.size()) {
            if (std::memcmp(bytes.data() + offset, "data", 4u) == 0) {
                header.data_offset = static_cast<std::uint32_t>(payload);
                header.data_size = chunk_size;
                have_data = true;
            }
            break;
        }
        if (std::memcmp(bytes.data() + offset, "fmt ", 4u) == 0 && chunk_size >= 16u) {
            header.format_tag = read_le16(bytes, payload + 0u);
            header.channels = read_le16(bytes, payload + 2u);
            header.sample_rate = read_le32(bytes, payload + 4u);
            header.average_bytes_per_second = read_le32(bytes, payload + 8u);
            header.block_align = read_le16(bytes, payload + 12u);
            header.bits_per_sample = read_le16(bytes, payload + 14u);
            have_fmt = true;
        } else if (std::memcmp(bytes.data() + offset, "fact", 4u) == 0 && chunk_size >= 4u) {
            header.total_samples = read_le32(bytes, payload);
        } else if (std::memcmp(bytes.data() + offset, "smpl", 4u) == 0 && chunk_size >= 60u) {
            const std::uint32_t loop_count = read_le32(bytes, payload + 28u);
            if (loop_count != 0u) {
                header.loop_start = static_cast<std::int32_t>(read_le32(bytes, payload + 44u));
                header.loop_end = static_cast<std::int32_t>(read_le32(bytes, payload + 48u));
            }
        } else if (std::memcmp(bytes.data() + offset, "data", 4u) == 0) {
            header.data_offset = static_cast<std::uint32_t>(payload);
            header.data_size = chunk_size;
            have_data = true;
        }
        offset = static_cast<std::size_t>(next64);
    }
    if (!have_fmt || !have_data || header.channels == 0u || header.channels > 2u ||
        header.sample_rate == 0u || header.block_align == 0u) return false;
    header.atrac3plus = header.format_tag == 0xFFFEu;
    if (!header.atrac3plus && header.format_tag != 0x0270u) return false;
    if (header.total_samples == 0u) {
        const std::uint32_t samples_per_frame = header.atrac3plus ? 2048u : 1024u;
        header.total_samples = (header.data_size / header.block_align) * samples_per_frame;
    }
    return true;
}

bool is_atrac_extension(const std::filesystem::path &path) {
    std::string extension = path.extension().string();
    std::transform(extension.begin(), extension.end(), extension.begin(),
                   [](unsigned char ch) { return static_cast<char>(std::toupper(ch)); });
    return extension == ".AT3" || extension == ".AA3" || extension == ".OMA";
}

bool atrac_file_matches(const std::filesystem::path &path, std::span<const std::uint8_t> header) {
    const std::size_t compare_size = std::min<std::size_t>(header.size(), 256u);
    std::vector<std::uint8_t> candidate(compare_size);
    std::ifstream input(path, std::ios::binary);
    if (!input) return false;
    input.read(reinterpret_cast<char *>(candidate.data()),
               static_cast<std::streamsize>(candidate.size()));
    return input.gcount() == static_cast<std::streamsize>(candidate.size()) &&
        std::equal(candidate.begin(), candidate.end(), header.begin());
}

std::filesystem::path identify_atrac_source(const std::filesystem::path &disc_root,
                                            std::span<const std::uint8_t> header,
                                            const ParsedAtracHeader &parsed) {
    for (const auto &[key, file] : file_table.virtual_files_by_path) {
        if (file.size != parsed.file_size || !is_atrac_extension(file.native_path)) continue;
        if (atrac_file_matches(file.native_path, header)) return file.native_path;
    }
    std::error_code error;
    if (disc_root.empty() || !std::filesystem::is_directory(disc_root, error)) return {};
    for (std::filesystem::recursive_directory_iterator it(disc_root, error), end; it != end;
         it.increment(error)) {
        if (error) break;
        if (!it->is_regular_file(error) || !is_atrac_extension(it->path())) continue;
        if (std::filesystem::file_size(it->path(), error) != parsed.file_size || error) continue;
        if (atrac_file_matches(it->path(), header)) return it->path();
    }
    return {};
}

constexpr std::uint32_t kAtracOutputChannels = 2u;

void close_atrac_decoder(AtracContextState &state) {
    state.decoder.close();
    state.decoder_eof = false;
}

bool open_atrac_decoder(AtracContextState &state) {
    if (state.decoder.is_open()) return true;
    if (state.source_path.empty()) return false;
    std::uint64_t seek = state.sample_position;
    if (state.header.total_samples != 0u && seek > state.header.total_samples)
        seek = state.header.total_samples;
    if (!state.decoder.open(state.source_path, state.header.sample_rate,
                            kAtracOutputChannels, seek))
        return false;
    state.decoder_eof = false;
    return true;
}

std::size_t read_atrac_pcm(AtracContextState &state, std::span<std::uint8_t> output) {
    if (!open_atrac_decoder(state)) return 0u;
    const std::size_t total = state.decoder.read(output);
    if (total < output.size()) state.decoder_eof = true;
    return total;
}

std::uint32_t atrac_samples_per_frame(const AtracContextState &state) {
    return state.header.atrac3plus ? 2048u : 1024u;
}

std::uint32_t atrac_bitrate_kbps(const AtracContextState &state) {
    if (state.header.atrac3plus) {
        const std::uint32_t raw = (static_cast<std::uint32_t>(state.header.block_align) * 352800u) / 1000u;
        return ((raw >> 11u) + 8u) & 0xFFFFFFF0u;
    }
    return (static_cast<std::uint32_t>(state.header.block_align) * 352800u / 1000u + 511u) >> 10u;
}

struct SubInterruptRecord {
    std::uint32_t handler{};
    std::uint32_t argument{};
    bool enabled{};
};
std::unordered_map<std::uint64_t, SubInterruptRecord> sub_interrupts;
std::uint64_t sub_interrupt_key(std::uint32_t interrupt_number, std::uint32_t sub_number) {
    return (static_cast<std::uint64_t>(interrupt_number) << 32u) | sub_number;
}

enum class UtilityStatus : std::uint32_t {
    None = 0u,
    Init = 1u,
    Visible = 2u,
    Quit = 3u,
    Finished = 4u,
};

struct SavedataUtilityState {
    UtilityStatus status{UtilityStatus::None};
    std::uint32_t parameter_address{};
    bool operation_complete{};
};
SavedataUtilityState savedata_utility{};

constexpr std::uint32_t kUtilityCommonResultOffset = 0x1Cu;
constexpr std::uint32_t kSavedataModeOffset = 0x30u;
constexpr std::uint32_t kSavedataGameNameOffset = 0x3Cu;
constexpr std::uint32_t kSavedataSaveNameOffset = 0x4Cu;
constexpr std::uint32_t kSavedataFileNameOffset = 0x64u;
constexpr std::uint32_t kSavedataDataBufferOffset = 0x74u;
constexpr std::uint32_t kSavedataDataBufferSizeOffset = 0x78u;
constexpr std::uint32_t kSavedataDataSizeOffset = 0x7Cu;
constexpr std::uint32_t kSavedataIcon0Offset = 0x584u;
constexpr std::uint32_t kSavedataIcon1Offset = 0x594u;
constexpr std::uint32_t kSavedataPic1Offset = 0x5A4u;
constexpr std::uint32_t kSavedataSnd0Offset = 0x5B4u;
constexpr std::uint32_t kSavedataIdListOffset = 0x5F4u;
constexpr std::uint32_t kSavedataParameterMinimumSize = 0x600u;

std::string read_fixed_string(const psprecomp::GuestMemory &memory, std::uint32_t address, std::size_t size) {
    std::string result;
    result.reserve(size);
    for (std::size_t index = 0; index < size; ++index) {
        const char value = static_cast<char>(memory.load8(address + static_cast<std::uint32_t>(index)));
        if (value == '\0') break;
        result.push_back(value);
    }
    return result;
}

std::string safe_savedata_component(std::string value) {
    value.erase(std::remove_if(value.begin(), value.end(), [](unsigned char c) {
        return c == '/' || c == '\\' || c == ':' || c < 0x20u;
    }), value.end());
    return value;
}

std::filesystem::path savedata_root(const psprecomp::Runtime &runtime) {
    return runtime.game_root() / "PSP" / "SAVEDATA";
}

std::filesystem::path savedata_directory(const psprecomp::Runtime &runtime, std::uint32_t parameter_address) {
    const std::string game = safe_savedata_component(read_fixed_string(
        runtime.memory(), parameter_address + kSavedataGameNameOffset, 13u));
    const std::string save = safe_savedata_component(read_fixed_string(
        runtime.memory(), parameter_address + kSavedataSaveNameOffset, 20u));
    return savedata_root(runtime) / (game + save);
}

bool write_guest_file(psprecomp::Runtime &runtime, const std::filesystem::path &path,
                      std::uint32_t buffer, std::uint32_t size) {
    if (size == 0u) return true;
    if (buffer == 0u || !runtime.memory().contains(buffer, size)) return false;
    if (stress_test_enabled()) { stress_test_note_blocked_write(); return false; }
    std::filesystem::create_directories(path.parent_path());
    std::ofstream output(path, std::ios::binary | std::ios::trunc);
    if (!output) return false;
    std::vector<std::uint8_t> data(size);
    for (std::uint32_t index = 0u; index < size; ++index)
        data[index] = runtime.memory().load8(buffer + index);
    output.write(reinterpret_cast<const char *>(data.data()), static_cast<std::streamsize>(data.size()));
    return output.good();
}

bool write_savedata_auxiliary(psprecomp::Runtime &runtime, std::uint32_t parameter_address,
                              std::uint32_t descriptor_offset, const char *filename) {
    const std::uint32_t descriptor = parameter_address + descriptor_offset;
    const std::uint32_t buffer = runtime.memory().load32(descriptor);
    const std::uint32_t buffer_size = runtime.memory().load32(descriptor + 4u);
    const std::uint32_t actual_size = runtime.memory().load32(descriptor + 8u);
    if (buffer == 0u || actual_size == 0u) return true;
    if (actual_size > buffer_size) return false;
    return write_guest_file(runtime, savedata_directory(runtime, parameter_address) / filename, buffer, actual_size);
}

std::uint32_t load_savedata_file(psprecomp::Runtime &runtime, std::uint32_t parameter_address,
                                 const std::filesystem::path &path, bool raw_mode) {
    if (!std::filesystem::is_regular_file(path)) {
        return raw_mode ? 0x80110329u : 0x80110307u;
    }
    std::ifstream input(path, std::ios::binary | std::ios::ate);
    if (!input) return raw_mode ? 0x80110329u : 0x80110305u;
    const auto end = input.tellg();
    if (end < 0) return 0x80110305u;
    const auto file_size = static_cast<std::uint64_t>(end);
    const std::uint32_t destination = runtime.memory().load32(parameter_address + kSavedataDataBufferOffset);
    const std::uint32_t capacity = runtime.memory().load32(parameter_address + kSavedataDataBufferSizeOffset);
    if (file_size > capacity || file_size > 0xFFFFFFFFull ||
        (file_size != 0u && (destination == 0u || !runtime.memory().contains(destination, static_cast<std::size_t>(file_size))))) {
        return raw_mode ? 0x80110328u : 0x80110308u;
    }
    std::vector<std::uint8_t> bytes(static_cast<std::size_t>(file_size));
    input.seekg(0, std::ios::beg);
    if (!bytes.empty()) input.read(reinterpret_cast<char *>(bytes.data()), static_cast<std::streamsize>(bytes.size()));
    if (!input && !bytes.empty()) return 0x80110305u;
    if (!bytes.empty()) runtime.memory().copy_in(destination, bytes);
    runtime.memory().store32(parameter_address + kSavedataDataSizeOffset, static_cast<std::uint32_t>(bytes.size()));
    return 0u;
}

std::uint32_t save_savedata_file(psprecomp::Runtime &runtime, std::uint32_t parameter_address,
                                 const std::filesystem::path &path, bool raw_mode) {
    const std::uint32_t source = runtime.memory().load32(parameter_address + kSavedataDataBufferOffset);
    const std::uint32_t capacity = runtime.memory().load32(parameter_address + kSavedataDataBufferSizeOffset);
    const std::uint32_t size = runtime.memory().load32(parameter_address + kSavedataDataSizeOffset);
    if (size > capacity || (size != 0u && (source == 0u || !runtime.memory().contains(source, size)))) {
        return raw_mode ? 0x80110328u : 0x80110388u;
    }
    if (!write_guest_file(runtime, path, source, size)) return raw_mode ? 0x80110329u : 0x80110385u;
    if (!raw_mode) {
        if (!write_savedata_auxiliary(runtime, parameter_address, kSavedataIcon0Offset, "ICON0.PNG") ||
            !write_savedata_auxiliary(runtime, parameter_address, kSavedataIcon1Offset, "ICON1.PMF") ||
            !write_savedata_auxiliary(runtime, parameter_address, kSavedataPic1Offset, "PIC1.PNG") ||
            !write_savedata_auxiliary(runtime, parameter_address, kSavedataSnd0Offset, "SND0.AT3")) {
            return 0x80110385u;
        }
    }
    return 0u;
}

std::uint32_t list_savedata_directories(psprecomp::Runtime &runtime, std::uint32_t parameter_address) {
    const std::uint32_t info = runtime.memory().load32(parameter_address + kSavedataIdListOffset);
    if (info == 0u || !runtime.memory().contains(info, 12u)) return 0x80110328u;
    const std::int32_t max_count = static_cast<std::int32_t>(runtime.memory().load32(info));
    const std::uint32_t entries = runtime.memory().load32(info + 8u);
    if (max_count < 0 || (max_count > 0 && (entries == 0u || !runtime.memory().contains(entries, static_cast<std::size_t>(max_count) * 72u)))) {
        return 0x80110328u;
    }
    const std::string game = safe_savedata_component(read_fixed_string(
        runtime.memory(), parameter_address + kSavedataGameNameOffset, 13u));
    std::vector<std::string> names;
    const auto root = savedata_root(runtime);
    if (std::filesystem::is_directory(root)) {
        for (const auto &entry : std::filesystem::directory_iterator(root)) {
            if (!entry.is_directory()) continue;
            const std::string directory_name = entry.path().filename().string();
            if (!directory_name.starts_with(game)) continue;
            names.push_back(directory_name.substr(game.size()));
        }
    }
    std::sort(names.begin(), names.end());
    if (names.size() > static_cast<std::size_t>(max_count)) names.resize(static_cast<std::size_t>(max_count));
    for (std::size_t index = 0; index < names.size(); ++index) {
        const std::uint32_t entry = entries + static_cast<std::uint32_t>(index * 72u);
        runtime.memory().zero(entry, 72u);
        runtime.memory().store32(entry, 0x11FFu);
        std::vector<std::uint8_t> bytes(names[index].begin(), names[index].end());
        if (bytes.size() > 19u) bytes.resize(19u);
        bytes.push_back(0u);
        runtime.memory().copy_in(entry + 52u, bytes);
    }
    runtime.memory().store32(info + 4u, static_cast<std::uint32_t>(names.size()));
    return 0u;
}

std::uint64_t directory_size_bytes(const std::filesystem::path &directory) {
    std::uint64_t total = 0u;
    if (!std::filesystem::is_directory(directory)) return total;
    std::error_code error;
    for (std::filesystem::recursive_directory_iterator it(directory, error), end; it != end && !error; it.increment(error)) {
        if (it->is_regular_file(error)) total += it->file_size(error);
    }
    return total;
}

void write_small_size_string(psprecomp::GuestMemory &memory, std::uint32_t address, std::uint64_t kilobytes) {
    const std::string text = kilobytes > 99999u ? "99999KB" : std::to_string(kilobytes) + "KB";
    memory.zero(address, 8u);
    std::vector<std::uint8_t> bytes(text.begin(), text.end());
    if (bytes.size() > 7u) bytes.resize(7u);
    bytes.push_back(0u);
    memory.copy_in(address, bytes);
}

void write_used_data_info(psprecomp::GuestMemory &memory, std::uint32_t address,
                          std::uint64_t used_bytes, std::uint32_t cluster_size) {
    const std::uint64_t clusters = (used_bytes + cluster_size - 1u) / cluster_size;
    const std::uint64_t used_kb = (used_bytes + 1023u) / 1024u;
    const std::uint64_t used_32kb = clusters * (cluster_size / 1024u);
    memory.store32(address + 0u, static_cast<std::uint32_t>(std::min<std::uint64_t>(clusters, 0xFFFFFFFFull)));
    memory.store32(address + 4u, static_cast<std::uint32_t>(std::min<std::uint64_t>(used_kb, 0xFFFFFFFFull)));
    write_small_size_string(memory, address + 8u, used_kb);
    memory.store32(address + 16u, static_cast<std::uint32_t>(std::min<std::uint64_t>(used_32kb, 0xFFFFFFFFull)));
    write_small_size_string(memory, address + 20u, used_32kb);
}

std::uint32_t query_savedata_sizes(psprecomp::Runtime &runtime, std::uint32_t parameter_address) {
    constexpr std::uint32_t cluster_size = 32u * 1024u;
    const auto root = savedata_root(runtime);
    std::error_code error;
    if (!stress_test_enabled()) std::filesystem::create_directories(root, error);
    const auto space = std::filesystem::space(root, error);
    const std::uint64_t available = error ? 512ull * 1024ull * 1024ull : space.available;
    const std::uint64_t free_clusters = available / cluster_size;
    const std::uint64_t free_kb = available / 1024u;
    const std::uint64_t used = directory_size_bytes(savedata_directory(runtime, parameter_address));

    const std::uint32_t ms_free = runtime.memory().load32(parameter_address + 0x5D0u);
    if (ms_free != 0u) {
        if (!runtime.memory().contains(ms_free, 20u)) return 0x801103C8u;
        runtime.memory().store32(ms_free + 0u, cluster_size);
        runtime.memory().store32(ms_free + 4u, static_cast<std::uint32_t>(std::min<std::uint64_t>(free_clusters, 0xFFFFFFFFull)));
        runtime.memory().store32(ms_free + 8u, static_cast<std::uint32_t>(std::min<std::uint64_t>(free_kb, 0xFFFFFFFFull)));
        write_small_size_string(runtime.memory(), ms_free + 12u, free_kb);
    }

    const std::uint32_t ms_data = runtime.memory().load32(parameter_address + 0x5D4u);
    if (ms_data != 0u) {
        if (!runtime.memory().contains(ms_data, 64u)) return 0x801103C8u;
        runtime.memory().zero(ms_data, 64u);
        for (std::uint32_t index = 0u; index < 13u; ++index)
            runtime.memory().store8(ms_data + index, runtime.memory().load8(parameter_address + kSavedataGameNameOffset + index));
        for (std::uint32_t index = 0u; index < 20u; ++index)
            runtime.memory().store8(ms_data + 16u + index, runtime.memory().load8(parameter_address + kSavedataSaveNameOffset + index));
        write_used_data_info(runtime.memory(), ms_data + 36u, used, cluster_size);
    }

    const std::uint32_t utility_data = runtime.memory().load32(parameter_address + 0x5D8u);
    if (utility_data != 0u) {
        if (!runtime.memory().contains(utility_data, 28u)) return 0x801103C8u;
        write_used_data_info(runtime.memory(), utility_data, used, cluster_size);
    }
    return 0u;
}

std::uint32_t execute_savedata_operation(psprecomp::Runtime &runtime, std::uint32_t parameter_address) {
    const std::uint32_t mode = runtime.memory().load32(parameter_address + kSavedataModeOffset);
    if (stress_test_enabled() && stress_savedata_mutates(mode)) {
        stress_test_note_blocked_write();
        return 0x80110385u;
    }
    const std::string file_name_value = safe_savedata_component(read_fixed_string(
        runtime.memory(), parameter_address + kSavedataFileNameOffset, 13u));
    const std::string file_name = file_name_value.empty() ? "DATA.BIN" : file_name_value;
    const auto directory = savedata_directory(runtime, parameter_address);
    const auto data_path = directory / file_name;
    switch (mode) {
    case 0u: // AUTOLOAD
    case 2u: // LOAD
    case 4u: // LISTLOAD (selected saveName is already supplied by the game)
        return load_savedata_file(runtime, parameter_address, data_path, false);
    case 1u: // AUTOSAVE
    case 3u: // SAVE
    case 5u: // LISTSAVE
        return save_savedata_file(runtime, parameter_address, data_path, false);
    case 9u: // AUTODELETE
    case 10u: // DELETE
        if (!std::filesystem::exists(directory)) return 0x80110347u;
        return std::filesystem::remove_all(directory) != 0u ? 0u : 0x80110345u;
    case 11u: // LIST
        return list_savedata_directories(runtime, parameter_address);
    case 13u: // MAKEDATASECURE
    case 14u: // MAKEDATA
    case 17u: // WRITEDATASECURE
    case 18u: // WRITEDATA
        return save_savedata_file(runtime, parameter_address, data_path, true);
    case 15u: // READDATASECURE
    case 16u: // READDATA
        return load_savedata_file(runtime, parameter_address, data_path, true);
    case 19u: // ERASESECURE
    case 20u: // ERASE
    case 21u: // DELETEDATA
        if (!std::filesystem::is_regular_file(data_path)) return 0x80110329u;
        return std::filesystem::remove(data_path) ? 0u : 0x80110329u;
    case 8u:  // SIZES
        return query_savedata_sizes(runtime, parameter_address);
    case 12u: // FILES
    case 22u: // GETSIZE
        return 0u;
    default:
        return 0x80110300u;
    }
}

struct ControllerState {
    std::uint32_t sampling_cycle{};
    std::uint32_t sampling_mode{};
};
ControllerState controller_state;

struct DisplayState {
    std::uint32_t mode{};
    std::uint32_t width{480u};
    std::uint32_t height{272u};
    std::uint32_t frame_buffer{};
    std::uint32_t buffer_width{512u};
    std::uint32_t pixel_format{};
    std::uint32_t sync_mode{};
};
DisplayState display_state;
std::uint64_t display_vblank_index{};
constexpr std::uint64_t kVblankPeriodUs = 16683u;

struct GeCallbackRecord {
    std::uint32_t signal_function{};
    std::uint32_t signal_argument{};
    std::uint32_t finish_function{};
    std::uint32_t finish_argument{};
};
struct GeCallbackTable {
    std::int32_t next_uid{0x700};
    std::unordered_map<std::int32_t, GeCallbackRecord> callbacks;
};
GeCallbackTable ge_callback_table;
std::int32_t ge_next_list_id{1};
std::unordered_map<std::int32_t, std::vector<AsyncReturnFrame>> async_return_frames;
std::unordered_map<std::int32_t, std::deque<PendingGeCallback>> pending_ge_callbacks;

std::uint64_t virtual_time_us{};
std::uint64_t umd_stream_flag_last_rearm_us{};

constexpr std::uint32_t kGameRenderWidthAddress = 0x08B5698Cu;

std::uint32_t audio_remaining_samples(const AudioChannelState &channel) {
    if (!channel.reserved || channel.busy_until_us <= virtual_time_us) return 0u;
    const std::uint64_t remaining_us = channel.busy_until_us - virtual_time_us;
    const std::uint64_t samples = (remaining_us * 44100u + 999999u) / 1000000u;
    return static_cast<std::uint32_t>(std::min<std::uint64_t>(samples, channel.sample_count));
}

std::uint64_t audio_queue_buffer(AudioChannelState &channel, std::uint32_t frames) {
    const auto elapsed_us = [](std::uint64_t sample_frames) {
        return (sample_frames * 1000000ull) / 44100ull;
    };
    std::uint64_t start = channel.queue_anchor_us + elapsed_us(channel.queued_frames);
    if (!channel.queue_active || start < virtual_time_us) {
        channel.queue_active = true;
        channel.queue_anchor_us = virtual_time_us;
        channel.queued_frames = 0u;
        start = virtual_time_us;
    }
    channel.queued_frames += frames;
    channel.busy_until_us = channel.queue_anchor_us + elapsed_us(channel.queued_frames);
    return start;
}

void set_success(psprecomp::AllegrexContext &ctx) { ctx.set_gpr(2, 0u); }

std::uint64_t system_time_microseconds() { return virtual_time_us; }

void enqueue_continuation(std::int32_t uid, const psprecomp::AllegrexContext &context) {
    auto thread = thread_table.threads.find(uid);
    if (thread != thread_table.threads.end()) {
        thread->second.state = ThreadState::Ready;
        thread->second.suspended_context = context;
        if (thread->second.externally_suspended) {
            thread_table.continuations.erase(
                std::remove_if(thread_table.continuations.begin(), thread_table.continuations.end(),
                               [uid](const ThreadContinuation &item) { return item.uid == uid; }),
                thread_table.continuations.end());
            return;
        }
    }
    const auto existing = std::find_if(
        thread_table.continuations.begin(), thread_table.continuations.end(),
        [uid](const ThreadContinuation &item) { return item.uid == uid; });
    if (existing != thread_table.continuations.end()) {
        existing->context = context;
    } else {
        thread_table.continuations.push_back(
            ThreadContinuation{uid, context, thread_table.next_ready_sequence++});
    }
}

bool activate_next_thread(psprecomp::AllegrexContext &ctx, const char *reason);
bool event_flag_matches(const EventFlagRecord &flag, std::uint32_t requested, std::uint32_t mode);
void consume_event_flag(EventFlagRecord &flag, std::uint32_t requested, std::uint32_t mode);

void maybe_rearm_umd_stream_flag() {
    constexpr std::uint64_t kRearmIntervalUs = 5000u;
    if (virtual_time_us - umd_stream_flag_last_rearm_us < kRearmIntervalUs) return;
    for (auto &[uid, flag] : event_flag_table.flags) {
        if (flag.name != "UmdStreamEventFlag") continue;
        umd_stream_flag_last_rearm_us = virtual_time_us;
        if ((flag.current_pattern & 0x1u) != 0u) return;
        flag.current_pattern |= 0x1u;
        auto waiter = flag.waiters.begin();
        while (waiter != flag.waiters.end()) {
            if (!event_flag_matches(flag, waiter->requested, waiter->mode)) {
                ++waiter;
                continue;
            }
            consume_event_flag(flag, waiter->requested, waiter->mode);
            waiter->context.set_gpr(2, 0u);
            enqueue_continuation(waiter->uid, waiter->context);
            waiter = flag.waiters.erase(waiter);
        }
        flag.current_pattern &= ~0x1u;
        return;
    }
}

std::uint32_t thread_priority(std::int32_t uid) {
    const auto found = thread_table.threads.find(uid);
    return found != thread_table.threads.end() ? found->second.priority : 0xFFFFFFFFu;
}

auto best_ready_thread() {
    return std::min_element(
        thread_table.continuations.begin(), thread_table.continuations.end(),
        [](const ThreadContinuation &left, const ThreadContinuation &right) {
            const std::uint32_t left_priority = thread_priority(left.uid);
            const std::uint32_t right_priority = thread_priority(right.uid);
            if (left_priority != right_priority) return left_priority < right_priority;
            return left.ready_sequence < right.ready_sequence;
        });
}

bool preempt_if_higher_priority(psprecomp::AllegrexContext &ctx, const char *reason) {
    const auto current = thread_table.threads.find(thread_table.current_uid);
    if (current == thread_table.threads.end() || current->second.state != ThreadState::Running) return false;
    const auto best = best_ready_thread();
    if (best == thread_table.continuations.end() ||
        thread_priority(best->uid) >= thread_priority(thread_table.current_uid)) {
        return false;
    }

    const std::int32_t caller_uid = thread_table.current_uid;
    psprecomp::AllegrexContext caller = ctx;
    caller.pc = ctx.gpr[31];
    enqueue_continuation(caller_uid, caller);
    return activate_next_thread(ctx, reason);
}

void promote_expired_delays() {
    struct ExpiredDelay {
        std::int32_t uid{};
        std::uint64_t deadline{};
        std::uint64_t sequence{};
    };
    std::vector<ExpiredDelay> expired;
    expired.reserve(thread_table.threads.size());
    for (const auto &[uid, thread] : thread_table.threads) {
        if (thread.state == ThreadState::Delayed && thread.delay_until_us <= virtual_time_us)
            expired.push_back(ExpiredDelay{uid, thread.delay_until_us, thread.delay_sequence});
    }

    std::sort(expired.begin(), expired.end(), [](const ExpiredDelay &left, const ExpiredDelay &right) {
        if (left.deadline != right.deadline) return left.deadline < right.deadline;
        if (left.sequence != right.sequence) return left.sequence < right.sequence;
        return left.uid < right.uid;
    });
    for (const ExpiredDelay &item : expired) {
        const auto thread = thread_table.threads.find(item.uid);
        if (thread != thread_table.threads.end()) enqueue_continuation(item.uid, thread->second.suspended_context);
    }
}

bool activate_next_thread(psprecomp::AllegrexContext &ctx, const char *reason) {
    (void)reason;
    maybe_rearm_umd_stream_flag();
    promote_expired_delays();
    thread_table.continuations.erase(
        std::remove_if(thread_table.continuations.begin(), thread_table.continuations.end(),
                       [](const ThreadContinuation &item) {
                           const auto thread = thread_table.threads.find(item.uid);
                           return thread == thread_table.threads.end() || thread->second.externally_suspended;
                       }),
        thread_table.continuations.end());
    if (thread_table.continuations.empty()) {
        std::uint64_t earliest = UINT64_MAX;
        for (const auto &[uid, thread] : thread_table.threads) {
            (void)uid;
            if (thread.state == ThreadState::Delayed)
                earliest = std::min(earliest, thread.delay_until_us);
        }
        if (earliest != UINT64_MAX) {

            virtual_time_us = std::max(virtual_time_us, earliest);
            promote_expired_delays();
        }
    }
    if (thread_table.continuations.empty()) return false;

    const auto selected = best_ready_thread();
    ThreadContinuation continuation = *selected;
    thread_table.continuations.erase(selected);
    thread_table.current_uid = continuation.uid;
    if (auto thread = thread_table.threads.find(continuation.uid); thread != thread_table.threads.end()) {
        thread->second.state = ThreadState::Running;
        psprecomp::set_runtime_thread_identity(continuation.uid, thread->second.name);
    }
    ctx = continuation.context;
    return true;
}

psprecomp::AllegrexContext make_wait_context(const psprecomp::AllegrexContext &ctx) {
    psprecomp::AllegrexContext suspended = ctx;
    suspended.set_gpr(2, 0u);
    suspended.pc = ctx.gpr[31];
    return suspended;
}

void check_wall_clock_limit(psprecomp::Runtime &runtime, std::uint64_t sample_mask);

bool delay_current_thread(psprecomp::Runtime &runtime, psprecomp::AllegrexContext &ctx,
                          std::uint32_t delay_microseconds, std::uint32_t return_value = 0u) {
    check_wall_clock_limit(runtime, 0xFFu);
    auto current = thread_table.threads.find(thread_table.current_uid);
    if (current == thread_table.threads.end()) {
        ctx.set_gpr(2, 0x80020198u);
        return false;
    }
    psprecomp::AllegrexContext suspended = make_wait_context(ctx);
    suspended.set_gpr(2, return_value);
    current->second.state = ThreadState::Delayed;
    current->second.suspended_context = suspended;
    current->second.delay_until_us = virtual_time_us + delay_microseconds;
    current->second.delay_sequence = thread_table.next_delay_sequence++;
    if (!activate_next_thread(ctx, "delay")) {
        runtime.stop("PSP scheduler deadlock while delaying thread");
        return false;
    }
    return true;
}

bool suspend_current_thread(psprecomp::Runtime &runtime, psprecomp::AllegrexContext &ctx,
                            const psprecomp::AllegrexContext &suspended,
                            const std::string &reason) {
    if (auto current = thread_table.threads.find(thread_table.current_uid);
        current != thread_table.threads.end()) {
        current->second.state = ThreadState::Sleeping;
        current->second.suspended_context = suspended;
    }
    if (!activate_next_thread(ctx, reason.c_str())) {
        runtime.stop("PSP scheduler deadlock while waiting for " + reason);
        return false;
    }
    return true;
}

bool sleep_current_thread(psprecomp::Runtime &runtime, psprecomp::AllegrexContext &ctx) {
    auto current = thread_table.threads.find(thread_table.current_uid);
    if (current == thread_table.threads.end()) {
        ctx.set_gpr(2, 0x80020198u);
        return false;
    }
    if (current->second.wakeup_count != 0u) {
        --current->second.wakeup_count;
        set_success(ctx);
        return true;
    }
    const psprecomp::AllegrexContext suspended = make_wait_context(ctx);
    current->second.state = ThreadState::Sleeping;
    current->second.suspended_context = suspended;
    if (!activate_next_thread(ctx, "sleep")) {
        runtime.stop("PSP scheduler deadlock: every thread is sleeping");
        return false;
    }
    return true;
}

std::uint32_t wake_thread(std::int32_t uid) {
    const auto found = thread_table.threads.find(uid);
    if (found == thread_table.threads.end()) return 0x80020198u;
    ThreadRecord &thread = found->second;
    if (thread.state == ThreadState::Completed || thread.state == ThreadState::Created)
        return 0x800201A2u;
    if (thread.state == ThreadState::Sleeping) {
        enqueue_continuation(uid, thread.suspended_context);
    } else {
        ++thread.wakeup_count;
    }
    return 0u;
}

void release_thread_stack(const ThreadRecord &thread) {
    if (thread.stack_bottom == 0u || thread.stack_top <= thread.stack_bottom) return;
    thread_table.free_stacks.push_back({thread.stack_bottom, thread.stack_top});
    std::sort(thread_table.free_stacks.begin(), thread_table.free_stacks.end(),
              [](const FreeThreadStack &left, const FreeThreadStack &right) {
                  return left.bottom < right.bottom;
              });
    std::vector<FreeThreadStack> merged;
    for (const FreeThreadStack block : thread_table.free_stacks) {
        if (!merged.empty() && block.bottom <= merged.back().top) {
            merged.back().top = std::max(merged.back().top, block.top);
        } else {
            merged.push_back(block);
        }
    }
    thread_table.free_stacks = std::move(merged);

    for (;;) {
        const auto adjacent = std::find_if(thread_table.free_stacks.begin(), thread_table.free_stacks.end(),
            [](const FreeThreadStack &block) { return block.bottom == thread_table.next_stack_top; });
        if (adjacent == thread_table.free_stacks.end()) break;
        thread_table.next_stack_top = adjacent->top;
        thread_table.free_stacks.erase(adjacent);
    }
}

bool allocate_thread_stack(std::uint32_t stack_size, std::uint32_t &bottom, std::uint32_t &top) {
    auto best = thread_table.free_stacks.end();
    for (auto it = thread_table.free_stacks.begin(); it != thread_table.free_stacks.end(); ++it) {
        const std::uint32_t size = it->top - it->bottom;
        if (size < stack_size) continue;
        if (best == thread_table.free_stacks.end() || size < best->top - best->bottom) best = it;
    }
    if (best != thread_table.free_stacks.end()) {
        top = best->top;
        bottom = top - stack_size;
        if (bottom == best->bottom)
            thread_table.free_stacks.erase(best);
        else
            best->top = bottom;
        return true;
    }

    top = thread_table.next_stack_top & ~0xFFu;
    if (top < stack_size) return false;
    bottom = top - stack_size;
    if (bottom < partition_table.next_address) return false;
    thread_table.next_stack_top = bottom;
    return true;
}

void remove_thread_from_wait_queues(std::int32_t uid) {
    for (auto &[semaphore_uid, semaphore] : semaphore_table.semaphores) {
        (void)semaphore_uid;
        semaphore.waiters.erase(std::remove_if(semaphore.waiters.begin(), semaphore.waiters.end(),
            [uid](const SemaphoreWaiter &waiter) { return waiter.uid == uid; }), semaphore.waiters.end());
    }
    for (auto &[flag_uid, flag] : event_flag_table.flags) {
        (void)flag_uid;
        flag.waiters.erase(std::remove_if(flag.waiters.begin(), flag.waiters.end(),
            [uid](const EventFlagWaiter &waiter) { return waiter.uid == uid; }), flag.waiters.end());
    }
    for (auto &[target_uid, waiters] : thread_table.thread_end_waiters) {
        (void)target_uid;
        waiters.erase(std::remove_if(waiters.begin(), waiters.end(),
            [uid](const ThreadContinuation &waiter) { return waiter.uid == uid; }), waiters.end());
    }
    std::erase_if(thread_table.thread_end_waiters,
                  [](const auto &entry) { return entry.second.empty(); });
    std::erase_if(callback_table.callbacks,
                  [uid](const auto &entry) { return entry.second.owner_uid == uid; });
}

void wake_thread_end_waiters(std::int32_t completed_uid, std::uint32_t result = 0u) {
    const auto found = thread_table.thread_end_waiters.find(completed_uid);
    if (found == thread_table.thread_end_waiters.end()) return;
    for (auto &waiter : found->second) {
        waiter.context.set_gpr(2, result);
        enqueue_continuation(waiter.uid, waiter.context);
    }
    thread_table.thread_end_waiters.erase(found);
}

void complete_current_thread(psprecomp::Runtime &runtime, psprecomp::AllegrexContext &ctx) {
    const std::int32_t completed_uid = thread_table.current_uid;
    if (auto current = thread_table.threads.find(completed_uid); current != thread_table.threads.end())
        current->second.state = ThreadState::Completed;
    thread_table.continuations.erase(
        std::remove_if(thread_table.continuations.begin(), thread_table.continuations.end(),
                       [completed_uid](const ThreadContinuation &item) { return item.uid == completed_uid; }),
        thread_table.continuations.end());
    async_return_frames.erase(completed_uid);
    wake_thread_end_waiters(completed_uid);
    if (!activate_next_thread(ctx, "thread-complete")) {
        ctx.set_gpr(2, 0u);
        runtime.stop("All PSP threads completed");
    }
}

void lcs_module_thread_return(psprecomp::Runtime &runtime, psprecomp::AllegrexContext &ctx) {
    complete_current_thread(runtime, ctx);
}

bool dispatch_vblank_interrupt(psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx,
                               std::uint32_t delay_us);
bool dispatch_vblank_interrupt_if_due(psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx,
                                      std::uint32_t delay_us);

void lcs_callback_return(psprecomp::Runtime &runtime, psprecomp::AllegrexContext &ctx) {
    const std::int32_t uid = thread_table.current_uid;
    const auto found = async_return_frames.find(uid);
    if (found == async_return_frames.end() || found->second.empty()) {
        runtime.stop("PSP callback return without a saved thread context");
        return;
    }
    const AsyncReturnFrame frame = found->second.back();
    found->second.pop_back();
    if (found->second.empty()) async_return_frames.erase(found);

    if (frame.kind == AsyncReturnKind::GeFinishThenDelay) {
        ctx = frame.resume;
        if (frame.vblank_wait ? dispatch_vblank_interrupt(runtime, ctx, frame.delay_us)
                              : dispatch_vblank_interrupt_if_due(runtime, ctx, frame.delay_us))
            return;
        (void)delay_current_thread(runtime, ctx, frame.delay_us);
        return;
    }
    if (frame.kind == AsyncReturnKind::SubInterrupt) {
        ctx = frame.resume;
        return;
    }
    if (frame.kind == AsyncReturnKind::MpegRingbuffer) {
        const auto produced = static_cast<std::int32_t>(ctx.gpr[2]);
        auto &memory = runtime.memory();
        if (produced > 0 && memory.contains(frame.ring, 48u)) {
            const std::int32_t packets = static_cast<std::int32_t>(memory.load32(frame.ring));
            const std::int32_t used = static_cast<std::int32_t>(memory.load32(frame.ring + 12u));
            const std::int32_t write_position =
                static_cast<std::int32_t>(memory.load32(frame.ring + 8u));
            if (packets > 0) {
                memory.store32(frame.ring + 12u,
                               static_cast<std::uint32_t>(std::min(packets, used + produced)));
                memory.store32(frame.ring + 8u,
                               static_cast<std::uint32_t>((write_position + produced) % packets));
            }
        }
        ctx = frame.resume;
        ctx.set_gpr(2, static_cast<std::uint32_t>(std::max(0, produced)));
        return;
    }
    ctx = frame.resume;
}

bool deliver_pending_ge_callback(psprecomp::AllegrexContext &ctx, std::uint32_t delay_us,
                                 bool vblank_wait = false) {
    const auto pending = pending_ge_callbacks.find(thread_table.current_uid);
    if (pending == pending_ge_callbacks.end() || pending->second.empty()) return false;
    auto &frames = async_return_frames[thread_table.current_uid];
    if (!frames.empty()) return false;
    const PendingGeCallback callback = pending->second.front();
    pending->second.pop_front();
    AsyncReturnFrame frame{};
    frame.resume = ctx;
    frame.callback_uid = callback.callback_uid;
    frame.kind = AsyncReturnKind::GeFinishThenDelay;
    frame.delay_us = delay_us;
    frame.vblank_wait = vblank_wait;
    frames.push_back(frame);
    ctx.set_gpr(4, callback.finish_argument);
    ctx.set_gpr(5, callback.user_argument);
    ctx.set_gpr(31, 0x00000004u);
    ctx.pc = callback.function;
    return true;
}

std::uint64_t g_vblank_interrupt_due_us = 0u;

bool in_vblank_interrupt() {
    const auto found = async_return_frames.find(thread_table.current_uid);
    return found != async_return_frames.end() && !found->second.empty() &&
           found->second.back().kind == AsyncReturnKind::SubInterrupt;
}

bool dispatch_vblank_interrupt(psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx,
                               std::uint32_t delay_us) {
    const auto interrupt = sub_interrupts.find(sub_interrupt_key(30u, 15u));
    if (interrupt == sub_interrupts.end() || !interrupt->second.enabled ||
        interrupt->second.handler == 0u)
        return false;
    const auto current = thread_table.threads.find(thread_table.current_uid);
    if (current == thread_table.threads.end()) return false;
    auto &frames = async_return_frames[thread_table.current_uid];
    if (!frames.empty()) return false;

    AsyncReturnFrame frame{};
    frame.resume = make_wait_context(ctx);
    frame.kind = AsyncReturnKind::SubInterrupt;
    frames.push_back(frame);

    psprecomp::AllegrexContext handler = ctx;
    handler.set_gpr(4, 15u);
    handler.set_gpr(5, interrupt->second.argument);
    handler.set_gpr(31, 0x00000004u);
    handler.pc = interrupt->second.handler;
    current->second.state = ThreadState::Delayed;
    current->second.suspended_context = handler;
    current->second.delay_until_us = virtual_time_us + delay_us;
    current->second.delay_sequence = thread_table.next_delay_sequence++;
    g_vblank_interrupt_due_us = virtual_time_us + delay_us + kVblankPeriodUs;
    if (!activate_next_thread(ctx, "vblank-interrupt"))
        rt.stop("PSP scheduler deadlock while waiting for the VBlank interrupt");
    return true;
}

bool dispatch_vblank_interrupt_if_due(psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx,
                                      std::uint32_t delay_us) {
    if (virtual_time_us + delay_us < g_vblank_interrupt_due_us) return false;
    return dispatch_vblank_interrupt(rt, ctx, delay_us);
}

bool try_dispatch_pending_callback(psprecomp::AllegrexContext &ctx) {
    auto pending = std::find_if(callback_table.callbacks.begin(), callback_table.callbacks.end(),
        [](const auto &item) {
            return item.second.owner_uid == thread_table.current_uid &&
                item.second.notify_count != 0u && item.second.function != 0u;
        });
    if (pending == callback_table.callbacks.end()) return false;

    CallbackRecord &callback = pending->second;
    const std::uint32_t count = callback.notify_count;
    const std::uint32_t argument = callback.notify_argument;
    callback.notify_count = 0u;

    psprecomp::AllegrexContext resume = ctx;
    resume.pc = ctx.gpr[31];
    resume.set_gpr(2, 1u);
    auto &frames = async_return_frames[thread_table.current_uid];
    if (!frames.empty()) return false;
    frames.push_back(AsyncReturnFrame{resume, pending->first});
    ctx.set_gpr(4, count);
    ctx.set_gpr(5, argument);
    ctx.set_gpr(6, callback.common);
    ctx.set_gpr(31, 0x00000004u);
    ctx.pc = callback.function;
    return true;
}

bool event_flag_matches(const EventFlagRecord &flag, std::uint32_t requested, std::uint32_t mode) {
    if ((mode & 1u) != 0u) return (flag.current_pattern & requested) != 0u;
    return (flag.current_pattern & requested) == requested;
}

void consume_event_flag(EventFlagRecord &flag, std::uint32_t requested, std::uint32_t mode) {
    if ((mode & 0x20u) != 0u) flag.current_pattern &= ~requested;
    if ((mode & 0x10u) != 0u) flag.current_pattern = 0u;
}

struct DeferredIoResume {
    std::int32_t handoff_uid{};
    std::uint32_t handoff_pc{};
    std::uint32_t release_pc{};
};

std::unordered_map<std::int32_t, DeferredIoResume> deferred_io_resumes;

void lcs_post_dispatch_hook(psprecomp::Runtime &, psprecomp::AllegrexContext &,
                            std::uint32_t dispatch_pc, std::int32_t dispatch_thread_uid);

void refresh_lcs_post_dispatch_hook() {
    psprecomp::set_runtime_post_dispatch_hook(
        deferred_io_resumes.empty() ? nullptr : &lcs_post_dispatch_hook);
}

void lcs_post_dispatch_hook(psprecomp::Runtime &, psprecomp::AllegrexContext &,
                            std::uint32_t dispatch_pc, std::int32_t dispatch_thread_uid) {
    if (deferred_io_resumes.empty()) return;
    std::vector<std::int32_t> completed;
    for (const auto &[worker_uid, barrier] : deferred_io_resumes) {
        if (dispatch_thread_uid == barrier.handoff_uid && dispatch_pc == barrier.release_pc)
            completed.push_back(worker_uid);
    }
    if (completed.empty()) return;
    for (const std::int32_t worker_uid : completed) {
        const auto worker = thread_table.threads.find(worker_uid);
        if (worker != thread_table.threads.end() &&
            worker->second.state == ThreadState::IoDeferred) {
            enqueue_continuation(worker_uid, worker->second.suspended_context);
        }
        deferred_io_resumes.erase(worker_uid);
    }
    refresh_lcs_post_dispatch_hook();
}

bool defer_current_thread_for_io_handoff(psprecomp::AllegrexContext &ctx,
                                         std::uint32_t return_value) {
    const std::int32_t worker_uid = thread_table.current_uid;
    const auto worker = thread_table.threads.find(worker_uid);
    if (worker == thread_table.threads.end()) {
        ctx.set_gpr(2, return_value);
        return false;
    }
    if (best_ready_thread() == thread_table.continuations.end()) {
        ctx.set_gpr(2, return_value);
        return false;
    }

    psprecomp::AllegrexContext suspended = make_wait_context(ctx);
    suspended.set_gpr(2, return_value);
    worker->second.state = ThreadState::IoDeferred;
    worker->second.suspended_context = suspended;

    if (!activate_next_thread(ctx, "io-handoff")) {
        worker->second.state = ThreadState::Running;
        ctx = suspended;
        return false;
    }

    deferred_io_resumes[worker_uid] =
        DeferredIoResume{thread_table.current_uid, ctx.pc, ctx.pc};
    refresh_lcs_post_dispatch_hook();
    return true;
}

std::uint64_t starvation_tick_microseconds = 1u;

double wall_clock_limit_seconds = 0.0;
std::chrono::steady_clock::time_point wall_clock_start;

std::uint32_t throttle_vblank_to_real_time() {
    static const bool uncapped = std::getenv("LCS_UNCAPPED") != nullptr;
    if (uncapped) return 0u;
    constexpr std::uint32_t kMaxSkippedVblanks = 6u;
    static std::chrono::steady_clock::time_point next_vblank{};
    const auto period = std::chrono::microseconds(kVblankPeriodUs);
    const auto now = std::chrono::steady_clock::now();
    if (next_vblank == std::chrono::steady_clock::time_point{}) {
        next_vblank = now + period;
        return 0u;
    }
    if (now < next_vblank) {
        precise_sleep_until(next_vblank);
        next_vblank += period;
        return 0u;
    }
    const auto behind = static_cast<std::uint64_t>((now - next_vblank) / period);
    const auto skipped = static_cast<std::uint32_t>(std::min<std::uint64_t>(behind, kMaxSkippedVblanks));
    next_vblank = behind > kMaxSkippedVblanks ? now + period : next_vblank + period * (skipped + 1u);
    return skipped;
}

struct GeWorker {
    std::mutex mutex;
    std::condition_variable cv;
    std::thread thread;
    std::deque<std::function<void()>> tasks;
    bool busy{};
    bool stop{};
    bool started{};
    std::atomic<std::uint32_t> pending_presents{0u};
};
GeWorker ge_worker;

bool ge_async_enabled() {
    static const bool enabled = [] {
        const char *text = std::getenv("LCS_GE_ASYNC");
        return text == nullptr || *text == '\0' || std::strcmp(text, "0") != 0;
    }();
    return enabled;
}

void ge_worker_main() {
    for (;;) {
        std::function<void()> task;
        {
            std::unique_lock lock(ge_worker.mutex);
            ge_worker.cv.wait(lock, [] { return ge_worker.stop || !ge_worker.tasks.empty(); });
            if (ge_worker.tasks.empty()) break;
            task = std::move(ge_worker.tasks.front());
            ge_worker.tasks.pop_front();
            ge_worker.busy = true;
        }
        task();
        {
            std::lock_guard lock(ge_worker.mutex);
            ge_worker.busy = false;
        }
        ge_worker.cv.notify_all();
    }
}

void ge_worker_submit(std::function<void()> task) {
    if (!ge_async_enabled()) {
        task();
        return;
    }
    {
        std::lock_guard lock(ge_worker.mutex);
        if (!ge_worker.started) {
            ge_worker.started = true;
            ge_worker.stop = false;
            ge_worker.thread = std::thread(&ge_worker_main);
        }
        ge_worker.tasks.push_back(std::move(task));
    }
    ge_worker.cv.notify_all();
}

void ge_worker_wait_idle() {
    std::unique_lock lock(ge_worker.mutex);
    if (!ge_worker.started) return;
    if (ge_worker.tasks.empty() && !ge_worker.busy) return;
    ge_worker.cv.wait(lock, [] { return ge_worker.tasks.empty() && !ge_worker.busy; });
}

void ge_worker_stop() {
    std::thread worker;
    {
        std::lock_guard lock(ge_worker.mutex);
        if (!ge_worker.started) return;
        ge_worker.stop = true;
        worker = std::move(ge_worker.thread);
    }
    ge_worker.cv.notify_all();
    if (worker.joinable()) worker.join();
    std::lock_guard lock(ge_worker.mutex);
    ge_worker.started = false;
    ge_worker.stop = false;
    ge_worker.tasks.clear();
    ge_worker.pending_presents.store(0u);
}

struct GeWorkerLifetime {
    ~GeWorkerLifetime() { ge_worker_stop(); }
};
GeWorkerLifetime ge_worker_lifetime;

struct PresentRequest {
    std::uint64_t vblank{};
    std::uint32_t display_buffer{};
    std::uint32_t display_stride{};
    std::uint32_t pixel_format{};
    std::uint32_t display_width{};
    std::uint32_t display_height{};
    std::uint32_t game_width{};
    std::uint32_t game_height{};
};

void cap_frame_rate(std::uint32_t list_address) {
    static const std::uint32_t fps = [] {
        const char *text = std::getenv("LCS_FPS_CAP");
        if (text == nullptr || *text == '\0') return 0u;
        return static_cast<std::uint32_t>(std::strtoul(text, nullptr, 10));
    }();
    if (fps == 0u) return;
    static std::uint32_t last_address = 0u;
    static std::chrono::steady_clock::time_point deadline{};
    if (list_address == last_address) return;
    last_address = list_address;
    const auto period = std::chrono::duration_cast<std::chrono::steady_clock::duration>(
        std::chrono::duration<double>(1.0 / static_cast<double>(fps)));
    const auto now = std::chrono::steady_clock::now();
    if (deadline == std::chrono::steady_clock::time_point{} || now > deadline + period * 4) {
        deadline = now + period;
        return;
    }
    if (now < deadline) precise_sleep_until(deadline);
    deadline += period;
}

bool g_ge_list_since_finish = false;
std::uint32_t g_ge_last_list_address = 0u;

void execute_ge_list_frame(psprecomp::Runtime &rt, std::uint32_t list_address, std::uint64_t vblank) {
    if (g_ge_list_since_finish && list_address != g_ge_last_list_address) {
        // Not the image the window keeps.
        ge_finish_shows_this_frame() = false;
        (void)ge_gpu_backend_finish_color_frame(vblank);
        ge_finish_shows_this_frame() = true;
    }
    execute_ge_list_rendered(rt.memory(), list_address);
    g_ge_list_since_finish = true;
    g_ge_last_list_address = list_address;
}

void present_frame(psprecomp::Runtime &rt, const PresentRequest &request) {
    std::uint32_t present_buffer = request.display_buffer;
    std::uint32_t present_stride = request.display_stride;
    const std::uint32_t render_target = rendered_render_target();
    const std::uint32_t render_stride = rendered_render_stride();
    if (render_target != 0u && render_stride != 0u &&
        render_target != request.display_buffer) {
        present_buffer = render_target;
        present_stride = render_stride;
    }
    std::uint32_t present_width = request.display_width;
    std::uint32_t present_height = request.display_height;
    if (present_buffer != request.display_buffer &&
        request.game_width >= 240u && request.game_width <= present_stride &&
        request.game_height >= 136u && request.game_height <= 512u) {
        present_width = request.game_width;
        present_height = request.game_height;
    }
    ge_gpu_backend_set_display_framebuffer(present_buffer, present_width, present_height);
    fps_overlay_render_frame(present_buffer, present_width, present_height);
    const bool gpu_frame_ready = ge_gpu_backend_finish_color_frame(request.vblank);
    g_ge_list_since_finish = false;
    static std::uint64_t vblanks_since_gpu_frame = 0u;
    static bool holding_gpu_frame = false;
    if (gpu_frame_ready) {
        holding_gpu_frame = true;
        vblanks_since_gpu_frame = 0u;
    } else if (holding_gpu_frame && ++vblanks_since_gpu_frame > 4u) {
        holding_gpu_frame = false;
    }

    bool presented_gpu_frame = false;
    if (ge_gpu_backend_presents_directly()) {
        const bool show_guest = !gpu_frame_ready && !holding_gpu_frame &&
                                ge_gpu_backend_guest_present_available();
        if (!show_guest) {
            ge_gpu_backend_mark_window_presented();
            presented_gpu_frame = true;
        }
    } else if ((gpu_frame_ready || holding_gpu_frame) && ge_gpu_backend_active()) {
        const GeGpuBackendReport gpu = ge_gpu_backend_report();
        const std::span<const std::byte> rgba = ge_gpu_backend_game_frame_rgba();
        if (!rgba.empty()) {
            display_window_present_rgba(rgba, gpu.offscreen_width, gpu.offscreen_height);
            ge_gpu_backend_mark_window_presented();
            presented_gpu_frame = true;
        }
    }
    stress_test_present(rt, present_buffer, present_stride, request.pixel_format);
    if (std::getenv("LCS_PRESENT_DIAG") != nullptr) {
        static std::uint64_t gpu_presents = 0u, software_presents = 0u;
        if (presented_gpu_frame) ++gpu_presents; else ++software_presents;
        if (((gpu_presents + software_presents) % 120u) == 0u) {
            const std::span<const std::byte> frame = ge_gpu_backend_game_frame_rgba();
            std::size_t non_black = 0u;
            for (std::size_t index = 0u; index + 3u < frame.size(); index += 4u) {
                if (frame[index] != std::byte{0} || frame[index + 1u] != std::byte{0} ||
                    frame[index + 2u] != std::byte{0})
                    ++non_black;
            }
            std::cerr << "[present] gpu=" << gpu_presents
                      << " software=" << software_presents
                      << " direct=" << ge_gpu_backend_presents_directly()
                      << " readback_bytes=" << frame.size()
                      << " non_black=" << non_black << "\n";
        }
    }
    if (!presented_gpu_frame) {
        display_window_present(rt, present_buffer, present_stride, request.pixel_format,
                               present_width, present_height);
    }
}

void check_wall_clock_limit(psprecomp::Runtime &runtime, std::uint64_t sample_mask) {
    if (wall_clock_limit_seconds <= 0.0 || runtime.stopped()) return;
    static std::uint64_t wall_clock_samples = 0u;
    if ((++wall_clock_samples & sample_mask) != 0u) return;
    const std::chrono::duration<double> elapsed =
        std::chrono::steady_clock::now() - wall_clock_start;
    if (elapsed.count() < wall_clock_limit_seconds) return;
    runtime.stop("Wall-clock limit reached at " + psprecomp::hex32(runtime.cpu().pc));
}

void lcs_starvation_tick(psprecomp::Runtime &starvation_runtime, psprecomp::AllegrexContext &ctx) {
    virtual_time_us += starvation_tick_microseconds;
    promote_expired_delays();

    check_wall_clock_limit(starvation_runtime, 0xFFFu);

    const auto current = thread_table.threads.find(thread_table.current_uid);
    if (current == thread_table.threads.end() || current->second.state != ThreadState::Running) return;
    const auto best = best_ready_thread();
    if (best == thread_table.continuations.end()) return;
    if (thread_priority(best->uid) >= thread_priority(thread_table.current_uid)) return;

    enqueue_continuation(thread_table.current_uid, ctx);
    (void)activate_next_thread(ctx, "timer-preempt");
}

}

void set_wall_clock_limit(double seconds) {
    wall_clock_limit_seconds = seconds;
    wall_clock_start = std::chrono::steady_clock::now();
}

void ge_worker_shutdown() {
    ge_worker_stop();
}

void install_profile(psprecomp::Runtime &runtime, std::uint32_t user_arena_start) {
    thread_table = ThreadTable{};
    lcs_menu_init(runtime);

    ThreadRecord module_thread{};
    module_thread.name = "module_start";
    module_thread.priority = 32u;
    module_thread.stack_size = 0x10000u;
    module_thread.stack_top = 0x0A000000u;
    module_thread.stack_bottom = module_thread.stack_top - module_thread.stack_size;
    module_thread.kernel_context = module_thread.stack_top - 0x100u;
    thread_table.next_stack_top = module_thread.stack_bottom;
    module_thread.state = ThreadState::Running;
    if (!runtime.memory().contains(module_thread.stack_bottom, module_thread.stack_size))
        throw psprecomp::Error("LCS module_start stack falls outside PSP user RAM");
    runtime.memory().zero(module_thread.stack_bottom, module_thread.stack_size);
    runtime.memory().store32(module_thread.stack_bottom, 0u);
    runtime.memory().store32(module_thread.kernel_context + 0xC0u, 0u);
    runtime.memory().store32(module_thread.kernel_context + 0xC8u, module_thread.stack_bottom);
    runtime.memory().store32(module_thread.kernel_context + 0xF8u, 0xFFFFFFFFu);
    runtime.memory().store32(module_thread.kernel_context + 0xFCu, 0xFFFFFFFFu);
    runtime.cpu().set_gpr(26, module_thread.kernel_context);
    runtime.cpu().set_gpr(29, module_thread.kernel_context);
    thread_table.threads.emplace(0, std::move(module_thread));

    partition_table = PartitionTable{};
    partition_table.next_address = (user_arena_start + 0xFFu) & ~0xFFu;
    callback_table = CallbackTable{};
    semaphore_table = SemaphoreTable{};
    event_flag_table = EventFlagTable{};
    fixed_pool_table = FixedPoolTable{};
    file_table = FileTable{};
    loaded_modules.clear();
    next_module_uid = 0x400;
    volatile_memory_locked = false;
    umd_activated = false;
    umd_callback_notified = false;
    general_purpose_io = 0u;
    savedata_utility = SavedataUtilityState{};
    ge_worker_stop();
    pending_ge_callbacks.clear();
    mpeg_contexts.clear();
    for (auto &state : atrac_contexts) close_atrac_decoder(state);
    atrac_contexts = {};
    sub_interrupts.clear();
    display_state = DisplayState{};
    display_vblank_index = 0u;
    ge_callback_table = GeCallbackTable{};
    ge_next_list_id = 1;
    async_return_frames.clear();
    virtual_time_us = 0u;
    g_vblank_interrupt_due_us = 0u;
    lcs_install_lang(runtime);

    {
        const char *interval_text = std::getenv("PSPRECOMP_TIME_TICK_DISPATCHES");
        std::uint64_t interval = 256u;
        if (interval_text != nullptr && *interval_text != '\0') {
            interval = std::strtoull(interval_text, nullptr, 0);
        }
        starvation_tick_microseconds = std::max<std::uint64_t>(1u, interval / 4u);
        psprecomp::set_runtime_starvation_hook(
            interval == 0u ? nullptr : &lcs_starvation_tick, interval);
    }
    runtime.register_function(0x00000000u, &lcs_module_thread_return, "psp_thread_return");
    runtime.register_function(0x00000004u, &lcs_callback_return, "psp_callback_return");

    std::uint32_t compiled_sdk_version = 0u;
    (void)compiled_sdk_version;

    runtime.register_hle("SysMemUserForUser", 0x7591C7DBu,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {

            set_success(ctx);
        });
    runtime.register_hle("SysMemUserForUser", 0xF77D77CBu,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {

            set_success(ctx);
        });

    runtime.register_hle("SysMemUserForUser", 0xA291F107u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {

            const std::uint32_t low = (partition_table.next_address + 0xFFu) & ~0xFFu;
            const std::uint32_t high = thread_table.next_stack_top & ~0xFFu;
            ctx.set_gpr(2, high > low ? high - low : 0u);
        });

    runtime.register_hle("SysMemUserForUser", 0x237DBD4Fu,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {

            const std::string name = ctx.gpr[5] != 0u ? rt.memory().read_c_string(ctx.gpr[5], 128u) : "partition";
            const std::uint32_t size = ctx.gpr[7];
            const std::uint32_t alignment = 0x100u;
            const std::uint32_t aligned_size = (size + alignment - 1u) & ~(alignment - 1u);
            const std::uint32_t address = (partition_table.next_address + alignment - 1u) & ~(alignment - 1u);
            if (aligned_size == 0u || !rt.memory().contains(address, aligned_size)) {
                ctx.set_gpr(2, 0x80020190u);
                return;
            }
            rt.memory().zero(address, aligned_size);
            const std::int32_t uid = partition_table.next_uid++;
            partition_table.blocks.emplace(uid, PartitionBlock{name, address, aligned_size});
            partition_table.next_address = address + aligned_size;
            ctx.set_gpr(2, static_cast<std::uint32_t>(uid));
        });

    runtime.register_hle("SysMemUserForUser", 0x9D9A5BA1u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {

            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            const auto it = partition_table.blocks.find(uid);
            ctx.set_gpr(2, it == partition_table.blocks.end() ? 0u : it->second.address);
        });

    runtime.register_hle("SysMemUserForUser", 0xB6D61D02u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {

            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            ctx.set_gpr(2, partition_table.blocks.erase(uid) == 1u ? 0u : 0x800200CBu);
        });

    runtime.register_hle("ThreadManForUser", 0x446D8DE6u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {

            const std::string name = ctx.gpr[4] != 0u ? rt.memory().read_c_string(ctx.gpr[4], 128u) : "unnamed";
            const std::uint32_t requested_stack = ctx.gpr[7];
            if (requested_stack < 0x200u) {
                ctx.set_gpr(2, 0x80020194u);
                return;
            }
            const std::uint32_t stack_size = (requested_stack + 0xFFu) & ~0xFFu;
            std::uint32_t stack_bottom = 0u;
            std::uint32_t stack_top = 0u;
            if (!allocate_thread_stack(stack_size, stack_bottom, stack_top) ||
                !rt.memory().contains(stack_bottom, stack_size)) {
                std::cerr << "[thread] create \"" << name << "\" failed: no stack space for "
                          << stack_size << " bytes (threads=" << thread_table.threads.size()
                          << " free_blocks=" << thread_table.free_stacks.size() << ")\n";
                ctx.set_gpr(2, 0x80020190u);
                return;
            }

            ThreadRecord record{
                name,
                ctx.gpr[5],
                ctx.gpr[6],
                stack_size,
                ctx.gpr[8],
            };
            const std::int32_t uid = thread_table.next_uid++;
            record.stack_top = stack_top;
            record.stack_bottom = stack_bottom;
            record.kernel_context = stack_top - 0x100u;
            rt.memory().zero(stack_bottom, stack_size);
            rt.memory().store32(stack_bottom, static_cast<std::uint32_t>(uid));
            rt.memory().store32(record.kernel_context + 0xC0u, static_cast<std::uint32_t>(uid));
            rt.memory().store32(record.kernel_context + 0xC8u, stack_bottom);
            rt.memory().store32(record.kernel_context + 0xF8u, 0xFFFFFFFFu);
            rt.memory().store32(record.kernel_context + 0xFCu, 0xFFFFFFFFu);
            thread_table.threads.emplace(uid, std::move(record));
            ctx.set_gpr(2, static_cast<std::uint32_t>(uid));
        });

    runtime.register_hle("ThreadManForUser", 0xF475845Du,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {

            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            const auto it = thread_table.threads.find(uid);
            if (it == thread_table.threads.end()) {
                ctx.set_gpr(2, 0x80020198u);
                return;
            }
            ThreadRecord &thread = it->second;
            if (thread.state != ThreadState::Created) {
                ctx.set_gpr(2, 0x800201A4u);
                return;
            }

            const std::uint32_t arg_size = ctx.gpr[5];
            const std::uint32_t arg_ptr = ctx.gpr[6];
            std::uint32_t sp = thread.kernel_context;

            psprecomp::AllegrexContext next{};
            if (arg_ptr != 0u && arg_size != 0u) {
                const std::uint32_t aligned_args = (arg_size + 0xFu) & ~0xFu;
                if (sp < thread.stack_bottom + aligned_args + 64u ||
                    !rt.memory().contains(arg_ptr, arg_size)) {
                    ctx.set_gpr(2, 0x800200D3u);
                    return;
                }
                sp -= aligned_args;
                std::vector<std::uint8_t> arguments(arg_size);
                rt.memory().copy_out(arg_ptr, arguments);
                rt.memory().copy_in(sp, arguments);
                next.set_gpr(4, arg_size);
                next.set_gpr(5, sp);
            } else {
                next.set_gpr(4, 0u);
                next.set_gpr(5, 0u);
            }

            sp -= 64u;
            next.set_gpr(26, thread.kernel_context);
            next.set_gpr(28, ctx.gpr[28]);
            next.set_gpr(29, sp);
            next.set_gpr(30, sp);
            next.set_gpr(31, 0u);
            next.pc = thread.entry;
            enqueue_continuation(uid, next);

            const std::int32_t caller_uid = thread_table.current_uid;
            const std::uint32_t caller_priority = thread_priority(caller_uid);

            if (thread.priority < caller_priority) {
                psprecomp::AllegrexContext caller = ctx;
                caller.set_gpr(2, 0u);
                caller.pc = ctx.gpr[31];
                enqueue_continuation(caller_uid, caller);
                (void)activate_next_thread(ctx, "thread-control");
            } else {
                set_success(ctx);
            }
        });

    runtime.register_hle("ThreadManForUser", 0x809CE29Bu,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const std::int32_t uid = thread_table.current_uid;
            complete_current_thread(rt, ctx);
            if (uid == 0 || uid == thread_table.current_uid) return;
            const auto found = thread_table.threads.find(uid);
            if (found == thread_table.threads.end()) return;
            remove_thread_from_wait_queues(uid);
            async_return_frames.erase(uid);
            release_thread_stack(found->second);
            thread_table.threads.erase(found);
        });

    runtime.register_hle("ThreadManForUser", 0x383F7BCCu,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {

            const std::int32_t uid = static_cast<std::int32_t>(ctx.gpr[4]);
            if (uid == 0 || uid == thread_table.current_uid) {
                ctx.set_gpr(2, 0x80020197u);
                return;
            }
            const auto found = thread_table.threads.find(uid);
            if (found == thread_table.threads.end()) {
                ctx.set_gpr(2, 0x80020198u);
                return;
            }
            const bool was_active = found->second.state != ThreadState::Created &&
                                    found->second.state != ThreadState::Completed;
            thread_table.continuations.erase(
                std::remove_if(thread_table.continuations.begin(), thread_table.continuations.end(),
                    [uid](const ThreadContinuation &item) { return item.uid == uid; }),
                thread_table.continuations.end());
            async_return_frames.erase(uid);
            if (was_active) wake_thread_end_waiters(uid, 0x800201ACu);
            else wake_thread_end_waiters(uid, 0u);
            remove_thread_from_wait_queues(uid);
            release_thread_stack(found->second);
            thread_table.threads.erase(found);
            set_success(ctx);
        });

    runtime.register_hle("ThreadManForUser", 0x9FA03CD3u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {

            const std::int32_t uid = static_cast<std::int32_t>(ctx.gpr[4]);
            if (uid == 0 || uid == thread_table.current_uid) {
                ctx.set_gpr(2, 0x800201A4u);
                return;
            }
            const auto found = thread_table.threads.find(uid);
            if (found == thread_table.threads.end()) {
                ctx.set_gpr(2, 0x80020198u);
                return;
            }
            if (found->second.state != ThreadState::Created &&
                found->second.state != ThreadState::Completed) {
                ctx.set_gpr(2, 0x800201A4u);
                return;
            }
            remove_thread_from_wait_queues(uid);
            async_return_frames.erase(uid);
            release_thread_stack(found->second);
            thread_table.threads.erase(found);
            set_success(ctx);
        });

    runtime.register_hle("ThreadManForUser", 0x9944F31Fu,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {

            const std::int32_t uid = static_cast<std::int32_t>(ctx.gpr[4]);
            if (uid == 0 || uid == thread_table.current_uid) {
                ctx.set_gpr(2, 0x80020197u);
                return;
            }
            const auto found = thread_table.threads.find(uid);
            if (found == thread_table.threads.end()) {
                ctx.set_gpr(2, 0x80020198u);
                return;
            }
            ThreadRecord &thread = found->second;
            if (thread.state == ThreadState::Completed || thread.state == ThreadState::Created) {
                ctx.set_gpr(2, 0x800201A2u);
                return;
            }
            if (thread.externally_suspended) {
                ctx.set_gpr(2, 0x800201A3u);
                return;
            }

            thread.externally_suspended = true;
            const auto continuation = std::find_if(
                thread_table.continuations.begin(), thread_table.continuations.end(),
                [uid](const ThreadContinuation &item) { return item.uid == uid; });
            if (continuation != thread_table.continuations.end()) {
                thread.suspended_context = continuation->context;
                thread.state = ThreadState::Ready;
                thread_table.continuations.erase(continuation);
            }
            set_success(ctx);
        });

    runtime.register_hle("ThreadManForUser", 0x75156E8Fu,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {

            const std::int32_t uid = static_cast<std::int32_t>(ctx.gpr[4]);
            if (uid == 0 || uid == thread_table.current_uid) {
                ctx.set_gpr(2, 0x80020197u);
                return;
            }
            const auto found = thread_table.threads.find(uid);
            if (found == thread_table.threads.end()) {
                ctx.set_gpr(2, 0x80020198u);
                return;
            }
            ThreadRecord &thread = found->second;
            if (!thread.externally_suspended) {
                ctx.set_gpr(2, 0x800201A5u);
                return;
            }
            thread.externally_suspended = false;
            if (thread.state == ThreadState::Ready)
                enqueue_continuation(uid, thread.suspended_context);
            set_success(ctx);
            (void)preempt_if_higher_priority(ctx, "thread-resume");
        });

    runtime.register_hle("ThreadManForUser", 0x293B45B8u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {

            ctx.set_gpr(2, static_cast<std::uint32_t>(thread_table.current_uid));
        });

    runtime.register_hle("ThreadManForUser", 0x71BC9871u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {

            std::int32_t uid = static_cast<std::int32_t>(ctx.gpr[4]);
            if (uid == 0)
                uid = thread_table.current_uid;

            std::uint32_t priority = ctx.gpr[5];
            if (priority == 0u)
                priority = thread_priority(thread_table.current_uid);

            const auto found = thread_table.threads.find(uid);
            if (found == thread_table.threads.end()) {
                ctx.set_gpr(2, 0x80020198u);
                return;
            }
            ThreadRecord &thread = found->second;
            if (thread.state == ThreadState::Created || thread.state == ThreadState::Completed) {
                ctx.set_gpr(2, 0x800201A2u);
                return;
            }
            if (priority < 0x08u || priority > 0x77u) {
                ctx.set_gpr(2, 0x80020193u);
                return;
            }

            thread.priority = priority;

            const auto best = best_ready_thread();
            const std::uint32_t current_priority = thread_priority(thread_table.current_uid);
            if (best != thread_table.continuations.end() &&
                thread_priority(best->uid) < current_priority) {
                const std::int32_t caller_uid = thread_table.current_uid;
                psprecomp::AllegrexContext caller = ctx;
                caller.set_gpr(2, 0u);
                caller.pc = ctx.gpr[31];
                enqueue_continuation(caller_uid, caller);
                (void)activate_next_thread(ctx, "thread-control");
                return;
            }
            set_success(ctx);
        });

    runtime.register_hle("ThreadManForUser", 0x110DEC9Au,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {

            const std::uint32_t output = ctx.gpr[5];
            if (!rt.memory().contains(output, 8u)) {
                ctx.set_gpr(2, 0x800200D3u);
                return;
            }
            rt.memory().store32(output, ctx.gpr[4]);
            rt.memory().store32(output + 4u, 0u);
            set_success(ctx);
        });

    runtime.register_hle("ThreadManForUser", 0xC8CD158Cu,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {

            ctx.set_gpr(2, ctx.gpr[4]);
            ctx.set_gpr(3, 0u);
        });

    runtime.register_hle("ThreadManForUser", 0xBA6B92E2u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {

            const std::uint32_t clock = ctx.gpr[4];
            const std::uint32_t seconds_out = ctx.gpr[5];
            const std::uint32_t usec_out = ctx.gpr[6];
            if (!rt.memory().contains(clock, 8u)) {
                ctx.set_gpr(2, 0x800200D3u);
                return;
            }
            const std::uint64_t ticks = static_cast<std::uint64_t>(rt.memory().load32(clock)) |
                (static_cast<std::uint64_t>(rt.memory().load32(clock + 4u)) << 32u);
            if (rt.memory().contains(seconds_out, 4u))
                rt.memory().store32(seconds_out, static_cast<std::uint32_t>(ticks / 1'000'000u));
            if (rt.memory().contains(usec_out, 4u))
                rt.memory().store32(usec_out, static_cast<std::uint32_t>(ticks % 1'000'000u));
            set_success(ctx);
        });

    runtime.register_hle("ThreadManForUser", 0xE1619D7Cu,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {

            const std::uint64_t ticks = static_cast<std::uint64_t>(ctx.gpr[4]) |
                (static_cast<std::uint64_t>(ctx.gpr[5]) << 32u);
            if (rt.memory().contains(ctx.gpr[6], 4u))
                rt.memory().store32(ctx.gpr[6], static_cast<std::uint32_t>(ticks / 1'000'000u));
            if (rt.memory().contains(ctx.gpr[7], 4u))
                rt.memory().store32(ctx.gpr[7], static_cast<std::uint32_t>(ticks % 1'000'000u));
            set_success(ctx);
        });

    runtime.register_hle("ThreadManForUser", 0xDB738F35u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {

            const std::uint32_t output = ctx.gpr[4];
            if (!rt.memory().contains(output, 8u)) {
                ctx.set_gpr(2, 0x800200D3u);
                return;
            }
            const std::uint64_t usec = system_time_microseconds();
            rt.memory().store32(output, static_cast<std::uint32_t>(usec));
            rt.memory().store32(output + 4u, static_cast<std::uint32_t>(usec >> 32u));
            set_success(ctx);
        });

    runtime.register_hle("ThreadManForUser", 0x82BC5777u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {

            const std::uint64_t usec = system_time_microseconds();
            ctx.set_gpr(2, static_cast<std::uint32_t>(usec));
            ctx.set_gpr(3, static_cast<std::uint32_t>(usec >> 32u));
        });

    runtime.register_hle("ThreadManForUser", 0x369ED59Du,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {

            ctx.set_gpr(2, static_cast<std::uint32_t>(system_time_microseconds()));
        });

    const auto refer_profiler = [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        ctx.set_gpr(2, 0u);
    };
    runtime.register_hle("ThreadManForUser", 0x64D4540Eu, refer_profiler);
    runtime.register_hle("ThreadManForUser", 0x8218B4DDu, refer_profiler);

    runtime.register_hle("ThreadManForUser", 0xEA748E31u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {

            const std::uint32_t reserved = ctx.gpr[4];
            const std::uint32_t attributes = ctx.gpr[5];
            if (reserved != 0u) {
                ctx.set_gpr(2, 0x800200D2u);
                return;
            }
            if (auto current = thread_table.threads.find(thread_table.current_uid);
                current != thread_table.threads.end()) {
                current->second.attributes |= attributes;
            }
            set_success(ctx);
        });

    auto sleep_thread = [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
        (void)sleep_current_thread(rt, ctx);
    };
    runtime.register_hle("ThreadManForUser", 0x9ACE131Eu, sleep_thread);
    runtime.register_hle("ThreadManForUser", 0x82826F70u, sleep_thread);
    runtime.register_hle("ThreadManForUser", 0xD59EAD2Fu,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {

            const std::uint32_t result = wake_thread(static_cast<std::int32_t>(ctx.gpr[4]));
            ctx.set_gpr(2, result);
            if (result == 0u) (void)preempt_if_higher_priority(ctx, "thread-wakeup");
        });
    runtime.register_hle("ThreadManForUser", 0xFCCFAD26u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {

            const auto found = thread_table.threads.find(static_cast<std::int32_t>(ctx.gpr[4]));
            if (found == thread_table.threads.end()) {
                ctx.set_gpr(2, 0x80020198u);
                return;
            }
            const std::uint32_t previous = found->second.wakeup_count;
            found->second.wakeup_count = 0u;
            ctx.set_gpr(2, previous);
        });

    runtime.register_hle("ThreadManForUser", 0xAA73C935u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {

            if (auto current = thread_table.threads.find(thread_table.current_uid);
                current != thread_table.threads.end()) {
                current->second.exit_status = ctx.gpr[4];
            }
            complete_current_thread(rt, ctx);
        });

    runtime.register_hle("ThreadManForUser", 0x278C0DF5u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {

            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            const auto it = thread_table.threads.find(uid);
            if (uid <= 0 || it == thread_table.threads.end()) {
                ctx.set_gpr(2, 0x80020198u);
                return;
            }
            if (it->second.state == ThreadState::Completed) {
                set_success(ctx);
                return;
            }
            psprecomp::AllegrexContext waiter = ctx;
            waiter.set_gpr(2, 0u);
            waiter.pc = ctx.gpr[31];
            thread_table.thread_end_waiters[uid].push_back({thread_table.current_uid, waiter});
            if (auto current = thread_table.threads.find(thread_table.current_uid);
                current != thread_table.threads.end()) {
                current->second.state = ThreadState::Sleeping;
                current->second.suspended_context = waiter;
            }
            if (!activate_next_thread(ctx, "kernel-wait")) {
                rt.stop("PSP thread wait deadlock on uid " + std::to_string(uid));
            }
        });

    auto delay_thread = [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
        if (deliver_pending_ge_callback(ctx, ctx.gpr[4])) return;
        if (dispatch_vblank_interrupt_if_due(rt, ctx, ctx.gpr[4])) return;
        (void)delay_current_thread(rt, ctx, ctx.gpr[4]);
    };
    auto delay_thread_cb = [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
        if (try_dispatch_pending_callback(ctx)) return;
        if (deliver_pending_ge_callback(ctx, ctx.gpr[4])) return;
        if (dispatch_vblank_interrupt_if_due(rt, ctx, ctx.gpr[4])) return;
        (void)delay_current_thread(rt, ctx, ctx.gpr[4]);
    };
    runtime.register_hle("ThreadManForUser", 0xCEADEB47u, delay_thread);
    runtime.register_hle("ThreadManForUser", 0x68DA9E36u, delay_thread_cb);

    runtime.register_hle("ThreadManForUser", 0xE81CAF8Fu,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {

            const std::string name = ctx.gpr[4] != 0u ? rt.memory().read_c_string(ctx.gpr[4], 128u) : "callback";
            const std::int32_t uid = callback_table.next_uid++;
            callback_table.callbacks.emplace(uid, CallbackRecord{
                name, ctx.gpr[5], ctx.gpr[6], thread_table.current_uid, 0u, 0u});
            notify_umd_callback();
            ctx.set_gpr(2, static_cast<std::uint32_t>(uid));
        });
    runtime.register_hle("ThreadManForUser", 0xEDBA5844u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {

            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            ctx.set_gpr(2, callback_table.callbacks.erase(uid) == 1u ? 0u : 0x800201A1u);
        });

    runtime.register_hle("ThreadManForUser", 0x349D6D6Cu,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {

            virtual_time_us += 25u;
            promote_expired_delays();

            if (!try_dispatch_pending_callback(ctx)) {
                set_success(ctx);
                (void)preempt_if_higher_priority(ctx, "check-callback");
            }
        });

    runtime.register_hle("ThreadManForUser", 0xD6DA4BA1u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {

            const std::string name = ctx.gpr[4] != 0u ? rt.memory().read_c_string(ctx.gpr[4], 128u) : "semaphore";
            const auto initial = static_cast<std::int32_t>(ctx.gpr[6]);
            const auto maximum = static_cast<std::int32_t>(ctx.gpr[7]);
            if (initial < 0 || maximum <= 0 || initial > maximum) {
                ctx.set_gpr(2, 0x800201B0u);
                return;
            }
            const std::int32_t uid = semaphore_table.next_uid++;
            semaphore_table.semaphores.emplace(uid, SemaphoreRecord{name, initial, maximum, {}});
            ctx.set_gpr(2, static_cast<std::uint32_t>(uid));
        });
    runtime.register_hle("ThreadManForUser", 0x28B6489Cu,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {

            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            const auto found = semaphore_table.semaphores.find(uid);
            if (found == semaphore_table.semaphores.end()) {
                ctx.set_gpr(2, 0x80020199u);
                return;
            }
            for (auto &waiter : found->second.waiters) {
                waiter.context.set_gpr(2, 0x800201A7u);
                enqueue_continuation(waiter.uid, waiter.context);
            }
            semaphore_table.semaphores.erase(found);
            set_success(ctx);
            (void)preempt_if_higher_priority(ctx, "semaphore-delete");
        });
    runtime.register_hle("ThreadManForUser", 0x3F53E640u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {

            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            const auto amount = static_cast<std::int32_t>(ctx.gpr[5]);
            const auto it = semaphore_table.semaphores.find(uid);
            if (it == semaphore_table.semaphores.end() || amount <= 0 ||
                static_cast<std::int64_t>(it->second.count) + amount > it->second.maximum) {
                ctx.set_gpr(2, 0x80020199u);
                return;
            }
            SemaphoreRecord &semaphore = it->second;
            semaphore.count += amount;
            auto waiter = semaphore.waiters.begin();
            while (waiter != semaphore.waiters.end()) {
                if (semaphore.count >= waiter->requested) {
                    semaphore.count -= waiter->requested;
                    waiter->context.set_gpr(2, 0u);
                    enqueue_continuation(waiter->uid, waiter->context);
                    waiter = semaphore.waiters.erase(waiter);
                } else {
                    ++waiter;
                }
            }
            set_success(ctx);
            (void)preempt_if_higher_priority(ctx, "semaphore-signal");
        });
    auto semaphore_wait = [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {

        const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
        const auto amount = static_cast<std::int32_t>(ctx.gpr[5]);
        const auto it = semaphore_table.semaphores.find(uid);
        if (it == semaphore_table.semaphores.end() || amount <= 0 || amount > it->second.maximum) {
            ctx.set_gpr(2, 0x80020199u);
            return;
        }
        if (it->second.count >= amount) {
            it->second.count -= amount;
            set_success(ctx);
            return;
        }
        const psprecomp::AllegrexContext suspended = make_wait_context(ctx);
        it->second.waiters.push_back(SemaphoreWaiter{thread_table.current_uid, suspended, amount});
        (void)suspend_current_thread(rt, ctx, suspended, "semaphore " + std::to_string(uid));
    };
    runtime.register_hle("ThreadManForUser", 0x4E3A1105u, semaphore_wait);
    runtime.register_hle("ThreadManForUser", 0x6D212BACu, semaphore_wait);
    runtime.register_hle("ThreadManForUser", 0x58B1F937u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {

            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            const auto amount = static_cast<std::int32_t>(ctx.gpr[5]);
            const auto it = semaphore_table.semaphores.find(uid);
            if (it == semaphore_table.semaphores.end() || amount <= 0 || amount > it->second.maximum) {
                ctx.set_gpr(2, 0x80020199u);
                return;
            }
            if (it->second.count < amount) {
                ctx.set_gpr(2, 0x800201AEu);
                return;
            }
            it->second.count -= amount;
            set_success(ctx);
        });

    runtime.register_hle("ThreadManForUser", 0x55C20A00u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {

            const std::string name = ctx.gpr[4] != 0u ? rt.memory().read_c_string(ctx.gpr[4], 128u) : "event_flag";
            const std::int32_t uid = event_flag_table.next_uid++;
            std::uint32_t initial_pattern = ctx.gpr[6];
            if (name == "UmdStreamEventFlag") initial_pattern |= 0x1u;
            event_flag_table.flags.emplace(uid, EventFlagRecord{name, ctx.gpr[5], ctx.gpr[6], initial_pattern, {}});
            ctx.set_gpr(2, static_cast<std::uint32_t>(uid));
        });
    runtime.register_hle("ThreadManForUser", 0xEF9E4C70u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {

            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            const auto found = event_flag_table.flags.find(uid);
            if (found == event_flag_table.flags.end()) {
                ctx.set_gpr(2, 0x8002019Au);
                return;
            }
            for (auto &waiter : found->second.waiters) {
                waiter.context.set_gpr(2, 0x800201A7u);
                enqueue_continuation(waiter.uid, waiter.context);
            }
            event_flag_table.flags.erase(found);
            set_success(ctx);
            (void)preempt_if_higher_priority(ctx, "event-flag-delete");
        });
    runtime.register_hle("ThreadManForUser", 0x1FB15A32u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {

            const auto it = event_flag_table.flags.find(static_cast<std::int32_t>(ctx.gpr[4]));
            if (it == event_flag_table.flags.end()) {
                ctx.set_gpr(2, 0x8002019Au);
                return;
            }
            EventFlagRecord &flag = it->second;
            flag.current_pattern |= ctx.gpr[5];
            auto waiter = flag.waiters.begin();
            while (waiter != flag.waiters.end()) {
                if (!event_flag_matches(flag, waiter->requested, waiter->mode)) {
                    ++waiter;
                    continue;
                }
                if (waiter->output_address != 0u && rt.memory().contains(waiter->output_address, 4u))
                    rt.memory().store32(waiter->output_address, flag.current_pattern);
                consume_event_flag(flag, waiter->requested, waiter->mode);
                waiter->context.set_gpr(2, 0u);
                enqueue_continuation(waiter->uid, waiter->context);
                waiter = flag.waiters.erase(waiter);
            }
            set_success(ctx);
            (void)preempt_if_higher_priority(ctx, "event-flag-set");
        });
    runtime.register_hle("ThreadManForUser", 0x812346E4u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {

            const auto it = event_flag_table.flags.find(static_cast<std::int32_t>(ctx.gpr[4]));
            if (it == event_flag_table.flags.end()) {
                ctx.set_gpr(2, 0x8002019Au);
                return;
            }
            it->second.current_pattern &= ctx.gpr[5];
            set_success(ctx);
        });
    auto event_flag_wait = [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {

        const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
        const auto it = event_flag_table.flags.find(uid);
        if (it == event_flag_table.flags.end()) {
            ctx.set_gpr(2, 0x8002019Au);
            return;
        }
        const std::uint32_t requested = ctx.gpr[5];
        const std::uint32_t mode = ctx.gpr[6];
        if (requested == 0u || (mode & ~0x31u) != 0u) {
            ctx.set_gpr(2, 0x800201B1u);
            return;
        }
        if (event_flag_matches(it->second, requested, mode)) {
            if (ctx.gpr[7] != 0u && rt.memory().contains(ctx.gpr[7], 4u))
                rt.memory().store32(ctx.gpr[7], it->second.current_pattern);
            consume_event_flag(it->second, requested, mode);
            set_success(ctx);
            return;
        }
        const psprecomp::AllegrexContext suspended = make_wait_context(ctx);
        it->second.waiters.push_back(EventFlagWaiter{
            thread_table.current_uid, suspended, requested, mode, ctx.gpr[7]});
        (void)suspend_current_thread(rt, ctx, suspended, "event flag " + std::to_string(uid));
    };
    runtime.register_hle("ThreadManForUser", 0x402FCF22u, event_flag_wait);
    runtime.register_hle("ThreadManForUser", 0x328C546Au, event_flag_wait);
    runtime.register_hle("ThreadManForUser", 0x30FD48F0u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {

            const auto it = event_flag_table.flags.find(static_cast<std::int32_t>(ctx.gpr[4]));
            if (it == event_flag_table.flags.end()) {
                ctx.set_gpr(2, 0x8002019Au);
                return;
            }
            const std::uint32_t requested = ctx.gpr[5];
            const std::uint32_t mode = ctx.gpr[6];
            if (!event_flag_matches(it->second, requested, mode)) {
                if (ctx.gpr[7] != 0u && rt.memory().contains(ctx.gpr[7], 4u))
                    rt.memory().store32(ctx.gpr[7], it->second.current_pattern);
                ctx.set_gpr(2, 0x800201AFu);
                return;
            }
            if (ctx.gpr[7] != 0u && rt.memory().contains(ctx.gpr[7], 4u))
                rt.memory().store32(ctx.gpr[7], it->second.current_pattern);
            consume_event_flag(it->second, requested, mode);
            set_success(ctx);
        });

    runtime.register_hle("ThreadManForUser", 0xC07BB470u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {

            const std::string name = ctx.gpr[4] != 0u ? rt.memory().read_c_string(ctx.gpr[4], 128u) : "fpl";
            const std::uint32_t block_size = ctx.gpr[7];
            const std::uint32_t block_count = ctx.gpr[8];
            if (block_size == 0u || block_count == 0u ||
                block_size > 0xFFFFFFFFu / block_count) {
                ctx.set_gpr(2, 0x800201B0u);
                return;
            }
            const std::uint32_t alignment = 0x100u;
            const std::uint32_t total = block_size * block_count;
            const std::uint32_t address = (partition_table.next_address + alignment - 1u) & ~(alignment - 1u);
            const std::uint32_t reserved = (total + alignment - 1u) & ~(alignment - 1u);
            if (!rt.memory().contains(address, reserved) || address + reserved > thread_table.next_stack_top) {
                ctx.set_gpr(2, 0x80020190u);
                return;
            }
            rt.memory().zero(address, reserved);
            const std::int32_t uid = fixed_pool_table.next_uid++;
            fixed_pool_table.pools.emplace(uid, FixedPoolRecord{name, address, block_size, block_count,
                std::vector<bool>(block_count, false)});
            partition_table.next_address = address + reserved;
            ctx.set_gpr(2, static_cast<std::uint32_t>(uid));
        });

    runtime.register_hle("ThreadManForUser", 0xD979E9BFu,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {

            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            const std::uint32_t output = ctx.gpr[5];
            const auto it = fixed_pool_table.pools.find(uid);
            if (it == fixed_pool_table.pools.end() || !rt.memory().contains(output, 4u)) {
                ctx.set_gpr(2, 0x800201A8u);
                return;
            }
            auto &pool = it->second;
            const auto free_it = std::find(pool.allocated.begin(), pool.allocated.end(), false);
            if (free_it == pool.allocated.end()) {
                ctx.set_gpr(2, 0x80020190u);
                return;
            }
            const std::size_t index = static_cast<std::size_t>(free_it - pool.allocated.begin());
            pool.allocated[index] = true;
            rt.memory().store32(output, pool.address + static_cast<std::uint32_t>(index) * pool.block_size);
            set_success(ctx);
        });

    runtime.register_hle("ThreadManForUser", 0x623AE665u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            rt.invoke_import("ThreadManForUser", 0xD979E9BFu, ctx);
        });

    runtime.register_hle("ThreadManForUser", 0xF6414A71u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            const std::uint32_t block = ctx.gpr[5];
            const auto it = fixed_pool_table.pools.find(uid);
            if (it == fixed_pool_table.pools.end()) {
                ctx.set_gpr(2, 0x800201A8u);
                return;
            }
            auto &pool = it->second;
            if (block < pool.address || pool.block_size == 0u) {
                ctx.set_gpr(2, 0x800201A9u);
                return;
            }
            const std::uint32_t offset = block - pool.address;
            const std::size_t index = offset / pool.block_size;
            if (offset % pool.block_size != 0u || index >= pool.allocated.size()) {
                ctx.set_gpr(2, 0x800201A9u);
                return;
            }
            pool.allocated[index] = false;
            set_success(ctx);
        });

    runtime.register_hle("ThreadManForUser", 0xED1410E0u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            const auto it = fixed_pool_table.pools.find(uid);
            if (it == fixed_pool_table.pools.end()) {
                ctx.set_gpr(2, 0x800201A8u);
                return;
            }

            const auto &pool = it->second;
            constexpr std::uint32_t alignment = 0x100u;
            const std::uint32_t reserved =
                (pool.block_size * pool.block_count + alignment - 1u) & ~(alignment - 1u);
            if (pool.address + reserved == partition_table.next_address)
                partition_table.next_address = pool.address;
            fixed_pool_table.pools.erase(it);
            set_success(ctx);
        });

    runtime.register_hle("IoFileMgrForUser", 0xB293727Fu,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) { set_success(ctx); });

    runtime.register_hle("IoFileMgrForUser", 0x54F5FB11u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const std::string device =
                ctx.gpr[4] != 0u ? rt.memory().read_c_string(ctx.gpr[4], 128u) : std::string{};
            const std::uint32_t command = ctx.gpr[5];
            const std::uint32_t input = ctx.gpr[6];
            const std::uint32_t input_length = ctx.gpr[7];
            const std::uint32_t output = rt.memory().contains(ctx.gpr[29] + 16u, 8u)
                ? rt.memory().load32(ctx.gpr[29] + 16u) : 0u;
            const std::uint32_t output_length = rt.memory().contains(ctx.gpr[29] + 20u, 4u)
                ? rt.memory().load32(ctx.gpr[29] + 20u) : 0u;

            if (command == 0x02425823u && (device == "fatms0:" || device == "ms0:")) {
                if (output == 0u || !rt.memory().contains(output, 4u)) {
                    ctx.set_gpr(2, 0x80010016u);
                    return;
                }
                rt.memory().store32(output, memory_stick_fat_state);
                set_success(ctx);
                return;
            }
            if (command == 0x02415823u && (device == "fatms0:" || device == "ms0:")) {
                if (input == 0u || input_length < 4u || !rt.memory().contains(input, 4u)) {
                    ctx.set_gpr(2, 0x80010016u);
                    return;
                }
                memory_stick_fat_state = rt.memory().load32(input) != 0u ? 1u : 0u;
                set_success(ctx);
                return;
            }
            if (command == 0x02425824u && (device == "fatms0:" || device == "ms0:")) {
                if (output == 0u || output_length < 4u || !rt.memory().contains(output, 4u)) {
                    ctx.set_gpr(2, 0x80010016u);
                    return;
                }
                rt.memory().store32(output, 0u);
                set_success(ctx);
                return;
            }
            if (command == 0x02025806u && (device == "mscmhc0:" || device == "ms0:")) {
                if (output == 0u || output_length < 4u || !rt.memory().contains(output, 4u)) {
                    ctx.set_gpr(2, 0x80010016u);
                    return;
                }
                rt.memory().store32(output, 1u);
                set_success(ctx);
                return;
            }
            ctx.set_gpr(2, 0x80010016u);
        });

    runtime.register_hle("IoFileMgrForUser", 0x109F50BCu,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const std::string path = rt.memory().read_c_string(ctx.gpr[4]);
            // Reject write/create/truncate/append before opening any native path.
            if (stress_test_enabled() && (ctx.gpr[5] & (0x0002u | 0x0100u | 0x0200u | 0x0400u)) != 0u) {
                stress_test_note_blocked_write();
                ctx.set_gpr(2, 0x8001000Du);
                return;
            }

            if (path.rfind("disc0:/sce_lbn0x", 0u) == 0u) {
                const auto size_marker = path.find("_size0x");
                if (size_marker != std::string::npos) {
                    const std::string lbn_text = path.substr(16u, size_marker - 16u);
                    char *lbn_end = nullptr;
                    const unsigned long long raw_lbn = std::strtoull(lbn_text.c_str(), &lbn_end, 16);
                    const std::string size_text = path.substr(size_marker + 7u);
                    char *size_end = nullptr;
                    const unsigned long long declared_size =
                        std::strtoull(size_text.c_str(), &size_end, 16);
                    const bool parsed = lbn_end != lbn_text.c_str() && *lbn_end == '\0' &&
                        size_end != size_text.c_str() && raw_lbn <= 0xFFFFFFFFull;
                    if (parsed) {
                        if (const auto *disc_file =
                                find_virtual_disc_file(static_cast<std::uint32_t>(raw_lbn))) {
                            std::fstream stream(disc_file->native_path, std::ios::binary | std::ios::in);
                            if (stream) {
                                const auto fd = file_table.next_fd++;
                                file_table.files.emplace(fd, std::move(stream));
                                file_table.raw_sector_files.emplace(
                                    fd, RawSectorFile{0ull, disc_file->size});
                                ctx.set_gpr(2, static_cast<std::uint32_t>(fd));
                                return;
                            }
                        }
                        const std::uint64_t base_offset = raw_lbn * 2048ull;
                        const auto fd = file_table.next_fd++;
                        file_table.virtual_disc_handles.emplace(
                            fd, VirtualDiscHandle{base_offset, declared_size, 0u});
                        ctx.set_gpr(2, static_cast<std::uint32_t>(fd));
                        return;
                    }
                }
            }

            const auto native = rt.translate_path(path);
            const std::uint32_t flags = ctx.gpr[5];
            std::ios::openmode mode = std::ios::binary;
            if ((flags & 0x0001u) != 0u) mode |= std::ios::in;
            if ((flags & 0x0002u) != 0u) mode |= std::ios::out;
            std::fstream stream(native, mode);
            if (!stream) {
                ctx.set_gpr(2, 0x80010002u);
                return;
            }
            const auto fd = file_table.next_fd++;
            file_table.files.emplace(fd, std::move(stream));
            ctx.set_gpr(2, static_cast<std::uint32_t>(fd));
        });

    runtime.register_hle("IoFileMgrForUser", 0x810C4BC3u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            const auto fd = static_cast<std::int32_t>(ctx.gpr[4]);
            file_table.raw_sector_files.erase(fd);
            if (file_table.virtual_disc_handles.erase(fd) == 1u) {
                ctx.set_gpr(2, 0u);
                return;
            }
            ctx.set_gpr(2, file_table.files.erase(fd) == 1u ? 0u : 0x80010009u);
        });

    runtime.register_hle("IoFileMgrForUser", 0x6A638D83u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const auto fd = static_cast<std::int32_t>(ctx.gpr[4]);
            const std::uint32_t dst = ctx.gpr[5];
            std::uint32_t size = ctx.gpr[6];
            if (const auto virtual_handle = file_table.virtual_disc_handles.find(fd);
                virtual_handle != file_table.virtual_disc_handles.end()) {
                if (!rt.memory().contains(dst, size)) {
                    ctx.set_gpr(2, 0x80010009u);
                    return;
                }
                std::uint8_t *destination = rt.memory().raw_pointer(dst, size);
                if (destination == nullptr) {
                    ctx.set_gpr(2, 0x80010009u);
                    return;
                }
                const auto read = read_virtual_disc(virtual_handle->second,
                                                    std::span<std::uint8_t>(destination, size));
                if (read != 0u) {
                    (void)defer_current_thread_for_io_handoff(
                        ctx, static_cast<std::uint32_t>(read));
                } else {
                    ctx.set_gpr(2, static_cast<std::uint32_t>(read));
                }
                return;
            }
            const auto it = file_table.files.find(fd);
            if (it == file_table.files.end() || !rt.memory().contains(dst, size)) {
                ctx.set_gpr(2, 0x80010009u);
                return;
            }
            const auto bound = file_table.raw_sector_files.find(fd);
            if (bound != file_table.raw_sector_files.end()) {
                it->second.clear();
                const auto position = static_cast<std::uint64_t>(it->second.tellg());
                const std::uint64_t end = bound->second.base + bound->second.size;
                const std::uint64_t remaining = position < end ? end - position : 0ull;
                if (remaining < size) size = static_cast<std::uint32_t>(remaining);
                if (size == 0u) {
                    ctx.set_gpr(2, 0u);
                    return;
                }
            }
            std::uint8_t *guest_destination = rt.memory().raw_pointer(dst, size);
            if (guest_destination == nullptr) {
                ctx.set_gpr(2, 0x80010009u);
                return;
            }
            it->second.clear();
            it->second.read(reinterpret_cast<char *>(guest_destination), static_cast<std::streamsize>(size));
            const auto read = static_cast<std::uint32_t>(it->second.gcount());
            ctx.set_gpr(2, read);
        });

    runtime.register_hle("IoFileMgrForUser", 0x42EC03ACu,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            if (stress_test_enabled()) {
                stress_test_note_blocked_write();
                ctx.set_gpr(2, 0x8001000Du);
                return;
            }
            const auto fd = static_cast<std::int32_t>(ctx.gpr[4]);
            const std::uint32_t src = ctx.gpr[5];
            const std::uint32_t size = ctx.gpr[6];
            const auto it = file_table.files.find(fd);
            if (it == file_table.files.end() || !rt.memory().contains(src, size)) {
                ctx.set_gpr(2, 0x80010009u);
                return;
            }
            const std::uint8_t *guest_source = rt.memory().raw_pointer(src, size);
            if (guest_source == nullptr) {
                ctx.set_gpr(2, 0x80010009u);
                return;
            }
            it->second.clear();
            it->second.write(reinterpret_cast<const char *>(guest_source), static_cast<std::streamsize>(size));
            ctx.set_gpr(2, it->second ? size : 0u);
        });

    runtime.register_hle("IoFileMgrForUser", 0x27EB27B8u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            const auto fd = static_cast<std::int32_t>(ctx.gpr[4]);
            const std::uint64_t raw_offset = static_cast<std::uint64_t>(ctx.gpr[6]) |
                (static_cast<std::uint64_t>(ctx.gpr[7]) << 32u);
            const auto offset = static_cast<std::int64_t>(raw_offset);
            const auto whence = static_cast<std::int32_t>(ctx.gpr[8]);
            if (const auto virtual_handle = file_table.virtual_disc_handles.find(fd);
                virtual_handle != file_table.virtual_disc_handles.end() && whence >= 0 && whence <= 2) {
                VirtualDiscHandle &handle = virtual_handle->second;
                std::int64_t target = offset;
                if (whence == 1) target += static_cast<std::int64_t>(handle.position);
                if (whence == 2) target += static_cast<std::int64_t>(handle.length);
                if (target < 0) target = 0;
                if (static_cast<std::uint64_t>(target) > handle.length) target =
                    static_cast<std::int64_t>(handle.length);
                handle.position = static_cast<std::uint64_t>(target);
                ctx.set_gpr(2, static_cast<std::uint32_t>(handle.position));
                ctx.set_gpr(3, static_cast<std::uint32_t>(handle.position >> 32u));
                return;
            }
            const auto it = file_table.files.find(fd);
            if (it == file_table.files.end() || whence < 0 || whence > 2) {
                ctx.set_gpr(2, 0x80010009u);
                ctx.set_gpr(3, 0xFFFFFFFFu);
                return;
            }
            std::ios_base::seekdir direction = std::ios::beg;
            if (whence == 1) direction = std::ios::cur;
            if (whence == 2) direction = std::ios::end;
            it->second.clear();
            const auto raw = file_table.raw_sector_files.find(fd);
            if (raw != file_table.raw_sector_files.end()) {
                std::int64_t target = offset;
                if (whence == 0) target += static_cast<std::int64_t>(raw->second.base);
                if (whence == 1) target += static_cast<std::int64_t>(it->second.tellg());
                if (whence == 2) {
                    target += static_cast<std::int64_t>(raw->second.base + raw->second.size);
                }
                it->second.seekg(static_cast<std::streamoff>(target), std::ios::beg);
            } else {
                it->second.seekg(static_cast<std::streamoff>(offset), direction);
            }
            if (!it->second) {
                ctx.set_gpr(2, 0x80010016u);
                ctx.set_gpr(3, 0xFFFFFFFFu);
                return;
            }
            auto position = static_cast<std::uint64_t>(it->second.tellg());
            if (raw != file_table.raw_sector_files.end()) {
                position = position >= raw->second.base ? position - raw->second.base : 0ull;
            }
            ctx.set_gpr(2, static_cast<std::uint32_t>(position));
            ctx.set_gpr(3, static_cast<std::uint32_t>(position >> 32u));
        });

    runtime.register_hle("IoFileMgrForUser", 0xACE946E8u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const std::string path = rt.memory().read_c_string(ctx.gpr[4]);
            const std::uint32_t stat_address = ctx.gpr[5];
            if (stat_address == 0u || !rt.memory().contains(stat_address, 0x58u)) {
                ctx.set_gpr(2, 0x80010016u);
                return;
            }
            std::error_code error;
            const auto native = rt.translate_path(path);
            const bool directory = std::filesystem::is_directory(native, error);
            const bool regular = std::filesystem::is_regular_file(native, error);
            if (!directory && !regular) {
                ctx.set_gpr(2, 0x80010002u);
                return;
            }
            rt.memory().zero(stat_address, 0x58u);
            rt.memory().store32(stat_address + 0x00u, (directory ? 0x1000u : 0x2000u) | 0x01FFu);
            rt.memory().store32(stat_address + 0x04u, directory ? 0x0010u : 0x0020u);
            const std::uint64_t size = regular
                ? static_cast<std::uint64_t>(std::filesystem::file_size(native, error)) : 0u;
            rt.memory().store32(stat_address + 0x08u, static_cast<std::uint32_t>(size));
            rt.memory().store32(stat_address + 0x0Cu, static_cast<std::uint32_t>(size >> 32u));
            const auto written = std::filesystem::last_write_time(native, error);
            const auto system_time = std::chrono::clock_cast<std::chrono::system_clock>(written);
            const std::time_t seconds = std::chrono::system_clock::to_time_t(system_time);
            std::tm parts{};
#if defined(_WIN32)
            localtime_s(&parts, &seconds);
#else
            localtime_r(&seconds, &parts);
#endif
            for (std::uint32_t stamp : {0x10u, 0x20u, 0x30u}) {
                const std::uint32_t base = stat_address + stamp;
                rt.memory().store16(base + 0u, static_cast<std::uint16_t>(parts.tm_year + 1900));
                rt.memory().store16(base + 2u, static_cast<std::uint16_t>(parts.tm_mon + 1));
                rt.memory().store16(base + 4u, static_cast<std::uint16_t>(parts.tm_mday));
                rt.memory().store16(base + 6u, static_cast<std::uint16_t>(parts.tm_hour));
                rt.memory().store16(base + 8u, static_cast<std::uint16_t>(parts.tm_min));
                rt.memory().store16(base + 10u, static_cast<std::uint16_t>(parts.tm_sec));
            }
            set_success(ctx);
        });

    runtime.register_hle("IoFileMgrForUser", 0xB29DDF9Cu,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            try {
                const auto native = rt.translate_path(rt.memory().read_c_string(ctx.gpr[4]));
                if (!std::filesystem::is_directory(native)) {
                    ctx.set_gpr(2, 0x80010002u);
                    return;
                }
                DirectoryHandle handle;
                for (const auto &entry : std::filesystem::directory_iterator(native)) handle.entries.push_back(entry);
                std::sort(handle.entries.begin(), handle.entries.end(), [](const auto &a, const auto &b) {
                    return disc_directory_name(a.path()) < disc_directory_name(b.path());
                });
                const auto fd = file_table.next_fd++;
                file_table.directories.emplace(fd, std::move(handle));
                ctx.set_gpr(2, static_cast<std::uint32_t>(fd));
            } catch (...) {
                ctx.set_gpr(2, 0x80010002u);
            }
        });

    runtime.register_hle("IoFileMgrForUser", 0xE3EB004Cu,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const auto fd = static_cast<std::int32_t>(ctx.gpr[4]);
            const std::uint32_t dirent = ctx.gpr[5];
            const auto it = file_table.directories.find(fd);
            if (it == file_table.directories.end() || !rt.memory().contains(dirent, 0x160u)) {
                ctx.set_gpr(2, 0x80010009u);
                return;
            }
            if (it->second.index >= it->second.entries.size()) {
                ctx.set_gpr(2, 0u);
                return;
            }
            const auto &entry = it->second.entries[it->second.index++];
            rt.memory().zero(dirent, 0x160u);
            const bool is_directory = entry.is_directory();
            const std::uint32_t mode = is_directory ? 0x1000u : 0x2000u;
            rt.memory().store32(dirent, mode);
            if (!is_directory) {
                if (const auto *disc_file = register_virtual_disc_file(entry.path())) {
                    rt.memory().store32(dirent + 8u, static_cast<std::uint32_t>(disc_file->size));
                    rt.memory().store32(dirent + 12u, static_cast<std::uint32_t>(disc_file->size >> 32u));
                    rt.memory().store32(dirent + 0x40u, disc_file->start_sector);
                }
            }
            const std::string name = disc_directory_name(entry.path());
            std::vector<std::uint8_t> bytes(name.begin(), name.end());
            bytes.push_back(0u);
            if (bytes.size() > 256u) bytes.resize(256u);
            rt.memory().copy_in(dirent + 0x58u, bytes);
            ctx.set_gpr(2, 1u);
        });

    runtime.register_hle("IoFileMgrForUser", 0xEB092469u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            const auto fd = static_cast<std::int32_t>(ctx.gpr[4]);
            ctx.set_gpr(2, file_table.directories.erase(fd) == 1u ? 0u : 0x80010009u);
        });

    runtime.register_hle("LoadExecForUser", 0x4AC57943u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) { set_success(ctx); });

    runtime.register_hle("sceCtrl", 0x6A2774F3u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            const std::uint32_t previous = controller_state.sampling_cycle;
            controller_state.sampling_cycle = ctx.gpr[4];
            ctx.set_gpr(2, previous);
        });
    runtime.register_hle("sceCtrl", 0x1F4011E6u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            if (ctx.gpr[4] > 1u) {
                ctx.set_gpr(2, 0x80000107u);
                return;
            }
            const std::uint32_t previous = controller_state.sampling_mode;
            controller_state.sampling_mode = ctx.gpr[4];
            ctx.set_gpr(2, previous);
        });
    runtime.register_hle("sceCtrl", 0x1F803938u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const std::uint32_t destination = ctx.gpr[4];
            const std::uint32_t count = ctx.gpr[5];
            constexpr std::uint32_t sample_size = 16u;
            if (count == 0u) {
                ctx.set_gpr(2, 0u);
                return;
            }
            if (count > 64u || !rt.memory().contains(destination, static_cast<std::size_t>(count) * sample_size)) {
                ctx.set_gpr(2, 0x80000103u);
                return;
            }
            const HostInputState host = stress_test_enabled()
                ? stress_test_input(rt, {}) : display_window_input();
            const std::uint32_t buttons = host.buttons;
            for (std::uint32_t index = 0u; index < count; ++index) {
                const std::uint32_t sample = destination + index * sample_size;
                rt.memory().store32(sample, static_cast<std::uint32_t>(system_time_microseconds()));
                rt.memory().store32(sample + 4u, buttons);
                rt.memory().store8(sample + 8u, host.analog_x);
                rt.memory().store8(sample + 9u, host.analog_y);
                rt.memory().store8(sample + 10u, 128u);
                rt.memory().store8(sample + 11u, 128u);
                rt.memory().zero(sample + 12u, 4u);
            }
            ctx.set_gpr(2, count);
        });

    runtime.register_hle("sceDisplay", 0x0E20F177u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            const std::uint32_t mode = ctx.gpr[4];
            const std::uint32_t width = ctx.gpr[5];
            const std::uint32_t height = ctx.gpr[6];
            if (mode != 0u || width == 0u || width > 480u || height == 0u || height > 272u) {
                ctx.set_gpr(2, 0x80000107u);
                return;
            }
            display_state.mode = mode;
            display_state.width = width;
            display_state.height = height;
            set_success(ctx);
        });
    runtime.register_hle("sceDisplay", 0x289D82FEu,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const std::uint32_t address = ctx.gpr[4];
            const std::uint32_t stride = ctx.gpr[5];
            const std::uint32_t format = ctx.gpr[6];
            const std::uint32_t sync = ctx.gpr[7];
            if (address != 0u && !rt.memory().contains(address, 4u)) {
                ctx.set_gpr(2, 0x800200D3u);
                return;
            }
            if (format > 3u || sync > 1u) {
                ctx.set_gpr(2, 0x80000107u);
                return;
            }
            display_state.frame_buffer = address;
            display_state.buffer_width = stride;
            display_state.pixel_format = format;
            display_state.sync_mode = sync;
            set_success(ctx);
        });
    runtime.register_hle("sceDisplay", 0x4D4E10ECu,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            const std::uint64_t blank = kVblankPeriodUs / 5u;
            const std::uint64_t phase = virtual_time_us % kVblankPeriodUs;
            ctx.set_gpr(2, phase < blank ? 1u : 0u);
        });
    runtime.register_hle("sceDisplay", 0x9C6EAAD7u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            ctx.set_gpr(2, static_cast<std::uint32_t>(display_vblank_index));
        });
    auto wait_vblank = [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
        ++display_vblank_index;
        check_wall_clock_limit(rt, 0x3Fu);
        PresentRequest request{};
        request.vblank = display_vblank_index;
        request.display_buffer = display_state.frame_buffer;
        request.display_stride = display_state.buffer_width;
        request.pixel_format = display_state.pixel_format;
        request.display_width = display_state.width;
        request.display_height = display_state.height;
        if (rt.memory().contains(kGameRenderWidthAddress, 8u)) {
            request.game_width = rt.memory().load32(kGameRenderWidthAddress);
            request.game_height = rt.memory().load32(kGameRenderWidthAddress + 4u);
        }
        if (!ge_async_enabled()) {
            present_frame(rt, request);
        } else if (ge_worker.pending_presents.load() == 0u) {
            ge_worker.pending_presents.fetch_add(1u);
            ge_worker_submit([&rt, request] {
                present_frame(rt, request);
                ge_worker.pending_presents.fetch_sub(1u);
            });
        }

        display_window_pump();
        if (display_window_closed()) {
            ge_worker_wait_idle();
            rt.stop("Display window closed");
            return;
        }
        audio_output_advance(virtual_time_us);
        if (const std::uint32_t skipped = throttle_vblank_to_real_time(); skipped != 0u) {
            virtual_time_us += static_cast<std::uint64_t>(skipped) * kVblankPeriodUs;
            display_vblank_index += skipped;
        }
        const std::uint32_t vblank_delay = static_cast<std::uint32_t>(
            (virtual_time_us / kVblankPeriodUs + 1u) * kVblankPeriodUs - virtual_time_us);
        if (deliver_pending_ge_callback(ctx, vblank_delay, true)) return;
        if (dispatch_vblank_interrupt(rt, ctx, vblank_delay)) return;
        (void)delay_current_thread(rt, ctx, vblank_delay);
    };
    runtime.register_hle("sceDisplay", 0x36CDFADEu, wait_vblank);
    runtime.register_hle("sceDisplay", 0x984C27E7u, wait_vblank);

    runtime.register_hle("sceGe_user", 0x1F6752ADu,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) { ctx.set_gpr(2, 0x00200000u); });
    runtime.register_hle("sceGe_user", 0xE47E40E4u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) { ctx.set_gpr(2, 0x04000000u); });
    runtime.register_hle("sceGe_user", 0xAB49E76Au,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const std::uint32_t list_address = ctx.gpr[4];
            const bool from_vblank = in_vblank_interrupt();
            if (!from_vblank) cap_frame_rate(list_address);
            bool list_finished = false;
            std::uint32_t finish_argument = 0u;
            if (from_vblank) {
                const GeListPrescan scan = prescan_ge_list(rt.memory(), list_address);
                list_finished = scan.finished;
                finish_argument = scan.finish_argument;
            } else if (ge_worker_wait_idle(); ge_async_enabled()) {
                lcs_menu_enqueue();
                const GeListPrescan scan = prescan_ge_list(rt.memory(), list_address);
                list_finished = scan.finished;
                finish_argument = scan.finish_argument;
                const std::uint64_t vblank = display_vblank_index;
                ge_worker_submit([&rt, list_address, vblank] {
                    execute_ge_list_frame(rt, list_address, vblank);
                });
            } else {
                lcs_menu_enqueue();
                execute_ge_list_frame(rt, list_address, display_vblank_index);
                list_finished = rendered_list_finished();
                finish_argument = rendered_finish_argument();
            }
            const auto list_id = static_cast<std::uint32_t>(ge_next_list_id++);
            const auto cbid = static_cast<std::int32_t>(ctx.gpr[6]);
            const auto found = ge_callback_table.callbacks.find(cbid);
            if (found != ge_callback_table.callbacks.end() && found->second.finish_function != 0u &&
                list_finished) {
                pending_ge_callbacks[thread_table.current_uid].push_back(PendingGeCallback{
                    cbid, found->second.finish_function, finish_argument,
                    found->second.finish_argument});
            }
            ctx.set_gpr(2, list_id);
        });
    runtime.register_hle("sceGe_user", 0xB287BD61u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            ge_worker_wait_idle();
            ctx.set_gpr(2, 0u);
        });
    runtime.register_hle("sceGe_user", 0xA4FC06A4u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const std::uint32_t callback_data = ctx.gpr[4];
            if (callback_data == 0u || !rt.memory().contains(callback_data, 16u)) {
                ctx.set_gpr(2, 0x800200D3u);
                return;
            }
            GeCallbackRecord record{
                rt.memory().load32(callback_data + 0u),
                rt.memory().load32(callback_data + 4u),
                rt.memory().load32(callback_data + 8u),
                rt.memory().load32(callback_data + 12u),
            };
            const std::int32_t uid = ge_callback_table.next_uid++;
            ge_callback_table.callbacks.emplace(uid, record);
            ctx.set_gpr(2, static_cast<std::uint32_t>(uid));
        });
    runtime.register_hle("sceGe_user", 0x05DB22CEu,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            const std::int32_t uid = static_cast<std::int32_t>(ctx.gpr[4]);
            ctx.set_gpr(2, ge_callback_table.callbacks.erase(uid) == 1u ? 0u : 0x80000100u);
        });

    auto volatile_mem_lock = [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
        constexpr std::uint32_t volatile_base = 0x08400000u;
        constexpr std::uint32_t volatile_size = 0x00400000u;
        if (ctx.gpr[4] != 0u) {
            ctx.set_gpr(2, 0x80000107u);
            return;
        }
        if (volatile_memory_locked) {
            ctx.set_gpr(2, 0x80000021u);
            return;
        }
        if (!rt.memory().contains(volatile_base, volatile_size) ||
            !rt.memory().contains(ctx.gpr[5], 4u) || !rt.memory().contains(ctx.gpr[6], 4u)) {
            ctx.set_gpr(2, 0x800200D3u);
            return;
        }
        rt.memory().store32(ctx.gpr[5], volatile_base);
        rt.memory().store32(ctx.gpr[6], volatile_size);
        rt.memory().zero(volatile_base, volatile_size);
        volatile_memory_locked = true;
        set_success(ctx);
    };
    runtime.register_hle("sceSuspendForUser", 0x3E0271D3u, volatile_mem_lock);
    runtime.register_hle("sceSuspendForUser", 0xA14F40B2u, volatile_mem_lock);
    runtime.register_hle("sceSuspendForUser", 0xA569E425u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            if (ctx.gpr[4] != 0u) {
                ctx.set_gpr(2, 0x80000107u);
                return;
            }
            if (!volatile_memory_locked) {
                ctx.set_gpr(2, 0x800201AEu);
                return;
            }
            volatile_memory_locked = false;
            set_success(ctx);
        });
    runtime.register_hle("sceSuspendForUser", 0xEADB1BD7u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            ctx.set_gpr(2, ctx.gpr[4] == 0u ? 0u : 0x80000107u);
        });
    runtime.register_hle("sceSuspendForUser", 0x3AEE7261u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            ctx.set_gpr(2, ctx.gpr[4] == 0u ? 0u : 0x80000107u);
        });
    runtime.register_hle("sceSuspendForUser", 0x090CCB3Fu,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) { set_success(ctx); });

    runtime.register_hle("UtilsForUser", 0x6AD345D7u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            general_purpose_io = ctx.gpr[4];
            set_success(ctx);
        });
    auto cache_maintenance = [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        set_success(ctx);
    };
    runtime.register_hle("UtilsForUser", 0x79D1C3FAu, cache_maintenance);
    runtime.register_hle("UtilsForUser", 0xB435DEC5u, cache_maintenance);

    runtime.register_hle("sceUtility", 0x50C4CD57u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const std::uint32_t parameter = ctx.gpr[4];
            if (savedata_utility.status != UtilityStatus::None) {
                ctx.set_gpr(2, 0x80110001u);
                return;
            }
            if (parameter == 0u || !rt.memory().contains(parameter, 4u)) {
                ctx.set_gpr(2, 0x80110004u);
                return;
            }
            const std::uint32_t declared_size = rt.memory().load32(parameter);
            if (declared_size < 0x5C0u ||
                !rt.memory().contains(parameter, std::min<std::uint32_t>(declared_size, kSavedataParameterMinimumSize))) {
                ctx.set_gpr(2, 0x80110004u);
                return;
            }
            savedata_utility = SavedataUtilityState{UtilityStatus::Init, parameter, false};
            rt.memory().store32(parameter + kUtilityCommonResultOffset, 0u);
            set_success(ctx);
        });
    runtime.register_hle("sceUtility", 0xD4B95FFBu,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            if (savedata_utility.status == UtilityStatus::None || savedata_utility.status == UtilityStatus::Finished) {
                ctx.set_gpr(2, 0x80110001u);
                return;
            }
            if (savedata_utility.status == UtilityStatus::Init) {
                savedata_utility.status = UtilityStatus::Visible;
            } else if (savedata_utility.status == UtilityStatus::Visible && !savedata_utility.operation_complete) {
                const std::uint32_t result = execute_savedata_operation(rt, savedata_utility.parameter_address);
                rt.memory().store32(savedata_utility.parameter_address + kUtilityCommonResultOffset, result);
                savedata_utility.operation_complete = true;
                savedata_utility.status = UtilityStatus::Quit;
            }
            set_success(ctx);
        });
    runtime.register_hle("sceUtility", 0x8874DBE0u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            const UtilityStatus reported = savedata_utility.status;
            ctx.set_gpr(2, static_cast<std::uint32_t>(reported));
            if (reported == UtilityStatus::Init) {
                savedata_utility.status = UtilityStatus::Visible;
            } else if (reported == UtilityStatus::Finished) {
                savedata_utility = SavedataUtilityState{};
            }
        });
    runtime.register_hle("sceUtility", 0x9790B33Cu,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            if (savedata_utility.status != UtilityStatus::Quit) {
                ctx.set_gpr(2, 0x80110001u);
                return;
            }
            savedata_utility.status = UtilityStatus::Finished;
            set_success(ctx);
        });

    runtime.register_hle("sceUtility", 0xA5DA2406u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const std::uint32_t id = ctx.gpr[4];
            const std::uint32_t dest = ctx.gpr[5];
            if (!rt.memory().contains(dest, 4u)) {
                ctx.set_gpr(2, 0x80110103u);
                return;
            }
            std::uint32_t value = 0u;
            switch (id) {
                case 2u: value = 0u; break;  // ADHOC_CHANNEL: automatic
                case 3u: value = 0u; break;  // WLAN_POWERSAVE: off
                case 4u: value = 0u; break;  // DATE_FORMAT: YYYYMMDD
                case 5u: value = 0u; break;  // TIME_FORMAT: 24HR
                case 6u: value = 0u; break;  // TIMEZONE: UTC
                case 7u: value = 0u; break;  // DAYLIGHTSAVINGS: std
                case 8u: value = 1u; break;  // LANGUAGE: English
                case 9u: value = 0u; break;  // BUTTON_SWAP: circle-confirm
                default:
                    ctx.set_gpr(2, 0x80110103u);
                    return;
            }
            rt.memory().store32(dest, value);
            set_success(ctx);
        });
    runtime.register_hle("sceUtility", 0x34B78343u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const std::uint32_t id = ctx.gpr[4];
            const std::uint32_t dest = ctx.gpr[5];
            if (id != 1u || !rt.memory().contains(dest, 128u)) {
                ctx.set_gpr(2, 0x80110103u);
                return;
            }
            rt.memory().zero(dest, 128u);
            const std::string nickname = "PLAYER";
            rt.memory().copy_in(dest, std::vector<std::uint8_t>(nickname.begin(), nickname.end()));
            set_success(ctx);
        });
    runtime.register_hle("sceUtility", 0x1579A159u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            ctx.set_gpr(2, static_cast<std::uint32_t>(next_module_uid++));
        });
    runtime.register_hle("sceUtility", 0x64D50C56u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) { set_success(ctx); });

    runtime.register_hle("InterruptManager", 0xCA04A2B9u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            const std::uint32_t interrupt_number = ctx.gpr[4];
            const std::uint32_t sub_number = ctx.gpr[5];
            const std::uint32_t handler = ctx.gpr[6];
            const std::uint32_t argument = ctx.gpr[7];
            if (interrupt_number >= 67u || handler == 0u) {
                ctx.set_gpr(2, 0x80020064u);
                return;
            }
            const std::uint64_t key = sub_interrupt_key(interrupt_number, sub_number);
            if (sub_interrupts.contains(key)) {
                ctx.set_gpr(2, 0x80020067u);
                return;
            }
            sub_interrupts.emplace(key, SubInterruptRecord{handler, argument, false});
            set_success(ctx);
        });
    runtime.register_hle("InterruptManager", 0xD61E6961u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            const std::uint64_t key = sub_interrupt_key(ctx.gpr[4], ctx.gpr[5]);
            ctx.set_gpr(2, sub_interrupts.erase(key) == 1u ? 0u : 0x80020068u);
        });
    runtime.register_hle("InterruptManager", 0xFB8E22ECu,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            const auto found = sub_interrupts.find(sub_interrupt_key(ctx.gpr[4], ctx.gpr[5]));
            if (found == sub_interrupts.end()) { ctx.set_gpr(2, 0x80020068u); return; }
            found->second.enabled = true;
            set_success(ctx);
        });

    runtime.register_hle("sceMpeg", 0x682A619Bu,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) { set_success(ctx); });
    runtime.register_hle("sceMpeg", 0x874624D6u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) { set_success(ctx); });
    runtime.register_hle("sceMpeg", 0xD7A29F46u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            const auto packets = static_cast<std::int32_t>(ctx.gpr[4]);
            if (packets < 0) {
                ctx.set_gpr(2, 0x80610103u);
                return;
            }
            ctx.set_gpr(2, static_cast<std::uint32_t>(packets) * (2048u + 104u));
        });
    runtime.register_hle("sceMpeg", 0xC132E22Fu,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            ctx.set_gpr(2, 0x00010000u);
        });
    runtime.register_hle("sceMpeg", 0x37295ED8u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const std::uint32_t ring = ctx.gpr[4];
            const auto packets = static_cast<std::int32_t>(ctx.gpr[5]);
            const std::uint32_t data = ctx.gpr[6];
            const std::uint32_t size = ctx.gpr[7];
            const std::uint32_t callback = ctx.gpr[8];
            const std::uint32_t callback_arg = ctx.gpr[9];
            if (packets < 0 || !rt.memory().contains(ring, 48u)) {
                ctx.set_gpr(2, 0x800200D3u);
                return;
            }
            const std::uint64_t required = static_cast<std::uint64_t>(packets) * (2048u + 104u);
            if (required > size || !rt.memory().contains(data, static_cast<std::size_t>(packets) * 2048u)) {
                ctx.set_gpr(2, 0x80610103u);
                return;
            }
            rt.memory().zero(ring, 48u);
            rt.memory().store32(ring + 0u, static_cast<std::uint32_t>(packets));
            rt.memory().store32(ring + 16u, 2048u);
            rt.memory().store32(ring + 20u, data);
            rt.memory().store32(ring + 24u, callback);
            rt.memory().store32(ring + 28u, callback_arg);
            rt.memory().store32(ring + 32u, data + static_cast<std::uint32_t>(packets) * 2048u);
            rt.memory().store32(ring + 44u, ctx.gpr[28]);
            set_success(ctx);
        });
    runtime.register_hle("sceMpeg", 0xD8C5F121u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const std::uint32_t mpeg_out = ctx.gpr[4];
            const std::uint32_t data = ctx.gpr[5];
            const std::uint32_t size = ctx.gpr[6];
            const std::uint32_t ring = ctx.gpr[7];
            if (size < 0x10000u || !rt.memory().contains(mpeg_out, 4u) ||
                !rt.memory().contains(data, size) || !rt.memory().contains(ring, 48u)) {
                ctx.set_gpr(2, 0x80610103u);
                return;
            }
            const std::uint32_t handle = data + 0x30u;
            if (!rt.memory().contains(handle, 24u)) {
                ctx.set_gpr(2, 0x800200D3u);
                return;
            }
            rt.memory().store32(mpeg_out, handle);
            const std::array<std::uint8_t, 8> magic{'L', 'I', 'B', 'M', 'P', 'E', 'G', 0};
            const std::array<std::uint8_t, 4> version{'0', '0', '1', 0};
            rt.memory().copy_in(handle, magic);
            rt.memory().copy_in(handle + 8u, version);
            rt.memory().store32(handle + 12u, 0xFFFFFFFFu);
            rt.memory().store32(handle + 16u, ring);
            rt.memory().store32(handle + 20u, rt.memory().load32(ring + 32u));
            rt.memory().store32(ring + 40u, mpeg_out);
            MpegContextState created{};
            created.ring_address = ring;
            mpeg_contexts.erase(mpeg_out);
            mpeg_contexts.emplace(mpeg_out, std::move(created));
            set_success(ctx);
        });
    runtime.register_hle("sceMpeg", 0x21FF80E4u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const std::uint32_t mpeg = ctx.gpr[4];
            const std::uint32_t buffer = ctx.gpr[5];
            const std::uint32_t output = ctx.gpr[6];
            if (!mpeg_contexts.contains(mpeg) || !rt.memory().contains(buffer, 2048u) ||
                !rt.memory().contains(output, 4u)) {
                ctx.set_gpr(2, 0x80610103u);
                return;
            }
            std::array<std::uint8_t, 2048> bytes{};
            rt.memory().copy_out(buffer, bytes);
            ParsedPsmfHeader header{};
            if (!parse_psmf_header(bytes, header) || header.stream_offset == 0u ||
                (header.stream_offset & 2047u) != 0u) {
                rt.memory().store32(output, 0u);
                ctx.set_gpr(2, 0x806101FEu);
                return;
            }
            if (const auto state = mpeg_contexts.find(mpeg); state != mpeg_contexts.end()) {
                const ParsedPsmfHeader &previous = state->second.header;
                const bool different_stream = state->second.analyzed &&
                    (previous.stream_offset != header.stream_offset ||
                     previous.stream_size != header.stream_size ||
                     previous.first_timestamp != header.first_timestamp ||
                     previous.last_timestamp != header.last_timestamp);
                if (different_stream) {
                    state->second.video.close();
                    state->second.audio.close();
                    state->second.source_path.clear();
                    state->second.audio_source.clear();
                    state->second.video_eof = false;
                    state->second.video_au_count = 0u;
                    state->second.audio_au_count = 0u;
                }
                state->second.header = header;
                state->second.analyzed = true;
                if (state->second.source_path.empty()) {
                    state->second.source_path = identify_pmf_source(header);
                    if (state->second.source_path.empty()) {
                        state->second.source_path =
                            find_pmf_on_disc(rt.translate_path("disc0:/"), header);
                    }
                }
            }
            rt.memory().store32(output, header.stream_offset);
            set_success(ctx);
        });
    runtime.register_hle("sceMpeg", 0x611E9E11u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const std::uint32_t buffer = ctx.gpr[4];
            const std::uint32_t output = ctx.gpr[5];
            if (!rt.memory().contains(buffer, 2048u) || !rt.memory().contains(output, 4u)) {
                ctx.set_gpr(2, 0x80610103u);
                return;
            }
            std::array<std::uint8_t, 2048> bytes{};
            rt.memory().copy_out(buffer, bytes);
            ParsedPsmfHeader header{};
            if (!parse_psmf_header(bytes, header) || (header.stream_offset & 2047u) != 0u) {
                rt.memory().store32(output, 0u);
                ctx.set_gpr(2, 0x806101FEu);
                return;
            }
            rt.memory().store32(output, header.stream_size);
            set_success(ctx);
        });

    runtime.register_hle("sceMpeg", 0x13407F13u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const std::uint32_t ring = ctx.gpr[4];
            if (ring != 0u && rt.memory().contains(ring, 48u)) {
                rt.memory().store32(ring + 12u, 0u);
                rt.memory().store32(ring + 40u, 0u);
            }
            set_success(ctx);
        });
    runtime.register_hle("sceMpeg", 0x606A4649u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const std::uint32_t mpeg_out = ctx.gpr[4];
            if (mpeg_out == 0u || !rt.memory().contains(mpeg_out, 4u)) {
                ctx.set_gpr(2, 0x800200D3u);
                return;
            }
            mpeg_contexts.erase(mpeg_out);
            set_success(ctx);
        });

    constexpr std::uint32_t kAtracErrorApiFail = 0x80630002u;
    constexpr std::uint32_t kAtracErrorNoId = 0x80630003u;
    constexpr std::uint32_t kAtracErrorBadId = 0x80630005u;
    constexpr std::uint32_t kAtracErrorUnknownFormat = 0x80630006u;
    constexpr std::uint32_t kAtracErrorAllDataLoaded = 0x80630009u;
    constexpr std::uint32_t kAtracErrorIncorrectReadSize = 0x80630013u;
    constexpr std::uint32_t kAtracErrorBadAddress = 0x800200D3u;

    const auto get_atrac = [](std::uint32_t id) -> AtracContextState * {
        if (id >= atrac_contexts.size() || !atrac_contexts[id].allocated) return nullptr;
        return &atrac_contexts[id];
    };
    const auto atrac_fail = [](psprecomp::AllegrexContext &ctx, std::uint32_t code, const char *) {
        ctx.set_gpr(2, code);
    };

    runtime.register_hle("sceAtrac3plus", 0x0FAE370Eu,
        [atrac_fail](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const std::uint32_t buffer = ctx.gpr[4];
            const std::uint32_t read_size = ctx.gpr[5];
            const std::uint32_t buffer_size = ctx.gpr[6];
            if (read_size > buffer_size) { atrac_fail(ctx, kAtracErrorIncorrectReadSize, "set-halfway size"); return; }
            if (read_size < 12u || !rt.memory().contains(buffer, read_size)) {
                atrac_fail(ctx, kAtracErrorUnknownFormat, "set-halfway buffer"); return;
            }
            std::vector<std::uint8_t> header_bytes(read_size);
            rt.memory().copy_out(buffer, header_bytes);
            ParsedAtracHeader parsed{};
            if (!parse_atrac_header(header_bytes, parsed)) {
                atrac_fail(ctx, kAtracErrorUnknownFormat, "set-halfway header"); return;
            }
            std::size_t id = atrac_contexts.size();
            for (std::size_t i = 0u; i < atrac_contexts.size(); ++i) {
                if (!atrac_contexts[i].allocated) { id = i; break; }
            }
            if (id == atrac_contexts.size()) { atrac_fail(ctx, kAtracErrorNoId, "set-halfway no free id"); return; }
            auto &state = atrac_contexts[id];
            close_atrac_decoder(state);
            state = AtracContextState{};
            state.allocated = true;
            state.header = parsed;
            state.buffer_address = buffer;
            state.initial_read_size = read_size;
            state.buffer_size = buffer_size;
            state.buffered_encoded_bytes = read_size > parsed.data_offset ? read_size - parsed.data_offset : 0u;
            state.buffered_encoded_bytes = std::min(state.buffered_encoded_bytes, parsed.data_size);
            state.next_file_offset = std::min(read_size, parsed.file_size);
            state.write_offset = buffer_size == 0u ? 0u : read_size % buffer_size;
            state.source_path = identify_atrac_source(rt.translate_path("disc0:/"), header_bytes, parsed);
            ctx.set_gpr(2, static_cast<std::uint32_t>(id));
        });

    runtime.register_hle("sceAtrac3plus", 0x61EB33F5u,
        [get_atrac](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            auto *state = get_atrac(ctx.gpr[4]);
            if (!state) { ctx.set_gpr(2, kAtracErrorBadId); return; }
            close_atrac_decoder(*state);
            *state = AtracContextState{};
            set_success(ctx);
        });

    runtime.register_hle("sceAtrac3plus", 0x5D268707u,
        [get_atrac](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            auto *state = get_atrac(ctx.gpr[4]);
            if (!state) { ctx.set_gpr(2, kAtracErrorBadId); return; }
            const std::uint32_t write_ptr_addr = ctx.gpr[5];
            const std::uint32_t writable_addr = ctx.gpr[6];
            const std::uint32_t read_offset_addr = ctx.gpr[7];
            for (const std::uint32_t address : {write_ptr_addr, writable_addr, read_offset_addr}) {
                if (address != 0u && !rt.memory().contains(address, 4u)) {
                    ctx.set_gpr(2, kAtracErrorBadAddress); return;
                }
            }
            const std::uint32_t remaining_file = state->next_file_offset < state->header.file_size ?
                state->header.file_size - state->next_file_offset : 0u;
            const std::uint32_t free_bytes = state->buffer_size > state->buffered_encoded_bytes ?
                state->buffer_size - state->buffered_encoded_bytes : 0u;
            const std::uint32_t contiguous = state->buffer_size == 0u ? 0u : state->buffer_size - state->write_offset;
            const std::uint32_t writable = std::min({remaining_file, free_bytes, contiguous});
            state->last_writable_bytes = writable;
            if (write_ptr_addr != 0u) rt.memory().store32(write_ptr_addr, state->buffer_address + state->write_offset);
            if (writable_addr != 0u) rt.memory().store32(writable_addr, writable);
            if (read_offset_addr != 0u) rt.memory().store32(read_offset_addr, state->next_file_offset);
            set_success(ctx);
        });

    runtime.register_hle("sceAtrac3plus", 0x7DB31251u,
        [get_atrac](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            auto *state = get_atrac(ctx.gpr[4]);
            if (!state) { ctx.set_gpr(2, kAtracErrorBadId); return; }
            const std::uint32_t bytes = ctx.gpr[5];
            if (state->next_file_offset >= state->header.file_size) {
                ctx.set_gpr(2, bytes == 0u ? 0u : kAtracErrorAllDataLoaded); return;
            }
            if (bytes > state->last_writable_bytes) {
                ctx.set_gpr(2, kAtracErrorIncorrectReadSize); return;
            }
            state->buffered_encoded_bytes = std::min(state->buffer_size, state->buffered_encoded_bytes + bytes);
            state->next_file_offset = std::min(state->header.file_size, state->next_file_offset + bytes);
            if (state->buffer_size != 0u) state->write_offset = (state->write_offset + bytes) % state->buffer_size;
            state->last_writable_bytes = 0u;
            set_success(ctx);
        });

    runtime.register_hle("sceAtrac3plus", 0x6A8C3CD5u,
        [get_atrac](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            auto *state = get_atrac(ctx.gpr[4]);
            if (!state) { ctx.set_gpr(2, kAtracErrorBadId); return; }
            const std::uint32_t output = ctx.gpr[5];
            const std::uint32_t samples_addr = ctx.gpr[6];
            const std::uint32_t finish_addr = ctx.gpr[7];
            const std::uint32_t remain_addr = ctx.gpr[8];
            for (const std::uint32_t address : {samples_addr, finish_addr, remain_addr}) {
                if (address != 0u && !rt.memory().contains(address, 4u)) {
                    ctx.set_gpr(2, kAtracErrorBadAddress); return;
                }
            }
            const std::uint32_t max_samples = atrac_samples_per_frame(*state);
            const std::size_t max_bytes =
                static_cast<std::size_t>(max_samples) * kAtracOutputChannels * 2u;
            if (output != 0u && !rt.memory().contains(output, max_bytes)) {
                ctx.set_gpr(2, kAtracErrorBadAddress); return;
            }
            if (state->source_path.empty()) {
                state->internal_error = kAtracErrorUnknownFormat;
                ctx.set_gpr(2, kAtracErrorApiFail); return;
            }
            auto restart_for_loop = [&]() -> bool {
                if (state->loop_num == 0) return false;
                if (state->header.loop_start < 0) return false;
                if (state->loop_num > 0) --state->loop_num;
                state->sample_position = static_cast<std::uint32_t>(state->header.loop_start);
                close_atrac_decoder(*state);
                return open_atrac_decoder(*state);
            };
            if (state->sample_position >= state->header.total_samples && !restart_for_loop()) {
                if (samples_addr != 0u) rt.memory().store32(samples_addr, 0u);
                if (finish_addr != 0u) rt.memory().store32(finish_addr, 1u);
                if (remain_addr != 0u) rt.memory().store32(remain_addr, 0u);
                set_success(ctx);
                return;
            }
            const std::uint32_t requested_samples = static_cast<std::uint32_t>(std::min<std::uint64_t>(
                max_samples, state->header.total_samples - state->sample_position));
            static std::vector<std::uint8_t> pcm;
            const std::size_t pcm_bytes =
                static_cast<std::size_t>(requested_samples) * kAtracOutputChannels * 2u;
            if (pcm.size() < pcm_bytes) pcm.resize(pcm_bytes);
            const std::span<std::uint8_t> pcm_span(pcm.data(), pcm_bytes);
            std::size_t got = read_atrac_pcm(*state, pcm_span);
            if (got == 0u && restart_for_loop()) got = read_atrac_pcm(*state, pcm_span);
            const std::size_t bytes_per_sample = static_cast<std::size_t>(kAtracOutputChannels) * 2u;
            const std::uint32_t samples = static_cast<std::uint32_t>(got / bytes_per_sample);
            got = static_cast<std::size_t>(samples) * bytes_per_sample;
            if (output != 0u && got != 0u)
                rt.memory().copy_in(output, std::span<const std::uint8_t>(pcm.data(), got));
            state->sample_position += samples;
            if (state->buffered_encoded_bytes >= state->header.block_align)
                state->buffered_encoded_bytes -= state->header.block_align;
            else
                state->buffered_encoded_bytes = 0u;
            const bool finished = samples == 0u ||
                (state->sample_position >= state->header.total_samples && state->loop_num == 0);
            const std::uint32_t remaining_frames = state->header.block_align == 0u ? 0u :
                state->buffered_encoded_bytes / state->header.block_align;
            if (samples_addr != 0u) rt.memory().store32(samples_addr, samples);
            if (finish_addr != 0u) rt.memory().store32(finish_addr, finished ? 1u : 0u);
            if (remain_addr != 0u) rt.memory().store32(remain_addr, remaining_frames);
            set_success(ctx);
        });

    runtime.register_hle("sceAtrac3plus", 0x9AE849A7u,
        [get_atrac](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            auto *state = get_atrac(ctx.gpr[4]);
            if (!state) { ctx.set_gpr(2, kAtracErrorBadId); return; }
            if (!rt.memory().contains(ctx.gpr[5], 4u)) { ctx.set_gpr(2, kAtracErrorBadAddress); return; }
            const std::uint32_t remaining = state->next_file_offset >= state->header.file_size ? 0xFFFFFFFFu :
                state->buffered_encoded_bytes / state->header.block_align;
            rt.memory().store32(ctx.gpr[5], remaining);
            set_success(ctx);
        });

    runtime.register_hle("sceAtrac3plus", 0xA554A158u,
        [get_atrac](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            auto *state = get_atrac(ctx.gpr[4]);
            if (!state) { ctx.set_gpr(2, kAtracErrorBadId); return; }
            if (!rt.memory().contains(ctx.gpr[5], 4u)) { ctx.set_gpr(2, kAtracErrorBadAddress); return; }
            rt.memory().store32(ctx.gpr[5], atrac_bitrate_kbps(*state));
            set_success(ctx);
        });

    runtime.register_hle("sceAtrac3plus", 0xA2BBA8BEu,
        [get_atrac](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            auto *state = get_atrac(ctx.gpr[4]);
            if (!state) { ctx.set_gpr(2, kAtracErrorBadId); return; }
            const std::array<std::pair<std::uint32_t, std::uint32_t>, 3> outputs{{
                {ctx.gpr[5], state->header.total_samples == 0u ? 0u : state->header.total_samples - 1u},
                {ctx.gpr[6], static_cast<std::uint32_t>(state->header.loop_start)},
                {ctx.gpr[7], static_cast<std::uint32_t>(state->header.loop_end)},
            }};
            for (const auto &[address, value] : outputs) {
                if (address != 0u) {
                    if (!rt.memory().contains(address, 4u)) { ctx.set_gpr(2, kAtracErrorBadAddress); return; }
                    rt.memory().store32(address, value);
                }
            }
            set_success(ctx);
        });

    runtime.register_hle("sceAtrac3plus", 0xFAA4F89Bu,
        [get_atrac](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            auto *state = get_atrac(ctx.gpr[4]);
            if (!state) { ctx.set_gpr(2, kAtracErrorBadId); return; }
            if (ctx.gpr[5] != 0u) {
                if (!rt.memory().contains(ctx.gpr[5], 4u)) { ctx.set_gpr(2, kAtracErrorBadAddress); return; }
                rt.memory().store32(ctx.gpr[5], static_cast<std::uint32_t>(state->loop_num));
            }
            if (ctx.gpr[6] != 0u) {
                if (!rt.memory().contains(ctx.gpr[6], 4u)) { ctx.set_gpr(2, kAtracErrorBadAddress); return; }
                rt.memory().store32(ctx.gpr[6], state->header.loop_start >= 0 ? 1u : 0u);
            }
            set_success(ctx);
        });

    runtime.register_hle("sceAtrac3plus", 0x868120B5u,
        [get_atrac](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            auto *state = get_atrac(ctx.gpr[4]);
            if (!state) { ctx.set_gpr(2, kAtracErrorBadId); return; }
            state->loop_num = static_cast<std::int32_t>(ctx.gpr[5]);
            set_success(ctx);
        });

    runtime.register_hle("sceAtrac3plus", 0xE88F759Bu,
        [get_atrac](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            auto *state = get_atrac(ctx.gpr[4]);
            if (!state) { ctx.set_gpr(2, kAtracErrorBadId); return; }
            if (ctx.gpr[5] != 0u) {
                if (!rt.memory().contains(ctx.gpr[5], 4u)) { ctx.set_gpr(2, kAtracErrorBadAddress); return; }
                rt.memory().store32(ctx.gpr[5], state->internal_error);
            }
            set_success(ctx);
        });

    const auto buffer_info_for_resetting =
        [get_atrac](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            auto *state = get_atrac(ctx.gpr[4]);
            if (!state) { ctx.set_gpr(2, kAtracErrorBadId); return; }
            const std::uint32_t sample = ctx.gpr[5];
            const std::uint32_t info = ctx.gpr[6];
            if (!rt.memory().contains(info, 32u)) { ctx.set_gpr(2, kAtracErrorBadAddress); return; }
            const std::uint32_t frame = sample / atrac_samples_per_frame(*state);
            const std::uint64_t pos64 = static_cast<std::uint64_t>(state->header.data_offset) +
                static_cast<std::uint64_t>(frame) * state->header.block_align;
            const std::uint32_t file_pos = static_cast<std::uint32_t>(std::min<std::uint64_t>(pos64, state->header.file_size));
            const std::uint32_t writable = std::min(state->buffer_size, state->header.file_size - file_pos);
            rt.memory().store32(info + 0u, state->buffer_address);
            rt.memory().store32(info + 4u, writable);
            rt.memory().store32(info + 8u, std::min<std::uint32_t>(writable, state->header.block_align));
            rt.memory().store32(info + 12u, file_pos);
            rt.memory().zero(info + 16u, 16u);
            set_success(ctx);
        };
    runtime.register_hle("sceAtrac3plus", 0xCA3CA3D2u, buffer_info_for_resetting);
    runtime.register_hle("sceAtrac3plus", 0x2DD3E298u, buffer_info_for_resetting);

    runtime.register_hle("sceAtrac3plus", 0x644E5607u,
        [get_atrac](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            auto *state = get_atrac(ctx.gpr[4]);
            if (!state) { ctx.set_gpr(2, kAtracErrorBadId); return; }
            const std::uint32_t sample = std::min(ctx.gpr[5], state->header.total_samples);
            const std::uint32_t bytes_first = ctx.gpr[6];
            const std::uint32_t frame = sample / atrac_samples_per_frame(*state);
            const std::uint64_t pos64 = static_cast<std::uint64_t>(state->header.data_offset) +
                static_cast<std::uint64_t>(frame) * state->header.block_align;
            state->sample_position = sample;
            state->next_file_offset = static_cast<std::uint32_t>(std::min<std::uint64_t>(pos64 + bytes_first, state->header.file_size));
            state->buffered_encoded_bytes = std::min(bytes_first, state->buffer_size);
            state->write_offset = state->buffer_size == 0u ? 0u : bytes_first % state->buffer_size;
            close_atrac_decoder(*state);
            set_success(ctx);
        });

    register_sas_hle(runtime);

    runtime.register_hle("sceAudio", 0x5EC81C55u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            auto channel = static_cast<std::int32_t>(ctx.gpr[4]);
            const std::uint32_t sample_count = ctx.gpr[5];
            const std::uint32_t format = ctx.gpr[6];
            if (sample_count == 0u || (sample_count & 63u) != 0u || sample_count > 65472u) {
                ctx.set_gpr(2, 0x80260006u);
                return;
            }
            if (channel < 0) {
                channel = -1;
                for (std::int32_t candidate = 0; candidate < 8; ++candidate) {
                    if (!audio_channels[static_cast<std::size_t>(candidate)].reserved) {
                        channel = candidate;
                        break;
                    }
                }
                if (channel < 0) {
                    ctx.set_gpr(2, 0x80260001u);
                    return;
                }
            } else if (channel >= 8 || audio_channels[static_cast<std::size_t>(channel)].reserved) {
                ctx.set_gpr(2, 0x80260001u);
                return;
            }
            auto &state = audio_channels[static_cast<std::size_t>(channel)];
            audio_output_reset_channel(static_cast<std::uint32_t>(channel));
            state = AudioChannelState{};
            state.reserved = true;
            state.sample_count = sample_count;
            state.format = format;
            ctx.set_gpr(2, static_cast<std::uint32_t>(channel));
        });

    runtime.register_hle("sceAudio", 0x6FC46853u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            const std::uint32_t channel = ctx.gpr[4];
            if (channel >= 8u) { ctx.set_gpr(2, 0x80260003u); return; }
            if (!audio_channels[channel].reserved) { ctx.set_gpr(2, 0x80260001u); return; }
            audio_channels[channel] = {};
            audio_output_reset_channel(channel);
            set_success(ctx);
        });

    runtime.register_hle("sceAudio", 0xB011922Fu,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            const std::uint32_t channel = ctx.gpr[4];
            if (channel >= 8u) { ctx.set_gpr(2, 0x80260003u); return; }
            ctx.set_gpr(2, audio_remaining_samples(audio_channels[channel]));
        });

    runtime.register_hle("sceAudio", 0xCB2E439Eu,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            const std::uint32_t channel = ctx.gpr[4];
            const std::uint32_t length = ctx.gpr[5];
            if (channel >= 8u) { ctx.set_gpr(2, 0x80260003u); return; }
            if (!audio_channels[channel].reserved) { ctx.set_gpr(2, 0x80260001u); return; }
            if (length == 0u || (length & 63u) != 0u || length > 65472u) {
                ctx.set_gpr(2, 0x80260006u);
                return;
            }
            audio_channels[channel].sample_count = length;
            set_success(ctx);
        });

    runtime.register_hle("sceAudio", 0x95FD0C2Du,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            const std::uint32_t channel = ctx.gpr[4];
            if (channel >= 8u) { ctx.set_gpr(2, 0x80260003u); return; }
            if (!audio_channels[channel].reserved) { ctx.set_gpr(2, 0x80260001u); return; }
            audio_channels[channel].format = ctx.gpr[5];
            set_success(ctx);
        });

    runtime.register_hle("sceAudio", 0xB7E1D8E7u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            const std::uint32_t channel = ctx.gpr[4];
            if (channel >= 8u) { ctx.set_gpr(2, 0x80260003u); return; }
            if (!audio_channels[channel].reserved) { ctx.set_gpr(2, 0x80260001u); return; }
            set_success(ctx);
        });

    auto audio_output_common = [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx,
                                  std::uint32_t left, std::uint32_t right,
                                  std::uint32_t buffer, bool blocking) {
        const std::uint32_t channel = ctx.gpr[4];
        if (channel >= 8u) { ctx.set_gpr(2, 0x80260003u); return; }
        auto &state = audio_channels[channel];
        if (!state.reserved) { ctx.set_gpr(2, 0x80260001u); return; }
        if (!blocking && audio_remaining_samples(state) != 0u) {
            ctx.set_gpr(2, 0x80260002u);
            return;
        }
        const bool stereo = state.format == 0u;
        const std::uint32_t frames = state.sample_count;
        const std::size_t samples = static_cast<std::size_t>(frames) * (stereo ? 2u : 1u);
        const std::uint64_t start_us = audio_queue_buffer(state, frames);
        if (buffer != 0u && frames != 0u &&
            rt.memory().contains(buffer, samples * sizeof(std::int16_t))) {
            std::vector<std::int16_t> pcm(samples);
            for (std::size_t index = 0; index < samples; ++index) {
                pcm[index] = static_cast<std::int16_t>(
                    rt.memory().load16(buffer + static_cast<std::uint32_t>(index * 2u)));
            }
            audio_output_submit(pcm, frames, stereo, left, right, 44100u, channel, start_us,
                                virtual_time_us);
        }
        const std::uint64_t wait_us = start_us > virtual_time_us ? start_us - virtual_time_us : 0u;
        if (blocking) {
            (void)delay_current_thread(rt, ctx, static_cast<std::uint32_t>(wait_us), frames);
        } else {
            ctx.set_gpr(2, frames);
        }
    };
    runtime.register_hle("sceAudio", 0x136CAF51u,
        [audio_output_common](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            audio_output_common(rt, ctx, ctx.gpr[5], ctx.gpr[5], ctx.gpr[6], true);
        });
    runtime.register_hle("sceAudio", 0x8C1009B2u,
        [audio_output_common](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            audio_output_common(rt, ctx, ctx.gpr[5], ctx.gpr[5], ctx.gpr[6], false);
        });
    runtime.register_hle("sceAudio", 0xE2D56B2Du,
        [audio_output_common](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            audio_output_common(rt, ctx, ctx.gpr[5], ctx.gpr[6], ctx.gpr[7], false);
        });
    runtime.register_hle("sceAudio", 0x13F592BCu,
        [audio_output_common](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            audio_output_common(rt, ctx, ctx.gpr[5], ctx.gpr[6], ctx.gpr[7], true);
        });

    runtime.register_hle("sceMpeg", 0x42560F23u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            const auto state = mpeg_contexts.find(ctx.gpr[4]);
            if (state == mpeg_contexts.end()) {
                ctx.set_gpr(2, 0x806101FEu);
                return;
            }
            const std::uint32_t stream_id = next_mpeg_stream_id++;
            state->second.streams.emplace(stream_id, MpegStreamState{ctx.gpr[5], ctx.gpr[6]});
            ctx.set_gpr(2, stream_id);
        });

    runtime.register_hle("sceMpeg", 0x591A4AA2u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            const auto state = mpeg_contexts.find(ctx.gpr[4]);
            if (state == mpeg_contexts.end() || state->second.streams.erase(ctx.gpr[5]) != 1u) {
                ctx.set_gpr(2, 0x806101FEu);
                return;
            }
            set_success(ctx);
        });

    runtime.register_hle("sceMpeg", 0xA780CF7Eu,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            const auto state = mpeg_contexts.find(ctx.gpr[4]);
            if (state == mpeg_contexts.end()) {
                ctx.set_gpr(2, 0x806101FEu);
                return;
            }
            for (std::size_t index = 0; index < state->second.avc_es_buffers.size(); ++index) {
                if (!state->second.avc_es_buffers[index]) {
                    state->second.avc_es_buffers[index] = true;
                    ctx.set_gpr(2, static_cast<std::uint32_t>(index + 1u));
                    return;
                }
            }
            ctx.set_gpr(2, 0u);
        });

    runtime.register_hle("sceMpeg", 0xCEB870B1u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            const auto state = mpeg_contexts.find(ctx.gpr[4]);
            const std::uint32_t buffer = ctx.gpr[5];
            if (state == mpeg_contexts.end() || buffer == 0u || buffer > 2u ||
                !state->second.avc_es_buffers[buffer - 1u]) {
                ctx.set_gpr(2, 0x806101FEu);
                return;
            }
            state->second.avc_es_buffers[buffer - 1u] = false;
            set_success(ctx);
        });

    runtime.register_hle("sceMpeg", 0xF8DCB679u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            if (mpeg_contexts.find(ctx.gpr[4]) == mpeg_contexts.end() ||
                !rt.memory().contains(ctx.gpr[5], 4u) || !rt.memory().contains(ctx.gpr[6], 4u)) {
                ctx.set_gpr(2, 0x80610103u);
                return;
            }
            rt.memory().store32(ctx.gpr[5], 2112u);
            rt.memory().store32(ctx.gpr[6], 8192u);
            set_success(ctx);
        });

    runtime.register_hle("sceMpeg", 0x167AFD9Eu,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const std::uint32_t au = ctx.gpr[6];
            if (mpeg_contexts.find(ctx.gpr[4]) == mpeg_contexts.end() ||
                !rt.memory().contains(au, 24u)) {
                ctx.set_gpr(2, 0x80610103u);
                return;
            }
            rt.memory().zero(au, 24u);
            rt.memory().store32(au + 8u, 0xFFFFFFFFu);
            rt.memory().store32(au + 12u, 0xFFFFFFFFu);
            set_success(ctx);
        });

    runtime.register_hle("sceMpeg", 0xFE246728u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const auto state = mpeg_contexts.find(ctx.gpr[4]);
            const std::uint32_t au = ctx.gpr[6];
            const std::uint32_t attributes = ctx.gpr[7];
            if (state == mpeg_contexts.end() || !rt.memory().contains(au, 24u)) {
                ctx.set_gpr(2, 0x806101FEu);
                return;
            }
            if (state->second.video_au_count >= mpeg_au_limit(state->second)) {
                write_mpeg_timestamp(rt.memory(), au, 0u);
                write_mpeg_timestamp(rt.memory(), au + 8u, 0u);
                ctx.set_gpr(2, 0x80618001u);
                return;
            }
            const std::uint64_t pts = static_cast<std::uint64_t>(state->second.video_au_count) * 3003u;
            const std::uint64_t dts = pts >= 3003u ? pts - 3003u : 0u;
            write_mpeg_timestamp(rt.memory(), au, pts);
            write_mpeg_timestamp(rt.memory(), au + 8u, dts);
            rt.memory().store32(au + 16u, ctx.gpr[5]);
            rt.memory().store32(au + 20u, 2048u);
            if (attributes != 0u && rt.memory().contains(attributes, 4u))
                rt.memory().store32(attributes, 1u);
            ++state->second.video_au_count;
            set_success(ctx);
        });

    runtime.register_hle("sceMpeg", 0xE1CE83A7u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const auto state = mpeg_contexts.find(ctx.gpr[4]);
            const std::uint32_t au = ctx.gpr[6];
            if (state == mpeg_contexts.end() || !rt.memory().contains(au, 24u)) {
                ctx.set_gpr(2, 0x806101FEu);
                return;
            }
            if (state->second.audio_au_count >= mpeg_au_limit(state->second)) {
                write_mpeg_timestamp(rt.memory(), au, 0u);
                write_mpeg_timestamp(rt.memory(), au + 8u, 0u);
                ctx.set_gpr(2, 0x80618001u);
                return;
            }
            const std::uint64_t pts = static_cast<std::uint64_t>(state->second.audio_au_count) * 4180u;
            write_mpeg_timestamp(rt.memory(), au, pts);
            write_mpeg_timestamp(rt.memory(), au + 8u, pts);
            rt.memory().store32(au + 16u, ctx.gpr[5]);
            rt.memory().store32(au + 20u, 2048u);
            ++state->second.audio_au_count;
            set_success(ctx);
        });

    runtime.register_hle("sceMpeg", 0x707B7629u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            const auto state = mpeg_contexts.find(ctx.gpr[4]);
            if (state == mpeg_contexts.end()) {
                ctx.set_gpr(2, 0x806101FEu);
                return;
            }
            set_success(ctx);
        });

    runtime.register_hle("sceMpeg", 0x0E3C2E9Du,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const auto state = mpeg_contexts.find(ctx.gpr[4]);
            const std::uint32_t au = ctx.gpr[5];
            std::uint32_t frame_width = ctx.gpr[6];
            const std::uint32_t buffer_pointer = ctx.gpr[7];
            const std::uint32_t status_pointer = ctx.gpr[8];
            if (state == mpeg_contexts.end() || !state->second.analyzed ||
                !rt.memory().contains(au, 24u) || !rt.memory().contains(buffer_pointer, 4u) ||
                !rt.memory().contains(status_pointer, 4u)) {
                ctx.set_gpr(2, 0x80610103u);
                return;
            }
            const ParsedPsmfHeader &header = state->second.header;
            if (frame_width == 0u) frame_width = header.width;
            if (header.width == 0u || header.height == 0u || frame_width < header.width) {
                ctx.set_gpr(2, 0x806201FEu);
                return;
            }
            const std::uint32_t destination = rt.memory().load32(buffer_pointer);
            const std::size_t source_stride = static_cast<std::size_t>(header.width) * 4u;
            const std::size_t destination_stride = static_cast<std::size_t>(frame_width) * 4u;
            const std::size_t destination_bytes = destination_stride * header.height;
            if (destination == 0u || !rt.memory().contains(destination, destination_bytes)) {
                ctx.set_gpr(2, 0x80610103u);
                return;
            }
            std::vector<std::uint8_t> frame(source_stride * header.height);
            if (!read_video_frame(state->second, frame)) {
                rt.memory().store32(status_pointer, 0u);
                ctx.set_gpr(2, 0x80628002u);
                return;
            }
            for (std::uint32_t y = 0u; y < header.height; ++y) {
                rt.memory().copy_in(
                    destination + static_cast<std::uint32_t>(y * destination_stride),
                    std::span<const std::uint8_t>(frame.data() + y * source_stride, source_stride));
            }
            rt.memory().store32(status_pointer, 1u);
            set_success(ctx);
        });

    runtime.register_hle("sceMpeg", 0x740FCCD1u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const auto state = mpeg_contexts.find(ctx.gpr[4]);
            const std::uint32_t buffer_pointer = ctx.gpr[6];
            const std::uint32_t status_pointer = ctx.gpr[7];
            if (state == mpeg_contexts.end()) { ctx.set_gpr(2, 0x806101FEu); return; }
            if (!rt.memory().contains(buffer_pointer, 4u) ||
                !rt.memory().contains(status_pointer, 4u)) {
                ctx.set_gpr(2, 0x80610103u);
                return;
            }
            rt.memory().store32(status_pointer, 0u);
            set_success(ctx);
        });

    runtime.register_hle("sceMpeg", 0xB240A59Eu,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const std::uint32_t ring = ctx.gpr[4];
            std::int32_t requested = static_cast<std::int32_t>(ctx.gpr[5]);
            const std::int32_t caller_available = static_cast<std::int32_t>(ctx.gpr[6]);
            if (!rt.memory().contains(ring, 48u)) { ctx.set_gpr(2, 0x80610103u); return; }
            const std::int32_t packets = static_cast<std::int32_t>(rt.memory().load32(ring));
            const std::int32_t used = static_cast<std::int32_t>(rt.memory().load32(ring + 12u));
            const std::int32_t write_position = static_cast<std::int32_t>(rt.memory().load32(ring + 8u));
            const std::uint32_t data = rt.memory().load32(ring + 20u);
            const std::uint32_t callback = rt.memory().load32(ring + 24u);
            const std::uint32_t callback_argument = rt.memory().load32(ring + 28u);
            if (packets <= 0 || callback == 0u) { ctx.set_gpr(2, 0x806101FEu); return; }
            requested = std::min({requested, caller_available, std::max(0, packets - used)});
            if (requested <= 0) { ctx.set_gpr(2, 0u); return; }
            const std::int32_t desired = std::min(requested, packets - write_position);
            if (desired <= 0) { ctx.set_gpr(2, 0u); return; }

            psprecomp::AllegrexContext resume = ctx;
            resume.pc = ctx.gpr[31];
            resume.set_gpr(2, 0u);
            auto &frames = async_return_frames[thread_table.current_uid];
            if (!frames.empty()) { ctx.set_gpr(2, 0u); return; }
            frames.push_back(AsyncReturnFrame{resume, 0, AsyncReturnKind::MpegRingbuffer, ring});
            ctx.set_gpr(4, data + static_cast<std::uint32_t>(write_position) * 2048u);
            ctx.set_gpr(5, static_cast<std::uint32_t>(desired));
            ctx.set_gpr(6, callback_argument);
            ctx.set_gpr(31, 0x00000004u);
            ctx.pc = callback;
        });

    runtime.register_hle("sceMpeg", 0xB5F6DC87u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const std::uint32_t ring = ctx.gpr[4];
            if (!rt.memory().contains(ring, 48u)) { ctx.set_gpr(2, 0x800200D3u); return; }
            const std::int32_t packets = static_cast<std::int32_t>(rt.memory().load32(ring));
            const std::int32_t used = static_cast<std::int32_t>(rt.memory().load32(ring + 12u));
            ctx.set_gpr(2, static_cast<std::uint32_t>(std::max(0, packets - used)));
        });

    runtime.register_hle("sceMpeg", 0x800C44DFu,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const auto state = mpeg_contexts.find(ctx.gpr[4]);
            const std::uint32_t au = ctx.gpr[5];
            const std::uint32_t output = ctx.gpr[6];
            if (state == mpeg_contexts.end() || !rt.memory().contains(au, 24u) ||
                !rt.memory().contains(output, 8192u)) {
                ctx.set_gpr(2, 0x80610103u);
                return;
            }
            MpegContextState &mpeg = state->second;
            if (!mpeg.source_path.empty() &&
                (!mpeg.audio.is_open() || mpeg.audio_source != mpeg.source_path)) {
                mpeg.audio_source = mpeg.source_path;
                (void)mpeg.audio.open(mpeg.source_path);
            }
            std::array<std::uint8_t, 8192u> pcm{};
            const std::size_t decoded = mpeg.audio.is_open() ? mpeg.audio.read(pcm) : 0u;
            if (decoded == 0u) rt.memory().zero(output, 8192u);
            else rt.memory().copy_in(output, std::span<const std::uint8_t>(pcm.data(), pcm.size()));
            set_success(ctx);
        });

    runtime.register_hle("ModuleMgrForUser", 0xB7F46618u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            const auto fd = static_cast<std::int32_t>(ctx.gpr[4]);
            if (!file_table.files.contains(fd)) {
                ctx.set_gpr(2, 0x80010009u);
                return;
            }
            const std::int32_t uid = next_module_uid++;
            loaded_modules.emplace(uid, false);
            ctx.set_gpr(2, static_cast<std::uint32_t>(uid));
        });
    runtime.register_hle("ModuleMgrForUser", 0x50F0C1ECu,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            const auto found = loaded_modules.find(uid);
            if (found == loaded_modules.end()) {
                ctx.set_gpr(2, 0x8002012Eu);
                return;
            }
            const std::uint32_t status = ctx.gpr[7];
            if (status != 0u && rt.memory().contains(status, 4u)) rt.memory().store32(status, 0u);
            found->second = true;
            ctx.set_gpr(2, static_cast<std::uint32_t>(uid));
        });
    runtime.register_hle("ModuleMgrForUser", 0xD1FF982Au,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            const auto found = loaded_modules.find(uid);
            if (found == loaded_modules.end()) {
                ctx.set_gpr(2, 0x8002012Eu);
                return;
            }
            const std::uint32_t status = ctx.gpr[7];
            if (status != 0u && rt.memory().contains(status, 4u)) rt.memory().store32(status, 0u);
            found->second = false;
            ctx.set_gpr(2, 0u);
        });
    runtime.register_hle("ModuleMgrForUser", 0x2E0911AAu,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            ctx.set_gpr(2, loaded_modules.erase(uid) == 1u ? 0u : 0x8002012Eu);
        });

    runtime.register_hle("scePower", 0x04B7766Eu,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) { set_success(ctx); });
    runtime.register_hle("scePower", 0xDFA8BAF8u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) { set_success(ctx); });

    runtime.register_hle("sceUmdUser", 0xAEE7404Du,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) { set_success(ctx); });
    runtime.register_hle("sceUmdUser", 0xBD2BDE07u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) { set_success(ctx); });
    runtime.register_hle("sceUmdUser", 0x46EBB729u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) { ctx.set_gpr(2, 1u); });
    runtime.register_hle("sceUmdUser", 0x6B4A146Cu,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) { ctx.set_gpr(2, 0x32u); });
    runtime.register_hle("sceUmdUser", 0x8EF08FCEu,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) { set_success(ctx); });
    runtime.register_hle("sceUmdUser", 0xC6183D47u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            umd_activated = true;
            notify_umd_callback();
            set_success(ctx);
        });

    runtime.register_hle("sceWlanDrv", 0xD7763699u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) { ctx.set_gpr(2, 0u); });

    runtime.register_hle("UtilsForUser", 0x27CC57F0u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const auto seconds = static_cast<std::uint32_t>(std::chrono::duration_cast<std::chrono::seconds>(
                std::chrono::system_clock::now().time_since_epoch()).count());
            if (ctx.gpr[4] != 0u && rt.memory().contains(ctx.gpr[4], 4u)) rt.memory().store32(ctx.gpr[4], seconds);
            ctx.set_gpr(2, seconds);
        });
    runtime.register_hle("UtilsForUser", 0x71EC4271u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const auto micros = std::chrono::duration_cast<std::chrono::microseconds>(
                std::chrono::system_clock::now().time_since_epoch()).count();
            if (ctx.gpr[4] != 0u && rt.memory().contains(ctx.gpr[4], 8u)) {
                rt.memory().store32(ctx.gpr[4], static_cast<std::uint32_t>(micros / 1000000));
                rt.memory().store32(ctx.gpr[4] + 4u, static_cast<std::uint32_t>(micros % 1000000));
            }
            if (ctx.gpr[5] != 0u && rt.memory().contains(ctx.gpr[5], 8u)) rt.memory().zero(ctx.gpr[5], 8u);
            set_success(ctx);
        });
    runtime.register_hle("UtilsForUser", 0x91E4F6A7u,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            ctx.set_gpr(2, static_cast<std::uint32_t>(virtual_time_us));
        });
    runtime.register_hle("SysMemUserForUser", 0x13A5ABEFu,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) { set_success(ctx); });

    runtime.register_hle("sceRtc", 0x6FF40ACCu,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const std::uint32_t date = ctx.gpr[4];
            const std::uint32_t out = ctx.gpr[5];
            if (!rt.memory().contains(date, 16u) || !rt.memory().contains(out, 8u)) {
                ctx.set_gpr(2, 0x80000103u);
                return;
            }
            std::int64_t year = rt.memory().load16(date + 0u);
            const std::uint32_t month_raw = rt.memory().load16(date + 2u);
            const std::uint32_t day_raw = rt.memory().load16(date + 4u);
            const unsigned month = month_raw == 0u ? 1u : month_raw;
            const unsigned day = day_raw == 0u ? 1u : day_raw;
            const std::uint64_t hour = rt.memory().load16(date + 6u);
            const std::uint64_t minute = rt.memory().load16(date + 8u);
            const std::uint64_t second = rt.memory().load16(date + 10u);
            const std::uint64_t microsecond = rt.memory().load32(date + 12u);
            year -= month <= 2u;
            const std::int64_t era = (year >= 0 ? year : year - 399) / 400;
            const unsigned yoe = static_cast<unsigned>(year - era * 400);
            const unsigned doy = (153u * (month + (month > 2u ? -3 : 9)) + 2u) / 5u + day - 1u;
            const unsigned doe = yoe * 365u + yoe / 4u - yoe / 100u + doy;
            constexpr std::int64_t kDaysToUnixEpoch = 719162;
            const std::int64_t days = era * 146097 + static_cast<std::int64_t>(doe) - 719468 + kDaysToUnixEpoch;
            const std::uint64_t tick = static_cast<std::uint64_t>(days) * 86400000000ull +
                (hour * 3600ull + minute * 60ull + second) * 1000000ull + microsecond;
            rt.memory().store32(out, static_cast<std::uint32_t>(tick));
            rt.memory().store32(out + 4u, static_cast<std::uint32_t>(tick >> 32u));
            set_success(ctx);
        });
    runtime.register_hle("sceRtc", 0x9ED0AE87u,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const auto load = [&](std::uint32_t address) {
                return static_cast<std::uint64_t>(rt.memory().load32(address)) |
                       (static_cast<std::uint64_t>(rt.memory().load32(address + 4u)) << 32u);
            };
            const std::uint64_t first = load(ctx.gpr[4]);
            const std::uint64_t second = load(ctx.gpr[5]);
            ctx.set_gpr(2, first < second ? 0xFFFFFFFFu : (first > second ? 1u : 0u));
        });
}

}
