#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<string> inArray(vector<string> &array1, vector<string> &array2){
    vector<string> matching;
    for(string sub: array1) 
    {
        for (string word: array2)
        {
            if (word.find(sub) != -1)
            {
                
                if (!(find(matching.begin(), matching.end(), sub) != matching.end()))
                {
                    matching.push_back(sub);
                }
                
            }
            
        }
    }
    sort(matching.begin(), matching.end());
    return matching;
}

int main()
{
    vector<string> arr1 = {"arp", "live", "strong"};
    vector<string> arr2 = {"lively", "alive", "harp", "sharp", "armstrong"};

    vector<string> matching = inArray(arr1, arr2);
    cout << matching.size() << endl;
    for(auto i: matching){
        cout << i << endl;
    }
    
}