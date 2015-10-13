#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
#include <functional>

using std::stringstream;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using namespace std::placeholders;

// bool check_size(int i, int sz)
// {
// 	return i > sz;
// }
bool check_size(int i , const string &s)
{
	return i > s.size();
}

int main()
{
	vector<int> ivec = {0, 3, 4, 7, 2, 5};
	string s = "hello";
//	auto it = find_if(ivec.begin(), ivec.end(), bind(check_size, _1, s.size()));
	auto it = find_if(ivec.begin(), ivec.end(), bind(check_size, _1, s));

	cout << *it << endl;


	return 0;
}



