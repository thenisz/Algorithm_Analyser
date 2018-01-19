#ifndef MERGESORT_H
#define MERGESORT_H

#include <Sort.h>


class MergeSort : public Sort
{
    public:
        MergeSort();
        virtual ~MergeSort();
        void sortNumbers(vector<unsigned int> *valuesVector);
    protected:

    private:
};

#endif // MERGESORT_H
