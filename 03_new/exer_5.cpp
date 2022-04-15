#include "../std_lib_facilities.h"

int main(void)
{
	float val1;
	float val2;

	cin >> val1 >> val2;
	cout << "min : " << min(val1, val2) << endl
		<< "max : " << max(val1, val2) << endl
		<< "+ : " << val1 + val2 << endl
		<< "- : " << val1 - val2 << endl
		<< "* : " << val1 * val2 << endl
		<< "/ : " << val1 / (val1 + val2)  << " "<< val2 / (val1 + val2) << endl;
}
