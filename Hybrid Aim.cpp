// Hybrid Aim.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <windows.h>

int main()
{
	POINT p;
	GetCursorPos(&p);
	int (p.x = 0);
	int (p.y = 0);
	int rightrefx = (p.x+1);
	int downrefy = (p.y+1);
	int leftrefx = (p.x - 1);
	int toprefy = (p.y - 1);
	while (1) {
		::ShowWindow(::GetConsoleWindow(), SW_HIDE);

		COLORREF Black;
		Black = RGB(0, 0, 0) < (64, 64, 64);
		if (p.x++)
		{
			Sleep(128);
			void mouse_event(
				DWORD     dwFlags,
				DWORD    rightrefx,
				DWORD    y,
				DWORD     dwData,
				ULONG_PTR dwExtraInfo
			);
		}
		if (p.x--)
		{
			Sleep(128);
			void mouse_event(
				DWORD     dwFlags,
				DWORD    leftrefx,
				DWORD    y,
				DWORD     dwData,
				ULONG_PTR dwExtraInfo
			);
		}
		if (p.y--)
		{
			Sleep(128);
			void mouse_event(
				DWORD     dwFlags,
				DWORD    x,
				DWORD    toprefy,
				DWORD     dwData,
				ULONG_PTR dwExtraInfo
			);
		}
		if (p.y++)
		{
			Sleep(128);
			void mouse_event(
				DWORD     dwFlags,
				DWORD    x,
				DWORD    downy,
				DWORD     dwData,
				ULONG_PTR dwExtraInfo
			);
		}

		//roll back aimtrain

		if (p.x++)
		{
			Sleep(50);
			if (p.x--)
			{
				Sleep(50);
				if (p.x++)
				{


					void mouse_event(
						DWORD     dwFlags,
						DWORD    rightrefx,
						DWORD    y,
						DWORD     dwData,
						ULONG_PTR dwExtraInfo
					);
					void mouse_event(
						DWORD     dwFlags,
						DWORD    lefttrefx,
						DWORD    y,
						DWORD     dwData,
						ULONG_PTR dwExtraInfo
					);
				}
			}
		}
		if (GetKeyState(VK_DELETE))
		{
			exit(0);
		}
	}
		return (0);

}

