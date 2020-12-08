#include <iostream>
using namespace std;


int main()
{
	string Character_name = "Johny";
	int Character_age = 45;
	// or to define variable in another way
	// int Character_age;
	// Character_age = 45;

	cout << "My name is " << Character_name << endl;
	cout << "I am " << Character_age << " yrs old" << endl;

	//we can change the data in half way with variable
	Character_name = "Rahul";
	Character_age = 23;
	cout << Character_name << " is my name; " << endl;
	cout << "am " << Character_age << endl;
	
	return 0;
}