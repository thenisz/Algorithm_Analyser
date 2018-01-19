#include "Analyser.h"
#include "Sorter.h"

#include "Sorted.h"
#include "Random.h"
#include "BackwardSorted.h"
#include "SortedRandomFirst.h"
#include "BackwardSortedRandomLast.h"

void Analyser::analyse(vector<Numbers*> dataSets, vector<Sort*> algorithmSet, int numOfValues, int step, int iterations)
{
    for (int i=0; i<iterations; i++)
    {
        for(Numbers* elementNum : dataSets)
        {
            elementNum->generateNumbers(numOfValues);
            for(Sort* elementSort : algorithmSet)
            {
                elementSort->sortNumbers(elementNum->getNumbers());
            }
            storeData(*(elementNum->getNumbers()));
        }
        numOfValues += step;
    }
}

void Analyser::storeData(vector<unsigned int> vector1)
{
    ofstream myfile;
    myfile.open ("results.csv", fstream::app);
 //   myfile << "This is the first cell in the first column.\n";

    for (int i=0; i < vector1.size(); i++)
    {
        myfile << vector1[i] << ";";
    }
    myfile << "\n";
    myfile.close();
}
