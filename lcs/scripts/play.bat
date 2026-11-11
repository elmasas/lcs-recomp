@echo off
setlocal EnableExtensions
for %%I in ("%~dp0..\..") do set "REPO=%%~fI"
for %%I in ("%~dp0..") do set "LCS_DIR=%%~fI"

set "BIN=%REPO%\out\lcs\lcs\Release\LCSNative.exe"
if defined LCS_BIN set "BIN=%LCS_BIN%"
if not exist "%BIN%" (
  echo LCSNative.exe not found at "%BIN%".
  echo Build it first:
  echo   cmake -S . -B out/lcs
  echo   cmake --build out/lcs --config Release
  pause
  exit /b 3
)

set "GAME=%LCS_DIR%\game"
set "FIRST=%~1"
if not "%FIRST%"=="" if not "%FIRST:~0,1%"=="-" (
  set "GAME=%~f1"
  shift
)

if not exist "%GAME%\EBOOT.ELF" (
  echo Game root "%GAME%" has no EBOOT.ELF.
  echo Supply your own decrypted copy at "%LCS_DIR%\game\EBOOT.ELF".
  pause
  exit /b 4
)

rem Your own settings: lcs\game\LCSNative.ini when it exists (git ignores that folder), otherwise the shipped defaults.
if not defined PSPRECOMP_CONFIG if exist "%GAME%\LCSNative.ini" set "PSPRECOMP_CONFIG=%GAME%\LCSNative.ini"
if not defined PSPRECOMP_CONFIG set "PSPRECOMP_CONFIG=%LCS_DIR%\config\LCSNative.ini"

"%BIN%" --game "%GAME%" %1 %2 %3 %4 %5 %6 %7 %8 %9
set "CODE=%errorlevel%"
if not "%CODE%"=="0" pause
exit /b %CODE%
