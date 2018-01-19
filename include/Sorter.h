#ifndef SORTER_H
#define SORTER_H
#include <vector>

using namespace std;

class Sorter
{
    public:
        static vector<unsigned int> bubbleSort(vector<unsigned int> valuesVector);
        static vector<unsigned int> quickSort(vector<unsigned int> valuesVector);
        static vector<unsigned int> insertionSort(vector<unsigned int> valuesVector);
        static vector<unsigned int> mergeSort(vector<unsigned int> valuesVector);
        static vector<unsigned int> countingSort(vector<unsigned int> valuesVector);
        static vector<unsigned int> heapSort(vector<unsigned int> valuesVector);
};

#endif // SORTER_H
