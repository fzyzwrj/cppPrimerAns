#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <fstream>

using std::ifstream;
using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::istream_iterator;

int main()
{
	ifstream fout("words.txt");

//	istream_iterator<string> in_iter(fout), eof;
//	vector<string> strvec;
//	copy(in_iter, eof, back_inserter(strvec));
	istream_iterator<string> in_iter(fout), eof;
	vector<string> strvec(in_iter, eof);

	for (auto s : strvec)
		cout << s << " ";
	cout << endl;

	return 0;
}
