#include <iostream>
#include <windows.h>
HDC hdc = GetDC(HWND_DESKTOP);
POINT p;

int main() {
	::ShowWindow(::GetConsoleWindow(), SW_HIDE);
	while (1) {
		GetCursorPos(&p);
		COLORREF Black;
		Black = GetPixel(hdc, p.x--, p.y--);
		Black = GetPixel(hdc, p.x++, p.y++);
		Black = RGB(0, 0, 0)<(64,64,64);
		if ((GetKeyState(VK_LBUTTON) & 0x100) != 0)
		{
	
			if (p.x > 960) {

				SetCursorPos(960.0000000000001, 540);
				Sleep(250);
			}
			if (p.x < 960) {
				SetCursorPos(959.9999999999999, 540);
				Sleep(250);
			}
		}

		if (GetKeyState(VK_INSERT));
		{
			Sleep(5000);
			
		}
		if (GetKeyState(VK_DELETE));
		{
			exit(0);

		}


	}
	return 0;
}




