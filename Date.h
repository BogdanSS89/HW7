#pragma once
#include <iostream>
#include <ostream>


class Date
{
private:
	size_t m_day;
	size_t m_month;
	size_t m_year;

	friend std::ostream& operator<<(std::ostream& out, const Date& date);

public:
	Date(size_t day, size_t month, size_t year);

	void setDate(size_t day, size_t month, size_t year);

	size_t getDay();
	size_t getMonth();
	size_t getYear();
};
