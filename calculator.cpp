#include <iostream>
#include <cmath> // module for math
using namespace std;

int main()
{
	//program to depit working of simple calculator
	//addin two numbers
	double num1, num2; //use double instead of int so that decimals can also be used

	cout << "enter frst number: ";
	cin >> num1;

	cout << "enter secnd number: ";
	cin >> num2;

	//sum of two nums
	cout << "sum of two numbers: " << num1 + num2 << endl;

	return 0;
}