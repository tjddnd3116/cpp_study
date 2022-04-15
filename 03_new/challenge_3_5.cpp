#include "../std_lib_facilities.h"

int main(void)
{
	int num = 0;
	string pre = " ";
	string cur;
	while (cin >> cur)
	{
		num++;
		if (pre == cur)
			cout << "단어 번호: " << num \
				<< " 반복 단어: " << cur << endl;
		pre = cur;
	}
}
