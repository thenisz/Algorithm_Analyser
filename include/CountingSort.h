#ifndef COUNTINGSORT_H
#define COUNTINGSORT_H

#include <Sort.h>


class CountingSort : public Sort
{
    public:
        CountingSort();
        virtual ~CountingSort();
        vector<unsigned int> sortNumbers(vector<unsigned int> valuesVector);
    protected:

    private:
};

#endif // COUNTINGSORT_H
