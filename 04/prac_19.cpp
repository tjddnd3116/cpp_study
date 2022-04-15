#include "../std_lib_facilities.h"

int main(void)
{
	vector<string> names;
	vector<int> numbers;
	string name;
	int num;
	int flag = 0;

	while(1)
	{
		cin >> name >> num;
		if (!names.size() && !numbers.size())
		{
			names.push_back(name);
			numbers.push_back(num);
		}
		else {
			for (string x : names)
			{
				if (name == x)
				{
					cerr << "duplicated name!" << endl;;
					flag = 1;
					break;
				}
			}
		}
		if (flag)
			break;
		names.push_back(name);
		numbers.push_back(num);
	}
	int idx = 0;
	// while (idx < names.size())
	// {
	//     cout << names[idx] << " " << numbers[idx] << endl;
	//     idx++;
	// }
	cout << "find num ?" << endl;
	cin >> num;
	// while (idx < names.size())
	// {
	//     if (name == names[idx])
	//     {
	//         cout << numbers[idx];
	//         return (0);
	//     }
	//     idx++;
	// }
	flag = 0;
	while (idx < numbers.size())
	{
		if (num == numbers[idx])
		{
			cout << names[idx] << endl;
			flag = 1;
		}
		idx++;
	}
	if (!flag)
		cout << "can't find name";
	return (1);
}
