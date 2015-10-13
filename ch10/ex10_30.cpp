#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

using std::vector;
using std::istream_iterator;
using std::ostream_iterator;
using std::cout;
using std::endl;
using std::cin;

int main()
{
	istream_iterator<int> in_iter(cin), eof;
	vector<int> ivec(in_iter, eof);
	sort(ivec.begin(), ivec.end());
//	ostream_iterator<int> out_iter(cout, " ");
//	copy(ivec.begin(), ivec.end(), out_iter);
	copy(ivec.begin(), ivec.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	return 0;
}
