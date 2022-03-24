#include "../std_lib_facilities.h"

int main(void)
{
	vector<string> name = {"e", "d", "c", "b", "a"};
	vector<int> age;
	vector<int> tmp_age;
	vector<string> tmp_name = name;

	for (int i = 0; i < 5; i++)
	{
		int tmp_age;
		cout << name[i] << "의 나이는?\n";
		cin >> tmp_age;
		age.push_back(tmp_age);
	}
	for (int i = 0; i < 5; i++)
		cout << "(" << name[i] << "," << age[i] << ")\n";
	sort(name.begin(), name.end());
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (tmp_name[i] == name[j])
				tmp_age.push_back(age[j]);
		}
	}
	cout << "\n";
	for (int i = 0; i < 5; i++)
		cout << "(" << name[i] << "," << tmp_age[i] << ")\n";

}
