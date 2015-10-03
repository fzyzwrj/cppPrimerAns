#include <iostream>
#include <typeinfo>

int main()
{
	const int i = 42;
	auto j = i;
	const auto &k = i;
	auto *p = &i;
	const auto j2 = i, &k2 = i;
	// print i means int, and PKi means point to const int
	std::cout << "j is " << typeid(j).name() << std::endl
		<< "k is " << typeid(k).name() << std::endl
		<< "p is " << typeid(p).name() << std::endl
		<< "j2 is " << typeid(j2).name() << std::endl
		<< "k2 is " << typeid(k2).name() << std::endl;
	return 0;
}
