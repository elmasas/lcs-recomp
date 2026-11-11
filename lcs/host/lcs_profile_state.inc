// Save states (lcs_state.hpp). Included by lcs_profile.cpp inside its anonymous namespace, after the kernel tables it
// needs and before lcs_starvation_tick, which calls state_poll.
//
// A state file holds: CPU (the running thread's registers), KRN (the kernel's tables), FIL (open files, reopened by path),
// AUD (audio channels, music and movie contexts), SAS (the sound chip), GE (the graphics engine's registers), WLD (which
// world sectors are merged into memory) and MEM (RAM and video memory, in 4 KB pages). Bump kStateVersion whenever
// something is added to what is saved. Structures saved byte for byte carry their size, so a changed layout is refused
// even without a bump.
//
// Audit of the other state the host keeps, so that a new global gets decided on and not forgotten:
//   saved:    every table in StateTables, the savedata utility, the SAS voices, the GE registers, the world-detail records.
//   derived (rebuilt from the game's memory every frame, nothing to do): lighting and corona lists, GPS route, camera
//             and free-aim hooks, crosshair, radio wheel, mouse/pad samples, controller smoothing.
//   caches (keyed by what they hold, safe to keep): textures and decoded packs, sector cache, shader and pipeline caches.
//   UI (refused or harmless): menus, pause menu, host settings (saving is refused while one is open), toasts.
//   trainer: toggles and "apply once" bookkeeping stay as they are. Switching a trainer cheat on or off between a save
//             and a load can leave its effect applied twice or not at all; the cheats are off by default.
//   refused:  a movie in progress (its decoder cannot be reopened mid-stream).
//   test-only: the LCS_TEST_* controls.

constexpr std::uint32_t kStateVersion = 4u;
constexpr char kStateMagic[8] = {'L', 'C', 'S', 'S', 'T', 'A', 'T', 'E'};
constexpr std::uint32_t kStatePage = 4096u;

std::atomic<int> g_state_request{0};  // 0: none, n > 0: save slot n - 1, n < 0: load slot -n - 1

std::filesystem::path state_file(int slot) {
    const char *directory = std::getenv("LCS_TEST_STATE_DIR");
    const std::filesystem::path root = directory != nullptr ? std::filesystem::path(directory)
                                                            : std::filesystem::path(game_root_folder()) / "STATES";
    if (slot >= kStateManualSlots) return root / ("auto" + std::to_string(slot - kStateManualSlots + 1) + ".state");
    return root / ("slot" + std::to_string(slot + 1) + ".state");
}

std::uint8_t *state_ram(psprecomp::Runtime &rt) {
    return rt.memory().raw_pointer(psprecomp::GuestMemory::kPhysicalBase, rt.memory().size());
}

std::uint8_t *state_vram(psprecomp::Runtime &rt) {
    return rt.memory().raw_pointer(psprecomp::GuestMemory::kVramPhysicalBase, rt.memory().vram_size());
}

// A quick whole-memory fingerprint, to check that a loaded state is what was saved.
std::uint64_t state_memory_checksum(const std::uint8_t *ram, std::size_t ram_size, const std::uint8_t *vram,
                                    std::size_t vram_size) {
    std::uint64_t hash = 1469598103934665603ull;
    const auto feed = [&](const std::uint8_t *data, std::size_t size) {
        std::size_t i = 0u;
        for (; i + 8u <= size; i += 8u) {
            std::uint64_t word;
            std::memcpy(&word, data + i, 8u);
            hash = (hash ^ word) * 1099511628211ull;
        }
        for (; i < size; ++i) hash = (hash ^ data[i]) * 1099511628211ull;
    };
    feed(ram, ram_size);
    feed(vram, vram_size);
    return hash;
}

std::uint64_t state_memory_checksum(psprecomp::Runtime &rt) {
    return state_memory_checksum(state_ram(rt), rt.memory().size(), state_vram(rt), rt.memory().vram_size());
}

// Memory in 4 KB pages; a page of zeros costs one byte.
void state_write_region(state::Writer &out, const std::uint8_t *data, std::uint32_t size) {
    out.u32(size);
    for (std::uint32_t at = 0u; at < size; at += kStatePage) {
        const std::uint32_t length = std::min(kStatePage, size - at);
        bool zero = true;
        for (std::uint32_t i = 0u; i < length && zero; ++i)
            if (data[at + i] != 0u) zero = false;
        out.boolean(!zero);
        if (!zero) out.bytes(data + at, length);
    }
}

// Walks a region as state_read_region would, without writing anything: a damaged one is found before memory changes.
bool state_check_region(state::Reader &in, std::uint32_t expected_size) {
    if (in.u32() != expected_size) return false;
    std::vector<std::uint8_t> skip(kStatePage);
    for (std::uint32_t at = 0u; at < expected_size; at += kStatePage) {
        const std::uint32_t length = std::min(kStatePage, expected_size - at);
        if (in.boolean() && !in.bytes(skip.data(), length)) return false;
        if (!in.ok()) return false;
    }
    return true;
}

bool state_read_region(state::Reader &in, std::uint8_t *data, std::uint32_t expected_size) {
    if (in.u32() != expected_size) return false;
    for (std::uint32_t at = 0u; at < expected_size; at += kStatePage) {
        const std::uint32_t length = std::min(kStatePage, expected_size - at);
        if (in.boolean()) {
            if (!in.bytes(data + at, length)) return false;
        } else {
            std::memset(data + at, 0, length);
        }
        if (!in.ok()) return false;
    }
    return true;
}

// ---- The kernel's bookkeeping: threads and their waits, synchronisation objects, callbacks, interrupts, time ----

void write_ctx(state::Writer &out, const psprecomp::AllegrexContext &ctx) { out.pod(ctx); }
psprecomp::AllegrexContext read_ctx(state::Reader &in) { return in.pod<psprecomp::AllegrexContext>(); }

void write_continuation(state::Writer &out, const ThreadContinuation &c) {
    out.i32(c.uid);
    write_ctx(out, c.context);
    out.u64(c.ready_sequence);
}
ThreadContinuation read_continuation(state::Reader &in) {
    ThreadContinuation c;
    c.uid = in.i32();
    c.context = read_ctx(in);
    c.ready_sequence = in.u64();
    return c;
}

// Map sizes come from the file: refuse absurd ones instead of allocating for them.
bool state_count_ok(state::Reader &in, std::uint32_t count, std::size_t minimum_bytes_each) {
    return in.ok() && static_cast<std::size_t>(count) * minimum_bytes_each <= in.remaining();
}

// ---- Files: paths are saved relative to the game folder, so that a state loads from another copy of the folder ----

std::string state_utf8(const std::filesystem::path &p) {
    const auto u = p.generic_u8string();
    return std::string(u.begin(), u.end());
}
std::filesystem::path state_from_utf8(const std::string &s) { return std::filesystem::path(std::u8string(s.begin(), s.end())); }

std::string state_path_out(const std::filesystem::path &p) {
    const std::filesystem::path root(game_root_folder());
    const std::filesystem::path relative = p.lexically_relative(root);
    if (!root.empty() && !relative.empty() && relative.begin()->string() != "..") return "R" + state_utf8(relative);
    return "A" + state_utf8(p);
}
std::filesystem::path state_path_in(const std::string &s) {
    if (s.empty()) return {};
    const std::filesystem::path rest = state_from_utf8(s.substr(1));
    return s[0] == 'R' ? std::filesystem::path(game_root_folder()) / rest : rest;
}

