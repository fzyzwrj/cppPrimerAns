#include <vector>
#include <list>
#include <iostream>

using std::list;
using std::vector;
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
	int ia[] = {0, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
	vector<int> ivec(begin(ia), end(ia));
	list<int> li(begin(ia), end(ia));

	auto it = ivec.begin();
	while (it != ivec.end())
	{
		if (*it & 0x1)
			it = ivec.erase(it);
		else
			++it;
	}
	for (auto it = li.begin(); it != li.end(); )
	{
		if (*it & 0x1)
			++it;
		else
			it = li.erase(it);
	}


	for (auto i : ivec)
		cout << i << " ";
	cout << endl;

	for (auto i : li)
		cout << i << " ";
	cout << endl;
	return 0;
}
