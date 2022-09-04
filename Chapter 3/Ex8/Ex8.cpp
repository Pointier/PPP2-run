#include "std_lib_facilities.h"

int main()
{
	int val{};
	cout << "Enter an integer: ";
	cin >> val;
	if (val % 2 == 1)
		cout << "The " << val << " is an odd number";
	else
		cout << "The " << val << " is an even number";

	return 0;
}