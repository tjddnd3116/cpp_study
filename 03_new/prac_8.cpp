#include "../std_lib_facilities.h"

int main(void)
{
	int num;
	cout << "정수를 입력하세요";
	cin >> num;
	if (num % 2)
		cout << num << "은 홀수입니다.";
	else
		cout << num << "은 짝수입니다.";
}
