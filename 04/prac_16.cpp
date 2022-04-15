#include "../std_lib_facilities.h"
#include <climits>

int main(void)
{
	unsigned int max = 0;;
	unsigned int min = INT_MAX;
	vector<int> num_list;
	unsigned int num;

	while (cin >> num)
	{
		if (num > max)
			max = num;
		if (num < min)
			min = num;
		num_list.push_back(num);
	}
	sort(num_list);
	for (int x : num_list)
		cout << x << " " << endl;
	int idx = 0;
	int first_num;
	int cnt = 1;
	int tmp_cnt = 1;
	unsigned int mode = 0;
	unsigned int tmp_mode = 0;
	while (idx < num_list.size())
	{
		if (!idx || num_list[idx - 1] == num_list[idx])
		{
			tmp_mode = num_list[idx];
			tmp_cnt++;
		}
		else
		{
			if (tmp_cnt > cnt)
			{
				cnt = tmp_cnt;
				mode = tmp_mode;
			}
			tmp_cnt = 1;
		}
		idx++;
	}
	if (tmp_cnt > cnt)
	{
	cnt = tmp_cnt;
	mode = tmp_mode;
	}
	cout << "max : " << max << " min : " << min << " mode : " << mode << endl;
}
