#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string str1, str2;
	string rsp;
	do
	{
		cout << "Input two strings: " << endl;
		cin >> str1 >> str2;
		cout << "The shorter is: " <<
		(str1.size() > str2.size() ? str2 : str1) << endl;
		cout << "Any more? (y): ";
		cin >> rsp;
	} while (!rsp.empty() && (tolower(rsp[0]) == 'y'));

	return 0;
}
