#include "lab.h"
Fl_GIF_Image ** images;
void loadImages(std::string g,int frames)
{
    std::string cmd ="rm images/*";
    system(cmd.c_str());
    cmd = "convert -coalesce " + g + " images/g%03d.gif";
    system(cmd.c_str());
    images = new Fl_GIF_Image* [frames];
    for(int i = 0; i < frames; i++)
    {
	std::ostringstream oss;
	oss << std::setfill('0') << std::setw(3) << i;
	std::string s = "images/g" + oss.str() + ".gif";
	images[i] = new Fl_GIF_Image(s.c_str());
	dw -> redraw();
    }

}
