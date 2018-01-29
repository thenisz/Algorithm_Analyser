#include "StoreData.h"

void StoreData::initializeFile(ofstream& myfile, vector<string> names)
{
    for (unsigned int i=0; i<names.size(); i++) myfile << names[i] << ";";
    myfile << "\n";
}

void StoreData::appendData(ofstream& myfile, vector<long unsigned int> data, int numVal)
{
    myfile << numVal << ";";
    for (unsigned int i=0; i < data.size(); i++)
    {
//        if ((i%numAlg)==0 && i>0) myfile << ";" << numVal <<";";
        myfile << data[i] << ";";
    }
    myfile << "\n";
}
