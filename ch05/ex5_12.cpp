#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	unsigned ffCnt = 0, fiCnt = 0, flCnt = 0;
	char preCh = '0';
	char ch;
	while (cin >>::std::noskipws >> ch)
	{
		if (preCh == 'f')
		{
			switch (ch)
			{
				case 'f':
					++ffCnt;
					break;
				case 'i':
					++fiCnt;
					break;
				case 'l':
					++flCnt;
					break;
			}
		}
		preCh = ch;
	}
	cout << "ff: " << ffCnt << '\n'
		<< "fl: " << flCnt << '\n'
		<< "fi: " << fiCnt << endl;

	return 0;
}
