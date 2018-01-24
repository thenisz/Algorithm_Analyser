#include "StoreData.h"

void StoreData::initializeFile(ofstream& myfile, vector<string> names)
{
//    myfile.open ("results.csv");
    for (unsigned int i=0; i<names.size(); i++) myfile << names[i] << ";";
    myfile << "\n";
}

void StoreData::appendData(ofstream& myfile, vector<double> data, int numVal, int numAlg)
{
    myfile << numVal << ";";
    for (unsigned int i=0; i < data.size(); i++)
    {
        if ((i%numAlg)==0 && i>0) myfile << ";" << numVal <<";";
        myfile << data[i] << ";";
    }
    myfile << "\n";
}

void StoreData::closeFile(ofstream& myfile)
{
    myfile.close();
}