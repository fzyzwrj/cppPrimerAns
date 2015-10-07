#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int i1, i2;
	while (cin >> i1 >> i2)
	{
		try
		{
			if (i2 == 0)
				throw std::runtime_error("divisor is 0");
			cout << static_cast<double>(i1) / i2 << endl;
		}
		catch (std::runtime_error err)
		{
			cout << err.what() << endl;
			cout << "Please input two integer again: ";
		}
	}

	return 0;
}
