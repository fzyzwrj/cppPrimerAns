#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::vector;
using std::string;
using std::endl;

int main()
{
	vector<int> v1;
	vector<int> v2(10);	// usually wrong
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};


	for (auto i : v1)
		cout << i << ",";
	if (!v1.empty())
		cout << "\b" << " ";
	cout << endl;
	
	for (auto i : v2)
		cout << i << ",";
	if (!v2.empty())
		cout << "\b" << " ";
	cout << endl;

	for (auto i : v3)
		cout << i << ",";
	if (!v3.empty())
		cout << "\b" << " ";
	cout << endl;

	for (auto i : v4)
		cout << i << ",";
	if (!v4.empty())
		cout << "\b" << " ";
	cout << endl;

	for (auto i : v5)
		cout << i << ",";
	if (!v5.empty())
		cout << "\b" << " ";
	cout << endl;

	for (auto i : v6)
		cout << i << ",";
	if (!v6.empty())
		cout << "\b" << " ";
	cout << endl;

	for (auto i : v7)
		cout << i << ",";
	if (!v7.empty())
		cout << "\b" << " ";
	cout << endl;

	return 0;
}
