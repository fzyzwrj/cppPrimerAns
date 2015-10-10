#include <string>
#include <iostream>

using std::string;
using std::endl;
using std::cout;



int main()
{
	string str = "ab2c3d7R4E6";
	string::size_type pos = 0;
	while ((pos = str.find_first_of("0123456789", pos)) != string::npos)
		cout << str[pos++] << endl;

	pos = 0;
	cout << endl;
	while ((pos = str.find_first_not_of("0123456789", pos)) != string::npos)
		cout << str[pos++] << endl;

	return 0;
}
