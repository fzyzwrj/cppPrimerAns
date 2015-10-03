// print the sum of a set of integers read from cin
// my:print the numbers which read from cin

#include <iostream>

int main()
{
	int sum = 0;
	for (int value = 0; std::cin >> value; )
		sum += value;
	std::cout << sum << std::endl;

	return 0;
}
