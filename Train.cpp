#include <iostream>
#include <vector>
#include <sstream>
#include <list>

using namespace std;

void readList(istream & istr,list<int> & output)
{
    int buff;
    while(istr>>buff)
    {
        output.push_back(buff);
    }

}

void readList(const string & buffer,list<int> & output)
{
    istringstream istr(buffer);
    readList(istr, output);

}

void readTrain(istream & istr, list<int> & train)
{
    string trainStr;
    getline(istr,trainStr);
    readList(trainStr,train);
}

void mergeTrains(list<int> & finalTrain,list<int>::iterator & it, string & mergeRes, char train)
{
    mergeRes.insert(mergeRes.begin(),train);
    finalTrain.push_back(*it);
    it++;
}

int main()
{
     list<int> trainA,trainB;
     string mergeRes;
     list<int> finalTrain;
     

     readTrain(cin, trainA);
     readTrain(cin,trainB);

     list<int>::iterator itA = trainA.begin(),
                         itB = trainB.begin();

     while(itA!=trainA.end() || itB!=trainB.end())
     {
        if(itA==trainA.end())
            mergeTrains(finalTrain,itB, mergeRes,'B');
        else if(itB==trainB.end())
            mergeTrains(finalTrain,itA,mergeRes,'A');
        else
        {
            if(*itA>*itB)
                mergeTrains(finalTrain,itA,mergeRes,'A');
            else
                mergeTrains(finalTrain,itB, mergeRes,'B');
        }
     }

    cout<<mergeRes<< endl;
     
    for(int c: finalTrain)
        cout<< c << ' ';

    cout<<endl;   
 
    return 0;
}

