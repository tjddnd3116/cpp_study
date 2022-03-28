#include <iostream>


void	change_x(int &x)
{
	x++;
}

int main(void)
{
	int x = 9;

	change_x (x);
	std::cout << x;
}
