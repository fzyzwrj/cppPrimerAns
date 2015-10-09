#include "ex7_41.h"


// constructor
Sales_data::Sales_data(std::istream &is) : Sales_data()
{
	std::cout << "istream" << std::endl;
	read(is, *this);
}

// member function
Sales_data &Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

// friend function
Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum(lhs);
	sum.combine(rhs);
	return sum;
}

std::istream &read(std::istream &is, Sales_data &item)
{
	double price;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = item.units_sold * price;
	return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " "
		<< item.revenue;
	return os;
}
