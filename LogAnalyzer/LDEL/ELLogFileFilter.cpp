//
// Created by AfazD on 28-Oct-19.
//
#include "ELLogFileFilter.h"
#include "MetaData.h"

using namespace std;

void ELLogFileFilter::FilterLogFile()
{
    MFSTREAM inputFile;
    MFSTREAM outputFile;

    inputFile.open("../tests/LDEL_test1/log.txt",ios::in);
    outputFile.open("../tests/LDEL_test1/filteredLog.txt",ios::out);

    string currentLine;
    string previousLine="";
    while(getline(inputFile,currentLine))
    {
        if(currentLine!=previousLine){
            outputFile<<currentLine<<"\n";
        }
        previousLine=currentLine;
    }

    inputFile.close();
    outputFile.close();
}

