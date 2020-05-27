#include "lab.h"
//void killAnimate();

int main()
{

    makeSearchWindow() -> show();
    makeDisplayWindow() -> show();
    Fl::run();
    //system("animate 200.gif &"); // & means run in background
    //killAnimate();
}
