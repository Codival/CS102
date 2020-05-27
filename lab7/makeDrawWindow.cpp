#include "lab.h"
Fl_Cairo_Window * dw;

Fl_Cairo_Window * makeDrawWindow(){
    dw = new Fl_Cairo_Window(width,height);
    dw->label("Animate Graphics");
    dw->color(fl_rgb_color(74,189,172));
    return dw;}
