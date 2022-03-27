#include "../std_lib_facilities.h"
#include <limits>

struct info {
	vector<int> word_cnt;
	int max_len;
	int min_len;
	string first_word;
	string last_word;
};

void search_word(const vector<string>& words, string target_word, struct info &info)
{
	for (string x:words)
	{
		int i = 1;
		if (x == target_word)
		{
			info.word_cnt.push_back(i);
			i++;
		}
	}
}

void min_max_word(const vector<string>& words, struct info &info)
{
	int min = numeric_limits<int>::max();
	int max = -1;
	for (string x:words)
	{
		cout << x.length() << '\n';
		if (x.length() > max)
		{
			cout << x.length();
			max = x.length();
		}
		if (x.length() < min)
			min = x.length();
	}
	info.max_len = max;
	info.min_len = min;
}

void search_first_last_word(vector<string>& words, struct info& info)
{
	sort(words);
	info.first_word = words[0];
	info.last_word = words[words.size() - 1];
}

void print_info(const struct info& info)
{
	for (int x : info.word_cnt)
		cout << x << '\n';
	cout << "first word :"<< info.first_word << '\n'
		<< "last word :"<< info.last_word << '\n'
		<< "max len :"<< info.max_len << '\n'
		<< "min_len :"<< info.min_len << '\n';
}

int main(void)
{
	struct info info;
	vector<string> words = {"zddddddddddddd", "b", "bbccf", "efddd", "edfeae"};
	string target_word = "bbccf";

	search_word(words, target_word, info);
	min_max_word(words, info);
	search_first_last_word(words, info);
	print_info(info);
}
