//this function will create and fill the cmds array with all the ps
//commands needed to draw the picture in fn
#include "lab.h"
PSCmd* cmds;
void getPSData(std::string fn)
{
    std::ifstream ifs(fn);
    std::string s;
    int count = 0;
    while(getline(ifs,s))
    {
	count++;
    }
    std::cout << count << std::endl;
    cmds = new PSCmd[count];
    ifs.close();
}
