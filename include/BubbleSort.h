#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <Sort.h>


class BubbleSort : public Sort
{
    public:
        vector<unsigned int> sortNumbers(vector<unsigned int> valuesVector);
        string getName();
};

#endif // BUBBLESORT_H
