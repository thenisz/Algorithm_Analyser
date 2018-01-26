#include "Analyser.h"

#include "Sorted.h"
#include "Random.h"
#include "BackwardSorted.h"
#include "SortedRandomFirst.h"
#include "BackwardSortedRandomLast.h"

/*
    Takes input data sets and sorting algorithms as vectors of objects.
    Generates sets of numbers of given type, calls given sorting algorithms and repeats the process
    with specified number of values, iterations and step.
    Stores data row-by-row for given set of values.
*/
void Analyser::analyse(vector<Numbers*> dataSets, vector<Sort*> algorithmSet, int numOfValues, int step, int iterations)
{
    vector<long unsigned int> results; //Execution times
    vector<string> columns; //Names of sorting algorithms and input types

    for(Sort* elementSort : algorithmSet)
    {
        ofstream *myfile = new ofstream;
        string fileName = elementSort->getName();
        fileName.append(".csv");
        myfile->open(fileName);

        columns.push_back(elementSort->getName());
        for(Numbers* elementNum : dataSets)
        {
            columns.push_back(elementNum->getName());
        }

        StoreData::initializeFile(*myfile, columns);
        columns.clear();

        int numCount = numOfValues;
        for (int i=0; i<=iterations; i++)
        {
            for(Numbers* elementNum : dataSets)
            {
                elementNum->generateNumbers(numCount);
                //auto start = std::chrono::high_resolution_clock::now();
                elementSort->sortNumbers(elementNum->getNumbers());
                //auto finish = std::chrono::high_resolution_clock::now();
                //std::chrono::duration<double> elapsed = finish - start;
                //results.push_back(elapsed.count());
                results.push_back(elementSort->getIterationsCount());
            }
            StoreData::appendData(*myfile, results, numCount);
            results.clear();
            numCount += step;
        }
        StoreData::closeFile(*myfile);
        free(myfile);
    }
}
