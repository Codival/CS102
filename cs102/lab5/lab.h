#include <config.h> 
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <FL/Fl_Cairo_Window.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_GIF_Image.H>
#include <fstream>
#include <sstream>
#include <iomanip>
struct GifInfo{std::string url;int width;int height;int frames;};
extern GifInfo gi;const int width = 300;const int height = 300;
Fl_Cairo_Window * makeSearchWindow();
Fl_Cairo_Window * makeDisplayWindow(int,int);
void loadImages(std::string g,int frames);
void cbDisplay(Fl_Button*,void*);
extern Fl_Cairo_Window * dw;extern Fl_Box * g;
extern Fl_Input * r;extern Fl_Cairo_Window * cg;
GifInfo extractGifInfo(std::string g);
std::string getGifInfo(std::string s);
extern Fl_GIF_Image ** images;void cbAnimate(void*);
