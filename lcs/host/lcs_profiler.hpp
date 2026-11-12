// Built-in sampling profiler (Windows). Off unless LCS_PROFILE=<seconds per report> is set. Samples the threads named
// in LCS_PROFILE_THREAD (default "GameThread,GeWorker") and prints their busiest host functions on stdout, tagged
// "[profile]". LCS_PROFILE_SPIKES=<ms> adds a short report for each frame slower than that.
#pragma once

namespace psprecomp {
class Runtime;
}

namespace lcs {

// Call once on the game's main thread after the runtime exists. Names that thread "GameThread".
void start_profiler(psprecomp::Runtime &runtime);

// Call once per shown frame. Lock-free; returns at once when the profiler or spike reports are off.
void profiler_frame() noexcept;

}  // namespace lcs
