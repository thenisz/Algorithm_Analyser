#ifndef MERGESORT_H
#define MERGESORT_H

#include <Sort.h>


class MergeSort : public Sort
{
    public:
        vector<unsigned int> sortNumbers(vector<unsigned int> valuesVector);
        void merge(vector<unsigned int> *valuesVector, int startIndex, int middleIndex, int endIndex);
        void mergeSort(vector<unsigned int> *valuesVector, int startIndex, int endIndex);
        string getName();
};

#endif // MERGESORT_H
