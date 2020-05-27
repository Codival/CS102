#include "lab.h"
double f(double x){return x+20*sin(x);}
void drawCB(Fl_Cairo_Window* cw,cairo_t* cr)
{static double dx = 0; static double dy = 0; static double dr = 0;
    for(int i = 0; i < N; i++){
    if(cmds[i].cmd == "moveto")
       cairo_move_to(cr,cmds[i].x,height-cmds[i].y);
    if(cmds[i].cmd == "lineto")
       cairo_line_to(cr,cmds[i].x,height-cmds[i].y);
    if(cmds[i].cmd == "arc")
	cairo_arc(cr,cmds[i].x,height-cmds[i].y,cmds[i].radius
	,cmds[i].angleStart*(M_PI/180),cmds[i].angleEnd*(M_PI/180));
    if(cmds[i].cmd == "translate")
       cairo_translate(cr,dx + cmds[i].x,-(f(dx+cmds[i].x)));
    if(cmds[i].cmd == "scale")
	cairo_scale(cr,cmds[i].x,cmds[i].y);
    if(cmds[i].cmd == "rotate")
	{cairo_translate(cr,0,height);
	    cairo_rotate(cr,dr + cmds[i].angle1*(M_PI/180));
	    cairo_translate(cr,0,-height);}}
   dx+=5; if(dx>width-20) dx=-40; dy+=5; if(dy>height) dy=40;
   dr+=.1; cairo_stroke(cr);
}
