// Read a seq of words from cin and store the value in a vector.
// Then change each word to uppercase and print the res in a line
// for one word

#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<string> vec;
	string word;
	while (cin >> word)
	{
		for (auto &c : word)
			if (isalpha(c))
				c = toupper(c);
		vec.push_back(word);
	}

	for (auto word : vec)
		cout << word << endl;

	return 0;
}
