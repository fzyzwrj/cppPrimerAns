#include <iostream>

int main()
{
	int a[10], b[10];
	for (int i = 0; i < 10; ++i)
	{
		a[i] = i;
		b[i] = a[i];
	}

	return 0;
}
