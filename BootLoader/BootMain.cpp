// BootMain.cpp

#include "CDisplay.h"

const char * HELLO_STR              = "Thank you for trying Microsoft Windows 7.";

extern "C" void BootMain()
{
    CDisplay::ClearScreen();
    CDisplay::ShowCursor(false);

    CDisplay::TextOut(HELLO_STR,0,0,BLACK,WHITE,false);
    for(;;);

    return;
}