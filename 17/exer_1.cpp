#include "../std_lib_facilities.h"
#include <ostream>

ostream& print_vector(ostream&os, vector<int> &a)
{
	for (int x: a)
		os << x << '\n';
	return (os);
}

ostream& print_array(ostream& os, int *a, int n)
{
	for (int i =0; i < n; i++)
		os << a[i] << '\n';
	return (os);
}

ostream& print_array10(ostream& os, int *a)
{
	for (int i =0 ; i < 10; i++)
	{
		os << a[i] << '\n';
	}
	return (os);
}

void init_array(int *a, int n, int start_num)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = start_num;
		start_num *= 2;
	}
}

void init_vector(vector<int> &a, int n, int start_num)
{
	for (int i = 0; i < n; i++)
		a.push_back(start_num + i);
}

int main(void)
{
	int *num = new int[11];
	int *num2 = new int[20];
	vector<int> num3;

	int num4 = 7;
	int *p1 = &num4;
	int *num5 = new int[7];
	init_array(num5, 7, 1);
	int *p2 = num5;

	int *p3 = p2;
	p2 = p1;
	p2 = p3;

	int *num6 = new int[10];
	init_array(num6, 10, 1);
	p1 = num6;
	int *num7 = new int[10];
	p2 = num7;

	p2 = p1;

	cout << p1 << '\t' << *p1 << '\n';
	cout << p2 << '\t' << *p2 << '\n';
	init_array(num, 11, 100);
	init_array(num2,20, 100);
	init_vector(num3, 20, 200);
	// print_array(cout, num, 10);
	// print_array(cout, num2, 20);
	// print_vector(cout, num3);
	delete[] num;
	delete [] num2;
	delete [] num5;
}
