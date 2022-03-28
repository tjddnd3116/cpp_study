#include "../std_lib_facilities.h"

vector<int> gv = {1,2,4,8,16,32,64,128,256,512};

void f(vector<int> a)
{
	vector<int> lv;
	lv = a;
	for (int x:a)
		cout << x << '\n';
	vector<int> lv2 = a;
}
int main(void)
{
	f(gv);
	vector<int> vv;

	int x = 1;
	for (int i = 0; i < 10; i++)
	{
		x *= (i + 1);
		vv.push_back(x);
	}
	f(vv);
}
