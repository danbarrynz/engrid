
rem source the environment variables for the chosen qt installation
call %~dp0\qtvars.bat %6

echo Processing UI file: %2

uic.exe %5%1 -o %5ui_%2.h
moc.exe -D%4 -D_WINDOWS -DQT_LARGEFILE_SUPPORT -DQT_DLL -DQT_GUI_LIB -DQT_CORE_LIB -DQT_THREAD_SUPPORT -D_CRT_SECURE_NO_WARNINGS -D_UNICODE -D_MSC_VER=1500 -DWIN32 %5%2.h -o %3\moc_%2.cpp
