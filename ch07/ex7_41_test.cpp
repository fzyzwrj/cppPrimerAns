#include "ex7_41.h"
using std::cout;
using std::endl;
int main()
{
	cout << "1. default way:" << endl
		<< "--------------------" << endl;
	Sales_data s1;

	cout << "2. string:" << endl
		<< "--------------------" << endl;
	Sales_data s2("CPP");

	cout << "3. 4 parameter: " << endl
		<< "--------------------" << endl;
	Sales_data s3("CPP", 5, 20);

	cout << "4. istream: " << endl
		<< "--------------------" << endl;
	Sales_data s4(std::cin);

	return 0;
}

