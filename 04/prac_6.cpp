#include "../std_lib_facilities.h"

int main(void)
{
	vector<string> v = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	int num;

	while (cin >> num)
	{
		cout << v[num] << '\n';
	}
}
