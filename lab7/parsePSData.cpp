#include "lab.h"
//fill the cmds array with actual PS comments
int N; void parsePSData(std::string fn)
{std::ifstream ifs(fn); std::string s; int i = 0;
//read lines e.g. 2 1 moveto
    while(getline(ifs,s))
    {std::istringstream iss(s);
	if(s.find("moveto")!= std::string::npos or 
	    s.find("lineto")!= std::string::npos or
	    s.find("scale")!= std::string::npos or
	    s.find("translate") != std::string::npos)
	    iss >> cmds[i].x >> cmds[i].y >> cmds[i].cmd;
	if(s.find("rotate")!= std::string::npos)
	    iss >> cmds[i].angle1 >> cmds[i].cmd;
	if(s.find("arc")!= std::string::npos)
	    iss >> cmds[i].x >> cmds[i].y >> cmds[i].radius >>
	    cmds[i].angleStart >> cmds[i].angleEnd >> cmds[i].cmd;
	i++;}
    N = i;for(int j = 0; j < i; j++) 
    std::cout << cmds[j].cmd << std::endl; ifs.close();
}
