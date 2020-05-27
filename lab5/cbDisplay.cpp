#include "lab.h"
void cbDisplay(Fl_Button*,void*)
{
    std::string s = r->value();
    std::string j = getGifInfo(s);
    GifInfo gi = extractGifInfo(j);
    //std::cout << "W:" << gi.width << std::endl;
    //std::cout << "H:" << gi.height << std::endl;
    std::string cmd = "curl " + gi.url +" > 200.gif";
    system(cmd.c_str());
    if(dw) dw->hide();
    makeDisplayWindow(gi.width,gi.height) -> show();
    loadImages("200.gif",gi.frames);
    Fl::add_timeout(1,cbAnimate,&gi.frames);

}
