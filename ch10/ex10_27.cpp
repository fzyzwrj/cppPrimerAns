#include <iostream>
#include <iterator>
#include <vector>
#include <list>
#include <algorithm>
using std::iterator;
using std::cout;
using std::endl;
using std::vector;
using std::list;

int main()
{
	vector<int> ivec = {1, 2, 3, 4, 1, 2, 5};
	list<int> li;
	sort(ivec.begin(), ivec.end());
	unique_copy(ivec.begin(), ivec.end(), back_inserter(li));
	for (auto i : li)
		cout << i << " ";
	cout << endl;
}
