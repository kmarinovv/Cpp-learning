#include <iostream>
#include <vector>
#include <sstream>
#include <list>

using namespace std;

void readVector(istream &istr, vector<int> &output)
{
    int buff;
    while (istr >> buff)
    {
        output.push_back(buff);
    }
}

void readVector(const string &buffer, vector<int> &output)
{
    istringstream istr(buffer);
    readVector(istr, output);
}

void readPipe(istream &istr, vector<int> &pipe)
{
    string trainStr;
    getline(istr, trainStr);
    readVector(trainStr, pipe);
}

int main()
{
    int numOfPipes = 0;
    vector<int> installation, checkup;

    cin >> numOfPipes;

    cin.ignore();

    installation.reserve(numOfPipes); // reserve memory from input
    checkup.reserve(numOfPipes);      // reserve memory from input
    readPipe(cin, checkup);
    readPipe(cin, installation);

    for (size_t pipe = 0; pipe < numOfPipes; pipe++)
    {
        int decay = installation[pipe] - checkup[pipe];
        cout << installation[pipe] / decay << ' ';
    }
    cout << endl;

    return 0;
}

// 5
// 1 1 1 1 11
// 2 3 4 5 12