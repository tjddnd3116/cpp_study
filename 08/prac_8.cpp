#include "../std_lib_facilities.h"

double sum(const vector<double>& price, const vector<double>& weight)
{
	double result;

	result = 0;
	for (int i = 0; i < price.size(); i++)
		result += price[i] * weight[i];
	return (result);
}

int main(void)
{
	double result;
	vector<double> price = {1.2, 2.3, 3.4, 5.6};
	vector<double> weight = {2.1, 3.2, 4.3, 5.4};

	if (price.size() != weight.size())
		error("크기가 같지 않습니다.\n");
	result = sum(price, weight);
	cout << "총합은 " << result << "입니다.\n";
}
