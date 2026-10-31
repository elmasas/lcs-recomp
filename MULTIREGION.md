# Multi-region support notes

## Current state
- Launcher extracts + decrypts any LCS ISO.
- Runtime currently compiled against US v1.05 (ULUS-10041) addresses.
- Language tables in `lcs_lang.cpp` use US addresses (0x08B58F14 etc.).

## Files added
- `tools/launcher.py` + `launcher.bat` — ISO extractor (any region)
- `lcs/host/lcs_region.hpp` + `lcs_region.cpp` — disc ID detector from PARAM.SFO

## How to integrate the region detector
1. Files are already in `lcs/host/`
2. Add them to `CMakeLists.txt` (or the existing source list)
3. In `main.cpp` after `runtime.set_game_root(...)` call `lcs::detect_region(game_root)` and log the result

## Next steps for full multi-region
To properly support EU/JP/DE you need:
1. Decrypted EBOOT.ELF from that region
2. Re-run the recompiler (codegen) against that EBOOT
3. Build a separate binary or load region-specific generated units
4. Update the language/address tables for that disc ID

Until then the launcher still lets you prepare the files, and the runtime will warn if the disc is not the primary US one.
