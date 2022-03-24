#include "../std_lib_facilities.h"


int main(void)
{
	double val1;
	double val2;
	string operation;

	cout << "연산자와 두 피연산자를 입력하세요";
	cin >> operation >> val1 >> val2;
	if (operation == "+")
		cout << val1 + val2;
	else if (operation == "-")
		cout << val1 - val2;
	else if (operation == "*")
		cout << val1 * val2;
	else if (operation == "/")
		cout << val1 / val2;
	else if (operation == "plus")
		cout << val1 + val2;
	else if (operation == "minus")
		cout << val1 - val2;
	else if (operation == "mul")
		cout << val1 * val2;
	else if (operation == "div")
		cout << val1 / val2;
}
