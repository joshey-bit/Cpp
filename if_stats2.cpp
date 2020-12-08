#include <iostream>
#include <cmath> // module for math
using namespace std;

//to find the maximum of two numbers
int get_max_2(int num1, int num2)
{
	//using comparation operators
	int result;
	if (num1 >= num2)
	{
		result = num1;
	}
	else
	{
		result = num2;
	}
	return result;
} 

//to find the maximum of tree numbers
int get_max_3(int num1, int num2, int num3) 
{
	//using comparation operators
	int result;
	if (num1 >= num2 && num1 >= num3)
	{
		result = num1;
	}
	else if (num2 >= num1 && num2 >= num3)
	{
		result = num2;
	}
	else 
	{
		result = num3;
	}
	return result;
}


int main()
{
	//some more if statements example
	//ask user for numebrs
	int num1,num2,num3;
	cout << "enter frst number: ";
	cin >> num1;

	cout << "enter second number: ";
	cin >> num2;

	cout << "enter third number: ";
	cin >> num3;

	cout << endl;

	//maximum of two numbers
	cout << "maximum of first two numbers is: " << get_max_2(num1, num2) <<endl;

	cout << endl;

	//maximum of three numbers
	cout << "maximum of three numbers is: " << get_max_3(num1, num2, num3) <<endl;

	return 0;
}