bool write_file_state(state::Writer &out, std::string &error) {
    out.i32(file_table.next_fd);
    out.u32(file_table.next_virtual_sector);

    out.u32(static_cast<std::uint32_t>(file_table.files.size()));
    for (auto &[fd, stream] : file_table.files) {
        const auto info = file_table.open_info.find(fd);
        if (info == file_table.open_info.end()) {
            error = "an open file (handle " + std::to_string(fd) + ") has no known path";
            return false;
        }
        // tellg() fails on a stream that has reached the end: look at the position with the flags cleared, then put them back.
        const std::ios::iostate flags = stream.rdstate();
        stream.clear();
        const std::streamoff position = static_cast<std::streamoff>(stream.tellg());
        stream.setstate(flags);
        out.i32(fd);
        out.str(state_path_out(info->second.path));
        out.i32(info->second.mode);
        out.u64(position < 0 ? 0u : static_cast<std::uint64_t>(position));
        out.u32(static_cast<std::uint32_t>(flags));
    }
    out.u32(static_cast<std::uint32_t>(file_table.raw_sector_files.size()));
    for (const auto &[fd, r] : file_table.raw_sector_files) {
        out.i32(fd);
        out.u64(r.base);
        out.u64(r.size);
    }
    out.u32(static_cast<std::uint32_t>(file_table.virtual_disc_handles.size()));
    for (const auto &[fd, h] : file_table.virtual_disc_handles) {
        out.i32(fd);
        out.u64(h.base_offset);
        out.u64(h.length);
        out.u64(h.position);
    }
    out.u32(static_cast<std::uint32_t>(file_table.directories.size()));
    for (const auto &[fd, d] : file_table.directories) {
        out.i32(fd);
        out.str(state_path_out(d.path));
        out.u64(static_cast<std::uint64_t>(d.index));
    }
    out.u32(static_cast<std::uint32_t>(file_table.virtual_files_by_path.size()));
    for (const auto &[key, f] : file_table.virtual_files_by_path) {
        out.str(key);
        out.str(state_path_out(f.native_path));
        out.u32(f.start_sector);
        out.u64(f.size);
    }
    out.u32(static_cast<std::uint32_t>(file_table.virtual_path_by_sector.size()));
    for (const auto &[sector, key] : file_table.virtual_path_by_sector) {
        out.u32(sector);
        out.str(key);
    }
    return true;
}

// Reopens every stream while parsing, so a missing file refuses the whole load before anything is changed.
bool read_file_state(state::Reader &in, FileTable &t, std::string &error) {
    t.next_fd = in.i32();
    t.next_virtual_sector = in.u32();
    std::uint32_t count = in.u32();
    if (!state_count_ok(in, count, 24u)) return false;
    for (std::uint32_t i = 0u; i < count; ++i) {
        const std::int32_t fd = in.i32();
        const std::filesystem::path path = state_path_in(in.str());
        const int mode = in.i32();
        const std::uint64_t position = in.u64();
        const auto flags = static_cast<std::ios::iostate>(in.u32());
        if (!in.ok()) return false;
        std::fstream stream(path, static_cast<std::ios::openmode>(mode));
        if (!stream) {
            error = "a file the saved game had open is missing: " + state_utf8(path);
            return false;
        }
        stream.seekg(static_cast<std::streamoff>(position));
        if ((mode & std::ios::out) != 0) stream.seekp(static_cast<std::streamoff>(position));
        stream.setstate(flags & (std::ios::eofbit));  // an end-of-file flag is part of what the game saw; failbit is not restored
        t.open_info[fd] = OpenFileInfo{path, mode};
        t.files.emplace(fd, std::move(stream));
    }
    count = in.u32();
    if (!state_count_ok(in, count, 20u)) return false;
    for (std::uint32_t i = 0u; i < count; ++i) {
        const std::int32_t fd = in.i32();
        RawSectorFile r;
        r.base = in.u64();
        r.size = in.u64();
        t.raw_sector_files.emplace(fd, r);
    }
    count = in.u32();
    if (!state_count_ok(in, count, 28u)) return false;
    for (std::uint32_t i = 0u; i < count; ++i) {
        const std::int32_t fd = in.i32();
        VirtualDiscHandle h;
        h.base_offset = in.u64();
        h.length = in.u64();
        h.position = in.u64();
        t.virtual_disc_handles.emplace(fd, h);
    }
    count = in.u32();
    if (!state_count_ok(in, count, 16u)) return false;
    for (std::uint32_t i = 0u; i < count; ++i) {
        const std::int32_t fd = in.i32();
        const std::filesystem::path path = state_path_in(in.str());
        const std::uint64_t index = in.u64();
        if (!in.ok()) return false;
        try {
            DirectoryHandle handle = list_directory(path);
            handle.index = static_cast<std::size_t>(std::min<std::uint64_t>(index, handle.entries.size()));
            t.directories.emplace(fd, std::move(handle));
        } catch (...) {
            error = "a folder the saved game was reading is missing: " + state_utf8(path);
            return false;
        }
    }
    count = in.u32();
    if (!state_count_ok(in, count, 20u)) return false;
    for (std::uint32_t i = 0u; i < count; ++i) {
        const std::string key = in.str();
        VirtualDiscFile f;
        f.native_path = state_path_in(in.str());
        f.start_sector = in.u32();
        f.size = in.u64();
        t.virtual_files_by_path.emplace(key, std::move(f));
    }
    count = in.u32();
    if (!state_count_ok(in, count, 8u)) return false;
    for (std::uint32_t i = 0u; i < count; ++i) {
        const std::uint32_t sector = in.u32();
        t.virtual_path_by_sector.emplace(sector, in.str());
    }
    return in.ok();
}

// ---- Audio: channels, music (ATRAC) and movie (MPEG) contexts ----
// Decoders are host objects with no position to save, so they are closed and reopened lazily where they were (ATRAC
// reopens at sample_position). A movie's decoder reopens at the start, so a state is refused while a movie plays.

void write_atrac_header(state::Writer &out, const ParsedAtracHeader &h) {
    out.u32(h.format_tag);
    out.u32(h.channels);
    out.u32(h.sample_rate);
    out.u32(h.average_bytes_per_second);
    out.u32(h.block_align);
    out.u32(h.bits_per_sample);
    out.u32(h.data_offset);
    out.u32(h.data_size);
    out.u32(h.file_size);
    out.u32(h.total_samples);
    out.i32(h.loop_start);
    out.i32(h.loop_end);
    out.boolean(h.atrac3plus);
}
ParsedAtracHeader read_atrac_header(state::Reader &in) {
    ParsedAtracHeader h;
    h.format_tag = static_cast<std::uint16_t>(in.u32());
    h.channels = static_cast<std::uint16_t>(in.u32());
    h.sample_rate = in.u32();
    h.average_bytes_per_second = in.u32();
    h.block_align = static_cast<std::uint16_t>(in.u32());
    h.bits_per_sample = static_cast<std::uint16_t>(in.u32());
    h.data_offset = in.u32();
    h.data_size = in.u32();
    h.file_size = in.u32();
    h.total_samples = in.u32();
    h.loop_start = in.i32();
    h.loop_end = in.i32();
    h.atrac3plus = in.boolean();
    return h;
}

