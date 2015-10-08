#include <iostream>
#include <string>

using std::string;
using std::endl;
using std::cout;

int main(int argc, char **argv)
{

	if (argc == 3)
	{
		string str = argv[1];
		str += argv[2];
		cout << str << endl;
	}
	return 0;
}
