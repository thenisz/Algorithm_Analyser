#include "MergeSort.h"

void merge(vector<unsigned int> *valuesVector, int startIndex, int middleIndex, int endIndex)
{
    int leftSubvectorSize = middleIndex - startIndex + 1;
    int rightSubvectorSize =  endIndex - middleIndex;

    vector<unsigned int> leftSubvector;
    vector<unsigned int> rightSubvector;
    for (int i=0; i<leftSubvectorSize; i++) leftSubvector.push_back(valuesVector->at(startIndex+i));
    for (int i=0; i<rightSubvectorSize; i++) rightSubvector.push_back(valuesVector->at(middleIndex+1+i));

    int leftCounter = 0;
    int rightCounter = 0;
    //Comparing the values in subvectors and copying tham reorded into valuesVector
    while (leftCounter < leftSubvectorSize && rightCounter < rightSubvectorSize)
    {
        if (leftSubvector[leftCounter] <= rightSubvector[rightCounter])
        {
            valuesVector->at(startIndex) = leftSubvector[leftCounter];
            leftCounter++;
        }
        else
        {
            valuesVector->at(startIndex) = rightSubvector[rightCounter];
            rightCounter++;
        }
        startIndex++;
    }
    //Copying remaining values from subvectors
    while (leftCounter < leftSubvectorSize)
    {
        valuesVector->at(startIndex) = leftSubvector[leftCounter];
        leftCounter++;
        startIndex++;
    }

    while (rightCounter < rightSubvectorSize)
    {
        valuesVector->at(startIndex) = rightSubvector[rightCounter];
        rightCounter++;
        startIndex++;
    }
}

void mergeSort(vector<unsigned int> *valuesVector, int startIndex, int endIndex)
{
    if (startIndex < endIndex)
    {
        int middleIndex = (startIndex+endIndex)/2;  //Calculating middle index
        mergeSort(valuesVector, startIndex, middleIndex);   //Run the algorithm recursively for two subsets
        mergeSort(valuesVector, middleIndex+1, endIndex);
        merge(valuesVector, startIndex, middleIndex, endIndex);
    }
}

vector<unsigned int> MergeSort::sortNumbers(vector<unsigned int> valuesVector)
{
    mergeSort(&valuesVector, 0, valuesVector.size()-1);
    return valuesVector;
}

string MergeSort::getName()
{
    return "MergeSort";
}
