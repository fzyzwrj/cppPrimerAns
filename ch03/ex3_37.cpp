#include <iostream>

using std::endl;
using std::cout;

int main()
{
	const char ca[] = {'h', 'e', 'l', 'l', 'o'};
//	const char s[] = "world";
	const char *cp = ca;
	while (*cp)
	{
		cout << *cp++;
	}
	cout << endl;
	return 0;
}
