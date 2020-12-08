#include <iostream>
#include <cmath> // module for math
using namespace std;

void say_hi_user() 
{
	cout << "hello User" << endl;
}

//create a function with parameters
void hello(string name, int age)
{
	cout << "hello " << name << ", you are " << age << endl;
}

//we can declare function head at first like variable and function after call 
void nigga(string name, int age);

int main()
{
	say_hi_user();
	cout << endl;

	//call function for different names and ages
	hello("rahul",23);
	hello("rohit",21);
	hello("rakshita",17);
	cout << endl;

	//call nigga function
	nigga("bull dog",22);
	cout << endl;


	//create an user input for nigga function
	string name;
	int age;
	cout << "enter ur name: ";
	getline(cin, name);

	cout << "enter ur age: ";
	cin >> age;

	//call nigga function place variables as arguements
	nigga(name, age);
	return 0;
}


//declare the nigga function
void nigga(string name, int age)
{
	cout << "hello " << name << ", you are " << age << endl;
}