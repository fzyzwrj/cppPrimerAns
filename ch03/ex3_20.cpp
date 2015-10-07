#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	vector<int> ivec;
	int i;
	while (cin >> i)
		ivec.push_back(i);

	// cout sum of two adjacent integers
	if (ivec.size() > 1)
		for (decltype(ivec.size()) i = 0; i != ivec.size() - 1; ++i)
			cout << ivec[i] + ivec[i + 1] << endl;
	
	for (decltype(ivec.size()) i = 0; i != ivec.size() / 2; ++i)
		cout << ivec[i] + ivec[ivec.size() - i - 1] << endl;
	
	return 0;
}
