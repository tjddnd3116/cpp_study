#include "../std_lib_facilities.h"

vector<string> swap_a(const vector<string>& alpha)
{
	vector<string> tmp;

	for(int i = alpha.size() - 1; i >= 0; i--)
	{
		tmp.push_back(alpha[i]);
	}
	return (tmp);
}

void swap_b(vector<string>& alpha)
{
	for (int i = 0; i < alpha.size() / 2; i++)
	{
		string tmp = alpha[i];
		alpha[i] = alpha[alpha.size() - 1 - i];
		alpha[alpha.size() -1 - i] = tmp;
	}
}

void	print(const vector<string>& alpha)
{
	for(string x: alpha)
		cout << x << '\n';
}

int main(void)
{
	vector<string> alpha = {"a", "b", "c", "d", "e"};

	print(swap_a(alpha));
	swap_b(alpha);
	cout << '\n';
	print(alpha);
	cout << '\n';
	swap_b(alpha);
	print(alpha);
}
