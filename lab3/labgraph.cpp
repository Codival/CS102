#include "lab.h"
Fl_Cairo_Window * cg;
extern const int width;
extern const int height;
Fl_Cairo_Window * make_graph()
{
    cg = new Fl_Cairo_Window(width,height);
    cg->label("Lab 3:Loan Payment Calculator Graph");
    cg->color(fl_rgb_color(121,152,182));
    cg->set_draw_cb(cbDrawGraph);
    return cg;
}
