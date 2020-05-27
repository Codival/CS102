#include "lab.h"
void cbDisplay(Fl_Button*,void*)
{
    //std::cout << r->value() << std::endl;
    std::string s = r->value();
    std::string j = getGifInfo(s);
    std::string url = extractGifInfo(j);
    std::string cmd = "curl " + url +" > 200.gif";
    system(cmd.c_str());//c_str() extracs a C-String from C++ String
    g->image(new Fl_GIF_Image("200.gif"));
    dw -> redraw();
}

