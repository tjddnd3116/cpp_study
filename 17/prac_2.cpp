// #include "../std_lib_facilities.h"
#include <iostream>

char *strdup(const char* s)
{
	char *let = new char[6];

	for (int i = 0; i < 6; i++)
	{
		let[i] = s[i];
	}
	// while (*s)
	// {
	//   *let = *s;
	//   let++;
	//   s++;
	// }
	return (let);
}

void to_lower(char* s)
{
	while (*s)
	{
		if (*s >= 65 && *s <= 90)
			*s = *s + 32;
		s++;
	}
}

int main(void)
{
	char s[6] = {'H', 'e', 'l', 'l', 'o'};
	char *new_s = strdup(s);
	// to_lower(s);
	std::cout << new_s;
}
