#include "../std_lib_facilities.h"

bool is_palindrome(const string& s)
{
	string new_s = "";

	for (int i = 0; i < s.size(); i++)
		new_s += s[s.length() - 1 - i];
	cout << new_s << '\t' << s;
	if (new_s == s)
		return (true);
	return (false);
}

int main(void)
{
	cout << is_palindrome("abba");
}
