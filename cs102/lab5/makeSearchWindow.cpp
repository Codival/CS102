#include "lab.h"
Fl_Cairo_Window * cw;
Fl_Input * r;
Fl_Button * b;

Fl_Cairo_Window * makeSearchWindow(){
    cw = new Fl_Cairo_Window(width,height);
    cw->label("Search For A Gif");
    cw->color(fl_rgb_color(74,189,172));
    r = new Fl_Input(.5*width,.25*height,.25*width,.1*height);
    r->label("Keyword: ");
    b = new Fl_Button(.5*width,.5*height,.25*width,.1*height);
    b->label("Display");
    b->color(fl_rgb_color(247,183,51));
    b->callback((Fl_Callback*) cbDisplay);
    return cw;}
