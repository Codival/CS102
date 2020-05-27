#include <iostream>
std::string extractGifInfo(std::string g)
{
    std::cout << g << std::endl;
    std::string t = g.substr(g.find("original"),100);
    size_t p1 = t.find("http");
    std::string r = t.substr(p1);
    size_t p2 = r.find("\"");
    std::string url = t.substr(p1,p2);
    return url;
}
