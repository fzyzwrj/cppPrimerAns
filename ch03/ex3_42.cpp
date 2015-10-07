#include <iostream>
#include <vector>

using std::endl;
using std::vector;
using std::begin;
using std::cout;
using std::end;

int main()
{
	vector<int> ivec{0, 1, 2, 3, 4, 5};
	int int_arr[6];
//	for (int *i = begin(int_arr); i != end(int_arr); ++i)
//		*i = ivec[i - begin(int_arr)];
	for (auto &i : int_arr)
		i = ivec[&i - begin(int_arr)];
	for (auto i : int_arr)
		cout << i << " ";
	cout << endl;


	return 0;
}
