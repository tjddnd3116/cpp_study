#include "../std_lib_facilities.h"
#include <algorithm>
#include <iterator>

class my_vector {
		int sz;
	public:
		double *elem;
		my_vector(int s)
		{
			sz = s;
			elem = new double[sz];
			for (int i = 0; i < sz; i++) elem[i] = 0.0;
		}
		my_vector(initializer_list<double> lst)
		{
			sz = lst.size();
			elem = new double[sz];
			copy(lst.begin(), jjklst.end(), elem);
		}
};

int main(void)
{
	my_vector v1 = {1, 2, 3};
	cout << v1.elem[0] << '\t' << v1.elem[1] << '\t' << v1.elem[2] << '\n';
	my_vector v2(3);
	cout << v2.elem[0] << '\t' << v2.elem[1] << '\t' << v2.elem[2] << '\n';
	my_vector v3 {4,5,6};
	cout << v3.elem[0] << '\t' << v3.elem[1] << '\t' << v3.elem[2];
}
