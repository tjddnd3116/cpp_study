#include "../std_lib_facilities.h"

int my_square(int num)
{
	int result;

	result = 0;
	for(int i = 0; i < num; i++)
		result += num;
	return (result);
}

int main(void)
{
	int result;
	int num;

	cout << "num :";
	cin >> num;
	result = my_square(num);
	cout << result << '\n';
}
