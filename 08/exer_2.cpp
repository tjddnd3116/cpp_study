#include "../std_lib_facilities.h"

void swap_v(int,int);
void swap_r(int&, int&);
void swap_cr(const int &, const int&);

int main(void)
{

}

void swap_v(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap_r(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap_cr(const int& a, const int& b)
{
	int temp;
	temp = a, a=b;
	b = temp;
}
