#include "BubbleSort.h"

vector<unsigned int> BubbleSort::sortNumbers(vector<unsigned int> valuesVector)
{
    bool swapp = true;
    while(swapp){
        swapp = false;
        for (int i = 0; i < valuesVector.size()-1; i++)
        {
            if (valuesVector.at(i) > valuesVector.at(i+1) )
            {
                swap(valuesVector.at(i),valuesVector.at(i+1));
                swapp = true;
            }
        }
    }
    return valuesVector;
}

string BubbleSort::getName()
{
    return "BubbleSort";
}
