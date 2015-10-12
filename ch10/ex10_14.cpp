#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main()
{
	auto f = [](int a, int b) { return a + b; };
	cout << f(3, 4) << endl;

	return 0;
}
