#include "Sorted.h"

Sorted::Sorted()
{

}

Sorted::~Sorted()
{
    //dtor
}

void Sorted::generateNumbers(int numVal)
{
    numbers.clear();
    for (int i=0; i<numVal; i++) numbers.push_back(i);
}
