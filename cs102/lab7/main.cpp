#include "lab.h"
void animate(void*)
{
    dw->redraw();
    Fl::add_timeout(1.0/5,animate);
}
int main()
{
    getPSData("drawing.ps");
    parsePSData("drawing.ps");
    makeDrawWindow() -> show();
    dw->set_draw_cb(drawCB);
    Fl::add_timeout(1.0,animate);
    Fl::run();
}
