#include <vector>
#include <iostream>
#include <algorithm>

using std::vector;
using std::cin;
using std::endl;
using std::swap;
using std::min;
using std::cout;

int main()
{
	vector<int> vec1 = {0, 1, 1, 2};
	vector<int> vec2 = {0, 1, 1, 2, 3, 5, 8};
	auto size = min(vec1.size(), vec2.size());
	for (decltype(vec1.size()) i = 0; i != size; ++i)
	{
		if (vec1[i] != vec2[i])
		{
			cout << "false" << endl;
			break;
		}
		else if (i == size - 1)	// without else, it also works
			cout << "true" << endl;
	}
	return 0;
}
