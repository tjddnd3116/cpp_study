#include "../std_lib_facilities.h"

double ktoc(double k)
{
//   if (c < -273.15)
//     error("wrong degree!\n");
	double c = k - 273.15;
	return c;
}

int main(void)
{
	double k = 0;
	cin >> k;
	if (k < 0)
		error("wrong degree!\n");
	double c = ktoc(k);
	cout << c << '\n';
}
