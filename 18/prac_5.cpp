#include "../std_lib_facilities.h"

// string cat_dot(const string& s1, const string& s2, const string& s3)
// {
//   string result;
//
//   result = s1 + s3 + s2;
//   return (result);
// }

int strlen(char *s1)
{
	int cnt;

	cnt = 0;
	while (*s1)
	{
		cnt++;
		s1++;
	}
	return (cnt);
}

char *cat_dot(char *s1, char *s2, char *s3)
{
	int len;
	char *result;
	char *result_ptr;

	len = strlen(s1) + strlen(s2) + strlen(s3);
	result = (char *)malloc(sizeof(char) * len + 1);
	result_ptr = result;
	while (*s1)
	{
		*result = *s1;
		result++;
		s1++;
	}
	while (*s3)
	{
		*result = *s3;
		result++;
		s3++;
	}
	while (*s2)
	{
		*result = *s2;
		result++;
		s2++;
	}
	result = result_ptr;
	return (result);
}
int main(void)
{
	char str1[] = "Niels";
	char str2[] = "Bohr";
	char str3[] = ",";
	std::cout << cat_dot(str1, str2, str3);
	return (0);
}
