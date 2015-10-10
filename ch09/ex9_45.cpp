#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

inline string addFix(const string &str, const string &pre, const string &su)
{
	auto res = str;
	res.insert(res.begin(), pre.begin(), pre.end());
	res.append(su);
	return res;
}
int main()
{
	 std::string name("alan");
	 std::cout << addFix(name, "Mr.", ",Jr.") << std::endl;

	return 0;
}
