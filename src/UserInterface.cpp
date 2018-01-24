#include "UserInterface.h"

using namespace std;

/*********************************************************************************************************
    Gathers user input and passes it to Analyser.
*********************************************************************************************************/
void UserInterface::handleUser()
{
    string sortingAlgorithms;
    string inputType;

    int numOfValues;
    int step;
    int iterations;

    vector<Numbers*> dataSets;
    vector<Sort*> algorithmSet;

/*********************************************************************************************************
    Scanning for sorting algorithms.  Possible to enter more than 1.
*********************************************************************************************************/

    cout << "Chose sorting algorithms. Type:\n";
    cout << "<1> for bubble sort\n";
    cout << "<2> for quick sort\n";
    cout << "<3> for insertion sort\n";
    cout << "<4> for merge sort\n";
    cout << "<5> for counting sort\n";
    cout << "<6> for heap sort\n";

    while (!algorithmSet.size())
    {
        cin >> sortingAlgorithms;

       for(unsigned int i=0; i<sortingAlgorithms.size(); i++)
        {
            switch (sortingAlgorithms[i]) {
            case '1' :
                algorithmSet.push_back(new BubbleSort);
                break;
            case '2' :
                algorithmSet.push_back(new QuickSort);
                break;
            case '3' :
                algorithmSet.push_back(new InsertionSort);
                break;
            case '4' :
                algorithmSet.push_back(new MergeSort);
                break;
            case '5' :
                algorithmSet.push_back(new CountingSort);
                break;
            case '6' :
                algorithmSet.push_back(new HeapSort);
                break;
            }
        }
    }

/*********************************************************************************************************
    Scanning for input types. Possible to enter more than 1.
*********************************************************************************************************/

    cout << "\nChose input types. Type:\n";
    cout << "<1> for sorted\n";
    cout << "<2> for random\n";
    cout << "<3> for backward sorted\n";
    cout << "<4> for sorted with random first value\n";
    cout << "<5> for sorted backward with random last value\n";

    while (!dataSets.size())
    {
        cin >> inputType;

        for(unsigned int i=0; i<inputType.size(); i++)
        {
            switch (inputType[i]) {
            case '1' :
                dataSets.push_back(new Sorted);
                break;
            case '2' :
                dataSets.push_back(new Random);
                break;
            case '3' :
                dataSets.push_back(new BackwardSorted);
                break;
            case '4' :
                dataSets.push_back(new SortedRandomFirst);
                break;
            case '5' :
                dataSets.push_back(new BackwardSortedRandomLast);
                break;
            }
        }
    }

/*
    Scanning for initial number of values.
*/

    cout << "\nEnter initial number of values:\n";
    cin >> numOfValues;

    while (numOfValues <1)
    {
        cout << "Wrong input!!!\n";
        cin >> numOfValues;
    }

/*
    Scanning for increment step.
*/

    cout << "\nEnter step:\n";
    cin >> step;

    while (step < 1)
    {
        cout << "Wrong input!!!\n";
        cin >> step;
    }

/*
    Scanning for number of iterations.
*/

    cout << "\nEnter number of iterations:\n";
    cin >> iterations;

    while (iterations < 1)
    {
        cout << "Wrong input!!!\n";
        cin >> iterations;
    }

    Analyser::analyse(dataSets, algorithmSet, numOfValues, step, iterations);
}

