#include <iostream>

using std::endl;
using std::cout;
using std::end;
using std::begin;

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	for (auto pb = begin(arr); pb != end(arr); ++pb)
		*pb = 0;

	for (auto i : arr)
		cout << i << " ";
	cout << endl;

	return 0;
}
