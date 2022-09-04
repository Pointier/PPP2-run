// Ex4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "std_lib_facilities.h"

int main()
{
    int val1{};
    int val2{};
    
    cout << "Enter two integer: ";
    cin >> val1 >> val2;
    if (val1 == val2)
        cout << "The integers are equal\n";
    else if (val1 > val2)
        cout << val1 << " is larger than " << val2 <<'\n';
    else
        cout << val2 << " is larger than " << val1 <<'\n';

    cout << "The difference between " << val1 << " and " << val2 << " is " << val1 - val2<<'\n';
    cout << "The sum of " << val1 << " and " << val2 << " is " << val1 + val2 << '\n';
    cout << "The product of " << val1 << '*' << val2 << " is " << val1 * val2 << '\n';
    cout << "The ratio of " << val1 << '/' << val2 << " is " << val1 / val2 << '\n';
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
