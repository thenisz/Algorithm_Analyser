#ifndef HEAPSORT_H
#define HEAPSORT_H

#include <Sort.h>


class HeapSort : public Sort
{
    public:
        vector<unsigned int> sortNumbers(vector<unsigned int> valuesVector);
        string getName();
};

#endif // HEAPSORT_H
