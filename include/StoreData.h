#ifndef STOREDATA_H
#define STOREDATA_H
#include <string>
#include <vector>
#include <fstream>

using namespace std;
class StoreData
{
    public:
            static void initializeFile(vector<string> names);
            static void appendData(vector<double> data, int numVal);
};

#endif // STOREDATA_H
