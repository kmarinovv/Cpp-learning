#include <iostream>
#include <vector>
#include <sstream>
#include <list>

using namespace std;

bool isValid(vector<char> &input);

//[()]{}{[()()]()}
int main()
{

    string buff;

    cin >> buff;

    vector<char> input;
    input.reserve(buff.size());

    for (char c : buff)
    {
        input.push_back(c);
    }

    cout << (isValid(input) ? "valid" : "invalid") << endl;

    return 0;
}

bool isValid(vector<char> &input)
{
    size_t ordinarybr = 0;
    size_t squarebr = 0;
    size_t curlytbr = 0;

    vector<char>::const_iterator it = input.begin();

    while (it != input.end())
    {
        switch (*it)
        {
        case '{':
            if (ordinarybr || squarebr)
                return false;
            curlytbr++;
            break;

        case '}':
            if (squarebr || ordinarybr)
                return false;
            if (curlytbr <= 0)
                return false;
            curlytbr--;
            break;

        case '[':
            if (ordinarybr)
                return false;
            squarebr++;
            break;

        case ']':
            if (ordinarybr)
                return 0;
            squarebr--;
            break;
        case '(':
            ordinarybr++;
            break;

        case ')':
            if (ordinarybr <= 0)
                return 0;
            ordinarybr--;

            break;
        }

        it++;
    }
    return curlytbr == 0, squarebr == 0, ordinarybr == 0;
}
