#include "lab.h"
#include <curl/curl.h>
const std::string url = "https://giphy.p.mashape.com";
const std::string key =
"X-Mashape-Key: N2gdkwRwq8mshigJOyEc4T1ibhjqp16Oc4SjsnPVK3HCrfVhMo";
const std::string js = "Accept: application/json"; 
size_t handleData(void* c, size_t s, size_t n, void* g)
{*static_cast<std::string*>(g) += static_cast<char*>(c);return s * n;}
std::string getGifInfo(std::string s)
{std::string j;   struct curl_slist *slist1 = NULL;
    slist1 = curl_slist_append(slist1,key.c_str());
    slist1 = curl_slist_append(slist1,js.c_str());
    std::string q = url +
    "/v1/gifs/search?api_key=dc6zaTOxFJmzC&limit=1&q="
     + s;
    CURL* hnd = curl_easy_init();
    curl_easy_setopt(hnd,CURLOPT_URL,q.c_str());
    curl_easy_setopt(hnd,CURLOPT_HTTPHEADER,slist1);
    curl_easy_setopt(hnd,CURLOPT_WRITEFUNCTION,handleData);
    curl_easy_setopt(hnd,CURLOPT_WRITEDATA,&j);
    curl_easy_perform(hnd);
    while(j.back() != '}') j.pop_back();return j;
}
