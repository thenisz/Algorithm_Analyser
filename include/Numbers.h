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
    protected:
        vector<unsigned int> numbers;
        virtual void generateNumbers(int numVal) = 0;
    private:
};

#endif // NUMBERS_H
