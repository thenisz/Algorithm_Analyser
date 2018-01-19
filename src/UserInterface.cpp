#include "UserInterface.h"

using namespace std;

void UserInterface::handleUser()
{
    string sortingAlgorithms;
    string inputType;
    int numOfValues;
    int step;

    vector<Numbers*> dataSets;
    vector<Numbers*> algorithmSet;

    cout << "Chose sorting algorithms. Type:\n";
    cout << "<1> for bubble sort\n";
    cout << "<2> for quick sort\n";
    cout << "<3> for insertion sort\n";
    cout << "<4> for merge sort\n";
    cout << "<5> for counting sort\n";
    cout << "<6> for heap sort\n";

//    while (!algorithmSet.size())
//    {
        cin >> sortingAlgorithms;

 /*       for(int i=0; i<inputType.size(); i++)
        {
            switch (inputType[i]) {
            case '1' :
                algorithmSet.push_back(new Sorted);
                break;
            case '2' :
                algorithmSet.push_back(new Random);
                break;
            case '3' :
                algorithmSet.push_back(new BackwardSorted);
                break;
            case '4' :
                algorithmSet.push_back(new SortedRandomFirst);
                break;
            case '5' :
                algorithmSet.push_back(new BackwardSortedRandomLast);
                break;
            }
        }*/
//    }

    cout << "\nChose input types. Type:\n";
    cout << "<1> for sorted\n";
    cout << "<2> for random\n";
    cout << "<3> for backward sorted\n";
    cout << "<4> for sorted with random first value\n";
    cout << "<5> for sorted backward with random last value\n";

    while (!dataSets.size())
    {
        cin >> inputType;

        for(int i=0; i<inputType.size(); i++)
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

//    for_each(dataSets)





    cout << "\nEnter number of values:\n";
    cin >> numOfValues;

    while (numOfValues < 2)
    {
        cout << "Wrong input!!!\n";
        cin >> numOfValues;
    }

    cout << "\nEnter step:\n";
    cin >> step;

    while (step > numOfValues || step < 0)
    {
        cout << "Wrong input!!!\n";
        cin >> step;
    }
//    Analyser::analyse(sortingAlgorithms, inputType, numOfValues, step);
}

