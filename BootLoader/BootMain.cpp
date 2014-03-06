// BootMain.cpp

#include "CDisplay.h"

const char * HELLO_STR              = "Thank you for trying Microsoft Windows.";
const char * LINE2 = "If you enjoyed our product, please give us a call: 1-855-548-7232";
//const char * LINE3 = "Microsoft Sales & Support: 1-855-548-7232";
const char * LINE4 = "If you received this message in error, please press F9.";
//const char * HELLO_STR              = "Thank you for trying Microsoft Windows.\n\nIf you enjoyed our product, please give us a call to discuss volume licensing.\nMicrosoft Sales and Support: 1-855-548-7232\n\nIf you received this message in error, please press F9.";

extern "C" void BootMain()
{
    CDisplay::ClearScreen();
    CDisplay::ShowCursor(false);

    CDisplay::TextOut(HELLO_STR,20,1,BLACK,WHITE,false);
	CDisplay::TextOut(LINE2, 0, 3, BLACK, WHITE, false);
	CDisplay::TextOut(LINE4, 0, 5, BLACK, WHITE, false);
	//CDisplay::TextOut(LINE4, 0, 6, BLACK, WHITE, false);
    for(;;);

    return;
}