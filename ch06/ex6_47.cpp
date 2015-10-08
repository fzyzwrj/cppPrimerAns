#include <iostream>
#include <vector>
#include <cassert>

using std::vector;
using std::cout;
using std::endl;
using std::next;
using Iter = vector<int>::const_iterator;

void print(Iter beg, Iter end)
{

#ifndef NDEBUG
	cout << "left: " << (end - beg) << " ";
#endif
	if (beg != end)
	{
		cout << *beg++ << " " << endl;
		print(beg, end);
	}
}

int main()
{
	vector<int> ivec = {0, 1, 2, 3, 4, 5};
	print(ivec.cbegin(), ivec.cend());
	cout << endl;
	return 0;
}
