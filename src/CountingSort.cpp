#include "CountingSort.h"

vector<unsigned int> CountingSort::sortNumbers(vector<unsigned int> valuesVector)
{
    iterationsCount = 0;
    std::vector<unsigned int> valCount(valuesVector.size(), 0); //Contains count of occurrences of each value. Array index is the key.
    std::vector<unsigned int> result(valuesVector.size(), 0);

    for(int element : valuesVector)
    {
        valCount[element]++;
        iterationsCount+=2;                                                                  /**INCREMENT**/
    }
    for(unsigned int i=1; i<valCount.size(); i++)
    {
        valCount[i] += valCount[i-1];/**** +1 ****/
        iterationsCount+=2;                                                               /**INCREMENT**/
    }
    for(int i=valCount.size()-1 ; i>=0 ; i--)
    {
        result[--valCount[valuesVector[i]]] = valuesVector[i]; /**** +1 ****/
        iterationsCount+=2;                                                              /**INCREMENT**/
    }

    return result;
}

string CountingSort::getName()
{
    return "CountingSort";
}

