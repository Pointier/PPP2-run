
#include "std_lib_facilities.h"

int main()
{
	int v1{};
	int v2{};
	int v3{};
	cout << "Enter 3 integers: ";
	cin >> v1 >> v2 >> v3;

	if (v1 <= v2 && v1 <= v3)
	{
		if (v2 <= v3)
			cout << v1 << ',' << v2 << ',' << v3;
		else 
			cout << v1 << ',' << v3 << ',' << v2;
	}

	else if (v2 <= v1 && v2 <= v3)
	{
		if (v1 <= v3)
			cout << v2 << ',' << v1 << ',' << v3;
		else
			cout << v2 << ',' << v3 << ',' << v1;
	}

	else if (v3 <= v2 && v3 <= v1)
	{
		if (v1 <= v2)
			cout << v3 << ',' << v1 << ',' << v2;
		else
			cout << v3 << ',' << v2 << ',' << v1;
	}
	return 0;
}
