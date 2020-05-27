#include "lab.h"
void drawXAxis(cairo_t*cr,int unit,int tickLength,int ticks);
void drawYAxis(cairo_t*cr,int unit,int tickLength,int ticks);
void plotPoint(cairo_t*cr,int unit,int tickLength,int ticks);
void cbDrawGraph(Fl_Cairo_Window*,cairo_t*cr)
{
    int unit = .1*width;
    int tickLength = .5*unit;
    int ticks = width/unit;
    drawXAxis(cr,unit,tickLength,ticks);
    drawYAxis(cr,unit,tickLength,ticks);
    plotPoint(cr,unit,tickLength,ticks);
}
