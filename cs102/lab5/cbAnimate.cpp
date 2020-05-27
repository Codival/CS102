#include "lab.h"
void cbAnimate(void*)
{
    static int x = 0;
    g->image(images[x]);
    x++;
    if(x == gi.frames) x=0;
    dw -> redraw();
    Fl::repeat_timeout(1.0/24,cbAnimate);
}
