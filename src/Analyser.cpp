#include "Analyser.h"

#include "Sorted.h"
#include "Random.h"
#include "BackwardSorted.h"
#include "SortedRandomFirst.h"
#include "BackwardSortedRandomLast.h"

/*********************************************************************************************************
    Takes input data sets and sorting algorithms as vectors of objects.
    Generates sets of numbers of given type, calls given sorting algorithms and repeats the process
    with specified number of values, iterations and step.
    Stores data row-by-row for given set of values.
*********************************************************************************************************/
void Analyser::analyse(vector<Numbers*> dataSets, vector<Sort*> algorithmSet, int numOfValues, int step, int iterations)
{
    for (int i=0; i<iterations; i++)
    {
        for(Numbers* elementNum : dataSets)
        {
            elementNum->generateNumbers(numOfValues);
            storeData(elementNum->getNumbers());
            for(Sort* elementSort : algorithmSet)
            {
                storeData(elementSort->sortNumbers(elementNum->getNumbers()));
            }
        }
        numOfValues += step;
    }
}

/*********************************************************************************************************
    Method to be removed and implemented in separate module.
*********************************************************************************************************/

void Analyser::storeData(vector<unsigned int> vector1)
{
    ofstream myfile;
    myfile.open ("results.csv", fstream::app);
    for (unsigned int i=0; i < vector1.size(); i++)
    {
        myfile << vector1[i] << ";";
    }
    myfile << "\n";
    myfile.close();
}
