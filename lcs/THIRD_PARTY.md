# Third-party notices

- PSPRecomp, the code this project started from: MIT, see `../LICENSE`.
- FFmpeg: LGPL 2.1 or later, see `third_party/ffmpeg/COPYING.LGPLv2.1`. Linked as separate DLLs.
- stb_image 2.30 (`nothings/stb` commit d14d46f): public domain or MIT, at the end of `third_party/stb/stb_image.h`.
- Texture packs: this project reads packs made for the PPSSPP emulator. Matching their file layout and hashes is a
  compatibility requirement; the code that does it (`host/lcs_texture_pack.cpp`, `host/lcs_texture_probe.cpp`) is this
  project's own. The xxHash functions are written from the xxHash specification.
