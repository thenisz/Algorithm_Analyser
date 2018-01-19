#ifndef ANALYSER_H
#define ANALYSER_H
#include <vector>
#include <fstream>

#include "Numbers.h"

using namespace std;

class Analyser
{
    public:
        static void analyse(int sortingAlgorithm, int inputType, int numOfValues, int step);
    protected:
        static void storeData(vector<unsigned int> vector1, vector<unsigned int> vector2);
};

#endif // ANALYSER_H
