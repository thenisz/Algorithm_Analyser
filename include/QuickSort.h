#ifndef QUICKSORT_H
#define QUICKSORT_H
#include <stdlib.h>

#include <Sort.h>


class QuickSort : public Sort
{
    public:
        vector<unsigned int> sortNumbers(vector<unsigned int> valuesVector);
        int partition(vector<unsigned int> &arr, int low, int high);
        void quickSort(vector<unsigned int> &arr, int low, int high);
        string getName();
};

#endif // QUICKSORT_H
