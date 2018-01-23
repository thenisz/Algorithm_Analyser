#include "SortedRandomFirst.h"

SortedRandomFirst::SortedRandomFirst()
{

}

SortedRandomFirst::~SortedRandomFirst()
{
    //dtor
}

void SortedRandomFirst::generateNumbers(int numVal)
{
    numbers.clear();
    for (int i=0; i<numVal; i++) numbers.push_back(i);
    numbers[0]=rand()%numVal;
}
