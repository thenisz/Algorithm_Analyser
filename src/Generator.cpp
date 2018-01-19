#include "Generator.h"

vector<unsigned int> Generator::generateSorted(int numOfValues)
{
    vector<unsigned int> ValuesSet;

    for (int i=0; i<numOfValues; i++) ValuesSet.push_back(i);
    return ValuesSet;
}

vector<unsigned int> Generator::generateRandom(int numOfValues)
{
    vector<unsigned int> ValuesSet;

    for (int i=0; i<numOfValues; i++)
    {
        ValuesSet.push_back(rand());
    }
    return ValuesSet;
}

vector<unsigned int> Generator::generateBackwardSorted(int numOfValues)
{
    vector<unsigned int> ValuesSet;

    for (int i=numOfValues; i>0; i--) ValuesSet.push_back(i);
    return ValuesSet;
}

vector<unsigned int> Generator::generateSortedFirstRandom(int numOfValues)
{
    vector<unsigned int> ValuesSet;

    for (int i=0; i<numOfValues; i++) ValuesSet.push_back(i);
    ValuesSet[0] = rand();
    return ValuesSet;
}

vector<unsigned int> Generator::generateBackwardSortedLastRandom(int numOfValues)
{
    vector<unsigned int> ValuesSet;

    for (int i=numOfValues; i>0; i--) ValuesSet.push_back(i);
    ValuesSet[numOfValues-1] = rand();
    return ValuesSet;
}


