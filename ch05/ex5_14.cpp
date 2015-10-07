#include <iostream>
#include <string>
#include <algorithm>

using std::max;
using std::string;
using std::endl;
using std::cout;
using std::cin;
using std::pair;

int main()
{
//	string word;
//	string preWord;
//	int cnt = 0;
//	int maxCnt = 0;
//	while (cin >> word)
//	{
//		if (word == preWord)
//		{
//			++cnt;
//			maxCnt = max(maxCnt, cnt);
//		}
//		else
//			cnt = 1;
//		preWord = word;
//	}
//	cout << maxCnt << endl;
	pair<string, int> max_duplicated;
	int cnt = 0;
	for (string word, preWord; cin >> word; preWord = word)
	{
		if (word == preWord)
			++cnt;
		else
			cnt = 0;
		if (cnt > max_duplicated.second)
			max_duplicated = {word, cnt};
	}
	if (max_duplicated.first.empty())
		cout << "no duplicated" << endl;
	else
		cout << max_duplicated.first << " " << max_duplicated.second + 1 << endl;

	return 0;
}
