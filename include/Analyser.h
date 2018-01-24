#ifndef ANALYSER_H
#define ANALYSER_H
#include <vector>
#include <fstream>
#include <time.h>
#include <chrono>
#include <typeinfo>

#include "Numbers.h"
#include "Sort.h"
#include "StoreData.h"

using namespace std;

class Analyser
{
    public:
        static void analyse(vector<Numbers*> dataSets, vector<Sort*> algorithmSet, int numOfValues, int step, int iterations);
    protected:
        static void storeData(vector<unsigned int> vector1);
};

#endif // ANALYSER_H
