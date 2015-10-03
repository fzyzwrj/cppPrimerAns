// Read a set of books sales transactions, writing each transaction to the stdandard output.

#include <iostream>
#include "../include/Sales_item.h"

int main()
{
	Sales_item item;
	while (std::cin >> item)
		std::cout << item << std::endl;
	
	return 0;
}
