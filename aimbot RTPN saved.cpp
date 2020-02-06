// aimcolor.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "windows.h"
#include "conio.h"
#include <stdio.h> 
#include <cstdio>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv)
{
 
    


    // Device Context, Point Struct, and Color Struct
    HDC hDC = GetDC(HWND_DESKTOP);
    POINT pt;
    COLORREF rgb;
    //int zero = 0;
    // Numbers To Compare Against
    const int CMP_R = 000;
    const int CMP_G = 000;
    const int CMP_B = 000;
    GetCursorPos(&pt);
    // Values As byte
    BYTE rVal;
    BYTE gVal;
    BYTE bVal;
    // Same Values As Integers
    int red;
    int green;
    int blue;
    int vn = 5;
    // Set This To Your Known Y Coord.
    // Pretty Sure 0,0 Is Top Left
    // Corner Of The Monitor.
  
    // Loop To 3000... Adjust For Higher
    // Resolution (Really?)
    while (1) {
    
        // Next Pixel
        // Moving From The Left To The Right, 
        // Get The Pixel
        rgb = GetPixel(hDC, pt.x+150, pt.y+150);
        rgb = GetPixel(hDC, pt.x-150, pt.y-150);
        // Save Pixel Color In Byte Values
        // This Step Might Not Be Necessary..
        // Coult Probably Get It As An Int
        rVal = GetRValue(rgb);
        gVal = GetGValue(rgb);
        bVal = GetBValue(rgb);
            rVal = 50 ; //aug1.6 0x32321C
            gVal = 50 ;
            bVal = 28 ;

            rVal = 26 ; //gign1.6 0x1A1B12
            gVal = 27 ;
            bVal = 18 ;

            rVal = 44 ; //sas1.6 0x2C2C21
            gVal = 44 ;
            bVal = 33 ;

            rVal = 14 ; //gsg91.6 0x0E1019
            gVal = 16 ;
            bVal = 25 ;

            rVal = 40 ; //leet1.6 0x282515
            gVal = 37 ;
            bVal = 21 ;

            rVal = 8 ; //arctic1.6 0x080707
            gVal = 7 ;
            bVal = 7 ;

            rVal = 13 ; //urban1.6 0x0D0A07
            gVal = 10 ;
            bVal = 7 ;

            rVal = 213 ; //guerilla1.6 0xD5573D
            gVal = 87 ;
            bVal = 61 ;

            rVal = 50 ; //sascsgo 0x322A27
            gVal = 42 ;
            bVal = 39 ;

            rVal = 44 ; //fbicsgo 0x2C3C6A
            gVal = 60 ;
            bVal = 106 ;

            rVal = 76 ; //vertcsgo 0x4C4634
            gVal = 70 ;
            bVal = 52 ;

            rVal = 38 ; // gigncsgo 0x262210
            gVal = 34 ;
            bVal = 16 ;

            rVal = 86 ; // russecsgo 0x56544C
            gVal = 84 ;
            bVal = 76 ;

            rVal = 63 ; // itacsgo 0x3F3D39
            gVal = 61 ;
            bVal = 57 ;
        
            rVal = 56;  // arabcsgo jaune 0x382414  zeus 0x513C2B black 0x1C0F0A rouge 0x513921 barbe 0x66361E
            gVal = 36 ;
            bVal = 20 ;
            rVal = 81;  // arabcsgo jaune 0x382414  zeus 0x513C2B black 0x1C0F0A rouge 0x513921 barbe 0x66361E
            gVal = 60;
            bVal = 43;
            rVal = 28;  // arabcsgo jaune 0x382414  zeus 0x513C2B black 0x1C0F0A rouge 0x513921 barbe 0x66361E
            gVal = 28;
            bVal = 10;
            rVal = 81;  // arabcsgo jaune 0x382414  zeus 0x513C2B black 0x1C0F0A rouge 0x513921 barbe 0x66361E
            gVal =  15;
            bVal =  33;
            rVal = 102;  // arabcsgo jaune 0x382414  zeus 0x513C2B black 0x1C0F0A rouge 0x513921 barbe 0x66361E
            gVal = 54;
            bVal = 30;

            rVal = 134 ; // polizeicsgo 0x866D46
            gVal = 109 ;
            bVal = 70 ;
                                
            rVal = 202 ; // afghancsgo 0xCA7148
            gVal = 113 ;
            bVal = 72 ;

            rVal = 87 ; // beigecsgo 0x574B3A
            gVal = 75 ;
            bVal = 58 ;

            rVal = 146; //0x926A4F wingman
            gVal = 106;
            bVal = 79;

            rVal = 56; // 0x383425 spitfire
            gVal = 52;
            bVal = 37;

            rVal = 42; //   prowler 0x2A221C
            gVal = 34;
            bVal = 28;

            rVal = 53; // hemlock 0x352B23
            gVal = 43;
            bVal = 35;

            rVal = 36; // flatline 0x241E19
            gVal = 30;
            bVal = 25;

            rVal = 185; // RE45 0xB98B64
            gVal = 139;
            bVal = 100;

            rVal = 45; // p2020 
            gVal = 37;
            bVal = 29;
            
            rVal = 79; // R301 0x4F4031
            gVal = 64;
            bVal = 49;

            rVal = 156; // r99 0x9C5E32
            gVal = 94;
            bVal = 50;

            rVal = 71; // alternator 0x473A31
            gVal = 58;
            bVal = 49;

            rVal = 48; // scout 0x30241A
            gVal = 36;
            bVal = 26;

            rVal = 119; // mozambique 0x775631
            gVal = 86;
            bVal = 49;

            rVal = 69; // peacekeeper 0x453827
            gVal = 56;
            bVal = 39;

            rVal = 103; // EVA 0x67513A
            gVal = 81;
            bVal = 58;

            rVal = 62; // sentinel 0x3E3223
            gVal = 226;
            bVal = 35;

            rVal = 48; // fusil a charge 0x30261D
            gVal = 38;
            bVal = 26;

            rVal = 57; // longBOW 0x393022
            gVal = 48;
            bVal = 34;

            rVal = 42; // fusil triple 0x2A261D
            gVal = 38;
            bVal = 29;

            rVal = 52; // havoc 0x34271F
            gVal = 39;
            bVal = 31;

            rVal = 57; // EMG L STAR 0x393128
            gVal = 49;
            bVal = 40;

            rVal = 87; // KRABER 0x574732
            gVal = 71;
            bVal = 50;

            rVal = 48; // MASTIFF 0x302C1C
            gVal = 44;
            bVal = 28;

            rVal = 72; // DEVOTION 0x483718
            gVal = 55;
            bVal = 24;





        
        // Save Pixel Color As Decimal
    
        // Do All The Colors Match Our Control 
        // Constants?
       

        
      

       //int enx = GetSystemMetrics(SM_CXSCREEN);
       // int eny = GetSystemMetrics(SM_CYSCREEN);


        ::ShowWindow(::GetConsoleWindow(), SW_HIDE);


 
        
        int a = (pt.x-960);
        int b = (pt.y - 540);



            if ((GetKeyState(VK_LBUTTON) & 0x100) != 0)
            {


                if (pt.x > 0)
                {

                    mouse_event(MOUSEEVENTF_MOVE, 1.21, 0, NULL, NULL);

                   }
                if (pt.x > 0)
                {
                    mouse_event(MOUSEEVENTF_MOVE, -1.21, 0, NULL, NULL);
                }


        
                    //SetCursorPos(MoveX, Movey);
                 
                    Sleep(1);
}
        



        if ((GetKeyState(VK_INSERT) & 0x100) != 0)
        {

            break;
        }
    }
    return 0;

}



// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage
