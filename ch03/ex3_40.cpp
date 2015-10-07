#include <iostream>
#include <cstring>

using std::endl;
using std::cout;

int main()
{
	const char str1[] = "Hello";
	const char str2[] = ", world";
	char str[20];
	strcpy(str, str1);
	strcat(str, str2);

	cout << str << endl;
	return 0;
}
