@echo off
setlocal EnableExtensions
for %%I in ("%~dp0..\..") do set "REPO=%%~fI"
set "LCS_BIN=%REPO%\out\lcs-perf\lcs\LCSNative.exe"
call "%~dp0play.bat" %*
exit /b %errorlevel%
