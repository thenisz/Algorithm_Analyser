#ifndef ANALYSER_H
#define ANALYSER_H
#include <vector>
#include <fstream>

#include "Numbers.h"
#include "Sort.h"
#include "StoreData.h"

using namespace std;

class Analyser
{
    public:
        static void analyse(vector<Numbers*> dataSets, vector<Sort*> algorithmSet, int numOfValues, int step, int iterations);
};

#endif // ANALYSER_H
