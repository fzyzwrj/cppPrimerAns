#include <iostream>
#include <vector>
int main()
{
	int i = 20;
//	auto f = [&i]()->bool { if (i > 0) return !(i--); else return true;};
	auto f = [&i](){ return --i? false : true; };
	while (!f())
		std::cout << i << std::endl;
	return 0;

}
