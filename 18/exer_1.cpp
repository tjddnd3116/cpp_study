#include "../std_lib_facilities.h"

int ga[10] = {1, 2 ,4 ,8, 16, 32, 64, 128, 256, 512};

void	f(int *ga, int len)
{
	int la[10];
	int *p = new int[10];
	int *pp;

	pp = p;

	for (int i = 0; i < len; i++)
		la[i] = ga[i];
	for (int i = 0 ; i < len; i++)
		cout << la[i] << '\n';
	for (int i = 0; i < len; i++)
	{
		*p = *ga;
		p++;
		ga++;
	}
	p = pp;
	for (int i = 0; i < len; i++)
	{
		cout << *p << '\n';
		p++;
	}
	p = pp;
	delete[] p;
}

int main(void)
{
	f(ga, 10);
	int aa[10];
	int x = 1;

	for (int i = 0; i < 10; i++)
	{
		x *= (i + 1);
		aa[i] = x;
	}
	f(aa, 10);
}
