#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    MSG Msg;

    ShowWindow( GetConsoleWindow(), SW_HIDE);

    while(GetMessage (&Msg, NULL, 0, 0))
    {

        TranslateMessage(&Msg);
        DispatchMessage(&Msg);
    }

    return 0;
}