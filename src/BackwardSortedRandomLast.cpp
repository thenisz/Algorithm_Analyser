#include "BackwardSortedRandomLast.h"

/*********************************************************************************************************
    Fills vector of unsigned integers with inverse consecutive numbers raging from numVal-1 to 1
    and randomizes the last element from range <0, numVal).
*********************************************************************************************************/
void BackwardSortedRandomLast::generateNumbers(int numVal)
{
    numbers.clear();
    for (int i=numVal-1; i>=0; i--) numbers.push_back(i);
    numbers[numVal-1]=rand()%numVal;
}
