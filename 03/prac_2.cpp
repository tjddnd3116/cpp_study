#include "../std_lib_facilities.h"

int main(void)
{
	int mile;

	cout << "마일을 입력하세요 :";
	cin >> mile;
	cout << mile << "마일은" << mile * 1609 << "킬로미터 입니다.\n";
}
