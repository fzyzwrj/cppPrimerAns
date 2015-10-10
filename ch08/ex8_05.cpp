#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using std::vector;
using std::cin;
using std::ifstream;
using std::cout;
using std::endl;
using std::string;


void readFileToVec(const string &filename, vector<string> &text)
{
	ifstream in(filename);
	if (in)
	{
		string word;
		while (in >> word)
			text.push_back(word);
	}
}

int main()
{
	vector<string> text;
	readFileToVec("ex8_04.cpp", text);

	for (const auto &str : text)
		cout << str << endl;

	return 0;
}
