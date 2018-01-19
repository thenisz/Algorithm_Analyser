#include "Random.h"

Random::Random()
{

}

Random::~Random()
{
    //dtor
}

void Random::generateNumbers(int numVal)
{
    for (int i=0; i<numVal; i++) numbers.push_back(rand());
}
