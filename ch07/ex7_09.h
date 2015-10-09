#ifndef CP5_EX7_04_H
#define CP5_EX7_04_H

#include <string>
#include <iostream>

class Person
{
	std::string name;
	std::string address;
public:
	const std::string &getName() const { return name; }
	const std::string &getAddress() const { return address; }

};

std::istream &read(std::istream &is, Person &person)
{
	istream >> person.name >> person.address;
	///
	if (!is)
		person = Person();
	///
	return is;
}

std::ostream &print(std::ostream &os, const Person &person)
{
	os << person.name << " " << person.address;
	return os;
}
#endif
