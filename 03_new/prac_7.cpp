#include "../std_lib_facilities.h"

int main(void)
{
	string val1;
	string val2;
	string val3;

	cout << "세 문자열을 입력하세요";
	cin >> val1 >> val2 >> val3;
	if (val1 <= val2 && val1 <= val3)
	{
		cout << val1 << " ";
		if (val2 <= val3)
			cout << val2 << " " << val3;
		else
			cout << val3 << " " << val2;
	}
	else if (val2 <= val1 && val2 <= val3)
	{
		cout << val2 << " ";
		if (val1 <= val3)
			cout << val1 << " " << val3;
		else
			cout << val3 << " " << val1;
	}
	else
	{
		cout << val3 << " ";
		if (val1 <= val2)
			cout << val1 << " " << val2;
		else
			cout << val2 << " " << val1;
	}
}
