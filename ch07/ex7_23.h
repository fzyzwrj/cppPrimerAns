#ifndef CP5_EX7_23_H
#define CP5_EX7_23_H

#include <iostream>
#include <string>

class Screen
{
public:
	using pos = std::string::size_type;

	Screen = default();
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}
	char get() const { return contents[cursor]; }
	inline char get(pos r, pos c) const;
	Screen &move(pos r, pos c);

private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
};

inline Screen &Screen::move(pos r, pos c)
{
	cursor = r * width + c;
	return *this;
}

char Screen::get(pos r, pos c) const
{
	return contents[r * width + c];
}

#endif
