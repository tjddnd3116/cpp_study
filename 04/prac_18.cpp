#include "../std_lib_facilities.h"

int main(void)
{
	double a, b, c;
	cin >> a >> b >> c;

	cout << (-b + sqrt(b * b - 4 * a * c)) / 2 * a << endl;;
	cout << (-b - sqrt(b * b - 4 * a * c)) / 2 * a << endl;;
}
