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
using namespace std::placeholders;

bool isLonger(const string &s, string::size_type sz)
{
	return s.size() > sz;
}

void biggers(vector<string> &words, vector<string>::size_type sz)
{

	auto num = count_if(words.begin(), words.end(), bind(isLonger, _1, 5));
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
