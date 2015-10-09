#ifndef CP5_EX7_15_H
#define CP5_EX7_15_H

#include <string>
#include <iostream>

class Person;
std::istream &read(std::istream &is, Person &person);

class Person
{
	std::string name;
	std::string address;
public:
	const std::string &getName() const { return name; }
	const std::string &getAddress() const { return address; }
	Person() = default;
	Person(const std::string &sname, const std::string &saddr) : name(sname), address(saddr) {}
	Person(std::istream &is)
	{
		read(is, *this);
	}

};

std::istream &read(std::istream &is, Person &person)
{
	istream >> person.name >> person.address;
	if (!is)
		person = Person();
	return is;
}

std::ostream &print(std::ostream &os, const Person &person)
{
	os << person.name << " " << person.address;
	return os;
}
#endif
