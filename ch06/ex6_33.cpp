#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::next;
using Iter = vector<int>::const_iterator;
//void print_vec(const vector<int> &ivec, size_t i)
//{
//	if (i == ivec.size())
//		return;
//	cout << ivec[i] << " ";
//	print_vec(ivec, i + 1);
//}
//int main()
//{
//	vector<int> ivec = {0, 1, 2, 3, 4, 5};
//	print_vec(ivec, 0);
//	cout << endl;
//	return 0;
//}

void print(Iter beg, Iter end)
{
	if (beg != end)
	{
		cout << *beg++ << " ";
		// print(next(beg), end);
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
