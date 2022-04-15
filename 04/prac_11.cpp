#include "../std_lib_facilities.h"

int main(void)
{
	vector<int> primes;
	primes.push_back(2);

	for (int i = 3; i < 100; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
			if (j == sqrt(i) - 1)
				primes.push_back(i);
		}
	}

	for (int x : primes)
		cout << x << endl;
}
