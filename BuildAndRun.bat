REM Copyright AGADO Studio. All Rights Reserved.

@echo off
setlocal

set CONFIGURATION=%1

cls

cmake -BBuild -DCMAKE_BUILD_TYPE=%CONFIGURATION%
cmake --build Build --config %CONFIGURATION%
cmake --install Build --config %CONFIGURATION%

Binaries\agadoEditor-%CONFIGURATION%.exe