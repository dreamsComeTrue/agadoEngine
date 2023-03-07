@echo off
setlocal

set CONFIGURATION=%1

cls

for /f "delims=" %%i in ('"%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe" -latest -prerelease -products * -requires Microsoft.Component.MSBuild -find MSBuild\**\Bin\MSBuild.exe') do set MSBUILD=%%i

call "%MSBUILD%" agadoEngine.sln /p:Configuration=%CONFIGURATION% /nologo /verbosity:minimal

Binaries\agadoEditor-%CONFIGURATION%.exe