#include "lab.h"
void drawYAxis(cairo_t* cr,int unit,int tickLength,int ticks)
{
    int x1 = unit; int y1 = height-unit;
    int x2 = width-unit; int y2 = unit;
    
    //y axis
    cairo_move_to(cr,x1,y1);
    cairo_line_to(cr,x1,y2);
    
    //draw tick marks
    for(int i = 5; i < 5*(ticks-1); i = i + 5)
    {
	cairo_move_to(cr,x1,y1-(i/5)*unit);
	cairo_line_to(cr,x1+tickLength,y1-(i/5)*unit);
	cairo_move_to(cr,x1-tickLength,y1-(i/5)*unit);
	std::ostringstream oss; oss << i;
	cairo_show_text(cr,oss.str().c_str());
    }
    cairo_stroke(cr);
}
