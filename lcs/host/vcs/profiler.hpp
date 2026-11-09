// Sampling profiler, adapted from VCS Recomp's src/debug/profiler.h (GPL-3.0; see lcs/VCS_IMPORT.md).
//
// LCS_PROFILE=<seconds between reports> samples named host threads ~2000x a second and reports where they were, by
// host symbol (generated code included: each unit is a host symbol). LCS_PROFILE_THREAD=GameThread,GeWorker picks the
// threads. Symbols need a build with debug info (lcs/scripts/build_perf.bat). Windows only.
#pragma once

namespace psprecomp { class Runtime; }

namespace vcs {
void startProfiler(psprecomp::Runtime &runtime);
// LCS_PROFILE_SPIKES=<ms>, with LCS_PROFILE: called once per shown frame; a longer frame gets its own "[spike]" report,
// the samples taken during it, by thread and host symbol.
void profilerFrame() noexcept;
}
