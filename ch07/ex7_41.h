#ifndef CP5_EX7_41_H
#define CP5_EX7_41_H
#include <string>
#include <iostream>

struct Sales_data
{
	friend std::istream &read(std::istream &is, Sales_data &item);
	friend std::ostream &print(std::ostream &os, const Sales_data &item);
	friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

public:
	Sales_data(const std::string &s, unsigned n, double p)
		: bookNo(s), units_sold(n), revenue(p * n)
	{
		std::cout << "4 parameter" << std::endl;
	}

	Sales_data() : Sales_data("", 0, 0.0)
	{
		std::cout << "no parameter" << std::endl;
	}

	Sales_data(const std::string &s) : Sales_data(s, 0, 0.0) 
	{
		std::cout << "1 string" << std::endl;
	}

	Sales_data(std::istream &is);

	std::string isbn() const { return bookNo; }
	Sales_data &combine(const Sales_data &rhs);
private:
	inline double avg_price() const;

private:
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	
};

inline double Sales_data::avg_price() const 
{
	return units_sold ? revenue / units_sold : 0;
}
// declarations for nomember parts of the Sales_data interface
std::istream &read(std::istream &is, Sales_data &item);
std::ostream &print(std::ostream &os, const Sales_data &item);
Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

#endif 
