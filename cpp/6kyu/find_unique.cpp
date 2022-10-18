#include <vector>
#include <iostream>

using namespace std;

float find_uniq(const vector<float> &v)
{
    float m;
    for (int i = 0; i < v.size(); i++)
    {
        
        if (m != v[i] && i != 0)
        {
            if (i == 1 && m != v[i+1])
            {
                return m;
            }
            return v[i];
        }
        m=v[i];
        
    }
    
    return 0;
}

int main() 
{
    vector<float> v = {1, 1, 1, 2, 1, 1};
    cout << find_uniq(v) << endl;
}