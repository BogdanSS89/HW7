#include "Date.h"
using namespace std;

Date::Date(size_t day, size_t month, size_t year)
{
	setDate(day, month, year);
}

void Date::setDate(size_t day, size_t month, size_t year)
{
	m_day = day;
	m_month = month;
	m_year = year;
}

size_t Date::getDay()
{
	return m_day;
}

size_t Date::getMonth()
{
	return m_month;
}

size_t Date::getYear()
{
	return m_year;
}

std::ostream& operator<<(ostream& out, const Date& date)
{
	out << "Today is " << date.m_day << "." << date.m_month << "." << date.m_year << "\n";
	return out;
}