#include "../std_lib_facilities.h"

int main(void)
{
	string num;
	cout << "숫자 스펠링을 입력하세요";
	cin >> num;
	if (num == "zero")
		cout << "0";
	else if (num == "one")
		cout << "1";
	else if (num == "two")
		cout << "2";
	else if (num == "three")
		cout << "3";
	else if (num == "four")
		cout << "4";
	else
		cout << "바보 같은 컴퓨터!";
}
