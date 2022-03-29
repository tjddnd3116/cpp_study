#include "../std_lib_facilities.h"

int main(void)
{
	vector<int> num;

	num.push_back(10);
	cout << num.capacity() << '\t' << num.size() << '\n';
	num.push_back(10);
	cout << num.capacity() << '\t' << num.size()<< '\n';;
	num.push_back(10);
	cout << num.capacity() << '\t' << num.size()<< '\n';;
	num.push_back(10);
	cout << num.capacity() << '\t' << num.size()<< '\n';;
	num.push_back(10);
	cout << num.capacity() << '\t' << num.size()<< '\n';;


}
