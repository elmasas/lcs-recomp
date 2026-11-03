@echo off
title LCS Multi-Region Launcher
cd /d "%~dp0"

if "%~1"=="" (
    echo Drag your LCS ISO onto this file
    echo or: launcher.bat "path\to\game.iso"
    pause
    exit /b 1
)

python launcher.py "%~1"
if errorlevel 1 (
    echo.
    echo Failed. Need: Python, 7-Zip in PATH, pspdecrypt.exe next to this script.
    pause
)