struct AtracPlain {
    bool allocated{};
    ParsedAtracHeader header{};
    std::uint32_t buffer_address{}, initial_read_size{}, buffer_size{}, buffered_encoded_bytes{}, next_file_offset{},
        write_offset{}, last_writable_bytes{};
    std::uint64_t sample_position{};
    std::int32_t loop_num{};
    std::uint32_t internal_error{};
    std::filesystem::path source_path;
};

struct MpegPlain {
    std::uint32_t uid{}, ring_address{}, video_au_count{}, audio_au_count{};
    std::vector<std::pair<std::uint32_t, MpegStreamState>> streams;
    std::array<bool, 2> avc_es_buffers{};
    ParsedPsmfHeader header{};
    bool analyzed{};
    std::filesystem::path source_path, audio_source;
};

bool write_audio_state(state::Writer &out, std::string &error) {
    for (const auto &[uid, mpeg] : mpeg_contexts) {
        if (mpeg.video.is_open() || mpeg.audio.is_open()) {
            error = "a movie is playing";
            return false;
        }
    }
    for (const auto &channel : audio_channels) {
        out.boolean(channel.reserved);
        out.u32(channel.sample_count);
        out.u32(channel.format);
        out.u64(channel.busy_until_us);
    }
    for (const auto &a : atrac_contexts) {
        out.boolean(a.allocated);
        write_atrac_header(out, a.header);
        out.u32(a.buffer_address);
        out.u32(a.initial_read_size);
        out.u32(a.buffer_size);
        out.u32(a.buffered_encoded_bytes);
        out.u32(a.next_file_offset);
        out.u32(a.write_offset);
        out.u32(a.last_writable_bytes);
        out.u64(a.sample_position);
        out.i32(a.loop_num);
        out.u32(a.internal_error);
        out.str(state_path_out(a.source_path));
    }
    out.u32(next_mpeg_stream_id);
    out.u32(static_cast<std::uint32_t>(mpeg_contexts.size()));
    for (const auto &[uid, m] : mpeg_contexts) {
        out.u32(uid);
        out.u32(m.ring_address);
        out.u32(m.video_au_count);
        out.u32(m.audio_au_count);
        out.u32(static_cast<std::uint32_t>(m.streams.size()));
        for (const auto &[id, s] : m.streams) {
            out.u32(id);
            out.u32(s.type);
            out.u32(s.number);
        }
        out.boolean(m.avc_es_buffers[0]);
        out.boolean(m.avc_es_buffers[1]);
        out.u32(m.header.raw_version);
        out.u32(m.header.stream_offset);
        out.u32(m.header.stream_size);
        out.u64(m.header.first_timestamp);
        out.u64(m.header.last_timestamp);
        out.u32(m.header.width);
        out.u32(m.header.height);
        out.boolean(m.analyzed);
        out.str(state_path_out(m.source_path));
        out.str(state_path_out(m.audio_source));
    }
    return true;
}

struct AudioPlain {
    std::array<AudioChannelState, 8> channels{};
    std::array<AtracPlain, 6> atrac{};
    std::uint32_t next_mpeg_stream_id{1u};
    std::vector<MpegPlain> mpeg;
};

bool read_audio_state(state::Reader &in, AudioPlain &t) {
    for (auto &channel : t.channels) {
        channel.reserved = in.boolean();
        channel.sample_count = in.u32();
        channel.format = in.u32();
        channel.busy_until_us = in.u64();
        channel.queue_active = false;  // the output queue is flushed on load: the next buffer re-anchors it
        channel.queued_frames = 0u;
        channel.queue_anchor_us = 0u;
    }
    for (auto &a : t.atrac) {
        a.allocated = in.boolean();
        a.header = read_atrac_header(in);
        a.buffer_address = in.u32();
        a.initial_read_size = in.u32();
        a.buffer_size = in.u32();
        a.buffered_encoded_bytes = in.u32();
        a.next_file_offset = in.u32();
        a.write_offset = in.u32();
        a.last_writable_bytes = in.u32();
        a.sample_position = in.u64();
        a.loop_num = in.i32();
        a.internal_error = in.u32();
        a.source_path = state_path_in(in.str());
    }
    t.next_mpeg_stream_id = in.u32();
    const std::uint32_t count = in.u32();
    if (!state_count_ok(in, count, 60u)) return false;
    for (std::uint32_t i = 0u; i < count; ++i) {
        MpegPlain m;
        m.uid = in.u32();
        m.ring_address = in.u32();
        m.video_au_count = in.u32();
        m.audio_au_count = in.u32();
        const std::uint32_t streams = in.u32();
        if (!state_count_ok(in, streams, 12u)) return false;
        for (std::uint32_t s = 0u; s < streams; ++s) {
            const std::uint32_t id = in.u32();
            MpegStreamState stream;
            stream.type = in.u32();
            stream.number = in.u32();
            m.streams.emplace_back(id, stream);
        }
        m.avc_es_buffers[0] = in.boolean();
        m.avc_es_buffers[1] = in.boolean();
        m.header.raw_version = in.u32();
        m.header.stream_offset = in.u32();
        m.header.stream_size = in.u32();
        m.header.first_timestamp = in.u64();
        m.header.last_timestamp = in.u64();
        m.header.width = in.u32();
        m.header.height = in.u32();
        m.analyzed = in.boolean();
        m.source_path = state_path_in(in.str());
        m.audio_source = state_path_in(in.str());
        t.mpeg.push_back(std::move(m));
    }
    return in.ok();
}

void commit_audio_state(AudioPlain &&t) {
    // Close what is open first: a decoder opened for the later moment must not carry its position over.
    for (auto &[uid, m] : mpeg_contexts) {
        m.video.close();
        m.audio.close();
    }
    mpeg_contexts.clear();
    audio_output_restart_timeline();
    for (std::size_t i = 0u; i < audio_channels.size(); ++i) {
        audio_channels[i] = t.channels[i];
        audio_output_reset_channel(static_cast<std::uint32_t>(i));
    }
    for (std::size_t i = 0u; i < atrac_contexts.size(); ++i) {
        AtracContextState &a = atrac_contexts[i];
        close_atrac_decoder(a);  // reopened at sample_position by the next read
        const AtracPlain &p = t.atrac[i];
        a.allocated = p.allocated;
        a.header = p.header;
        a.buffer_address = p.buffer_address;
        a.initial_read_size = p.initial_read_size;
        a.buffer_size = p.buffer_size;
        a.buffered_encoded_bytes = p.buffered_encoded_bytes;
        a.next_file_offset = p.next_file_offset;
        a.write_offset = p.write_offset;
        a.last_writable_bytes = p.last_writable_bytes;
        a.sample_position = p.sample_position;
        a.loop_num = p.loop_num;
        a.internal_error = p.internal_error;
        a.source_path = p.source_path;
        a.decoder_eof = false;
    }
    next_mpeg_stream_id = t.next_mpeg_stream_id;
    for (const MpegPlain &p : t.mpeg) {
        MpegContextState &m = mpeg_contexts[p.uid];
        m.ring_address = p.ring_address;
        m.video_au_count = p.video_au_count;
        m.audio_au_count = p.audio_au_count;
        for (const auto &[id, s] : p.streams) m.streams[id] = s;
        m.avc_es_buffers = p.avc_es_buffers;
        m.header = p.header;
        m.analyzed = p.analyzed;
        m.source_path = p.source_path;
        m.audio_source = p.audio_source;
        m.video_eof = false;
    }
}

