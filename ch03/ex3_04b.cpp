#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
int main()
{
    string str1, str2;
    while (cin >> str1 >> str2)
    {
        if (str1.size() == str2.size())
            cout << "The two strings are equal length." << endl;
        else
            cout << "The larger length string is " << (str1.size() > str2.size() ? str1 : str2) << endl;
    }
    return 0;
}
