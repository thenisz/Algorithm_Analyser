#include "InsertionSort.h"

vector<unsigned int> InsertionSort::sortNumbers(vector<unsigned int> valuesVector)
{
    iterationsCount = 0;
    int temp, j;

    for (unsigned int i=1; i<valuesVector.size(); i++ )
    {
        temp = valuesVector.at(i);
        for (j=i-1; j>=0 && valuesVector.at(j)>temp; j-- )
        {
            valuesVector.at(j+1) = valuesVector.at(j);
            iterationsCount+=2;                         /**INCREMENT**/
        }

        valuesVector.at(j+1) = temp;/**** +1 ****/
        iterationsCount+=3;                         /**INCREMENT**/
    }
    return valuesVector;
}

string InsertionSort::getName()
{
    return "InsertionSort";
}

