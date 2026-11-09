#include "lcs_frontend_music.hpp"

#if defined(_WIN32)

#include "lcs_media_decoder.hpp"
#include "lcs_render_config.hpp"
#include "lcs_texture_pack.hpp"

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <mmsystem.h>

#include <algorithm>
#include <array>
#include <atomic>
#include <chrono>
#include <cstdint>
#include <filesystem>
#include <iostream>
#include <span>
#include <thread>
#include <vector>

namespace lcs {
namespace {

struct Track {
    const char *value;
    const char *file;  // under USRDIR/AUDIO
};
constexpr Track kTracks[] = {
    {"intro", "CUTSCENE/INTRO.AT3"},
    {"finale", "MUSIC/FINALE.AT3"},
    {"ending", "MUSIC/END.AT3"},
};
constexpr int kOff = -1;
constexpr std::uint32_t kRate = 44100u, kChannels = 2u, kFrames = 4096u;
constexpr std::size_t kBlocks = 6u;
constexpr double kFadeInSeconds = 0.5, kFadeOutSeconds = 1.0;

std::atomic<int> g_track{kOff};
std::atomic<bool> g_stop{false};

int track_index(const std::string &value) {
    for (int i = 0; i < static_cast<int>(std::size(kTracks)); ++i) {
        if (value == kTracks[i].value) return i;
    }
    return kOff;
}

struct Block {
    WAVEHDR header{};
    std::vector<std::int16_t> samples = std::vector<std::int16_t>(kFrames * kChannels);
};

// Fills the block from the track, starting it again at its end. What can't be read stays silent.
void fill(AudioStreamDecoder &decoder, int track, bool &failed, std::span<std::int16_t> samples) {
    std::fill(samples.begin(), samples.end(), std::int16_t{0});
    if (track == kOff || failed) return;
    const std::filesystem::path path = std::filesystem::path(game_root_folder()) / "PSP_GAME" / "USRDIR" / "AUDIO" / kTracks[track].file;
    const std::span<std::uint8_t> bytes(reinterpret_cast<std::uint8_t *>(samples.data()), samples.size_bytes());
    std::size_t done = 0u;
    bool restarted = false;
    while (done < bytes.size()) {
        if (!decoder.is_open() && !decoder.open(path, kRate, kChannels, 0u)) {
            std::cerr << "[menu-music] can't read " << kTracks[track].file << "\n";
            failed = true;
            return;
        }
        const std::size_t got = decoder.read(bytes.subspan(done));
        done += got;
        if (got != 0u) continue;
        decoder.close();
        if (restarted) {  // nothing came out of it, even from the start
            failed = true;
            return;
        }
        restarted = true;
    }
}

void play() {
    WAVEFORMATEX format{};
    format.wFormatTag = WAVE_FORMAT_PCM;
    format.nChannels = static_cast<WORD>(kChannels);
    format.nSamplesPerSec = kRate;
    format.wBitsPerSample = 16u;
    format.nBlockAlign = static_cast<WORD>(kChannels * sizeof(std::int16_t));
    format.nAvgBytesPerSec = kRate * format.nBlockAlign;
    HWAVEOUT device = nullptr;
    if (waveOutOpen(&device, WAVE_MAPPER, &format, 0, 0, CALLBACK_NULL) != MMSYSERR_NOERROR) return;

    std::array<Block, kBlocks> blocks;
    AudioStreamDecoder decoder;
    int current = kOff;
    bool failed = false;
    std::uint64_t played = 0u, fade_from = 0u;
    bool fading = false;
    bool peak_logged = false;
    int peak = 0;
    for (std::size_t next = 0u;;) {
        Block &block = blocks[next];
        if ((block.header.dwFlags & WHDR_PREPARED) != 0u) {
            if ((block.header.dwFlags & WHDR_DONE) == 0u) {
                std::this_thread::sleep_for(std::chrono::milliseconds(5));
                continue;
            }
            waveOutUnprepareHeader(device, &block.header, sizeof(block.header));
        }
        if (g_stop.load() && !fading) {
            fading = true;
            fade_from = played;
        }
        if (fading && played - fade_from >= static_cast<std::uint64_t>(kFadeOutSeconds * kRate)) break;

        const int wanted = g_track.load();
        if (wanted != current) {
            decoder.close();
            current = wanted;
            failed = false;
        }
        fill(decoder, current, failed, block.samples);
        for (const std::int16_t sample : block.samples) peak = std::max(peak, std::abs(static_cast<int>(sample)));
        if (!peak_logged && played >= kRate * 2u) {
            std::cerr << "[menu-music] playing " << (current == kOff ? "nothing" : kTracks[current].file) << ", peak " << peak << "\n";
            peak_logged = true;
        }
        const double volume = std::clamp(lcs_render_configuration().audio.volume, 0u, 100u) / 100.0;
        for (std::uint32_t frame = 0u; frame < kFrames; ++frame) {
            const std::uint64_t at = played + frame;
            double gain = volume * std::min(1.0, static_cast<double>(at) / (kFadeInSeconds * kRate));
            if (fading) gain *= std::max(0.0, 1.0 - static_cast<double>(at - fade_from) / (kFadeOutSeconds * kRate));
            for (std::uint32_t channel = 0u; channel < kChannels; ++channel) {
                std::int16_t &sample = block.samples[frame * kChannels + channel];
                sample = static_cast<std::int16_t>(sample * gain);
            }
        }
        played += kFrames;

        block.header = WAVEHDR{};
        block.header.lpData = reinterpret_cast<LPSTR>(block.samples.data());
        block.header.dwBufferLength = static_cast<DWORD>(block.samples.size() * sizeof(std::int16_t));
        waveOutPrepareHeader(device, &block.header, sizeof(block.header));
        waveOutWrite(device, &block.header, sizeof(block.header));
        next = (next + 1u) % kBlocks;
    }
    // What's already queued is the end of the fade.
    for (Block &block : blocks) {
        while ((block.header.dwFlags & WHDR_PREPARED) != 0u && (block.header.dwFlags & WHDR_DONE) == 0u) {
            std::this_thread::sleep_for(std::chrono::milliseconds(5));
        }
    }
    waveOutReset(device);
    for (Block &block : blocks) {
        if ((block.header.dwFlags & WHDR_PREPARED) != 0u) waveOutUnprepareHeader(device, &block.header, sizeof(block.header));
    }
    waveOutClose(device);
    std::cerr << "[menu-music] stopped\n";
}

}  // namespace

void frontend_music_start(const std::string &track) {
    static std::atomic<bool> started{false};
    frontend_music_select(track);
    if (started.exchange(true)) return;
    std::thread(play).detach();
}

void frontend_music_select(const std::string &track) { g_track.store(track_index(track)); }

void frontend_music_stop() { g_stop.store(true); }

}  // namespace lcs

#else

namespace lcs {

void frontend_music_start(const std::string &) {}
void frontend_music_select(const std::string &) {}
void frontend_music_stop() {}

}  // namespace lcs

#endif
