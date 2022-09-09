#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    POINT P;
    int slp = 0;

    //std::cout << "argc - " << argc << std::endl;
    for (int i = 0; i < argc; i++)
    {
        //std::cout << "argv - " << "\"" << argv[i] << "\"" << std::endl;
        if(slp == 0)
        {
            slp = atoi(argv[i]);
        }
    }
    for(;;)
    {
        GetCursorPos(&P);
        std::cout
        << "static int X = " << P.x << ";" << std::endl
        << "static int Y = " << P.y << ";" << std::endl
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