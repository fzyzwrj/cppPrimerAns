#include <iostream>
#include <vector>

using std::vector;

int main()
{
	vector<int> ivec;
	for (int i = 0; i < 10; ++i)
		ivec.push_back(i);

	vector<int> ivec2(ivec);

	return 0;
}
