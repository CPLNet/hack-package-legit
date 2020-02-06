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
        rgb = GetPixel(hDC, pt.x, pt.y);
        rgb = GetPixel(hDC, pt.x, pt.y);
        // Save Pixel Color In Byte Values
        // This Step Might Not Be Necessary..
        // Coult Probably Get It As An Int
        rVal = GetRValue(rgb);
        gVal = GetGValue(rgb);
        bVal = GetBValue(rgb);
            rVal = 0x32 ; //aug1.6 0x32321C
            gVal = 0x32 ;
            bVal = 0x1C ;

            rVal = 0x1A ; //gign1.6 0x1A1B12
            gVal = 0x1B ;
            bVal = 0x12 ;

            rVal = 0x2C ; //sas1.6 0x2C2C21
            gVal = 0x2C ;
            bVal = 0x21 ;

            rVal = 0x0E ; //gsg91.6 0x0E1019
            gVal = 0x10 ;
            bVal = 0x19 ;

            rVal = 0x28 ; //leet1.6 0x282515
            gVal = 0x25 ;
            bVal = 0x15 ;

            rVal = 0x08 ; //arctic1.6 0x080707
            gVal = 0x07 ;
            bVal = 0x07 ;

            rVal = 0x0D ; //urban1.6 0x0D0A07
            gVal = 0x0A ;
            bVal = 0x07 ;

            rVal = 0xD5 ; //guerilla1.6 0xD5573D
            gVal = 0x57 ;
            bVal = 0x3D ;

            rVal = 0x32 ; //sascsgo 0x322A27
            gVal = 0x2A ;
            bVal = 0x27 ;

            rVal = 0x2C ; //fbicsgo 0x2C3C6A
            gVal = 0x3C ;
            bVal = 0x6A ;

            rVal = 0x4C ; //vertcsgo 0x4C4634
            gVal = 0x46 ;
            bVal = 0x34 ;

            rVal = 0x26 ; // gigncsgo 0x262210
            gVal = 0x22 ;
            bVal = 0x10 ;

            rVal = 0x56 ; // russecsgo 0x56544C
            gVal = 0x54 ;
            bVal = 0x4C ;

            rVal = 0x3F ; // itacsgo 0x3F3D39
            gVal = 0x3D ;
            bVal = 0x39 ;
        
            rVal = (0x38 + 0x51 + 0x1C + 0x51 + 0x66) ;  // arabcsgo jaune 0x382414  zeus 0x513C2B black 0x1C0F0A rouge 0x513921 barbe 0x66361E
            gVal = (0x24 + 0x3C + 0x1C + 0x0F + 0x36) ;
            bVal = (0x14 + 0x2B + 0x0A + 0x21 + 0x1E) ;

            rVal = 0x86 ; // polizeicsgo 0x866D46
            gVal = 0x6D ;
            bVal = 0x46 ;
                                
            rVal = 0xCA ; // afghancsgo 0xCA7148
            gVal = 0x71 ;
            bVal = 0x48 ;

            rVal = 0x57 ; // beigecsgo 0x574B3A
            gVal = 0x4B ;
            bVal = 0x3A ;

            rVal = 0x00 < 64; // apex
            gVal = 0x00 < 64;
            bVal = 0x00 < 64;


        
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
