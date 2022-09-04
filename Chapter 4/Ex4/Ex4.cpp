// Ex4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "../../std_lib_facilities.h"

int main()
{
    int guess{};
    cout << "Enter an integral number between 1 and 100 : ";
    cin >> guess;

    int max{ 100 };
    int min{ 1 };
    char response{};

    bool higher{ false };

    int mean{ 0 };

    for (int i{ 1 }; i <= 7;i++)
    {
        mean = (max + min) / 2;
        if (higher)
            cout << "Is your number higher than " << mean << " (type 'y' or 'n')";
        else
            cout << "Is your number lower than " << mean << " (type 'y' or 'n')";

        cin >> response;
        if (higher)
        {
            if (response == 'y')
            {
                min = mean;
                higher = true;
            }

            else if (response == 'n')
            {
                max = mean ;
                higher = false;
            }

        }
        else
        {
            if (response == 'y')
            {
                max = mean ;
                higher = false;
            }
            else if (response == 'n')
            {
                min = mean;
                higher = true;
            }

        }
    }
    if (higher)

    {
        cout << "Your initial number : " << guess << '\n'
            << "Our guess : " <<  max << '\n'
            << "Min = " << min << " Max = " << max;
    }
    else
    {
        cout << "Your initial number : " << guess << '\n'
            << "Our guess : " << min  << '\n'
            << "Min = " << min << " Max = " << max;
    }
    
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
