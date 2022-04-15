#include "../std_lib_facilities.h"
#include <climits>

int main(void)
{
	string max;
	string min;
	vector<string> word_list;
	string word;

	cin >> word;
	max = word;
	min = word;
	while (cin >> word)
	{
		if (word > max)
			max = word;
		if (word < min)
			min = word;
		word_list.push_back(word);
	}
	sort(word_list);
	// for (string x : word_list)
	//     cout << x << " " << endl;
	int idx = 0;
	int first_num;
	int cnt = 1;
	int tmp_cnt = 1;
	string mode;
	string tmp_mode;
	while (idx < word_list.size())
	{
		if (!idx || word_list[idx - 1] == word_list[idx])
		{
			tmp_mode = word_list[idx];
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
