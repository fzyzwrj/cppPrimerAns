#include <iostream>
#include <vector>

using std::vector;
using std::endl;
using std::cout;
using std::end;
using std::begin;

int main()
{
	int arr1[] = {1, 2, 3, 4, 5};
	int arr2[] = {1, 2, 3, 4, 5};
//	int arr2[] = {1, 2, 3, 4, 6};
	auto pb1 = begin(arr1), pb2 = begin(arr2);
	auto pe1 = end(arr1), pe2 = end(arr2);

	if ((pe1 - pb1) != (pe2 - pb2))
		cout << "array not equal" << endl;
	else
	{
		while (pb1 != pe1 && pb2 != pe2)
		{
			if (*pb1 != *pb2)
			{
				cout << "array not equal" << endl;
				break;
			}
			++pb1, ++pb2;
		}
		if (pb1 == pe1)
			cout << "array equal" << endl;
	}

	vector<int> vec1 = {0, 1, 2};
	vector<int> vec2 = {0, 1, 2};
	cout << (vec1 == vec2 ? "vector equal" : " vector not equal") << endl;

	return 0;
}
