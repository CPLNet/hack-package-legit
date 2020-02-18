// anglesnapping.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <Windows.h>
int main()
{
	int x;
	int y;
	int ax;
	int ay;
	while (1) {
		POINT p;
		GetCursorPos(&p);
		x = p.x;
		y = p.y;
		ax = p.x / 2;
		ay = p.y/2;
		
		if ((x > 0) && (y < 0))
		{
			mouse_event(MOUSEEVENTF_ABSOLUTE, x, y, NULL, NULL);
		}
		
		if ((x > 0) && (y > 0))
		{
			mouse_event(MOUSEEVENTF_ABSOLUTE, x, y, NULL, NULL);
		}
		
		if ((x < 0) && (y > 0))
		{
			mouse_event(MOUSEEVENTF_ABSOLUTE, x, y, NULL, NULL);

		}
		
		if ((x < 0) && (y < 0))
		{
			mouse_event(MOUSEEVENTF_ABSOLUTE, x, y, NULL, NULL);
		}
		else {

			mouse_event(MOUSEEVENTF_ABSOLUTE, ax, ay, NULL, NULL);
		}
		
		Sleep(1);




	}
}

