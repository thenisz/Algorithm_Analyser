#include "BackwardSortedRandomLast.h"

BackwardSortedRandomLast::BackwardSortedRandomLast()
{

}

BackwardSortedRandomLast::~BackwardSortedRandomLast()
{
    //dtor
}

void BackwardSortedRandomLast::generateNumbers(int numVal)
{
    numbers.clear();
    for (int i=numVal; i>0; i--) numbers.push_back(i);
    numbers[numVal-1]=rand();
}
