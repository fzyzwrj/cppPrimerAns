#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;


struct Sales_data
{
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main()
{
	Sales_data total;

	if (cin >> total.bookNo >> total.units_sold >> total.revenue)
	{
		Sales_data trans;
		while (cin >> trans.bookNo >> total.units_sold >> total.revenue)
		{
			if (total.bookNo == trans.bookNo)
			{
				total.units_sold += trans.units_sold;
				total.revenue += trans.revenue;
			}
			else
			{
				cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
		//		total.bookNo = trans.bookNo;
		//		total.units_sold = trans.units_sold;
		//		total.revenue = trans.revenue;
				total = trans;
			}
		}
		
		cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
	}
	return 0;
}
