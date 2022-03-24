#include "../std_lib_facilities.h"

int main(void)
{
	int val1;
	int val2;

	cout << "두 정수를 입력하세요";
	cin >> val1 >> val2;
	cout << min(val1, val2) << '\n'
		<< max(val1, val2) << '\n'
		<< val1 + val2 << '\n'
		<< val1 - val2 << '\n'
		<< val1 * val2 << '\n'
		<< (double)((double)val1 / (val1 + val2)) << " " << (double)((double)val2 / (val1 + val2)) << '\n';
}
