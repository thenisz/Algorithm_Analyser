#include "Sorted.h"

/*
  Fills vector of unsigned integers with consecutive numbers raging from 0 to numVal.
*/
void Sorted::generateNumbers(int numVal)
{
    numbers.clear();
    for (int i=0; i<numVal; i++) numbers.push_back(i);
}

string Sorted::getName()
{
    return "Sorted";
}
