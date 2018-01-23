#include "HeapSort.h"

/*********************************************************************************************************
    Rearranges the heap to be a maximal heap.
*********************************************************************************************************/
void maxHeap(vector<unsigned int> *arr, int n, int parent)
{
    int largestIndex = parent;
    //Calculating children indexes of given parent
    int leftChildIndex = 2*parent + 1;
    int rightChildIndex = 2*parent + 2;

    //Checking if a child contains higher value than parent
    if (leftChildIndex < n && arr->at(leftChildIndex) > arr->at(largestIndex)) largestIndex = leftChildIndex;
    if (rightChildIndex < n && arr->at(rightChildIndex) > arr->at(largestIndex)) largestIndex = rightChildIndex;

    if (largestIndex != parent) // If a higher value was found in children cells, its value is swapped with parent the path is scanned recursively to higher indexes
    {
        swap(arr->at(parent), arr->at(largestIndex));
        maxHeap(arr, n, largestIndex);
    }
}

void heapSort(vector<unsigned int> *arr, int n)
{
    for (int i=n/2-1; i>=0; i--) maxHeap(arr, n, i);    //Calculating the highest parent index and transforming the heap starting from it
    swap(arr->at(0), arr->at(n-1)); //The highest value is moved the the last cell
    if (n>1) heapSort(arr, n-1);    //Algorithm is started recursively for the set of number limited by the last element
}

vector<unsigned int> HeapSort::sortNumbers(vector<unsigned int> valuesVector)
{
    heapSort(&valuesVector, valuesVector.size());
    return valuesVector;
}
