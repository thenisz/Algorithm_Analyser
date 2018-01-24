#include "BackwardSorted.h"

/*
    Fills vector of unsigned integers with inverse consecutive numbers raging from numVal-1 to 0.
*/
void BackwardSorted::generateNumbers(int numVal)
{
    numbers.clear();
    for (int i=numVal-1; i>=0; i--) numbers.push_back(i);
}

string BackwardSorted::getName()
{
    return "BackwardSorted";
}
