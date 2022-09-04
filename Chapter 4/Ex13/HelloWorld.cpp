#include "../../std_lib_facilities.h"


int main()
{
	vector <int> numbers{};


	for (int i{ 2 }; i <= 100; i++)
	{
		numbers.push_back(i);
	}

	
	int index{};

	for (int i : numbers)
	{
		index = i;
		int testa;
		for (int j : numbers)
		{
			index += i;
			testa = j;
			
			for (int k{0};k<numbers.size();++k)
			if (numbers[k] == index)
			{
				numbers[k] = 0;
		
			}
				
		}
	}
	for (int i : numbers)
	{
		if (i != 0)
			cout << i << '\n';
	}

}