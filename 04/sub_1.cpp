#include "../std_lib_facilities.h"

int main(void)
{
	int i = 0;

	while (i < 26)
	{
		cout << char('a' + i) << '\t' << 97 + i << '\n';
		i++;
	}
}
