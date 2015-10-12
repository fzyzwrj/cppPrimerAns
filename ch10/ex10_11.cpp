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

void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}
bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
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

	elimDups(words);

	for (const auto &word : words)
		cout << word << " ";
	cout << endl;

	stable_sort(words.begin(), words.end(), isShorter);
	for (const auto &s : words)
		cout << s << " ";
	cout << endl;


	return 0;
}
