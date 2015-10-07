// Read a sequence of integers from cin, and store their values in a vector.

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> ivec;
	int i;
	while (cin >> i)
		ivec.push_back(i);

	return 0;
}
