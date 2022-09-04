#include "std_lib_facilities.h"

int main()
{
	
	double large{};
	double small{100};
	vector <double> v{};
	double sum{};
	double input{};
	string unit{};

	while (cin)
	{
		
		cout << "Enter an integers, followed by an unit (cm, m, in, ft): ";
		cin >> input >>unit;
		

		double convertedValue{};

		if (unit == "cm")
			convertedValue = input / 100;
		else if (unit == "in")
			convertedValue = input * 2.54 / 100;
		else if (unit == "ft")
			convertedValue = input * 2.54 * 12 / 100;
		else if (unit == "m")
			convertedValue = input;
		else
		{
			cout << "Wrong unit\n";
			unit = "";
		}
			

		if (unit != "")
		{
			cout << "work`\n";
			v.push_back(convertedValue);
			sum += convertedValue;
			if (convertedValue > large)
			{
				large = convertedValue;
				cout << convertedValue << " the largest so far \n";
			}
			if (convertedValue < small)
			{
				small = convertedValue;
				cout << convertedValue << " the smallest so far \n";
			}
			else
				cout << convertedValue <<"m\n";
		}		
	}
	sort(v);
	cout << "Smallest distance is: " << small << "m. Largest distance is:" << large
		<< "m. Their was " << v.size() << " distance entered. "
		<< "The sum of all the distance is " << sum << "m. \n";

	for (double i : v)
	{
		cout << i << '\n';
	}

	return 0;
}
