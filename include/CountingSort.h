#ifndef COUNTINGSORT_H
#define COUNTINGSORT_H

#include <Sort.h>


class CountingSort : public Sort
{
    public:
        vector<unsigned int> sortNumbers(vector<unsigned int> valuesVector);
        string getName();
};

#endif // COUNTINGSORT_H
