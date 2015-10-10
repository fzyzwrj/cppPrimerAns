#include <iostream>
#include <sstream>
using std::cin;
using std::istream;
using std::cout;
using std::endl;


// There is still some bug, print Hello, world!!, the last letter was printed twice.
istream &print(istream &is)
{
	while (!is.eof())
	{
		char ch;
		is >> ch;
		cout << ch;
	}
	is.clear();
	return is;
}

int main()
{
	std::istringstream iss("Hello, world!");
	print(iss);
	cout << endl;

	return 0;
}