// All of these live in one struct so that a load can parse into temporaries first and replace the live tables only
// when the whole file is good.
struct StateTables {
    FileTable file;
    AudioPlain audio;
    std::string error;
    ThreadTable thread;
    PartitionTable partition;
    CallbackTable callback;
    SemaphoreTable semaphore;
    EventFlagTable event_flag;
    FixedPoolTable fixed_pool;
    GeCallbackTable ge_callback;
    std::int32_t ge_next_list_id{1};
    std::unordered_map<std::int32_t, std::vector<AsyncReturnFrame>> async_return_frames;
    std::unordered_map<std::int32_t, std::deque<PendingGeCallback>> pending_ge_callbacks;
    std::unordered_map<std::uint64_t, SubInterruptRecord> sub_interrupts;
    std::unordered_map<std::int32_t, DeferredIoResume> deferred_io_resumes;
    std::uint64_t virtual_time_us{};
    std::uint64_t umd_stream_flag_last_rearm_us{};
    std::uint64_t vblank_interrupt_due_us{};
    DisplayState display;
    std::uint64_t display_vblank_index{};
    ControllerState controller;
    std::unordered_map<std::int32_t, bool> loaded_modules;
    std::int32_t next_module_uid{0x400};
    bool volatile_memory_locked{};
    bool umd_activated{};
    bool umd_callback_notified{};
    std::uint32_t general_purpose_io{};
    std::uint32_t memory_stick_fat_state{1u};
    SavedataUtilityState savedata_utility;
};

void write_kernel_state(state::Writer &out) {
    // Threads.
    out.i32(thread_table.next_uid);
    out.i32(thread_table.current_uid);
    out.u32(thread_table.next_stack_top);
    out.u64(thread_table.next_ready_sequence);
    out.u64(thread_table.next_delay_sequence);
    out.u32(static_cast<std::uint32_t>(thread_table.threads.size()));
    for (const auto &[uid, t] : thread_table.threads) {
        out.i32(uid);
        out.str(t.name);
        out.u32(t.entry);
        out.u32(t.priority);
        out.u32(t.stack_size);
        out.u32(t.attributes);
        out.u32(t.stack_top);
        out.u32(t.stack_bottom);
        out.u32(t.kernel_context);
        out.i32(static_cast<std::int32_t>(t.state));
        out.u32(t.exit_status);
        out.boolean(t.externally_suspended);
        write_ctx(out, t.suspended_context);
        out.u32(t.wakeup_count);
        out.u64(t.delay_until_us);
        out.u64(t.delay_sequence);
    }
    out.u32(static_cast<std::uint32_t>(thread_table.continuations.size()));
    for (const auto &c : thread_table.continuations) write_continuation(out, c);
    out.u32(static_cast<std::uint32_t>(thread_table.thread_end_waiters.size()));
    for (const auto &[uid, waiters] : thread_table.thread_end_waiters) {
        out.i32(uid);
        out.u32(static_cast<std::uint32_t>(waiters.size()));
        for (const auto &c : waiters) write_continuation(out, c);
    }
    out.u32(static_cast<std::uint32_t>(thread_table.free_stacks.size()));
    for (const auto &f : thread_table.free_stacks) {
        out.u32(f.bottom);
        out.u32(f.top);
    }

    // Memory partitions.
    out.i32(partition_table.next_uid);
    out.u32(partition_table.next_address);
    out.u32(static_cast<std::uint32_t>(partition_table.blocks.size()));
    for (const auto &[uid, b] : partition_table.blocks) {
        out.i32(uid);
        out.str(b.name);
        out.u32(b.address);
        out.u32(b.size);
    }

    // Callbacks.
    out.i32(callback_table.next_uid);
    out.u32(static_cast<std::uint32_t>(callback_table.callbacks.size()));
    for (const auto &[uid, c] : callback_table.callbacks) {
        out.i32(uid);
        out.str(c.name);
        out.u32(c.function);
        out.u32(c.common);
        out.i32(c.owner_uid);
        out.u32(c.notify_count);
        out.u32(c.notify_argument);
    }

    // Semaphores.
    out.i32(semaphore_table.next_uid);
    out.u32(static_cast<std::uint32_t>(semaphore_table.semaphores.size()));
    for (const auto &[uid, s] : semaphore_table.semaphores) {
        out.i32(uid);
        out.str(s.name);
        out.i32(s.count);
        out.i32(s.maximum);
        out.u32(static_cast<std::uint32_t>(s.waiters.size()));
        for (const auto &w : s.waiters) {
            out.i32(w.uid);
            write_ctx(out, w.context);
            out.i32(w.requested);
        }
    }

    // Event flags.
    out.i32(event_flag_table.next_uid);
    out.u32(static_cast<std::uint32_t>(event_flag_table.flags.size()));
    for (const auto &[uid, f] : event_flag_table.flags) {
        out.i32(uid);
        out.str(f.name);
        out.u32(f.attributes);
        out.u32(f.initial_pattern);
        out.u32(f.current_pattern);
        out.u32(static_cast<std::uint32_t>(f.waiters.size()));
        for (const auto &w : f.waiters) {
            out.i32(w.uid);
            write_ctx(out, w.context);
            out.u32(w.requested);
            out.u32(w.mode);
            out.u32(w.output_address);
        }
    }

    // Fixed-size pools.
    out.i32(fixed_pool_table.next_uid);
    out.u32(static_cast<std::uint32_t>(fixed_pool_table.pools.size()));
    for (const auto &[uid, p] : fixed_pool_table.pools) {
        out.i32(uid);
        out.str(p.name);
        out.u32(p.address);
        out.u32(p.block_size);
        out.u32(p.block_count);
        out.u32(static_cast<std::uint32_t>(p.allocated.size()));
        for (const bool used : p.allocated) out.boolean(used);
    }

    // The graphics engine's callbacks, and what is waiting to run after a callback returns.
    out.i32(ge_callback_table.next_uid);
    out.u32(static_cast<std::uint32_t>(ge_callback_table.callbacks.size()));
    for (const auto &[uid, c] : ge_callback_table.callbacks) {
        out.i32(uid);
        out.u32(c.signal_function);
        out.u32(c.signal_argument);
        out.u32(c.finish_function);
        out.u32(c.finish_argument);
    }
    out.i32(ge_next_list_id);
    out.u32(static_cast<std::uint32_t>(async_return_frames.size()));
    for (const auto &[uid, frames] : async_return_frames) {
        out.i32(uid);
        out.u32(static_cast<std::uint32_t>(frames.size()));
        for (const auto &f : frames) {
            write_ctx(out, f.resume);
            out.i32(f.callback_uid);
            out.i32(static_cast<std::int32_t>(f.kind));
            out.u32(f.ring);
            out.u32(f.delay_us);
            out.boolean(f.vblank_wait);
        }
    }
    out.u32(static_cast<std::uint32_t>(pending_ge_callbacks.size()));
    for (const auto &[uid, pending] : pending_ge_callbacks) {
        out.i32(uid);
        out.u32(static_cast<std::uint32_t>(pending.size()));
        for (const auto &p : pending) {
            out.i32(p.callback_uid);
            out.u32(p.function);
            out.u32(p.finish_argument);
            out.u32(p.user_argument);
        }
    }
    out.u32(static_cast<std::uint32_t>(sub_interrupts.size()));
    for (const auto &[key, r] : sub_interrupts) {
        out.u64(key);
        out.u32(r.handler);
        out.u32(r.argument);
        out.boolean(r.enabled);
    }
    out.u32(static_cast<std::uint32_t>(deferred_io_resumes.size()));
    for (const auto &[uid, d] : deferred_io_resumes) {
        out.i32(uid);
        out.i32(d.handoff_uid);
        out.u32(d.handoff_pc);
        out.u32(d.release_pc);
    }

    // Time, display and the odd flags.
    out.u64(virtual_time_us);
    out.u64(umd_stream_flag_last_rearm_us);
    out.u64(g_vblank_interrupt_due_us);
    out.u32(display_state.mode);
    out.u32(display_state.width);
    out.u32(display_state.height);
    out.u32(display_state.frame_buffer);
    out.u32(display_state.buffer_width);
    out.u32(display_state.pixel_format);
    out.u32(display_state.sync_mode);
    out.u64(display_vblank_index);
    out.u32(controller_state.sampling_cycle);
    out.u32(controller_state.sampling_mode);
    out.u32(static_cast<std::uint32_t>(loaded_modules.size()));
    for (const auto &[uid, loaded] : loaded_modules) {
        out.i32(uid);
        out.boolean(loaded);
    }
    out.i32(next_module_uid);
    out.boolean(volatile_memory_locked);
    out.boolean(umd_activated);
    out.boolean(umd_callback_notified);
    out.u32(general_purpose_io);
    out.u32(memory_stick_fat_state);
    out.u32(static_cast<std::uint32_t>(savedata_utility.status));
    out.u32(savedata_utility.parameter_address);
    out.boolean(savedata_utility.operation_complete);
}

