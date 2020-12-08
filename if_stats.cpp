#include <iostream>
#include <cmath> // module for math
using namespace std;

int main()
{
	//if statement basics
	bool isMale;
	bool isTall;
	cout << "are you male? (enter 1 for yes, 0 for no) : ";
	cin >> isMale;

	cout << "are you tall? (enter 1 for yes, 0 for no) : ";
	cin >> isTall;

	cout << endl; 
	
	//if condition:
	if (isMale && isTall)
	{
		cout << "You are a tall male" << endl;
	}
	else if (isMale && !isTall)
	{
		cout << "You are short male" <<endl;
	}
	else if (!isMale && isTall)
	{
		cout << "You are tall but not male" <<endl;
	}
	else
	{
		cout << "You are neither tall nor male" <<endl;
	}

	
	/*or statement
	if (isMale || isTall) //or statement
	{
		cout << "You are either tall or male" << endl;
	}*/


	return 0;
}