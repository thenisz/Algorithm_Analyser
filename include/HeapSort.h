#ifndef HEAPSORT_H
#define HEAPSORT_H

#include <Sort.h>


class HeapSort : public Sort
{
    public:
        vector<unsigned int> sortNumbers(vector<unsigned int> valuesVector);
        void heapSort(vector<unsigned int> *arr, int n);
        void maxHeap(vector<unsigned int> *arr, int n, int parent);
        string getName();
};

#endif // HEAPSORT_H
