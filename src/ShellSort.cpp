#include "ShellSort.h"

vector<unsigned int> ShellSort::sortNumbers(vector<unsigned int> valuesVector)
{
    iterationsCount = 0;
    int n=valuesVector.size();
    iterationsCount++;                         /**INCREMENT**/
    int temp, j;
    for (int gap = n/2; gap > 0; gap /= 2)
    {
        iterationsCount++;                         /**INCREMENT**/
        for (int i = gap; i < n; i += 1)
        {
            temp = valuesVector[i];
            for (j = i; j >= gap && valuesVector[j - gap] > temp; j -= gap)
            {
                valuesVector[j] = valuesVector[j - gap];
                iterationsCount+=2;                         /**INCREMENT**/
            }

            //  put temp (the original a[i]) in its correct location
            valuesVector[j] = temp;
            iterationsCount+3;                         /**INCREMENT**/
        }
    }
    return valuesVector;
}

string ShellSort::getName()
{
    return "ShellSort";
}
