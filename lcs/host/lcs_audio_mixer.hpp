#pragma once

#include "lcs_audio_resampler.hpp"

#include <algorithm>
#include <array>
#include <cstdio>
#include <cstdlib>
#include <limits>
#include <span>
#include <vector>

namespace lcs {

// One guest-channel mixer. waveOut and SDL only differ in how a block is queued.
class AudioMixer {
public:
    static constexpr std::uint32_t kSampleRate = StreamingLinearResampler::kOutputRate;
    static constexpr std::uint32_t kOutputChannels = 2u;
    static constexpr std::size_t kBlockFrames = 512u;
    static constexpr std::size_t kBlockCount = 24u;
    static constexpr std::size_t kDefaultPrebufferBlocks = 6u;
    static constexpr std::uint64_t kMixSafetyFrames = 1024u;
    static constexpr std::size_t kRingFrames = kSampleRate * 2u;
    static constexpr std::size_t kGuestChannels = 9u;
    static constexpr std::uint64_t kChannelDiscontinuityFrames = 64u;
    static constexpr std::size_t kBlockSamples = kBlockFrames * kOutputChannels;

    [[nodiscard]] bool opened() const noexcept { return opened_; }
    [[nodiscard]] std::size_t prebuffer_blocks() const noexcept { return prebuffer_blocks_; }

    void note_device_opened() {
        ring_.assign(kRingFrames * kOutputChannels, 0);
        output_frame_ = 0u;
        prebuffer_blocks_ = configured_prebuffer_blocks();
        recovery_prebuffer_blocks_ = std::clamp<std::size_t>(
            prebuffer_blocks_ + 2u, prebuffer_blocks_, kBlockCount - 2u);
        playback_started_ = false;
        recovering_from_underrun_ = false;
        opened_ = true;
    }

    template <typename Device>
    void submit(std::span<const std::int16_t> pcm, std::uint32_t frames, bool stereo,
                std::uint32_t left, std::uint32_t right, std::uint32_t source_rate,
                std::uint32_t channel, std::uint64_t start_time_us, std::uint64_t now_us,
                Device &device) {
        if (frames == 0u || channel >= kGuestChannels) return;
        if (source_rate == 0u) source_rate = kSampleRate;
        const std::size_t needed = static_cast<std::size_t>(frames) * (stereo ? 2u : 1u);
        if (pcm.size() < needed) return;
        if (!device.ensure_open(*this)) return;

        if (!timeline_anchored_) {
            guest_anchor_us_ = std::min(start_time_us, now_us);
            timeline_anchored_ = true;
            output_frame_ = 0u;
        }
        advance_locked(now_us, device);

        Channel &stream = channels_[channel];
        const std::uint64_t scheduled = guest_frame_for(start_time_us);
        const auto distance = [](std::uint64_t a, std::uint64_t b) {
            return a > b ? a - b : b - a;
        };
        const bool format_changed = stream.active &&
            (stream.source_rate != source_rate || stream.stereo != stereo);
        const bool discontinuity = stream.active &&
            distance(stream.cursor, scheduled) > kChannelDiscontinuityFrames;
        if (!stream.active || format_changed || discontinuity) {
            stream = Channel{};
            stream.active = true;
            stream.source_rate = source_rate;
            stream.stereo = stereo;
            stream.resampler.reset(source_rate, stereo);
            stream.cursor = std::max(scheduled, output_frame_);
        }
        if (stream.cursor < output_frame_) {
            stream.cursor = output_frame_;
            stream.resampler.reset(source_rate, stereo);
        }

        const std::uint32_t master = 100u;
        const std::int64_t left_gain = (static_cast<std::int64_t>(left) * master) / 100;
        const std::int64_t right_gain = (static_cast<std::int64_t>(right) * master) / 100;
        const std::uint64_t ring_limit = output_frame_ + kRingFrames - kBlockFrames;
        stream.resampler.process(pcm, frames, stereo, source_rate,
            [&](std::int16_t source_left, std::int16_t source_right) {
                if (stream.cursor >= ring_limit) {
                    ++stream.cursor;
                    return;
                }
                const std::size_t slot =
                    static_cast<std::size_t>(stream.cursor % kRingFrames) * kOutputChannels;
                const std::int64_t mixed_left =
                    (static_cast<std::int64_t>(source_left) * left_gain) >> 15;
                const std::int64_t mixed_right =
                    (static_cast<std::int64_t>(source_right) * right_gain) >> 15;
                ring_[slot] += static_cast<std::int32_t>(std::clamp<std::int64_t>(
                    mixed_left, std::numeric_limits<std::int32_t>::min(),
                    std::numeric_limits<std::int32_t>::max()));
                ring_[slot + 1u] += static_cast<std::int32_t>(std::clamp<std::int64_t>(
                    mixed_right, std::numeric_limits<std::int32_t>::min(),
                    std::numeric_limits<std::int32_t>::max()));
                ++stream.cursor;
            });
        stream.last_guest_time_us = start_time_us;
        advance_locked(now_us, device);
    }

    template <typename Device>
    void advance(std::uint64_t guest_time_us, Device &device) {
        if (!opened_) return;
        advance_locked(guest_time_us, device);
    }

    // The game's clock jumped (a save state was loaded): start the timeline again from the next sound, as at start-up.
    // Without this, a jump back leaves every new sound scheduled before what was already played, so nothing plays until
    // the game's clock gets back to where it was.
    void restart_timeline() {
        std::fill(ring_.begin(), ring_.end(), 0);
        timeline_anchored_ = false;
        output_frame_ = 0u;
        for (std::uint32_t channel = 0u; channel < kGuestChannels; ++channel) reset_channel(channel);
    }

