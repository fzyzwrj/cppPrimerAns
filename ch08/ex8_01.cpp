#include <iostream>

using std::cin;
using std::istream;
using std::cout;
using std::endl;

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
	print(cin);
	cout << cin.rdstate() << endl;

	return 0;
}
