#include "../../std_lib_facilities.h"

int square(int squareNbr)
{
	if (squareNbr == 0)
	{
		squareNbr = 1;
	}
	else
		squareNbr=squareNbr * 2;
	return squareNbr;
}


int main()
{
	int nbrGrain{};

	cout << "Enter the number of grain you want : ";
	cin >> nbrGrain;

	int nbrSquare{ 1 };
	int squareValue{0};
	int squareTotal{};

	while (nbrGrain > squareTotal)
	{
		
		squareValue=square(squareValue);
		squareTotal += squareValue;
		cout << "\nWhen the number of square is " << nbrSquare << " you have " << squareValue << " this much grain for this square and "
			<< squareTotal << " total grain of rice.\n";
		++nbrSquare;

	}
	cout << "You need " << nbrSquare << " to get " << nbrGrain << " grain of rices";

}