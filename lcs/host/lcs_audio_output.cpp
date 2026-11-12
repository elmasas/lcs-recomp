#include "lcs_audio_output.hpp"
#include "lcs_audio_mixer.hpp"

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <mutex>
#include <string>
#include <vector>

#if defined(_WIN32)

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <mmsystem.h>

namespace lcs {
namespace {

struct WaveOutDevice {
    struct Block {
        WAVEHDR header{};
        std::vector<std::int16_t> samples;
    };

    HWAVEOUT device{nullptr};
    std::vector<Block> blocks;
    std::size_t next_block{};
    bool opened{};
    bool failed{};

    bool ensure_open(AudioMixer &mixer) {
        if (opened) return true;
        if (failed) return false;
        WAVEFORMATEX format{};
        format.wFormatTag = WAVE_FORMAT_PCM;
        format.nChannels = static_cast<WORD>(AudioMixer::kOutputChannels);
        format.nSamplesPerSec = AudioMixer::kSampleRate;
        format.wBitsPerSample = 16u;
        format.nBlockAlign = static_cast<WORD>(AudioMixer::kOutputChannels * sizeof(std::int16_t));
        format.nAvgBytesPerSec = AudioMixer::kSampleRate * format.nBlockAlign;
        const MMRESULT open_result = waveOutOpen(&device, WAVE_MAPPER, &format, 0, 0, CALLBACK_NULL);
        if (open_result != MMSYSERR_NOERROR) {
            failed = true;
            device = nullptr;
            return false;
        }
        waveOutPause(device);
        blocks.resize(AudioMixer::kBlockCount);
        next_block = 0u;
        opened = true;
        mixer.note_device_opened();
        return true;
    }

    [[nodiscard]] std::size_t outstanding_blocks() const {
        return static_cast<std::size_t>(std::count_if(
            blocks.begin(), blocks.end(), [](const Block &block) {
                return (block.header.dwFlags & WHDR_PREPARED) != 0u &&
                    (block.header.dwFlags & WHDR_DONE) == 0u;
            }));
    }

    bool begin_block(std::int16_t *&samples) {
        Block &block = blocks[next_block];
        if ((block.header.dwFlags & WHDR_PREPARED) != 0u) {
            if ((block.header.dwFlags & WHDR_DONE) == 0u) return false;
            waveOutUnprepareHeader(device, &block.header, sizeof(WAVEHDR));
        }
        block.samples.resize(AudioMixer::kBlockSamples);
        samples = block.samples.data();
        return true;
    }

    bool commit_block() {
        Block &block = blocks[next_block];
        block.header = WAVEHDR{};
        block.header.lpData = reinterpret_cast<LPSTR>(block.samples.data());
        block.header.dwBufferLength =
            static_cast<DWORD>(block.samples.size() * sizeof(std::int16_t));
        if (waveOutPrepareHeader(device, &block.header, sizeof(WAVEHDR)) != MMSYSERR_NOERROR)
            return false;
        if (waveOutWrite(device, &block.header, sizeof(WAVEHDR)) != MMSYSERR_NOERROR) {
            waveOutUnprepareHeader(device, &block.header, sizeof(WAVEHDR));
            return false;
        }
        next_block = (next_block + 1u) % blocks.size();
        return true;
    }

    void pause_playback() { waveOutPause(device); }
    void resume_playback() { waveOutRestart(device); }

    void close_device(bool playback_started) {
        if (!opened || device == nullptr) return;
        if (!playback_started) waveOutRestart(device);
        waveOutReset(device);
        for (Block &block : blocks) {
            if ((block.header.dwFlags & WHDR_PREPARED) != 0u)
                waveOutUnprepareHeader(device, &block.header, sizeof(WAVEHDR));
        }
        waveOutClose(device);
        device = nullptr;
        opened = false;
        blocks.clear();
    }
};

using AudioDevice = WaveOutDevice;

#else

#include <SDL.h>

namespace lcs {
namespace {

struct SdlAudioDevice {
    SDL_AudioDeviceID device{};
    std::vector<std::int16_t> block;
    bool opened{};
    bool failed{};

    [[nodiscard]] const char *backend_name() const noexcept { return "SDL"; }

