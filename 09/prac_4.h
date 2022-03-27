#include "../std_lib_facilities.h"

bool check_isbn(string isbn);

class Book {
	public:
		string get_isbn() const { return isbn; }
		string get_name() const { return name; }
		string get_auther() const { return auther; }
		string get_copy_info() const { return copy_info; }
		bool	get_is_rent() const { return is_rent; }
		void get_book();
		void return_book();
		Book(string isbn, string name, string auther, string copy_info);


	private:
		string isbn;
		string name;
		string auther;
		string copy_info;
		bool is_rent;
};

Book::Book(string isbn, string name, string auther, string copy_info)
{
	if (!check_isbn(isbn))
		return;
	this->name = name;
	this->auther = auther;
	this->copy_info = copy_info;
	this->is_rent = false;
}

void Book::get_book()
{
	if (is_rent == true)
		cout << "you cant't get book";
	else
		is_rent = true;
}

void Book::return_book()
{
	is_rent = false;
}

bool check_isbn(string isbn)
{
	if (isbn == "")
		return (false);
	for (int i = 0; i < isbn.length(); i++)
	{

	}
}
