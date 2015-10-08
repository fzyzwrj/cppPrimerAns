#include <iostream>
#include <cstdio>
#include <string>
using std::string;


const char *test()
{
	return "Hello, world";
}

string test2()
{
	return "Hello, world, test2";
}

int main()
{
	const char *pc = "Hello, world";
	const int &pi = 42;
	printf("%s", test());
	return 0;
}
