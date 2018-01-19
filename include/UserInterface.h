#ifndef USERINTERFACE_H
#define USERINTERFACE_H
#include <iostream>
#include <cstdio>
#include <map>

#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "CountingSort.h"
#include "HeapSort.h"

#include "Numbers.h"
#include "Sorted.h"
#include "Random.h"
#include "BackwardSorted.h"
#include "SortedRandomFirst.h"
#include "BackwardSortedRandomLast.h"

#include "Analyser.h"

class UserInterface
{
    public:
        static void handleUser();
};

#endif // USERINTERFACE_H

