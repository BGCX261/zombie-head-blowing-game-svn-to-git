cd sprite

for /r %%a in (*.spb) do (
	del /Q %%a
)

for /r %%a in (*.h) do (
	del /Q %%a
)

for /r %%a in (*.spx) do (
	..\..\Tools\Sprite\Genesis.Sprite.exe -B %%a
)


cd..

del /Q .\_output\sprite\*.*
xcopy/Q /E /Y .\sprite\*.spb .\_output\sprite\
xcopy/Q /E /Y .\sprite\*.png .\_output\sprite\

rem xcopy/Q /E /Y .\sprite\*.h .\_src\*.h

pause