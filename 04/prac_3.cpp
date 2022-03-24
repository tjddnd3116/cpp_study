#include "../std_lib_facilities.h"
#include <limits>
int main(void)
{
	double sum = 0;;
	double distance;
	double max = std::numeric_limits<double>::min();
	double min = std::numeric_limits<double>::max();
	double avg = 0;;
	int cnt = 0;;

	while (cin >> distance)
	{
		sum += distance;
		if (distance > max)
			max = distance;
		if (distance < min)
			min = distance;
		cnt++;
	}
	cout << sum << '\t' << max << '\t' << min << '\t' << sum/cnt << '\n';
}
