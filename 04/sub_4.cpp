#include "../std_lib_facilities.h"

int main(void)
{
	vector<string> disliked = {"a", "b", "c"};
	string words;
	int flag;

	while (cin>>words)
	{
		flag = 0;
		for (string x:disliked)
		{
			if (words == x)
			{
				cout << "BLEEP\n";
				flag = 1;
			}
		}
		if (!flag)
			cout << words << '\n';
	}
}
