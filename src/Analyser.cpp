#include "Analyser.h"
#include "Sorter.h"

#include "Sorted.h"
#include "Random.h"
#include "BackwardSorted.h"
#include "SortedRandomFirst.h"
#include "BackwardSortedRandomLast.h"

void Analyser::analyse(int sortingAlgorithm, int inputType, int numOfValues, int step)
{
    vector<unsigned int> valuesSet;
    vector<unsigned int> domain;
    vector<unsigned int> results;

    cout << "\nSTEP :" << step << "\n";

    Numbers *myNumbers;

    switch (inputType)
    {
        case 1 :
            myNumbers = new Sorted;
            break;
        case 2 :
            myNumbers = new Random;
            break;
        case 3 :
            myNumbers = new BackwardSorted;
            break;
        case 4 :
            myNumbers = new SortedRandomFirst;
            break;
        case 5 :
            myNumbers = new BackwardSorted;
            break;
    }

   switch (sortingAlgorithm)
    {
        case 1 :
            results = Sorter::bubbleSort(myNumbers->getNumbers());
            break;
        case 2 :
            results = Sorter::quickSort(myNumbers->getNumbers());
            break;
        case 3 :
            results = Sorter::insertionSort(myNumbers->getNumbers());
            break;
        case 4 :
            results = Sorter::mergeSort(myNumbers->getNumbers());
            break;
        case 5 :
            results = Sorter::countingSort(myNumbers->getNumbers());
            break;
        case 6 :
            results = Sorter::heapSort(myNumbers->getNumbers());
            break;
    }
    storeData(myNumbers->getNumbers(), results);
}

void Analyser::storeData(vector<unsigned int> vector1, vector<unsigned int> vector2)
{
    ofstream myfile;
    myfile.open ("results.csv", fstream::app);
    myfile << "This is the first cell in the first column.\n";

    for (int i=0; i < vector1.size(); i++)
    {
        myfile << vector1[i] << ";";
    }
    myfile << "\n";

    for (int i=0; i < vector1.size(); i++)
    {
        myfile << vector2[i] << ";";
    }
    myfile << "\n";
    myfile.close();
}
