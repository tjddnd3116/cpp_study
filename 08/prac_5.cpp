#include "../std_lib_facilities.h"

vector<int> swap_a(const vector<int>& num)
{
	vector<int> tmp;

	for(int i = num.size() - 1; i >= 0; i--)
	{
		tmp.push_back(num[i]);
	}
	return (tmp);
}

void swap_b(vector<int>& num)
{
	for (int i = 0; i < num.size() / 2; i++)
	{
		int tmp = num[i];
		num[i] = num[num.size() - 1 - i];
		num[num.size() -1 - i] = tmp;
	}
}

void	print(const vector<int>& num)
{
	for(int x: num)
		cout << x << '\n';
}

int main(void)
{
	vector<int> num = {1, 2, 3, 4, 5};

	print(swap_a(num));
	swap_b(num);
	cout << '\n';
	print(num);
	cout << '\n';
	swap_b(num);
	print(num);
}
