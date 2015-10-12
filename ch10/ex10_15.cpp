#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int sum(int a)
{
	auto f = [a](int b) {return a + b;};
	return f(3);
}

int main()
{
	cout << sum(10) << endl;
	return 0;
}
