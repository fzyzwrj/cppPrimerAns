#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main()
{
	int int_arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

	for (int (&i)[4] : int_arr)
	{
		for (int j : i)
			cout << j << " ";
		cout << endl;
	}
	cout << endl;

	for (size_t i = 0; i != 3; ++i)
	{
		for (size_t j = 0; j !=4; ++j)
			cout << int_arr[i][j] << " ";
		cout << endl;
	}
	cout << endl;

	for (int (*p)[4] = int_arr; p != int_arr + 3; ++p)
	{
		for (int *q = *p; q != *p + 4; ++q)
			cout << *q << " ";
		cout << endl;
	}
	return 0;
}
