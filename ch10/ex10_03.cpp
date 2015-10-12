#include <vector>
#include <iostream>
#include <algorithm>

using std::endl;
using std::cout;
using std::vector;

int main()
{

	vector<int> ivec = {1, 2, 3, 4};
	cout << accumulate(ivec.cbegin(), ivec.cend(), 0) << endl;
	return 0;
}
