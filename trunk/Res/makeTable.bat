cd table

del /Q .\_output\*.*

xcopy/Q /E /Y .\_input\*.xls .\_output\*.xls

cd _output

for /r %%a in (*.xls) do (
	..\..\..\Tools\ExcelParser\Excel_DataParser.exe -B -E %%a
)

ren *.table *.xlz

cd..
cd..

del /Q .\_output\table\*.*
xcopy/Q /E /Y .\table\_output\*.xlz .\_output\table\
xcopy/Q /E /Y .\table\_output\*.h .\_src\

pause