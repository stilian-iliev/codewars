#include <string>
#include <iostream>

using namespace std;

string alphabet_position(const string &text) {
    string out = "";
    for(int i = 0; i < text.length(); i++) 
    {
        char c = text[i];
        
        if (isalpha(c)) {

            if (islower(c))
            {
                out += to_string(c - 96);
            } else {
                out += to_string(c - 64);
            }
            out += ' ';
        
        }
    }
    return out.substr(0, out.length() - 1);
}

int main() {
    cout << alphabet_position("The sunset sets at twelve o' clock.") << endl;
}