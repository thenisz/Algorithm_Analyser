#include "SortedRandomFirst.h"

/*********************************************************************************************************
    Fills vector of unsigned integers with consecutive numbers raging from 0 to numVal.
    Replaces first element with random value from range <0, numVal).
*********************************************************************************************************/
void SortedRandomFirst::generateNumbers(int numVal)
{
    numbers.clear();
    for (int i=0; i<numVal; i++) numbers.push_back(i);
    numbers[0]=rand()%numVal;
}
