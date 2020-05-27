#include "lab.h"
#include <iostream>
#include "json.hpp"
#include <sstream>
GifInfo gi;using nlohmann::json; GifInfo extractGifInfo(std::string g)
{std::string s; auto j = json::parse(g); for(auto &e : j["data"])
    {	s += e["images"]["original"]["url"]; s += " ";
	s += e["images"]["original"]["width"]; s += " ";
	s += e["images"]["original"]["height"]; s += " ";
	s += e["images"]["original"]["frames"];}
    std:: istringstream iss(s);
    iss >> gi.url >> gi.width >> gi.height >> gi.frames;return gi;
}
