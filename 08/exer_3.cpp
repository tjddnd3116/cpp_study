#include "../std_lib_facilities.h"

namespace Y
{
	int var;
	void print()
	{
		cout << var;
	}
}

namespace X
{
	int var;
	void print()
	{
		cout << var;

	}
}

namespace Z
{
	int var;
	void print()
	{
		cout << var;

	}
}
int main(void)
{
	X::var = 7;
	X::print();
	using namespace Y;
	var = 9;
	print();
	{
		using Z::var;
		using Z::print;
		var = 11;
		print();
	}
	print();
	X::print();
}
