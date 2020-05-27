#include <config.h> 
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <FL/Fl_Cairo_Window.H>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cmath>
Fl_Cairo_Window* makeDrawWindow();
void drawCB(Fl_Cairo_Window* cw,cairo_t* cr);
const int width = 300;
const int height = 300;
extern Fl_Cairo_Window * dw;
struct PSCmd
{
    std::string cmd;
    double x, y;
    double angle1,angleStart,angleEnd;
    double radius;
};
extern PSCmd* cmds;
extern int N;  // number of valid commands in ps file
void getPSData(std::string fn);
void parsePSData(std::string fn);
