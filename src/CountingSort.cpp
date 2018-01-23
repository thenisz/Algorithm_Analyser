#include "CountingSort.h"

vector<unsigned int> CountingSort::sortNumbers(vector<unsigned int> valuesVector)
{
    std::vector<unsigned int> valCount(valuesVector.size(), 0); //Contains count of occurrences of each value. Array index is the key.
    std::vector<unsigned int> result(valuesVector.size(), 0);

    for(int element : valuesVector) valCount[element]++; //Counting occurrences

    for(unsigned int i=1; i<valCount.size(); i++) valCount[i] += valCount[i-1];
    for(int i=valCount.size()-1 ; i>=0 ; i--) result[--valCount[valuesVector[i]]] = valuesVector[i];

    return result;
}
