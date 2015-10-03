// print each number in the range specified by two integers.
// my: print the numbers among given two numbers

#include <iostream>

int main()
{
	int start = 0, end = 0;
	std::cout << "Enter two numbers: ";
	std::cin >> start >> end;
	if (start > end)
	{
		int temp = start;
		start = end;
		end = temp;
	}
	
	while (start <= end)
	{
		std::cout << start << std::endl;
		++start;
	}

	return 0;

}
