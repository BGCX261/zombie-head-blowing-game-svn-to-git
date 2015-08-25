@echo off


del /Q .\_output\lua\*.*
xcopy/Q /E /Y .\Lua\*.lua .\_output\lua\