bool read_kernel_state(state::Reader &in, StateTables &t) {
    std::uint32_t count = 0u;

    t.thread.next_uid = in.i32();
    t.thread.current_uid = in.i32();
    t.thread.next_stack_top = in.u32();
    t.thread.next_ready_sequence = in.u64();
    t.thread.next_delay_sequence = in.u64();
    count = in.u32();
    if (!state_count_ok(in, count, 64u)) return false;
    for (std::uint32_t i = 0u; i < count; ++i) {
        const std::int32_t uid = in.i32();
        ThreadRecord r;
        r.name = in.str();
        r.entry = in.u32();
        r.priority = in.u32();
        r.stack_size = in.u32();
        r.attributes = in.u32();
        r.stack_top = in.u32();
        r.stack_bottom = in.u32();
        r.kernel_context = in.u32();
        r.state = static_cast<ThreadState>(in.i32());
        r.exit_status = in.u32();
        r.externally_suspended = in.boolean();
        r.suspended_context = read_ctx(in);
        r.wakeup_count = in.u32();
        r.delay_until_us = in.u64();
        r.delay_sequence = in.u64();
        t.thread.threads.emplace(uid, std::move(r));
    }
    count = in.u32();
    if (!state_count_ok(in, count, 16u)) return false;
    for (std::uint32_t i = 0u; i < count; ++i) t.thread.continuations.push_back(read_continuation(in));
    count = in.u32();
    if (!state_count_ok(in, count, 8u)) return false;
    for (std::uint32_t i = 0u; i < count; ++i) {
        const std::int32_t uid = in.i32();
        const std::uint32_t waiters = in.u32();
        if (!state_count_ok(in, waiters, 16u)) return false;
        auto &list = t.thread.thread_end_waiters[uid];
        for (std::uint32_t w = 0u; w < waiters; ++w) list.push_back(read_continuation(in));
    }
    count = in.u32();
    if (!state_count_ok(in, count, 8u)) return false;
    for (std::uint32_t i = 0u; i < count; ++i) {
        FreeThreadStack f;
        f.bottom = in.u32();
        f.top = in.u32();
        t.thread.free_stacks.push_back(f);
    }

    t.partition.next_uid = in.i32();
    t.partition.next_address = in.u32();
    count = in.u32();
    if (!state_count_ok(in, count, 16u)) return false;
    for (std::uint32_t i = 0u; i < count; ++i) {
        const std::int32_t uid = in.i32();
        PartitionBlock b;
        b.name = in.str();
        b.address = in.u32();
        b.size = in.u32();
        t.partition.blocks.emplace(uid, std::move(b));
    }

    t.callback.next_uid = in.i32();
    count = in.u32();
    if (!state_count_ok(in, count, 28u)) return false;
    for (std::uint32_t i = 0u; i < count; ++i) {
        const std::int32_t uid = in.i32();
        CallbackRecord c;
        c.name = in.str();
        c.function = in.u32();
        c.common = in.u32();
        c.owner_uid = in.i32();
        c.notify_count = in.u32();
        c.notify_argument = in.u32();
        t.callback.callbacks.emplace(uid, std::move(c));
    }

    t.semaphore.next_uid = in.i32();
    count = in.u32();
    if (!state_count_ok(in, count, 16u)) return false;
    for (std::uint32_t i = 0u; i < count; ++i) {
        const std::int32_t uid = in.i32();
        SemaphoreRecord s;
        s.name = in.str();
        s.count = in.i32();
        s.maximum = in.i32();
        const std::uint32_t waiters = in.u32();
        if (!state_count_ok(in, waiters, 12u)) return false;
        for (std::uint32_t w = 0u; w < waiters; ++w) {
            SemaphoreWaiter waiter;
            waiter.uid = in.i32();
            waiter.context = read_ctx(in);
            waiter.requested = in.i32();
            s.waiters.push_back(std::move(waiter));
        }
        t.semaphore.semaphores.emplace(uid, std::move(s));
    }

    t.event_flag.next_uid = in.i32();
    count = in.u32();
    if (!state_count_ok(in, count, 20u)) return false;
    for (std::uint32_t i = 0u; i < count; ++i) {
        const std::int32_t uid = in.i32();
        EventFlagRecord f;
        f.name = in.str();
        f.attributes = in.u32();
        f.initial_pattern = in.u32();
        f.current_pattern = in.u32();
        const std::uint32_t waiters = in.u32();
        if (!state_count_ok(in, waiters, 20u)) return false;
        for (std::uint32_t w = 0u; w < waiters; ++w) {
            EventFlagWaiter waiter;
            waiter.uid = in.i32();
            waiter.context = read_ctx(in);
            waiter.requested = in.u32();
            waiter.mode = in.u32();
            waiter.output_address = in.u32();
            f.waiters.push_back(std::move(waiter));
        }
        t.event_flag.flags.emplace(uid, std::move(f));
    }

    t.fixed_pool.next_uid = in.i32();
    count = in.u32();
    if (!state_count_ok(in, count, 24u)) return false;
    for (std::uint32_t i = 0u; i < count; ++i) {
        const std::int32_t uid = in.i32();
        FixedPoolRecord p;
        p.name = in.str();
        p.address = in.u32();
        p.block_size = in.u32();
        p.block_count = in.u32();
        const std::uint32_t blocks = in.u32();
        if (!state_count_ok(in, blocks, 1u)) return false;
        p.allocated.resize(blocks);
        for (std::uint32_t b = 0u; b < blocks; ++b) p.allocated[b] = in.boolean();
        t.fixed_pool.pools.emplace(uid, std::move(p));
    }

    t.ge_callback.next_uid = in.i32();
    count = in.u32();
    if (!state_count_ok(in, count, 20u)) return false;
    for (std::uint32_t i = 0u; i < count; ++i) {
        const std::int32_t uid = in.i32();
        GeCallbackRecord c;
        c.signal_function = in.u32();
        c.signal_argument = in.u32();
        c.finish_function = in.u32();
        c.finish_argument = in.u32();
        t.ge_callback.callbacks.emplace(uid, c);
    }
    t.ge_next_list_id = in.i32();
    count = in.u32();
    if (!state_count_ok(in, count, 8u)) return false;
    for (std::uint32_t i = 0u; i < count; ++i) {
        const std::int32_t uid = in.i32();
        const std::uint32_t frames = in.u32();
        if (!state_count_ok(in, frames, 16u)) return false;
        auto &list = t.async_return_frames[uid];
        for (std::uint32_t f = 0u; f < frames; ++f) {
            AsyncReturnFrame frame;
            frame.resume = read_ctx(in);
            frame.callback_uid = in.i32();
            frame.kind = static_cast<AsyncReturnKind>(in.i32());
            frame.ring = in.u32();
            frame.delay_us = in.u32();
            frame.vblank_wait = in.boolean();
            list.push_back(std::move(frame));
        }
    }
    count = in.u32();
    if (!state_count_ok(in, count, 8u)) return false;
    for (std::uint32_t i = 0u; i < count; ++i) {
        const std::int32_t uid = in.i32();
        const std::uint32_t pending = in.u32();
        if (!state_count_ok(in, pending, 16u)) return false;
        auto &list = t.pending_ge_callbacks[uid];
        for (std::uint32_t p = 0u; p < pending; ++p) {
            PendingGeCallback c;
            c.callback_uid = in.i32();
            c.function = in.u32();
            c.finish_argument = in.u32();
            c.user_argument = in.u32();
            list.push_back(c);
        }
    }
    count = in.u32();
    if (!state_count_ok(in, count, 17u)) return false;
    for (std::uint32_t i = 0u; i < count; ++i) {
        const std::uint64_t key = in.u64();
        SubInterruptRecord r;
        r.handler = in.u32();
        r.argument = in.u32();
        r.enabled = in.boolean();
        t.sub_interrupts.emplace(key, r);
    }
    count = in.u32();
    if (!state_count_ok(in, count, 16u)) return false;
    for (std::uint32_t i = 0u; i < count; ++i) {
        const std::int32_t uid = in.i32();
        DeferredIoResume d;
        d.handoff_uid = in.i32();
        d.handoff_pc = in.u32();
        d.release_pc = in.u32();
        t.deferred_io_resumes.emplace(uid, d);
    }

    t.virtual_time_us = in.u64();
    t.umd_stream_flag_last_rearm_us = in.u64();
    t.vblank_interrupt_due_us = in.u64();
    t.display.mode = in.u32();
    t.display.width = in.u32();
    t.display.height = in.u32();
    t.display.frame_buffer = in.u32();
    t.display.buffer_width = in.u32();
    t.display.pixel_format = in.u32();
    t.display.sync_mode = in.u32();
    t.display_vblank_index = in.u64();
    t.controller.sampling_cycle = in.u32();
    t.controller.sampling_mode = in.u32();
    count = in.u32();
    if (!state_count_ok(in, count, 5u)) return false;
    for (std::uint32_t i = 0u; i < count; ++i) {
        const std::int32_t uid = in.i32();
        t.loaded_modules.emplace(uid, in.boolean());
    }
    t.next_module_uid = in.i32();
    t.volatile_memory_locked = in.boolean();
    t.umd_activated = in.boolean();
    t.umd_callback_notified = in.boolean();
    t.general_purpose_io = in.u32();
    t.memory_stick_fat_state = in.u32();
    t.savedata_utility.status = static_cast<UtilityStatus>(in.u32());
    t.savedata_utility.parameter_address = in.u32();
    t.savedata_utility.operation_complete = in.boolean();
    return in.ok();
}

