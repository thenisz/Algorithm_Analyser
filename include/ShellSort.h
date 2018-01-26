#ifndef SHELLSORT_H
#define SHELLSORT_H

#include <Sort.h>


class ShellSort : public Sort
{
    public:
        vector<unsigned int> sortNumbers(vector<unsigned int> valuesVector);
        string getName();
};

#endif // SHELLSORT_H
