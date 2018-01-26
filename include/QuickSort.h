#ifndef QUICKSORT_H
#define QUICKSORT_H
#include <stdlib.h>

#include <Sort.h>


class QuickSort : public Sort
{
    public:
        vector<unsigned int> sortNumbers(vector<unsigned int> valuesVector);
        void _qsort(void *aa, size_t n, size_t es, int (*cmp)(const void *, const void *));
        string getName();
};

#endif // QUICKSORT_H
