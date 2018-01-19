#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <Sort.h>


class QuickSort : public Sort
{
    public:
        QuickSort();
        virtual ~QuickSort();
        void sortNumbers(vector<unsigned int> *valuesVector);
    protected:

    private:
};

#endif // QUICKSORT_H
