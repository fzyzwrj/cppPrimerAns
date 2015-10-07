// Create a vector with ten int element.
// Using an iterator, assign each element a value that is twice its current value.

#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<int> ivec;
	for (int i = 0; i < 10; ++i)
		ivec.push_back(i);

	for (auto it = ivec.begin(); it != ivec.end(); ++it)
		*it *= 2;
	for (auto value : ivec)
		cout << value << " ";
	cout << endl;
	

	return 0;
}

