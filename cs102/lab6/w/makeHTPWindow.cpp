#include "lab.h"
Fl_Cairo_Window * hw;
Fl_Button * g;

Fl_Cairo_Window * makeHTPWindow() {
    hw = new Fl_Cairo_Window(width,height);
    hw->label("How To Play:");
    
    g = new Fl_Button(.1*width, .7*height, .8*width, .1*height);
    g->label("Think Your Ready?: Play"); 
    g->labelcolor(FL_BLUE);
    g->color(fl_rgb_color(240,134,134));
    g->callback((Fl_Callback*) cbDisplay); 
    
    Fl_Text_Buffer *buff=new Fl_Text_Buffer();
    Fl_Text_Display *display = new Fl_Text_Display(.1*width,.1*height,
    .8*width,.3*height,"Welcome to Geography to the Maxx");
    display->buffer(buff);
    iw->resizable(display);
    iw->show();
    buff-> text("How to Play: \n1)You will be given a question \n"
    "2)You will have 4 choices: 1 true and 3 false \n"
    "3)Pick the true one and get a checkmark \n"
    "    10 checkmarks and you win \n"
    "  Pick the false one and get an x \n"
    "       3 x's and it's GAME OVER");
    
    hw->color(fl_rgb_color(198,50,250));
}