void commit_kernel_state(StateTables &&t) {
    thread_table = std::move(t.thread);
    file_table = std::move(t.file);
    commit_audio_state(std::move(t.audio));
    sas_commit_state();
    partition_table = std::move(t.partition);
    callback_table = std::move(t.callback);
    semaphore_table = std::move(t.semaphore);
    event_flag_table = std::move(t.event_flag);
    fixed_pool_table = std::move(t.fixed_pool);
    ge_callback_table = std::move(t.ge_callback);
    ge_next_list_id = t.ge_next_list_id;
    async_return_frames = std::move(t.async_return_frames);
    pending_ge_callbacks = std::move(t.pending_ge_callbacks);
    sub_interrupts = std::move(t.sub_interrupts);
    deferred_io_resumes = std::move(t.deferred_io_resumes);
    virtual_time_us = t.virtual_time_us;
    umd_stream_flag_last_rearm_us = t.umd_stream_flag_last_rearm_us;
    g_vblank_interrupt_due_us = t.vblank_interrupt_due_us;
    display_state = t.display;
    display_vblank_index = t.display_vblank_index;
    controller_state = t.controller;
    loaded_modules = std::move(t.loaded_modules);
    next_module_uid = t.next_module_uid;
    volatile_memory_locked = t.volatile_memory_locked;
    umd_activated = t.umd_activated;
    umd_callback_notified = t.umd_callback_notified;
    general_purpose_io = t.general_purpose_io;
    memory_stick_fat_state = t.memory_stick_fat_state;
    savedata_utility = t.savedata_utility;
    refresh_lcs_post_dispatch_hook();  // the hand-off hook is only installed while a hand-off is pending
}

// Writes a state file through a temporary name, so a crash halfway leaves the previous state whole.
bool write_state_file(const std::filesystem::path &path, const std::vector<std::uint8_t> &data, std::string &error) {
    std::error_code ec;
    std::filesystem::create_directories(path.parent_path(), ec);
    const std::filesystem::path temporary = path.string() + ".tmp";
    {
        std::ofstream file(temporary, std::ios::binary | std::ios::trunc);
        file.write(reinterpret_cast<const char *>(data.data()), static_cast<std::streamsize>(data.size()));
        if (!file) {
            error = "could not write " + temporary.string();
            return false;
        }
    }
    std::filesystem::rename(temporary, path, ec);
    if (ec) {
        error = "could not replace " + path.string() + ": " + ec.message();
        return false;
    }
    return true;
}

// Automatic states write their file on this thread, so the game only pauses for taking the snapshot. The next save or
// load waits for it first.
struct StateFileWriter {
    std::thread thread;
    void wait() {
        if (thread.joinable()) thread.join();
    }
    ~StateFileWriter() { wait(); }
};
StateFileWriter g_state_file_writer;

