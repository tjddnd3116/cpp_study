#include "../std_lib_facilities.h"

int main(void)
{
	double *num;
	int cnt;
	cnt = 1;
	while (1)
	{
		num = new double[10000000000];
		cout << cnt << '\t' << sizeof(double) * 10000000000 * cnt<< "byte\n";
		cnt++;
	}
	return (0);
}
