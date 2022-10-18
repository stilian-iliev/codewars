#include <iostream>
#include <vector>

using namespace std;

bool betterThanAverage(vector<int> classPoints, int yourPoints) {
    int sum = 0;
    for(int points: classPoints) {
        sum += points;
    } 
    int average = sum/classPoints.size();
    return yourPoints > average;
}