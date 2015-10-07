#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string str;
    string strTotal;
    while (cin >> str)
    {
        if (strTotal.empty())
            strTotal = str;
        else
        {
            strTotal += " " + str;
        }
    }
	cout << strTotal << endl;

    return 0;
}
