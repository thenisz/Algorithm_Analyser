#ifndef NUMBERS_H
#define NUMBERS_H
#include <vector>
#include <iostream>
#include <cstdlib>

using namespace std;

class Numbers
{
    public:
        vector<unsigned int> getNumbers();
        virtual void generateNumbers(int numVal) = 0;
    protected:
        vector<unsigned int> numbers;
};

#endif // NUMBERS_H
