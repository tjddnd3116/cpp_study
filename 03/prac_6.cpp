#include "../std_lib_facilities.h"

int main(void)
{
	int val1;
	int val2;
	int val3;

	cout << "세 정수를 입력하세요";
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
