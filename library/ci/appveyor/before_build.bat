@echo off

cd /d %~dp0
cd ..\..
mkdir build >NUL 2>NUL
cd build
cmake -DCMAKE_INSTALL_PREFIX=%cd%/ ..
