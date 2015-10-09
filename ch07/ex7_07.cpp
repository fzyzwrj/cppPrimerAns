#include <iostream>
#include <vector>
#include <string>
#include "ex7_06.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{
	Sales_data total;

	if (read(cin, total))
	{
		Sales_data trans;
		while (read(cin, trans))
		{
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				print(cout, total) << endl;
				total = trans;
			}
		}
		
		print(cout, total) << endl;
	}
	return 0;
}
