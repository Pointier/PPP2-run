#include "../../std_lib_facilities.h"

bool calcprime(int number)
{
	for (int j{ 2 }; number > j; ++j)
	{
		if (number % j == 0)
			return false;
	}
	return true;
}

int main()
{
	vector <int> primes{};
	bool prime{ false };
	for (int i{ 2 }; i <= 100; ++i)
	{
		prime = calcprime(i);
		if (prime) primes.push_back(i);
	}

	for (int i : primes)
	{
		cout << i << '\n';
	}
}