bool save_state(psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx, int slot, std::string &error,
                bool write_in_background = false) {
    g_state_file_writer.wait();
    static_assert(std::is_trivially_copyable_v<psprecomp::AllegrexContext>);
    ge_worker_wait_idle();  // queued draws must have run before the registers are read
    state::Writer out;
    out.bytes(kStateMagic, sizeof kStateMagic);
    out.u32(kStateVersion);
    out.u32(rt.memory().size());
    out.u32(rt.memory().vram_size());
    constexpr std::size_t kChecksumAt = sizeof kStateMagic + 3u * sizeof(std::uint32_t);
    // In the background the checksum is worked out later, from the copy of memory.
    out.u64(write_in_background ? 0u : state_memory_checksum(rt));

    out.begin("CPU ");
    out.u32(static_cast<std::uint32_t>(sizeof(psprecomp::AllegrexContext)));  // raw below, also in KRN
    out.pod(ctx);
    out.i32(psprecomp::runtime_thread_uid());
    out.str(psprecomp::runtime_thread_name());
    out.end();

    out.begin("KRN ");
    write_kernel_state(out);
    out.end();

    out.begin("FIL ");
    if (!write_file_state(out, error)) return false;
    out.end();

    out.begin("AUD ");
    if (!write_audio_state(out, error)) return false;
    out.end();

    out.begin("SAS ");
    sas_write_state(out);
    out.end();

    out.begin("GE  ");
    ge_exec_write_state(out);
    out.end();

    out.begin("WLD ");
    world_detail_write_state(out);
    out.end();

    const std::filesystem::path path = state_file(slot);
    if (!write_in_background) {
        out.begin("MEM ");
        state_write_region(out, state_ram(rt), rt.memory().size());
        state_write_region(out, state_vram(rt), rt.memory().vram_size());
        out.end();
        return write_state_file(path, out.data(), error);
    }
    // The game only waits for a straight copy of its memory; the checksum, the page encoding and the file are done on
    // the writer thread from that copy.
    std::vector<std::uint8_t> ram(state_ram(rt), state_ram(rt) + rt.memory().size());
    std::vector<std::uint8_t> vram(state_vram(rt), state_vram(rt) + rt.memory().vram_size());
    g_state_file_writer.thread = std::thread([path, data = out.take(), ram = std::move(ram), vram = std::move(vram)]() mutable {
        const std::uint64_t checksum = state_memory_checksum(ram.data(), ram.size(), vram.data(), vram.size());
        std::memcpy(data.data() + kChecksumAt, &checksum, sizeof checksum);
        state::Writer memory;
        memory.begin("MEM ");
        state_write_region(memory, ram.data(), static_cast<std::uint32_t>(ram.size()));
        state_write_region(memory, vram.data(), static_cast<std::uint32_t>(vram.size()));
        memory.end();
        data.insert(data.end(), memory.data().begin(), memory.data().end());
        std::string failure;
        if (!write_state_file(path, data, failure)) std::cerr << "[state] automatic state not written: " << failure << "\n";
    });
    return true;
}

