#include <config.h>
#include <cmath>
#include <FL/Fl_Cairo_Window.H>
#include <FL/Fl_Value_Input.H>
#include <FL/Fl_Value_Output.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_PNG_Image.H>

double f(double r, double a, double ppy, double n);
double pmt(double r,double a,double ppy,double n);
Fl_Cairo_Window * make_window();
void cb_Calculate(Fl_Button*,void*);
extern Fl_Cairo_Window * cw;
extern const int width; 
extern const int height;
extern Fl_Button * b;
extern Fl_Box * g;
extern Fl_Value_Output * p;
extern Fl_Value_Input *r;
extern Fl_Value_Input *a;
extern Fl_Value_Input *ppy;
extern Fl_Value_Input *n;
