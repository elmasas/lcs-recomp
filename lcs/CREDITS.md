# Credits

Projects this one learned from. Unless a section says code is included (with its license, also listed in
`THIRD_PARTY.md`), only ideas are taken: everything else here is written new for this game.

# Other

Texture packs are in PPSSPP's format, so that packs made for the emulator work here; see `lcs/THIRD_PARTY.md`.

`lcs/generated/generated_unit_0083.cpp`, at the start of the chunk loader `L_089514F8`, stops a crash of this project's own:
the world's list of loaded chunks holds 32, and at a view distance of 2 or more the game can queue more than that between
sector swaps.

The frame log (`lcs/host/lcs_perf_log.*`), the sampling profiler (`lcs/host/lcs_profiler.*`), the crash reporter
(`lcs/host/lcs_crash.*`) and the cruise rig in `lcs/host/lcs_stress_test.cpp` follow ideas from VCS Recomp
(`gothamor/gta-vcs-recomp`): a per-frame timing log, a sampling profiler of the game's threads, a crash report with
the reason and the call stack, and a scripted route for stutter tests. No code from VCS
Recomp is used.
