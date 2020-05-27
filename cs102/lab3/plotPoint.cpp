#include "lab.h"
#include <iostream>
void plotPoint(cairo_t* cr,int unit,int tickLength,int ticks)
{
    int x1 = unit; int y1 = height-unit;
    const int dollarsPerUnit = 5;
    double x = r->value(); x = x1 + x * (unit/2);
    double y = p->value();
    y = y1 - y/dollarsPerUnit * unit;
    const double radius = 4;
    double begin = 0; double end = 2* M_PI;
    std::ostringstream oss;
    oss << "(" << r->value() << 
    "," << p->value() << ")";
    cairo_arc(cr,x,y,radius,begin,end);
    cairo_show_text(cr,oss.str().c_str());
    cairo_stroke(cr);
}
