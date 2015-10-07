#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
int main()
{
	std::string s = "abc";
	std::cout << s.size() << std::endl;
	std::cout << strlen(s.c_str());
	printf("%d\n", 123);
	return 0;
}
