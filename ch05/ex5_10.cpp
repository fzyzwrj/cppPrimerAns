#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	unsigned spaceCnt = 0, tabCnt = 0, newLineCnt = 0;
	char ch;
	while (cin >> ch)
	{
		switch (ch)
		{
			case 'A':
			case 'a':
				++aCnt;
				break;
			case 'E':
			case 'e':
				++eCnt;
				break;
			case 'I':
			case 'i':
				++iCnt;
				break;
			case 'O':
			case 'o':
				++oCnt;
				break;
			case 'U':
			case 'u':
				++uCnt;
				break;
		}
	}
	cout << "a: " << aCnt << endl
		<< "e: " << eCnt << endl
		<< "i: " << iCnt << endl
		<< "o: " << oCnt << endl
		<< "u: " << uCnt << endl;

	return 0;
}
