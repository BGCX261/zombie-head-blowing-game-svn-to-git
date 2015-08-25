@echo off


del /Q .\_output\sound\*.*
xcopy/Q /E /Y .\sound\*.wav .\_output\sound\
xcopy/Q /E /Y .\sound\*.ogg .\_output\sound\
