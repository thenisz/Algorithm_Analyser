#ifndef QUICKSORT_H
#define QUICKSORT_H
#include <stdlib.h>

#include <Sort.h>


class QuickSort : public Sort
{
    public:
        QuickSort();
        virtual ~QuickSort();
        vector<unsigned int> sortNumbers(vector<unsigned int> valuesVector);
};

#endif // QUICKSORT_H
