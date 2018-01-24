#include "StoreData.h"

void StoreData::initializeFile(vector<string> names)
{
    ofstream myfile;
    myfile.open ("results.csv");
    for (unsigned int i=0; i <names.size(); i+=2)
    {
        myfile << names[i] << ";";
        myfile << names[i+1] << ";";
        myfile <<";";
    }
    myfile << "\n";
    myfile.close();
}

void StoreData::appendData(vector<double> data, int numVal)
{
    ofstream myfile;
    myfile.open ("results.csv", fstream::app);
    for (unsigned int i=0; i < data.size(); i++)
    {
        myfile << numVal << ";";
        myfile << data[i] << ";";
        myfile <<";";
    }
    myfile << "\n";
    myfile.close();
}
