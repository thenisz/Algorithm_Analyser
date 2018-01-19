#include "BackwardSorted.h"

BackwardSorted::BackwardSorted()
{

}

BackwardSorted::~BackwardSorted()
{
    //dtor
}

void BackwardSorted::generateNumbers(int numVal)
{
    numbers.clear();
    for (int i=numVal; i>0; i--) numbers.push_back(i);
}
