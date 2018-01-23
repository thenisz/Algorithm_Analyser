#include "Random.h"

/*********************************************************************************************************
    Fills vector of unsigned integers with pseudo-random values from <0, numVal) range.
*********************************************************************************************************/
void Random::generateNumbers(int numVal)
{
    numbers.clear();
    for (int i=0; i<numVal; i++) numbers.push_back(rand()%numVal);
}
