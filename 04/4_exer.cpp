#include "../std_lib_facilities.h"
#include <limits>

int main(void)
{
	string unit;
	double val;
	double min;
	double max;

	// min = std::numeric_limits<double>::max();
	// max = std::numeric_limits<double>::min();
	while(cin>>val>>unit)
	{
		if (unit == "m")
			cout << val << "m == " << val * 100 << "cm == " << val * 100 / 2.54 << "in == " << val * 100 / 2.54 / 12 << "ft\n";
		else if (unit == "in")
			cout << val << "in == " << val * 2.54 << "cm == " << val / 12 << "ft == " << val * 2.54 / 100 << "m\n";
		else if (unit == "ft")
			cout << val << " ft == " << val * 12 << "in == " << val * 12 * 2.54 << "cm == " << val * 12 * 2.54 * 0.01 << "m\n";
		else if (unit == "cm")
			cout << val << "cm == " << val * 0.01 << "m == " << val / 2.54 << "in == " << val / 2.54 / 12 << "ft\n";

	}
}
