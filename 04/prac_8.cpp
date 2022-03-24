#include "../std_lib_facilities.h"

int main(void)
{
	int cur_squre = 1;
	double cur_rice = 1;
	double total_rice = 1;

	for (int i = cur_squre; i < 65; i++)
	{
		cout << i << "번째 사각형의 쌀 개수는 " << cur_rice << "지금까지의 총 쌀 개수는" << total_rice << '\n';
		if (total_rice >= 1000000000)
			cout << "1000000000 개의 쌀을 주려면" << i << "개의 사각형이 필요함\n";
		else if(total_rice >= 1000000)
			cout << "1000000 개의 쌀을 주려면" << i << "개의 사각형이 필요함\n";
		else if (total_rice >= 1000)
			cout << "1000 개의 쌀을 주려면" << i << "개의 사각형이 필요함\n";
		cur_rice *= 2;
		total_rice += cur_rice;
	}
}
