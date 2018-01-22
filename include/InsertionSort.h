#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include <Sort.h>


class InsertionSort : public Sort
{
    public:
        InsertionSort();
        virtual ~InsertionSort();
        vector<unsigned int> sortNumbers(vector<unsigned int> valuesVector);
    protected:

    private:
};

#endif // INSERTIONSORT_H
