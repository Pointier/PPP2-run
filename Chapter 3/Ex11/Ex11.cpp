#include "std_lib_facilities.h"

int main()
{
	int pennies{};
	cout << "Enter a number of pennies: ";
	cin >> pennies;

	int nickels{};
	cout << "Enter a number of nickels: ";
	cin >> nickels;

	int dimes{};
	cout << "Enter a number of dimes: ";
	cin >> dimes;

	int quarters{};
	cout << "Enter a number of quarters: ";
	cin >> quarters;

	int dollars{};
	cout << "Enter a number of dollars: ";
	cin >> dollars;

	cout << "You have " << pennies << " pennies\n"
		<< "You have " << nickels << " nickels\n"
		<< "You have " << dimes << " dimes\n"
		<< "You have " << quarters << " quarters\n"
		<< "You have " << dollars << " dollars\n";
	double val{};
	val = pennies * 0.01 + nickels * 0.05 + dimes * 0.10 + quarters * 0.25 + dollars;
	cout << "You have $" << val;

	return 0;
}