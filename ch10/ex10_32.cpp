#include <iostream>
#include <iterator>
#include <fstream>
#include <cassert>

int main(int argn, char **argv)
{
	assert(argn == 4);
	std::ifstream ifs(argv[1]);
	std::ofstream ofs_odd(argv[2]), ofs_even(argv[3]);
	std::istream_iterator<int> in_iter(ifs), eof;
	std::ostream_iterator<int> out_iter_odd(ofs_odd, " "), out_iter_even(ofs_even, "\n");
	while (in_iter != eof)
	{
		if (*in_iter % 2)
			*out_iter_odd++ = *in_iter++;
		else
			*out_iter_even++ = *in_iter++;
	}
//	while (in_iter != eof)
//		*((*in_iter) % 2 ? out_iter_odd : out_iter_even)++ = *in_iter++;

}
