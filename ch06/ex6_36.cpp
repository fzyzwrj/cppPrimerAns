#include <iostream>
#include <string>

using std::string;

string (&print(string (&arrStr)[10)))[10];
using arrS = string[10];
arrS &func1(attS &arr);

auto func2(arrS &arr)->string(&)[10];

string arr[10];
decltype(arr) &func(arrS &arr);

int main()
{
	

	return 0;
}
