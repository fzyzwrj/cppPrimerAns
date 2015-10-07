#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;
using std::cin;

int main()
{
	vector<int> ivec;
	for (int i = 0; cin >> i; )
		ivec.push_back(i);

	if (ivec.size() > 1)
	{
		for (auto it = ivec.begin(); it != ivec.end() - 1; ++it)
			cout << *it + *(it + 1) << " ";
		cout << endl;
		
		for (auto it = ivec.begin(); it != ivec.begin() + ivec.size() / 2; ++it)
			cout << *it + *(ivec.begin() + (ivec.end() - it - 1)) << " ";
		cout << endl;
		
		for (auto beg = ivec.begin(), end = ivec.end() - 1; beg != end; ++beg, --end)
			cout << *beg + *end << " ";
		cout << endl;
	}

	return 0;
}

