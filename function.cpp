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
void contacts(string name, int age);

int main()
{
	say_hi_user();
	cout << endl;

	//call function for different names and ages
	hello("rahul",23);
	hello("rohit",21);
	cout << endl;

	//call contacts function
	contacts("bull dog",22);
	cout << endl;


	//create an user input for contacts function
	string name;
	int age;
	cout << "enter ur name: ";
	getline(cin, name);

	cout << "enter ur age: ";
	cin >> age;

	//call contacts function place variables as arguements
	contacts(name, age);
	return 0;
}


//declare the contacts function
void contacts(string name, int age)
{
	cout << "hello " << name << ", you are " << age << endl;
}
