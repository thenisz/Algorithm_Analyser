#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include <Sort.h>


class InsertionSort : public Sort
{
    public:
        vector<unsigned int> sortNumbers(vector<unsigned int> valuesVector);
        string getName();
};

#endif // INSERTIONSORT_H
