#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>


using std::cout;
using std::vector;
using std::string;
using std::endl;
using std::stringstream;

bool predicate(const string &str)
{
	return str.size() >= 5;
}

int main()
{
	stringstream ss("the quick red fox jumps over the slow red turtle");
	vector<string> words;
	for (string word; ss >> word;)
		words.push_back(word);
	for (const auto &word : words)
		cout << word << " ";
	cout << endl;

	auto par_end = partition(words.begin(), words.end(), predicate);
	for (auto it = words.cbegin(); it != par_end; ++it)
		cout << *it << " ";
	cout << endl;


	return 0;
}
