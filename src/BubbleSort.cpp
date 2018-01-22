#include "BubbleSort.h"

BubbleSort::BubbleSort()
{
    //ctor
}

BubbleSort::~BubbleSort()
{
    //dtor
}

vector<unsigned int> BubbleSort::sortNumbers(vector<unsigned int> valuesVector)
{
    bool swapp = true;
    while(swapp){
        swapp = false;
        for (size_t i = 0; i < valuesVector.size()-1; i++)
        {
            if (valuesVector.at(i) > valuesVector.at(i+1) )
            {
                valuesVector.at(i) += valuesVector.at(i+1);
                valuesVector.at(i+1) = valuesVector.at(i) - valuesVector.at(i+1);
                valuesVector.at(i) -= valuesVector.at(i+1);
                swapp = true;
            }
        }
    }
    return valuesVector;
}
