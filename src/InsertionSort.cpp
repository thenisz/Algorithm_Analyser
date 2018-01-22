#include "InsertionSort.h"

InsertionSort::InsertionSort()
{
    //ctor
}

InsertionSort::~InsertionSort()
{
    //dtor
}

vector<unsigned int> InsertionSort::sortNumbers(vector<unsigned int> valuesVector)
{
    int temp, j;

    for (int i=1; i<valuesVector.size(); i++ )
    {
        temp = valuesVector.at(i);

        for (j=i-1; j>=0 && valuesVector.at(j)>temp; j-- ) valuesVector.at(j+1) = valuesVector.at(j);

        valuesVector.at(j+1) = temp;
    }
    return valuesVector;
}
