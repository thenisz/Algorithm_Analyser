#ifndef USERINTERFACE_H
#define USERINTERFACE_H
#include <iostream>
#include <cstdio>
#include <map>

#include "Analyser.h"
#include "Numbers.h"
#include "Sorted.h"
#include "Random.h"
#include "BackwardSorted.h"
#include "SortedRandomFirst.h"
#include "BackwardSortedRandomLast.h"

class UserInterface
{
    public:
        static void handleUser();
};

#endif // USERINTERFACE_H

