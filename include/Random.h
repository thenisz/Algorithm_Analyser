#ifndef RANDOM_H
#define RANDOM_H

#include <Numbers.h>

class Random : public Numbers
{
    public:
        void generateNumbers(int numVal);
        string getName();
};

#endif // RANDOM_H
