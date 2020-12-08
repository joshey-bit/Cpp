#include <iostream>
#include <cmath> // module for math
using namespace std;

int main()
{
	//ask user for age and print it on th screen
	int age;
	cout << "Enter your age: ";
	cin >> age; //donot use endl for the cin

	//print the age
	cout << "u are " << age << " yrs old." <<endl;
	cout << endl;
	
	//ask user cgpa and print it on screen
	double CGPA;
	cout << "Enter ur CGPA: ";
	cin >> CGPA;

	//print cgpa on screen
	cout << "u scored " << CGPA << " in the exam." <<endl;
	cout << endl; 

	//ask user for his grade and print
	char grade;
	cout << "Enter your grade: ";
	cin >> grade;

	//print the grade on screen
	cout << "your grade is: " << grade << endl;
	cout << endl; 

	// to input string thers whole different level of shit
	string user_name;
	cout << "Enter your name: ";
	cin.ignore(); // always use ignore when using string input below
	getline (cin, user_name);

	//print name on the screen
	cout << "Hello " << user_name << "!"<< endl;
	cout << endl;

	return 0;
}