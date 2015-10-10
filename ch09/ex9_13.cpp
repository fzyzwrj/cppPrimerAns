#include <list>
#include <vector>
#include <iostream>

using std::vector;
using std::list;
using std::cout;
using std::endl;

int main()
{
	list<int> li{1, 2, 3, 4, 5};
	vector<double> vd(li.begin(), li.end());
	for (auto i : vd)
		cout << i << endl;


	return 0;
}
