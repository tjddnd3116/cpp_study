#include "../std_lib_facilities.h"

int main(void)
{
	int n;
	double num;
	vector<double> nums;
	double total = 0;;

	cout << "합계를 구할 숫자의 개수를 입력하세요\n";
	cin >> n;
	cout << "정수를 입력하세요('|'로 입력종료)\n";
	while (cin >> num)
		nums.push_back(num);
	// if (nums.size() < n)
	//   error("vector의 요소 개수보다 많은 개수의 합을 요구하였습니다.\n");
	cout << "앞 숫자 " << n << "개 ( ";
	for (int i = 0; i < n; i++)
	{
		cout << nums[i] << " ";
		total += narrow_cast<double>(nums[i]);
	}
	cout << ")의 합은 " << total << "입니다.\n";
}