    bool ensure_open(AudioMixer &mixer) {
        if (opened) return true;
        if (failed) return false;
        if (SDL_InitSubSystem(SDL_INIT_AUDIO) != 0) {
            std::cerr << "[audio-host] SDL_InitSubSystem failed: " << SDL_GetError() << "\n";
            failed = true;
            return false;
        }
        SDL_AudioSpec want{};
        want.freq = static_cast<int>(AudioMixer::kSampleRate);
        want.format = AUDIO_S16SYS;
        want.channels = static_cast<Uint8>(AudioMixer::kOutputChannels);
        want.samples = static_cast<Uint16>(AudioMixer::kBlockFrames);
        SDL_AudioSpec got{};
        device = SDL_OpenAudioDevice(nullptr, 0, &want, &got, 0);
        if (device == 0) {
            std::cerr << "[audio-host] SDL_OpenAudioDevice failed: " << SDL_GetError() << "\n";
            failed = true;
            return false;
        }
        SDL_PauseAudioDevice(device, 1);
        block.resize(AudioMixer::kBlockSamples);
        opened = true;
        mixer.note_device_opened();
        std::cerr << "[audio-host] SDL " << got.freq << "Hz channels="
                  << static_cast<int>(got.channels) << " prebuffer_ms="
                  << (mixer.prebuffer_blocks() * AudioMixer::kBlockFrames * 1000u /
                      AudioMixer::kSampleRate) << "\n";
        return true;
    }

    [[nodiscard]] std::size_t outstanding_blocks() const {
        if (device == 0) return 0u;
        return SDL_GetQueuedAudioSize(device) /
            (AudioMixer::kBlockSamples * sizeof(std::int16_t));
    }

    bool begin_block(std::int16_t *&samples) {
        if (outstanding_blocks() >= AudioMixer::kBlockCount) return false;
        if (block.size() != AudioMixer::kBlockSamples) block.resize(AudioMixer::kBlockSamples);
        samples = block.data();
        return true;
    }

    bool commit_block() {
        return SDL_QueueAudio(device, block.data(),
                              static_cast<Uint32>(AudioMixer::kBlockSamples * sizeof(std::int16_t))) == 0;
    }

    void pause_playback() { SDL_PauseAudioDevice(device, 1); }
    void resume_playback() { SDL_PauseAudioDevice(device, 0); }

    void close_device(bool) {
        if (!opened || device == 0) return;
        SDL_PauseAudioDevice(device, 1);
        SDL_ClearQueuedAudio(device);
        SDL_CloseAudioDevice(device);
        device = 0;
        opened = false;
        block.clear();
    }
};

using AudioDevice = SdlAudioDevice;

#endif

struct AudioHost {
    std::mutex mutex;
    AudioMixer mixer;
    AudioDevice device;
};

AudioHost &audio_host() {
    static AudioHost host;
    return host;
}

}

bool audio_output_enabled() {
    static const bool enabled = [] {
        if (const char *text = std::getenv("PSPRECOMP_AUDIO"))
            return *text != '\0' && std::string(text) != "0";
        return true;
    }();
    return enabled;
}

void audio_output_submit(std::span<const std::int16_t> pcm, std::uint32_t frames,
                         bool stereo, std::uint32_t left, std::uint32_t right,
                         std::uint32_t source_rate, std::uint32_t channel,
                         std::uint64_t start_time_us, std::uint64_t now_us) {
    if (!audio_output_enabled()) return;
    AudioHost &host = audio_host();
    std::lock_guard<std::mutex> guard(host.mutex);
    host.mixer.submit(pcm, frames, stereo, left, right, source_rate, channel,
                      start_time_us, now_us, host.device);
}

void audio_output_advance(std::uint64_t guest_time_us) {
    if (!audio_output_enabled()) return;
    AudioHost &host = audio_host();
    std::lock_guard<std::mutex> guard(host.mutex);
    host.mixer.advance(guest_time_us, host.device);
}

void audio_output_restart_timeline() {
    AudioHost &host = audio_host();
    std::lock_guard<std::mutex> guard(host.mutex);
    host.mixer.restart_timeline();
}

void audio_output_reset_channel(std::uint32_t channel) {
    AudioHost &host = audio_host();
    std::lock_guard<std::mutex> guard(host.mutex);
    host.mixer.reset_channel(channel);
}

void audio_output_shutdown() {
    AudioHost &host = audio_host();
    std::lock_guard<std::mutex> guard(host.mutex);
    host.mixer.shutdown(host.device);
}

}
