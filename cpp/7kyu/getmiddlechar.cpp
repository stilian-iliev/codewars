#include <iostream>

using namespace std;

std::string get_middle(std::string input) 
{
    string middle = "";
    if (input.size() % 2 == 0) {
        middle.append(1,input[input.length()/2-1]);
    }
    middle.append(1,input[input.length()/2]);
    return middle;
}
