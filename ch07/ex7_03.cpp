#include <iostream>
#include <vector>
#include <string>
#include "ex7_02.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{
	Sales_data total;

	if (cin >> total.bookNo >> total.units_sold >> total.revenue)
	{
		Sales_data trans;
		while (cin >> trans.bookNo >> total.units_sold >> total.revenue)
		{
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
				total = trans;
			}
		}
		
		cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
	}
	return 0;
}
