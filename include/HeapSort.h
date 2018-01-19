#ifndef HEAPSORT_H
#define HEAPSORT_H

#include <Sort.h>


class HeapSort : public Sort
{
    public:
        HeapSort();
        virtual ~HeapSort();
        void sortNumbers(vector<unsigned int> *valuesVector);
    protected:

    private:
};

#endif // HEAPSORT_H
