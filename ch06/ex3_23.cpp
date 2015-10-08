#include <iostream>

using std::endl;
using std::cout;
using std::cin;

void print(const int *begin, const int *end)
{
	while (begin != end)
		cout << *begin++ << " ";
	cout << endl;
}

void print(const int *arr, size_t n)
{
	for (size_t i = 0; i != n; ++i)
		cout << arr[i] << " ";
	cout << endl;
}

void print(int (&arr)[2])
{
	for (auto i : arr)
		cout << i << " ";
	cout << endl;
}

void print(int *arr)
{
	cout << "int *arr" << endl;
}

int main()
{
	
	int arr[2] = {0, 1};
	print(arr);
	print(std::begin(arr), std::end(arr));
	print(arr, sizeof(arr)/sizeof(int));


	return 0;
}
