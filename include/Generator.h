#ifndef GENERATOR_H
#define GENERATOR_H
#include <vector>
#include <iostream>
#include <cstdlib>

using namespace std;

class Generator
{
    public:
        static vector<unsigned int> generateSorted(int numOfValues);
        static vector<unsigned int> generateRandom(int numOfValues);
        static vector<unsigned int> generateBackwardSorted(int numOfValues);
        static vector<unsigned int> generateSortedFirstRandom(int numOfValues);
        static vector<unsigned int> generateBackwardSortedLastRandom(int numOfValues);
};

#endif // GENERATOR_H
