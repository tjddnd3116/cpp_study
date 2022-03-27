#include "../std_lib_facilities.h"
#include <cstdlib>
#include <limits>

struct result {
	double min;
	double max;
	double avg;
	double mid;
};

void cal(const vector<double>& nums, struct result &ans)
{
	double dbl_min = numeric_limits<double>::max();
	double dbl_max = numeric_limits<double>::min();
	double avg;
	double mid;
	for (double x : nums)
	{
		if (x > dbl_max)
			dbl_max = x;
		if (x < dbl_min)
			dbl_min = x;
		avg += x;
	}
	ans.max = dbl_max;
	ans.min = dbl_min;
	ans.avg = avg / nums.size();
	ans.mid = nums[nums.size() / 2];
}
int main(void)
{
	struct result ans;
	vector<double> nums = {1.2, -2.3, 3.4, -4.5, 5.6, -6.7};
	cal(nums, ans);
	cout << ans.min << '\n'
		<< ans.max << '\n'
		<< ans.avg << '\n'
		<< ans.mid;
}
