// Mouse Smooth Input.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <windows.h>

int main()
{
	while (1) {
        int mix = 0;
        int kix = 0;
        int a = 4;
        int b = 4;
        kix = kix / 4;
        mix = mix/4;
        BOOL ReadProcessMemory(
            HANDLE  explorer,
            LPCVOID mouse_event,
            LPVOID  lpBuffer,
            SIZE_T  nSize,
            SIZE_T * lpNumberOfBytesRead
        );
        BOOL WriteProcessMemory(
            HANDLE  explorer,
            LPVOID  mouse_event,
            LPCVOID lpBuffer,
            SIZE_T  kix,
            SIZE_T * lpNumberOfBytesWritten
        );
        BOOL WriteProcessMemory(
            HANDLE  explorer,
            LPVOID  mouse_event,
            LPCVOID lpBuffer,
            SIZE_T  mix,
            SIZE_T * lpNumberOfBytesWritten
        );
        void mouse_event(
            DWORD     dwFlags,
            DWORD    mouse_event,
            DWORD    mix,
            DWORD     dwData,
            ULONG_PTR dwExtraInfo
        );
   
        ::ShowWindow(::GetConsoleWindow(), SW_HIDE);

        if ((GetKeyState(VK_INSERT) & 0x100) != 0)
        {


            break;

        }
       
	}
    return 0;
}

