#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include <Sort.h>


class InsertionSort : public Sort
{
    public:
        InsertionSort();
        virtual ~InsertionSort();
        void sortNumbers(vector<unsigned int> *valuesVector);
    protected:

    private:
};

#endif // INSERTIONSORT_H
