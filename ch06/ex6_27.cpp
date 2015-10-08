// calculate sum of the integers

#include <iostream>

int calcSum(std::initializer_list<int> li)
{
	int sum = 0;
	for (auto i : li)
		sum += i;
	return sum;
}

int main()
{
	std::cout << calcSum({1, 2, 3}) << std::endl;
	return 0;
}
