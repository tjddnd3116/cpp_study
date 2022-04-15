#include "../std_lib_facilities.h"

int main(void)
{
	cout << "정수 값 입력: ";
	int n;
	cin >> n;
	cout << "n == " << n
		<< "\nn + 1 == " << n + 1
		<< "\n3 곱하기 n == " << 3 * n
		<< "\nn의 두 배 == " << n + n
		<< "\nn 제곱 == " << n * n
		<< "\nn 나누기 2 == " << n / 2
		<< "\nn의 제곱근 == " << sqrt(double(n))
		<< '\n';
}
