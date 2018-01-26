#include "BubbleSort.h"

vector<unsigned int> BubbleSort::sortNumbers(vector<unsigned int> valuesVector)
{
    iterationsCount = 0;
    bool swapp = true;
    while(swapp){
        swapp = false;
        iterationsCount++;                                          /**INCREMENT**/
        for (unsigned int i = 0; i < valuesVector.size()-1; i++)
        {
            iterationsCount+=3;                                      /**INCREMENT**/
            if (valuesVector.at(i) > valuesVector.at(i+1) )
            {
                swap(valuesVector.at(i),valuesVector.at(i+1));
                swapp = true;
                iterationsCount+=2;                                  /**INCREMENT**/
            }
        }
    }
    return valuesVector;
}

string BubbleSort::getName()
{
    return "BubbleSort";
}