bool load_state(psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx, int slot, std::string &error) {
    g_state_file_writer.wait();  // an automatic state may still be on its way to disk
    const std::filesystem::path path = state_file(slot);
    std::ifstream file(path, std::ios::binary);
    if (!file) {
        error = "no state in slot " + std::to_string(slot + 1);
        return false;
    }
    const std::vector<std::uint8_t> bytes((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    state::Reader in(bytes.data(), bytes.size());
    char magic[8];
    in.bytes(magic, sizeof magic);
    if (!in.ok() || std::memcmp(magic, kStateMagic, sizeof magic) != 0) {
        error = "not a state file";
        return false;
    }
    if (in.u32() != kStateVersion) {
        error = "state from another version";
        return false;
    }
    if (in.u32() != rt.memory().size() || in.u32() != rt.memory().vram_size()) {
        error = "state memory does not match this game";
        return false;
    }
    const std::uint64_t saved_checksum = in.u64();

    // Read everything before touching the running game, so that a damaged file changes nothing.
    psprecomp::AllegrexContext saved_ctx{};
    std::int32_t saved_runtime_uid = 0;
    std::string saved_thread_name;
    state::Reader memory_section;
    StateTables tables;
    bool have_cpu = false, have_memory = false, have_kernel = false, have_files = false, have_audio = false, have_sas = false, have_ge = false, have_world = false;
    char tag[5];
    state::Reader section;
    while (in.next_section(tag, section)) {
        if (std::strcmp(tag, "CPU ") == 0) {
            if (section.u32() != sizeof(psprecomp::AllegrexContext)) {
                error = "state from another build";
                return false;
            }
            saved_ctx = section.pod<psprecomp::AllegrexContext>();
            saved_runtime_uid = section.i32();
            saved_thread_name = section.str();
            have_cpu = section.ok();
        } else if (std::strcmp(tag, "KRN ") == 0) {
            have_kernel = read_kernel_state(section, tables);
        } else if (std::strcmp(tag, "FIL ") == 0) {
            have_files = read_file_state(section, tables.file, tables.error);
            if (!have_files) {
                error = tables.error.empty() ? "damaged state file (files)" : tables.error;
                return false;
            }
        } else if (std::strcmp(tag, "AUD ") == 0) {
            have_audio = read_audio_state(section, tables.audio);
        } else if (std::strcmp(tag, "SAS ") == 0) {
            have_sas = sas_parse_state(section);
        } else if (std::strcmp(tag, "GE  ") == 0) {
            have_ge = ge_exec_parse_state(section);
        } else if (std::strcmp(tag, "WLD ") == 0) {
            have_world = world_detail_parse_state(section);
        } else if (std::strcmp(tag, "MEM ") == 0) {
            memory_section = section;
            have_memory = true;
        }
    }
    if (!in.ok() || !have_cpu || !have_memory || !have_kernel || !have_files || !have_audio || !have_sas || !have_ge || !have_world) {
        error = "damaged state file";
        return false;
    }

    {   // The memory section is walked once first, so that a damaged one is refused before anything changes.
        state::Reader check = memory_section;
        if (!state_check_region(check, rt.memory().size()) || !state_check_region(check, rt.memory().vram_size())) {
            error = "damaged state memory";
            return false;
        }
    }

    ge_worker_wait_idle();  // no draw may still be reading the memory that is about to change
    // Checked above, so these cannot fail.
    (void)state_read_region(memory_section, state_ram(rt), rt.memory().size());
    (void)state_read_region(memory_section, state_vram(rt), rt.memory().vram_size());
    ctx = saved_ctx;
    commit_kernel_state(std::move(tables));
    ge_exec_commit_state();
    world_detail_commit_state();
    std::cerr << "[state] reopened " << file_table.files.size() << " files, " << file_table.directories.size() << " folders, "
              << file_table.virtual_disc_handles.size() << " disc handles\n";
    psprecomp::set_runtime_thread_identity(saved_runtime_uid, saved_thread_name);
    const std::uint64_t checksum = state_memory_checksum(rt);
    std::cerr << "[state] memory after loading " << (checksum == saved_checksum ? "matches" : "DIFFERS FROM")
              << " what was saved\n";
    return true;
}

// LCS_TEST_STATE_SELFTEST=1: opens a stream and a directory handle of our own, saves, loads, and checks that the stream
// is reopened at its position and the directory at its index. The game rarely holds ordinary streams open, so this
// is what exercises that code.
void state_selftest_files(psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
    namespace fs = std::filesystem;
    const fs::path dir = fs::temp_directory_path() / "lcs-state-selftest";
    std::error_code ec;
    fs::create_directories(dir, ec);
    const fs::path file = dir / "a.bin";
    {
        std::ofstream f(file, std::ios::binary | std::ios::trunc);
        f << "0123456789";
    }
    { std::ofstream g(dir / "b.bin", std::ios::binary | std::ios::trunc); g << "x"; }
    const std::int32_t fd = 900, dir_fd = 901;
    std::fstream stream(file, std::ios::binary | std::ios::in);
    stream.seekg(5);
    file_table.files.emplace(fd, std::move(stream));
    file_table.open_info[fd] = OpenFileInfo{file, static_cast<int>(std::ios::binary | std::ios::in)};
    DirectoryHandle d = list_directory(dir);
    d.index = 1u;
    file_table.directories.emplace(dir_fd, std::move(d));

    std::string error;
    bool ok = save_state(rt, ctx, 98, error) && load_state(rt, ctx, 98, error);
    char next = 0;
    std::size_t index = 99u;
    if (ok) {
        const auto s = file_table.files.find(fd);
        const auto h = file_table.directories.find(dir_fd);
        ok = s != file_table.files.end() && h != file_table.directories.end();
        if (ok) {
            s->second.read(&next, 1);
            index = h->second.index;
        }
    }
    std::cerr << "[state] selftest files " << (ok && next == '5' && index == 1u ? "OK" : "FAILED") << " (next byte '" << next
              << "', directory index " << index << (ok ? "" : ", " + error) << ")\n";
    file_table.files.erase(fd);
    file_table.open_info.erase(fd);
    file_table.directories.erase(dir_fd);
}

std::string state_toast_name(int slot) {
    return slot >= kStateManualSlots ? "AUTO " + std::to_string(slot - kStateManualSlots + 1) : "SLOT " + std::to_string(slot + 1);
}

std::chrono::steady_clock::time_point g_state_auto_last = std::chrono::steady_clock::now();

// Only while the player is playing: not in the main menu, a pause menu, the settings or the list of saves (the game
// is waiting for a choice there), and not during a movie (save_state refuses that).
bool state_auto_allowed() {
    return !frontend_menu_active() && !lcs_menu_active() && !host_settings_open() && !save_slots_open() &&
           !pause_menu_visible() && lcs_camera_in_use() && !weapon_wheel_open() && !radio_wheel_open();  // a wheel slows the game
}

// Every Display.AutoStateMinutes of play (LCS_TEST_STATE_AUTO_SECONDS in tests), the oldest automatic slot is replaced.
void state_auto_poll(psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
    static const char *const test_seconds = std::getenv("LCS_TEST_STATE_AUTO_SECONDS");
    const double interval = test_seconds != nullptr ? std::atof(test_seconds)
                                                    : 60.0 * lcs_render_configuration().display.auto_state_minutes;
    if (interval <= 0.0 || g_state_request.load() != 0) return;
    const auto now = std::chrono::steady_clock::now();
    if (std::chrono::duration<double>(now - g_state_auto_last).count() < interval) return;
    if (!state_auto_allowed()) return;  // tried again at the next tick
    int slot = kStateManualSlots;
    std::filesystem::file_time_type oldest = std::filesystem::file_time_type::max();
    for (int candidate = kStateManualSlots; candidate < kStateSlotCount; ++candidate) {
        std::error_code ec;
        const auto time = std::filesystem::last_write_time(state_file(candidate), ec);
        if (ec) {  // an empty slot first
            slot = candidate;
            break;
        }
        if (time < oldest) {
            oldest = time;
            slot = candidate;
        }
    }
    std::string error;
    const auto started = std::chrono::steady_clock::now();
    if (save_state(rt, ctx, slot, error, true)) {
        g_state_auto_last = now;
        const auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - started).count();
        std::cerr << "[state] automatic state " << (slot - kStateManualSlots + 1) << " in " << ms << " ms\n";
    } else {
        g_state_auto_last = now - std::chrono::duration_cast<std::chrono::steady_clock::duration>(
                                      std::chrono::duration<double>(std::max(0.0, interval - 30.0)));  // again in 30 s
        std::cerr << "[state] automatic state skipped: " << error << "\n";
    }
}

// Called at the top of the periodic outer-loop hook: the runtime is in control and no host call stack is live.
void state_poll(psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
    static bool selftest_done = std::getenv("LCS_TEST_STATE_SELFTEST") == nullptr;
    if (!selftest_done) {
        selftest_done = true;
        state_selftest_files(rt, ctx);
    }
    // Test controls: LCS_TEST_STATE_SAVE_AT and LCS_TEST_STATE_LOAD_AT are seconds since the first call.
    static const auto begin = std::chrono::steady_clock::now();
    static const char *const save_at = std::getenv("LCS_TEST_STATE_SAVE_AT");
    static const char *const load_at = std::getenv("LCS_TEST_STATE_LOAD_AT");
    static bool saved = false, loaded = false;
    // LCS_TEST_STATE_CYCLE=seconds: saves, then loads that state 2 s later, again and again (a soak for the states).
    static const char *const cycle = std::getenv("LCS_TEST_STATE_CYCLE");
    if (cycle != nullptr) {
        static double next_save = std::atof(cycle), next_load = -1.0;
        static int count = 0;
        const double elapsed = std::chrono::duration<double>(std::chrono::steady_clock::now() - begin).count();
        if (next_load < 0.0 && elapsed >= next_save && g_state_request.load() == 0) {
            g_state_request.store(1);
            next_load = elapsed + 2.0;
        } else if (next_load >= 0.0 && elapsed >= next_load && g_state_request.load() == 0) {
            g_state_request.store(-1);
            next_load = -1.0;
            next_save = elapsed + std::atof(cycle);
            std::cerr << "[state-soak] cycle " << ++count << '\n';
        }
    }
    if (save_at != nullptr || load_at != nullptr) {
        const double elapsed = std::chrono::duration<double>(std::chrono::steady_clock::now() - begin).count();
        if (save_at != nullptr && !saved && elapsed >= std::atof(save_at)) {
            saved = true;
            g_state_request.store(1);
        }
        if (load_at != nullptr && !loaded && elapsed >= std::atof(load_at)) {
            loaded = true;
            g_state_request.store(-1);
        }
    }
    state_auto_poll(rt, ctx);
    const int request = g_state_request.exchange(0);
    if (request == 0) return;
    const int slot = (request > 0 ? request : -request) - 1;
    std::string error;
    const auto started = std::chrono::steady_clock::now();
    const bool ok = request > 0 ? save_state(rt, ctx, slot, error) : load_state(rt, ctx, slot, error);
    const auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - started).count();
    {
        char text[40];
        if (ok) std::snprintf(text, sizeof text, "%s %s", request > 0 ? "SAVED" : "LOADED", state_toast_name(slot).c_str());
        else std::snprintf(text, sizeof text, "%s", request > 0 ? "CANNOT SAVE NOW" : "CANNOT LOAD");
        host_toast(text);
    }
    if (ok && request < 0) g_state_auto_last = std::chrono::steady_clock::now();  // a full interval before the next
    if (ok) std::cerr << "[state] " << (request > 0 ? "saved" : "loaded") << " slot " << (slot + 1) << " in " << ms << " ms ("
                      << file_table.files.size() << " files, " << file_table.directories.size() << " folders, "
                      << file_table.virtual_disc_handles.size() << " disc handles open)\n";
    else std::cerr << "[state] " << (request > 0 ? "save" : "load") << " failed: " << error << "\n";
}
