#ifndef SORT_H
#define SORT_H
#include <vector>

using namespace std;

class Sort
{
    public:
        Sort();
        virtual ~Sort();
        virtual vector<unsigned int> sortNumbers(vector<unsigned int> valuesVector) = 0;
};

#endif // SORT_H
