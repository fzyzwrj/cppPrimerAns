#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::string str = "Hello, world";
	std::cout << sizeof(str) << std::endl;
	std::vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::cout << sizeof ivec << std::endl;
	void *pv;
	char *pc;
	pc = (char *)pv;
	pc = static_cast<char *>(pv);
	pc = reinterpret_cast<char *>(pv);

	return 0;
}

