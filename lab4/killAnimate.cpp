#include "lab.h"

void killAnimate()
{
    system ("ps -a > pids");
    std::ifstream ifs("pids");
    std::string s;
    std::string pid;
    while(getline(ifs,s))
    {
	if(s.find("animate") != std::string::npos)
	{
	    int len = s.find_first_of(" ",1);
	    pid = s.substr(0,len);
	}
    }
    std::cin.get();
    std::string cmd = "kill " + pid;
    system(cmd.c_str());
}
