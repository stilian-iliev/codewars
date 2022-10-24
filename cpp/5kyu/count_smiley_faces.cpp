#include <vector>
#include <string>
#include <regex>
using namespace std;

int countSmileys(vector<string> arr)
{
    int smileys = 0;
    regex r("[:;][-~]?[)D]");
    for(string e: arr)
    {
        if(regex_search(e, r))
        {
            smileys++;
        }
    }
    return smileys;
}