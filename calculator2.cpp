#include <iostream>
#include <cmath> // module for math
using namespace std;

int main()
{
	//calculator part 2
	//program to depit working of simple calculator
	//addin two numbers
	double num1, num2; //use double instead of int so that decimals can also be used
	char op; //op ~ operator

	cout << "enter frst number: ";
	cin >> num1;

	cout << "enter the operator: ";
	cin >> op;

	cout << "enter secnd number: ";
	cin >> num2;

	cout << endl;

	double result = 0;
	//perform operation accordingly
	if (op == '+')
	{
		result = num1 + num2;
	}
	else if (op == '-')
	{
		result = num1 - num2;
	}
	else if (op == '*')
	{
		result = num1 * num2;
	}
	else if (op == '/')
	{
		result = num1 / num2;
	}
	else 
	{
		cout << "nigga wtf!!!!" << endl;
	}

	cout << result << endl;

	return 0;
}