    void reset_channel(std::uint32_t channel) {
        if (channel >= channels_.size()) return;
        channels_[channel] = Channel{};
    }

    template <typename Device>
    void shutdown(Device &device) {
        if (!opened_) return;
        device.close_device(playback_started_);
        ring_.clear();
        timeline_anchored_ = false;
        playback_started_ = false;
        recovering_from_underrun_ = false;
        output_frame_ = 0u;
        opened_ = false;
        for (std::uint32_t channel = 0u; channel < kGuestChannels; ++channel)
            reset_channel(channel);
    }

private:
    struct Channel {
        StreamingLinearResampler resampler;
        std::uint64_t cursor{};
        std::uint64_t last_guest_time_us{};
        std::uint32_t source_rate{kSampleRate};
        bool stereo{true};
        bool active{};
    };

    [[nodiscard]] static std::size_t configured_prebuffer_blocks() {
        const char *text = std::getenv("PSPRECOMP_AUDIO_PREBUFFER_BLOCKS");
        if (text == nullptr || *text == '\0') return kDefaultPrebufferBlocks;
        char *end = nullptr;
        const unsigned long value = std::strtoul(text, &end, 0);
        if (end == text || *end != '\0') return kDefaultPrebufferBlocks;
        return std::clamp<std::size_t>(static_cast<std::size_t>(value), 2u, kBlockCount - 2u);
    }

    [[nodiscard]] std::uint64_t guest_frame_for(std::uint64_t guest_time_us) const {
        if (!timeline_anchored_ || guest_time_us <= guest_anchor_us_) return 0u;
        const std::uint64_t delta = guest_time_us - guest_anchor_us_;
        return (delta * kSampleRate + 500000u) / 1000000u;
    }

    template <typename Device>
    bool queue_one_block(Device &device) {
        std::int16_t *samples = nullptr;
        if (!device.begin_block(samples) || samples == nullptr) return false;
        for (std::size_t frame = 0u; frame < kBlockFrames; ++frame) {
            const std::size_t slot =
                static_cast<std::size_t>((output_frame_ + frame) % kRingFrames) * kOutputChannels;
            for (std::size_t channel = 0u; channel < kOutputChannels; ++channel) {
                samples[frame * kOutputChannels + channel] = static_cast<std::int16_t>(
                    std::clamp(ring_[slot + channel], -32768, 32767));
                ring_[slot + channel] = 0;
            }
        }
        if (!device.commit_block()) return false;
        static const bool audio_log = std::getenv("LCS_TEST_AUDIO_LOG") != nullptr;  // test runs only
        if (audio_log) {
            static std::uint64_t frames = 0u, audible = 0u;
            for (std::size_t frame = 0u; frame < kBlockFrames; ++frame)
                if (samples[frame * kOutputChannels] != 0 || samples[frame * kOutputChannels + 1u] != 0) ++audible;
            frames += kBlockFrames;
            if (frames >= kSampleRate) {
                std::fprintf(stderr, "[audio] audible %u%%\n", static_cast<unsigned>(audible * 100u / frames));
                frames = audible = 0u;
            }
        }
        output_frame_ += kBlockFrames;
        const std::size_t target_blocks = recovering_from_underrun_
            ? recovery_prebuffer_blocks_ : prebuffer_blocks_;
        if (!playback_started_ && device.outstanding_blocks() >= target_blocks) {
            device.resume_playback();
            playback_started_ = true;
            recovering_from_underrun_ = false;
        }
        return true;
    }

    template <typename Device>
    void advance_locked(std::uint64_t guest_time_us, Device &device) {
        if (!timeline_anchored_ || !opened_) return;
        std::size_t outstanding = device.outstanding_blocks();
        if (playback_started_ && outstanding == 0u) {
            device.pause_playback();
            playback_started_ = false;
            recovering_from_underrun_ = true;
        }
        const std::uint64_t guest_frame = guest_frame_for(guest_time_us);
        const std::uint64_t safety_frames = playback_started_ && outstanding <= 2u
            ? 0u : kMixSafetyFrames;
        const std::uint64_t sealed_frame = guest_frame > safety_frames
            ? guest_frame - safety_frames : 0u;
        const std::size_t latency_limit_blocks = prebuffer_blocks_ + 2u;
        while (sealed_frame >= output_frame_ + kBlockFrames) {
            if (playback_started_ && outstanding >= latency_limit_blocks) {
                for (std::size_t frame = 0u; frame < kBlockFrames; ++frame) {
                    const std::size_t slot =
                        static_cast<std::size_t>((output_frame_ + frame) % kRingFrames) * kOutputChannels;
                    for (std::size_t channel = 0u; channel < kOutputChannels; ++channel)
                        ring_[slot + channel] = 0;
                }
                output_frame_ += kBlockFrames;
                continue;
            }
            if (!queue_one_block(device)) break;
            ++outstanding;
        }
    }

    std::vector<std::int32_t> ring_;
    std::uint64_t output_frame_{};
    std::uint64_t guest_anchor_us_{};
    bool timeline_anchored_{};
    std::array<Channel, kGuestChannels> channels_{};
    std::size_t prebuffer_blocks_{kDefaultPrebufferBlocks};
    std::size_t recovery_prebuffer_blocks_{kDefaultPrebufferBlocks * 2u};
    bool playback_started_{};
    bool recovering_from_underrun_{};
    bool opened_{};
};

}
