#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

void Replace(string &s, const string &oldVal, const string &newVal)
{
	for (decltype(s.size()) i = 0; i <= s.size() - oldVal.size(); ++i)
	{
		if (s.substr(i, oldVal.size()) == oldVal)
		{
			s.erase(i, oldVal.size());
			s.insert(i, newVal);
			i += newVal.size();
			--i;
		}
	}
}

int main()
{
	 {
		 string str{"To drive straight thru is a foolish, tho courageous act.tho"};
	//	 string str{"thotho"};
		 std::cout << str << std::endl;
		 Replace(str, "thru", "through");
		 Replace(str, "tho", "though");
		 std::cout << str << std::endl << std::endl;
	 }
	{
		 string str{
			 "To drive straight thruthru is a foolish, thotho courageous act."};
		 std::cout << str << std::endl;
		 Replace(str, "thru", "through");
		 Replace(str, "tho", "though");
		 std::cout << str << std::endl << std::endl;
	 }
	 {
		 string str{"To drive straight thru is a foolish, tho courageous act."};
		 std::cout << str << std::endl;
		 Replace(str, "thru", "thruthru");
		 Replace(str, "tho", "though");
		 std::cout << str << std::endl << std::endl;
	 }
	 {
		 string str{"my world is a big world"};
		 std::cout << str << std::endl;
		 Replace(str, "world",
				 "worldddddddddddddddddddddddddddddddddddddddddddddddd");
		 std::cout << str << std::endl << std::endl;
	 }

	return 0;
}
