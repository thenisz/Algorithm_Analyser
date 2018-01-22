#include "QuickSort.h"

QuickSort::QuickSort()
{
    //ctor
}

QuickSort::~QuickSort()
{
    //dtor
}

int compare (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

void QuickSort::sortNumbers(vector<unsigned int> *valuesVector)
{
    qsort(valuesVector->data(), valuesVector->size(), sizeof(int), compare);
}
