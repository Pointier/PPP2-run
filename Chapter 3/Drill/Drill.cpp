
#include "std_lib_facilities.h"


int main()
{
	cout << "Enter the name of the person you want to write to (followed by 'enter'):\n";
	string first_name{};
	cin >> first_name;
	cout << "Dear " << first_name << "!\n";
	cout << "How are you ?\n" << "I'm fine personally.\n";

	string friend_name{};
	cout << "Remember about our common friend: ";
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " recently ?\n";

	char friend_sex{ 0 };
	cout << "What is the sex of our friend (enter m for male or f for female): ";
	cin >> friend_sex;

	if (friend_sex == 'm')
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	if (friend_sex == 'f')
		cout << "If you see " << friend_name << " please ask here to call me.\n";

	int age{};
	cout << "Enter your age: ";
	cin >> age;


	if (age <= 0 || age >= 110)
		simple_error("you're kidding!");
	cout << "I hear you just had a birthday and you are " << age << " years old\n";
	if (age < 12)
		cout << "Next year you will be " << age + 1 << '\n';
	if (age == 17)
		cout << "Next year you will be able to vote\n";
	if (age > 70)
		cout << "I hope you are enjoying retirement\n";

	cout << "Yours sincerely,\n" << " \n" << "Hugo";

}

