// Reads several transactions for the same ISBN. Write the sum of all the transactions that were read.

#include <iostream>
#include "../include/Sales_item.h"

int main()
{
	Sales_item total;
	if (std::cin >> total)
	{
		Sales_item item;
		while (std::cin >> item)
		{
			if (item.isbn() == total.isbn())
				total += item;
			else
			{
				std::cout << total << std::endl;
				total = item;	// examine the res, there may be some bug.
			}
		}
		std::cout << total << std::endl;
	}
	else
	{
		std::cerr << "No data?" << std::endl;
		return -1;
	}
	return 0;
}



//int main()
//{
//	Sales_item curItem, item;
//	if (std::cin >> curItem)
//	{
//		Sales_item total;
//		while (std::cin >> item)
//		{
//			if (item.isbn() == curItem.isbn())
//				total += item;
//			else
//			{
//				std::cout << total << std::endl;
//				curItem = item;
//			}
//		}
//		std::cout << total << std::endl;
//	}
//	return 0;
//}
