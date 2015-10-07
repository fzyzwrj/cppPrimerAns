// Read a sequence of strings from cin, and store their values in a vector.

#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<string> text;
	string word;
	while (cin >> word)
		text.push_back(word);

	return 0;
}
