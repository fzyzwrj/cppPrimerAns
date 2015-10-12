#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using std::vector;
using std::endl;
using std::cout;
using std::string;
using std::list;

int main()
{
	vector<int> ivec = {1, 2, 3, 1, 2, 5, 6};
	list<string> strl= {"aa", "bb", "aa"};
	cout << count(ivec.cbegin(), ivec.cend(), 1) << endl;
	cout << count(strl.cbegin(), strl.cend(), "aa") << endl;

	return 0;
}
