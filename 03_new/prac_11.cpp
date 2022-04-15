#include "../std_lib_facilities.h"

int main(void)
{
	int penny;
	int nickel;
	int dime;
	int quarter;
	int half_dollar;
	int dollar;
	double total;

	cout << "몇 페니를 가지고 계세요?\n";
	cin >> penny;
	cout << "몇 니켈을 가지고 계세요?\n";
	cin >> nickel;
	cout << "몇 다임을 가지고 계세요?\n";
	cin >> dime;
	cout << "몇 쿼터를 가지고 계세요?\n";
	cin >> quarter;
	cout << "몇 하프 달러를 가지고 계세요?\n";
	cin >> half_dollar;
	cout << "몇 달러를 가지고 계세요?\n";
	cin >> dollar;
	if (penny == 1)
		cout << "You have 1 penny.\n";
	else if (penny > 1)
		cout << "You have " << penny << " pennies.\n";
	if (nickel == 1)
		cout << "You have 1 nickel.\n";
	else if (nickel > 1)
		cout << "You have " << nickel << " nickels.\n";
	if (dime == 1)
		cout << "You have 1 dime.\n";
	else if (dime > 1)
		cout << "You have " << dime << " dimes.\n";
	if (quarter == 1)
		cout << "You have 1 quarter.\n";
	else if (quarter > 1)
		cout << "You have " << quarter << " quarters.\n";
	if (half_dollar == 1)
		cout << "You have 1 half dollar.\n";
	else if (half_dollar > 1)
		cout << "You have " << half_dollar << " half dollars.\n";
	if (dollar == 1)
		cout << "You have 1 dollar.\n";
	else if (dollar > 1)
		cout << "You have " << dollar << " dollars.\n";
	total = penny + nickel * 5 + dime * 10 + quarter * 25 + half_dollar * 50 + dollar * 100;
	cout << "The value of all of your coins is $" << total / 100 << ".";


}
