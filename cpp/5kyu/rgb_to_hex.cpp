#include <vector>
#include <string>
#include <iostream>
#include<bits/stdc++.h> 

using namespace std;

string decToHex(int dec);

string rgb(int r, int g, int b) 
{
    r = r < 0 ? 0 : r;
    r = r > 255 ? 255 : r;
    g = g < 0 ? 0 : g;
    g = g > 255 ? 255 : g;
    b = b < 0 ? 0 : b;
    b = b > 255 ? 255 : b;
    return decToHex(r) + decToHex(g) + decToHex(b);
}

string decToHex(int dec) {
    string out = "";
    while (dec > 0)
    {
        int rem = dec % 16;
        cout << rem << endl;
        if (rem < 10)
        {
            out += (char) rem + 48;
        } 
        else 
        {
            out += (char) rem + 55;
        }
        

        dec /= 16;
    }
    reverse(out.begin(), out.end());
    if (out.length() < 2) {
        out = string(2 - out.length(), '0' ) + out;
    }
    return out;
}

int main() 
{
    rgb(255,255,255);
}

