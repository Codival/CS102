#include "lab.h"
Fl_Cairo_Window * dw;
Fl_Box * g;

Fl_Cairo_Window * makeDisplayWindow(int width, int height){
    dw = new Fl_Cairo_Window(width,height);
    dw->label("Display of Gif");
    dw->color(fl_rgb_color(74,189,172));
    g = new Fl_Box(FL_FLAT_BOX, 0,0,width,height,"");
    return dw;}
