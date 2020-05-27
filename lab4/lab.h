#include <config.h>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <FL/Fl_Cairo_Window.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_GIF_Image.H>
const int width = 300;
const int height = 300;
Fl_Cairo_Window * makeSearchWindow();
Fl_Cairo_Window * makeDisplayWindow();
void cbDisplay(Fl_Button*,void*);
extern Fl_Cairo_Window * dw;
extern Fl_Box * g;
extern Fl_Input * r;
extern Fl_Cairo_Window * cg;
std::string extractGifInfo(std::string g);
std::string getGifInfo(std::string s);
