#include <vector>
#include <algorithm>

using namespace std;

vector<int> sortArray(vector<int> array)
{
    vector<int> odd;
    for(int i: array)
    {
        if (i % 2 == 1)
        {
            odd.push_back(i);
        }
        
    }
    sort(odd.begin(), odd.end());
    int count = 0;
    for(int i = 0; i < array.size(); i++)
    {
        if (array[i] % 2 == 1)
        {
            array[i] = odd[count];
            count++;
        }
        
    }
    return array;
}