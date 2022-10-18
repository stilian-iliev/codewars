#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

string incrementString(const string &str)
{
    
    if (!isdigit(str[str.length() - 1]))
    {
        return str + to_string(1);
    }
    string temp = str;
    string num = "";
    while (isdigit(temp[temp.length() - 1]))
    {
        num = temp[temp.length() - 1] + num;
        temp = temp.substr(0, temp.length() -1);
    }
    int diff = str.length() - (temp.length() + to_string(stoi(num) + 1).length());

    cout<< diff << endl;

    if (diff > 0)
    {
        temp += string(diff, '0');
    }
    
    temp = temp + to_string(stoi(num) + 1);

    return temp;
}

int main()
{
    cout << incrementString("foobar99") << endl;
}