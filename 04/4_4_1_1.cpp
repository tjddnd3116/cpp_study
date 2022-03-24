#include "../std_lib_facilities.h"

int main(void)
{
	const double cm_per_inch = 2.54;
	double length = 1;
	char unit = 0;
	cout << "길이 뒤에 단위를 지정하세요 (c 나 i):\n";
	cin >> length >> unit;

	if (unit == 'i')
		cout << length << "in == " << cm_per_inch * length << "cm\n";
	else
		cout << length << "cm == " << length/cm_per_inch << "in\n";
}
