#include "../std_lib_facilities.h"

int main(void)
{
	int max  = 100;
	int min = 0;
	char ans;

	while (1)
	{
		cout << "당신이 생각하는 숫자가 " << (max + min) / 2 << "보다 작은가요?\n";
		cin >> ans;
		if (ans == 'y')
		{
			max = (max + min) / 2;
		}
		else if (ans == 'n')
		{
			min = (max + min) / 2;
		}
		else if (ans == 'e')
		{
			cout << "당신이 생각하는 숫자는 " << (max + min) / 2 << "입니다.\n";
			break;
		}
	}
}
