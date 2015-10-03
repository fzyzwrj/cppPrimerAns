// reads two Sales_item objects that have the same ISBN and produces their sum.

#include <iostream>
#include "../include/Sales_item.h"

int main()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	if (item1.isbn() == item2.isbn())
		std::cout << item1 + item2 << std::endl;
	else
	{
		std::cerr << "Data must have the same ISBN." << std::endl;
		return -1;
	}

	return 0;
}
