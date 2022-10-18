#include <string>

using namespace std;

static std::string accum(const std::string &s){
      string out = "";
      for(int i = 0; i< s.length(); i++)
        {
            out += toupper(s[i]);
            out += string(i, tolower(s[i]));
            if (i != s.length() - 1)
            {
                out += '-';
            }
            
        }
        return out;
    }