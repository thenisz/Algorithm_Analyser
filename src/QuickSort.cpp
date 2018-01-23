#include "QuickSort.h"

int compare (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

/*********************************************************************************************************
    Sorting vector content with qsort function from stdlib.h
*********************************************************************************************************/
vector<unsigned int> QuickSort::sortNumbers(vector<unsigned int> valuesVector)
{
    qsort(valuesVector.data(), valuesVector.size(), sizeof(int), compare);
    return valuesVector;
}
