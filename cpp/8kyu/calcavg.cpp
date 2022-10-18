#include <iostream>
#include <vector>

using namespace std;

double calcAverage(const vector<int>& values){
    int sum = 0;
    for(int value:values)
        sum+=value;

    return 1.0*sum/values.size();
}