#include "Chrono.h"

int main(void)
{
	Chrono::Date today(1978, Chrono::Month::jun, 25);
	Chrono::Date tomorrow;

	tomorrow = today;
	tomorrow.add_day(1);

	cout << today << '\n' << tomorrow;
}
