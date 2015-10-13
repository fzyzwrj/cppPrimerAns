#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

using std::stringstream;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}

void biggers(vector<string> &words, vector<string>::size_type sz)
{

	elimDups(words);
	auto num = count_if(words.begin(), words.end(), [sz](const string &s)->bool { if (s.size() > sz) {cout << s << " "; return true;} return false; });
	cout << num << endl;
}

int main()
{
	stringstream ss("the quick red fox jumps over the slow red turtle people chinese");
	vector<string> words;
	for (string word; ss >> word;)
		words.push_back(word);
	for (const auto &word : words)
		cout << word << " ";
	cout << endl;
	biggers(words, 5);
	

	return 0;
}
