#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int i1, i2;
	cin >> i1 >> i2;
	if (i2 == 0)
		throw std::runtime_error("division by 0");
	std::cout << static_cast<double>(i1) / i2 << endl;
	return 0;
}
