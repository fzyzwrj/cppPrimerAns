#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::vector;
using std::string;
using std::endl;
using std::cin;

int main()
{
	vector<string> text;
	for (string line; getline(cin, line); )
		text.push_back(line);

	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
	{
		for (auto &c : *it)
			c = toupper(c);
		cout << *it << endl;
	}


	return 0;
}
