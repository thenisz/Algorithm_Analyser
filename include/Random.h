#ifndef RANDOM_H
#define RANDOM_H

#include <Numbers.h>

class Random : public Numbers
{
    public:
        Random();
        virtual ~Random();
        void generateNumbers(int numVal);
    protected:

    private:
};

#endif // RANDOM_H
