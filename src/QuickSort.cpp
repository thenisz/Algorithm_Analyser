#include "QuickSort.h"

int QuickSort::partition(vector<unsigned int> &arr, int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element
    iterationsCount+=2;                                  /**INCREMENT**/
    for (int j = low; j <= high- 1; j++)
    {
        iterationsCount+=2;                                  /**INCREMENT**/
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(arr[i], arr[j]);
            iterationsCount+=2;                                  /**INCREMENT**/
        }
    }
    swap(arr[i + 1], arr[high]);
    iterationsCount+=2;                                  /**INCREMENT**/
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void QuickSort::quickSort(vector<unsigned int> &arr, int low, int high)
{
    if (low < high)
    {
        unsigned int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
        iterationsCount+=2;                                  /**INCREMENT**/
    }
}

vector<unsigned int> QuickSort::sortNumbers(vector<unsigned int> valuesVector)
{
    iterationsCount = 0;
    quickSort(valuesVector, 0, valuesVector.size()-1);
    return valuesVector;
}


string QuickSort::getName()
{
    return "QuickSort";
}

