#include <iostream>
#include <string>

using std::string;
using std::endl;
using std::getline;
using std::cin;
using std::cout;
int main()
{
	string line;
	while (getline(cin, line))
		cout << line << endl;
}
