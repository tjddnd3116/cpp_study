#include <iostream>
#include <ostream>
// #include <vector>
#include "std_lib_facilities.h"

vector<string> month_tbl = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "sep", "Oct", "Nov", "Dec"};

enum class Month {
	Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};

ostream& operator<<(ostream& os, Month m)
{
	return os << month_tbl[int(m)];
}
Month operator++(Month& m)
{
	m = (m==Month::Dec) ? Month::Jan : Month(int(m) + 1);
	return (m);
}
int main(void)
{
	Month m = Month::Sep;
	++m;
	cout << m;
}
