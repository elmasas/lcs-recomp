@echo off
setlocal EnableExtensions
for %%I in ("%~dp0..\..") do set "REPO=%%~fI"
set "BUILD=%REPO%\out\lcs-clang"
set "LLVM=C:\Program Files\LLVM\bin"
rem CMake writes these paths into its cache verbatim, so they need forward slashes.
set "LLVM_FWD=C:/Program Files/LLVM/bin"

if not exist "%LLVM%\clang-cl.exe" (
  echo clang-cl not found at "%LLVM%".
  echo Install LLVM: winget install -e --id LLVM.LLVM
  pause
  exit /b 3
)
for /f "usebackq delims=" %%I in (`"%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe" -latest -products * -property installationPath`) do set "VS=%%I"
if not exist "%VS%\VC\Auxiliary\Build\vcvars64.bat" (
  echo No C++ toolset found. Install the "Desktop development with C++" workload:
  echo winget install -e --id Microsoft.VisualStudio.2022.BuildTools
  pause
  exit /b 4
)
call "%VS%\VC\Auxiliary\Build\vcvars64.bat" >nul || exit /b 4

if not exist "%BUILD%\build.ninja" (
  cmake -S "%REPO%" -B "%BUILD%" -G Ninja -DCMAKE_BUILD_TYPE=Release ^
    -DCMAKE_C_COMPILER="%LLVM_FWD%/clang-cl.exe" -DCMAKE_CXX_COMPILER="%LLVM_FWD%/clang-cl.exe" ^
    -DCMAKE_LINKER="%LLVM_FWD%/lld-link.exe" -DCMAKE_RC_COMPILER="%LLVM_FWD%/llvm-rc.exe" || exit /b 5
)
ninja -C "%BUILD%" LCSNative
set "CODE=%errorlevel%"
if not "%CODE%"=="0" pause
exit /b %CODE%
