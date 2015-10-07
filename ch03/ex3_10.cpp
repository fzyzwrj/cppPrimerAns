// Read a string of character including punctuation and writes what was read 
// but with the punctuation removed

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::cin;

int main()
{
	string line;
	while (getline(cin, line))
	{
		for (auto c : line)
			if (!ispunct(c))
				cout << c;
		cout << endl;
	}
	return 0;
}


// int main()
// {
// 	string str;
// 	while(cin >> str)
// 	{
// 		string strRes;
// 		for (auto c : str)
// 			if (isalpha(c))	
// 				cout << c;
// 		cout << endl;
// 	}
// 	
// 	return 0;
// }
