#include "../std_lib_facilities.h"

class Name_pairs {
	public:
		void read_names();
		void print();
		void sort_list();
		vector<string> get_name() const {return name;}
		vector<double> get_age() const {return age;}
		Name_pairs(int num);
		int num;
	private:
		vector<string> name;
		vector<double> age;
};

Name_pairs::Name_pairs(int num)
{
	this->num = num;
}

void Name_pairs::read_names()
{
	string input_name;
	double input_age;

	for (int i = 0; i < Name_pairs::num; i++)
	{
		cout << "이름을 입력하세요 :";
		cin >> input_name;
		name.push_back(input_name);
		cout << "나이를 입력하세요 :";
		cin >> input_age;
		age.push_back(input_age);
	}
}

void Name_pairs::print()
{
	for (int i = 0; i < num; i++)
	{
		cout << name[i] << '\t' << age[i] << '\n';
	}
}
void Name_pairs::sort_list()
{
	vector<std::string> tmp_name;
	vector<double> tmp_age;

	tmp_name = name;
	sort(name);
	for (string x:name)
	{
		for (int i = 0; i < name.size(); i++)
		{
			if (tmp_name[i] == x)
				tmp_age.push_back(age[i]);
		}
	}
	age = tmp_age;
}

ostream& operator<< (ostream& os, const Name_pairs& d)
{
	vector<string> tmp_name;
	vector<double> tmp_age;

	tmp_name = d.get_name();
	tmp_age = d.get_age();

	for (int i = 0; i < d.num; i++)
	{
		os << tmp_name[i] << '\t' << tmp_age[i] << '\n';
	}
	return (os);
}

int main(void)
{
	Name_pairs tmp(5);

	tmp.read_names();
	cout << tmp;
	// tmp.print();
	tmp.sort_list();
	cout << '\n';
	cout << tmp;
	// tmp.print();

}
