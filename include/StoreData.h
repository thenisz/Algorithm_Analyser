#ifndef STOREDATA_H
#define STOREDATA_H
#include <string>
#include <vector>
#include <fstream>

using namespace std;
class StoreData
{
    public:
            static void initializeFile(ofstream& myfile, vector<string> names);
            static void appendData(ofstream& myfile, vector<long unsigned int> data, int numVal);
            static void closeFile(ofstream& myfile);
};

#endif // STOREDATA_H
