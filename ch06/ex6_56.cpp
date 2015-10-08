#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int add(int a, int b)
{
	return a + b;
}

int substract(int a, int b)
{
	return a - b;
}

int multiply(int a, int b)
{
	return a * b;
}

int divide(int a, int b)
{
	return b == 0 ? 0 : a / b;
}

int func(int a, int b);

int main()
{

	vector<decltype(func) *> v{add, substract, multiply, divide};
	for (auto f : v)
		cout << f(4, 2) << endl;


	return 0;
}
