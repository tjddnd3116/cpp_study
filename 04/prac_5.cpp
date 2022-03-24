#include "../std_lib_facilities.h"

int main(void)
{
	double val1;
	double val2;
	char oper;

	cout << "입력값 2개와 연산자를 입력하세요\n";
	cin >> val1 >> val2 >> oper;

	switch (oper) {
	case '+':
		cout << val1 << "과" << val2 << "의 합은" << val1 + val2 << "입니다.\n";
		break;
	case '-':
		cout << val1 << "과" << val2 << "의 차는" << val1 - val2 << "입니다.\n";
		break;
	case '/':
		cout << val1 << "과" << val2 << "의 나눔은" << val1 / val2 << "입니다.\n";
		break;
	case '*':
		cout << val1 << "과" << val2 << "의 곱은" << val1 * val2 << "입니다.\n";
		break;
	}
}
