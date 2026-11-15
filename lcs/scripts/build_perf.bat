@echo off
rem Optimised build in out\lcs-perf: ThinLTO and AVX2, with a PDB for the profiler.
rem   lcs\scripts\build_perf.bat [jobs]                 compile with that many jobs (default 10)
rem   set LCS_PERF_CMAKE=-DPSPRECOMP_AOT_PRODUCTION_FASTPATHS=ON    extra CMake options
rem Uses the clang-cl in the Visual Studio Build Tools; a full build takes the better part of an hour.
setlocal EnableExtensions
for %%I in ("%~dp0..\..") do set "REPO=%%~fI"
set "BUILD=%REPO%\out\lcs-perf"
set "JOBS=%~1"
if "%JOBS%"=="" set "JOBS=10"
for /f "usebackq delims=" %%I in (`"%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe" -latest -products * -property installationPath`) do set "VS=%%I"
if not exist "%VS%\VC\Auxiliary\Build\vcvars64.bat" (
  echo No C++ toolset found.
  exit /b 4
)
set "LLVM=%VS:\=/%/VC/Tools/Llvm/x64/bin"
if not exist "%LLVM%/clang-cl.exe" (
  echo clang-cl not found in the Build Tools.
  exit /b 3
)
call "%VS%\VC\Auxiliary\Build\vcvars64.bat" >nul || exit /b 4
cmake -S "%REPO%" -B "%BUILD%" -G Ninja -DCMAKE_BUILD_TYPE=Release ^
  -DCMAKE_C_COMPILER="%LLVM%/clang-cl.exe" -DCMAKE_CXX_COMPILER="%LLVM%/clang-cl.exe" ^
  -DCMAKE_LINKER="%LLVM%/lld-link.exe" -DCMAKE_RC_COMPILER="%LLVM%/llvm-rc.exe" ^
  -DCMAKE_AR="%LLVM%/llvm-lib.exe" ^
  "-DCMAKE_EXE_LINKER_FLAGS=/machine:x64 /opt:lldltojobs=%JOBS% /lldltocache:lto-cache" ^
  -DPSPRECOMP_LTO=ON -DPSPRECOMP_NATIVE_AVX2=ON -DLCS_DEBUG_SYMBOLS=ON %LCS_PERF_CMAKE% || exit /b 5
ninja -C "%BUILD%" -j %JOBS% LCSNative
exit /b %errorlevel%
