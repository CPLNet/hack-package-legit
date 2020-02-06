
#include <iostream>
#include <windows.h>
#define BD_DETECTION_RANGES 85 = a
#define BD_DETECTION_RANGES 90 = a
#define BD_DETECTION_RANGES 100 = a
#define BD_DETECTION_RANGES 110 = a
#define BD_DETECTION_RANGES 120 = a
#define BD_DETECTION_RANGES 128 = a
#define BD_DETECTION_RANGES 130 = a
#define BD_DETECTION_RANGES 140 = a
using namespace std;
int main()

{
	::ShowWindow(::GetConsoleWindow(), SW_HIDE);
	int x = 0;
	int y = 0;
	while (1) {
		

		int a = 0;
		int sx = 1;
		int sy = 1;
		int sw = sx / 2;
		int sz = sy / 2;
		int sv = sy / 2;
		POINT pt;
		POINT lt;

		GetCursorPos(&pt);
		if ((pt.x++) && (pt.y++));
		{
			GetCursorPos(&lt);
			if ((lt.x < pt.x) && (lt.y < pt.y));
			{

				a = true;

				Sleep(273);
				typedef struct tagINPUT {
					DWORD type;
					union {
						MOUSEINPUT    sw;
						KEYBDINPUT    sz;
						HARDWAREINPUT sv;
					} DUMMYUNIONNAME;
				} INPUT, * PINPUT, * LPINPUT;
				mouse_event(MOUSEEVENTF_MOVE, sw, sz, NULL, NULL);
			}
		}





		if ((GetKeyState(VK_INSERT) & 0x100) != 0)
		{

			exit(0);
		}

	}
	
	return 0;
}

