#include "../std_lib_facilities.h"
#include <limits>

double maxv(const vector<double> num)
{
	double max = std::numeric_limits<double>::min();
	for(double x:num)
	{
		if (x > max)
			max = x;
	}
	return (max);
}

int main(void)
{
	double result;
	vector<double> num = {1.2, -3.4, 5.6, 0, -10.44};

	result = maxv(num);
	cout << result;
}
