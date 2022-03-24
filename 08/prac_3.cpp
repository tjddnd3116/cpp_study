#include "../std_lib_facilities.h"

void print(const vector<int>& v)
{
	for(int x : v)
		cout << x << '\n';
}

void fibonacci(int x, int y, vector<int>& fibo, int n)
{
	fibo.push_back(x);
	fibo.push_back(y);
	for (int i = 0; i < n; i++)
	{
		int tmp;
		tmp = x + y;
		fibo.push_back(tmp);
		x = y;
		y = tmp;
	}
}

int main(void)
{
	vector<int> fibo;

	fibonacci(1, 2, fibo, 14);
	print(fibo);
}
