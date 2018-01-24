#ifndef MERGESORT_H
#define MERGESORT_H

#include <Sort.h>


class MergeSort : public Sort
{
    public:
        vector<unsigned int> sortNumbers(vector<unsigned int> valuesVector);
        string getName();
};

#endif // MERGESORT_H
