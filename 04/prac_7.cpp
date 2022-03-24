#include "../std_lib_facilities.h"

int main(void)
{
	vector<string> number = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
	vector<string> num_word = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	string val1;
	string val2;
	int num1;
	int num2;
	char oper;

	cout << "입력값 2개와 연산자를 입력하세요\n";
	cin >> val1 >> val2 >> oper;
	for (int i = 0; i < 10; i++)
	{
		if (val1 == number[i])
			num1 = i;
		if (val2 == number[i])
			num2 = i;
	}
	for (int i = 0; i < 10; i++)
	{
		if (val1 == num_word[i])
			num1 = i;
		if (val2 == num_word[i])
			num2 = i;
	}

	switch (oper) {
	case '+':
		cout << num1 << "과" << num2 << "의 합은" << num1 + num2 << "입니다.\n";
		break;
	case '-':
		cout << num1 << "과" << num2 << "의 차는" << num1 - num2 << "입니다.\n";
		break;
	case '/':
		cout << num1 << "과" << num2 << "의 나눔은" << num1 / num2 << "입니다.\n";
		break;
	case '*':
		cout << num1 << "과" << num2 << "의 곱은" << num1 * num2 << "입니다.\n";
		break;
	}
}
