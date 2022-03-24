#include "../std_lib_facilities.h"

int main(void)
{
	vector<double> temps;
	for (double temp; cin>>temp; )
		temps.push_back(temp);

	double sum = 0;
	for (int x : temps) sum += x;
	cout << "온도 평균:" << sum/temps.size() << '\n';

	sort(temps);
	cout << "온도 중앙값:" << temps[temps.size()/2] << '\n';
}


