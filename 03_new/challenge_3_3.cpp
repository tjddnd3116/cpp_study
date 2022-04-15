#include "../std_lib_facilities.h"

int main(void)
{
	cout << "이름과 나이를 입력하세요\n";
	string name = "???";
	double age = -1.0;

	cin >> name >> age;
	age *= 12;
	cout << "안녕하세요, " << name << " " << age << '\n';
}
