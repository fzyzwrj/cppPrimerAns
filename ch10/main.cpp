#include <iostream>
#include <algorithm>
#include <iterator>
#include <numeric>

using std::cout;
using std::cin;
using std::endl;
using std::iterator;
using std::istream_iterator;

int main()
{
	istream_iterator<int> in(cin), eof;
	cout << accumulate(in, eof, 0) << endl;


	return 0;
}
