#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::endl;
using std::cout;

int main()
{
	vector<string> vstr = {"132", "123.1", "-3"};
	int sum = 0;
	for (const auto &i : vstr)
		sum += stoi(i);
	cout << sum << endl;

	double dsum = 0.0;
	for (const auto &i : vstr)
		dsum += stod(i);
	cout << dsum << endl;

	return 0;
}
