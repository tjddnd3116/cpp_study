#include "../std_lib_facilities.h"
#include <stdexcept>

int main(void)
{
	try{
		int pre1 = 1;
		int pre2 = 2;

		while (pre1 < pre2)
		{
			cout << pre1 << '\n';
			int x = pre1 + pre2;
			pre1 = pre2;
			pre2 = x;
		}
	}
	catch (runtime_error e)
	{
		cerr << e.what() << '\n';
	}
}
