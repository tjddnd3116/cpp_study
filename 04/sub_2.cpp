#include "../std_lib_facilities.h"

int main(void)
{
	for (int i = 0; i < 26; i++)
		cout << char ('A' + i) << '\t' << 65 + i << '\t' << char ('a' + i) << '\t' << 97 + i << '\n';
}
