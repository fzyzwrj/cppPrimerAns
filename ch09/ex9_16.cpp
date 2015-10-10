#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::cout;
using std::min;
using std::endl;

int cmpVec(const vector<int> &vec1, const vector<int> &vec2)
{
	auto size = min(vec1.size(), vec2.size());
	for (auto i = 0; i != size; ++i)
	{
		if (vec1[i] == vec2[i])
			continue;
		else if (vec1[i] < vec2[i])
			return -1;
		else
			return 1;
	}
	if(vec1.size() < vec2.size())
		return -1;
	else if (vec1.size() == vec2.size())
		return 0;
	else
		return 1;
}

int main()
{
	vector<int> v1{0, 1, 2};
	vector<int> v2{0, 1, 2};

	cout << cmpVec(v1, v2) << endl;
	
	return 0;
}
