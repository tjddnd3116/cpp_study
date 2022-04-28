#include "../std_lib_facilities.h"

int main(void)
{
	double a;
	double b;

	double c;
	double x1;
	double x2;

	cout << "a, b, c의 값을 입력하시오\n";
	cin >> a >> b >> c;
	try {
	x1 = -b + sqrt(b * b - 4 * a * c) / 2 * a;
	x2 = -b - sqrt(b * b - 4 * a * c) / 2 * a;
	}
	catch(exception &e){
		cerr << e.what();
	}
	cout << x1 << '\t' << x2;
}
