#ifndef CP5_EX7_04_H
#define CP5_EX7_04_H

#include <string>

class Person
{
	std::string name;
	std::string address;
public:
	const std::string &getName() const { return name; }
	const std::string &getAddress() const { return address; }

};

#endif
