#include "../../std_lib_facilities.h"

double solquadra(double a, double b, double c)
{
	return (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
}

int main()
{
	cout << "Enter 3 numbers for a quadratic equation :";

	double a{};
	double b{};
	double c{};

	cin >> a >> b >> c;
	double sol{};
	sol = solquadra(a, b, c);
	cout << " \n" << sol;
	return 0;
}