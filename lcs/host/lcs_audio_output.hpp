#pragma once

#include <cstdint>
#include <span>

namespace lcs {

[[nodiscard]] bool audio_output_enabled();

void audio_output_submit(std::span<const std::int16_t> pcm, std::uint32_t frames,
                         bool stereo, std::uint32_t left, std::uint32_t right,
                         std::uint32_t source_rate, std::uint32_t channel,
                         std::uint64_t start_time_us, std::uint64_t now_us);

void audio_output_advance(std::uint64_t guest_time_us);

void audio_output_reset_channel(std::uint32_t channel);
// After a save state is loaded: the game's clock has moved.
void audio_output_restart_timeline();

void audio_output_shutdown();

}
