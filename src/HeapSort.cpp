#include "HeapSort.h"

HeapSort::HeapSort()
{
    //ctor
}

HeapSort::~HeapSort()
{
    //dtor
}

void heapify(vector<unsigned int> *arr, int n, int parent)
{
    int largestIndex = parent;
    int leftChildIndex = 2*parent + 1;
    int rightChildIndex = 2*parent + 2;

    if (leftChildIndex < n && arr->at(leftChildIndex) > arr->at(largestIndex)) largestIndex = leftChildIndex;
    if (rightChildIndex < n && arr->at(rightChildIndex) > arr->at(largestIndex)) largestIndex = rightChildIndex;

    if (largestIndex != parent)
    {
        swap(arr->at(parent), arr->at(largestIndex));
        heapify(arr, n, largestIndex);
    }
}

void heapSort(vector<unsigned int> *arr, int n)
{
    for (int i=n/2-1; i>=0; i--) heapify(arr, n, i);
    swap(arr->at(0), arr->at(n-1));
    if (n>1) heapSort(arr, n-1);
}

vector<unsigned int> HeapSort::sortNumbers(vector<unsigned int> valuesVector)
{
    heapSort(&valuesVector, valuesVector.size());
    return valuesVector;
}
