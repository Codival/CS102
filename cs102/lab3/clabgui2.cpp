#include "lab.h"
Fl_Cairo_Window * make_window(){
    cw = new Fl_Cairo_Window(width,height);
    cw->label("Lab 3:Loan Payment Calculator");
    cw->color(fl_rgb_color(121,152,182));
    a = new Fl_Value_Input(.6*width,.05*height,.25*width, .1*height);
    //number are how far in, how far down, how wide type, how tall type
    a->label("Principal:");
    r = new Fl_Value_Input(.6*width,.15*height,.25*width, .1*height);
    r->label("Interest Rate (9% = 9):");
    ppy = new Fl_Value_Input(.6*width,.25*height,.25*width, .1*height);
    ppy->label("# of Payments per Year:");
    n = new Fl_Value_Input(.6*width,.35*height,.25*width, .1*height);
    n->label("# of Year:");
    p = new Fl_Value_Output(.6*width,.75*height,.25*width, .1*height);
    p->label("Monthly Payment:");
    b = new Fl_Button(.6*width,.55*height,.25*width, .1*height);
    b->label("Calculate");
    b->color(FL_BLUE); b->labelcolor(FL_WHITE);
    b->callback((Fl_Callback*)cb_Calculate);
    g = new Fl_Box(FL_FLAT_BOX,.25*width,.535*height,64,64,"");
    g->color(fl_rgb_color(121,152,182));
    g->image(new Fl_PNG_Image("loan.png")); return cw;}
