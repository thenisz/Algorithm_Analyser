#ifndef SORT_H
#define SORT_H
#include <vector>
#include <string>

using namespace std;

/*********************************************************************************************************
    Abstract class for sorting algorithms.
*********************************************************************************************************/
class Sort
{
    public:
        virtual vector<unsigned int> sortNumbers(vector<unsigned int> valuesVector) = 0;
        virtual string getName() = 0;
};

#endif // SORT_H
