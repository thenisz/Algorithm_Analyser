#include "CountingSort.h"

CountingSort::CountingSort()
{
    //ctor
}

CountingSort::~CountingSort()
{
    //dtor
}

vector<unsigned int> CountingSort::sortNumbers(vector<unsigned int> valuesVector)
{
    std::vector<unsigned int> valCount(valuesVector.size(), 0);
    std::vector<unsigned int> result(valuesVector.size(), 0);

    for(int element : valuesVector) valCount[element]++;

    for(unsigned int i=1; i<valCount.size(); i++) valCount[i] += valCount[i-1];
    for(int i=valCount.size()-1 ; i>=0 ; i--) result[--valCount[valuesVector[i]]] = valuesVector[i];

    return result;
}
