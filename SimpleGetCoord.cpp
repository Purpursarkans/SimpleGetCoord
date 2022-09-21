#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

static int MOVE_CONSOLE_X = 0;
static int MOVE_CONSOLE_Y = 50;
static int CONSOLE_WIDTH = 255;
static int CONSOLE_HEIGHT = 120;

int main(int argc, char* argv[])
{

    MoveWindow(GetConsoleWindow(), MOVE_CONSOLE_X, MOVE_CONSOLE_Y, CONSOLE_WIDTH, CONSOLE_HEIGHT, TRUE);
    SetWindowPos(GetConsoleWindow(), HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);

    POINT P;
    int slp = 0;

    for (int i = 0; i < argc; i++)
    {
        if(slp == 0)
        {
            slp = atoi(argv[i]);
        }
    }
    for(;;)
    {
        GetCursorPos(&P);
        std::cout
        << "----------------" << std::endl
        << "const int X = " << P.x << ";" << std::endl
        << "const int Y = " << P.y << ";" << std::endl
        << "----------------" << std::endl;
        Beep(100, 100);
        if(slp == 0)
        {
            Sleep(3000);
        }
        else
        {
            Sleep(slp);
        }
        
    }

}