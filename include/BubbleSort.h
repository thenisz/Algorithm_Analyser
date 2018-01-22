#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <Sort.h>


class BubbleSort : public Sort
{
    public:
        BubbleSort();
        virtual ~BubbleSort();
        vector<unsigned int> sortNumbers(vector<unsigned int> valuesVector);
};

#endif // BUBBLESORT_H
