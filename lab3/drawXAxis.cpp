#include "lab.h"
void drawXAxis(cairo_t* cr,int unit,int tickLength,int ticks)
{
    int x1 = unit; int y1 = height-unit;
    int x2 = width-unit; int y2 = height-unit;
    
    //x axis
    cairo_move_to(cr,x1,y1);
    cairo_line_to(cr,x2,y1);
    
    //draw tick marks
    for(int i = 2; i < 2*(ticks-1); i= i+2)
    {
	cairo_move_to(cr,x1+(i/2)*unit,y1);
	cairo_line_to(cr,x1+(i/2)*unit,y1-tickLength);
	cairo_move_to(cr,x1+(i/2)*unit,y1+tickLength);
	std::ostringstream oss; oss << i;
	cairo_show_text(cr,oss.str().c_str());
    }
    cairo_stroke(cr);
}
