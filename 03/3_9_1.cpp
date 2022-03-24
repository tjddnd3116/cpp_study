#include <iostream>

int main(void)
{
	char c = 'x';
	int i1 = c;
	int i2 = 'x';

	char c2 = i1;
	std::cout << c << i1 << c2 << '\n';
}
