#include <iostream>
using namespace std;


int main()
{
	
	//add two whole nums
	cout << 2 + 3 << endl;
	//subtract two whole nums
	cout << 2 - 3 << endl;
	//multiply two whole nums
	cout << 2 * 3 << endl;
	//divide two whole num gives integer floor value
	cout << 2 / 3 << endl; //returns 0
	//to get the remainder
	cout << 10 % 3 << endl;

	//to add numbers
	cout << 2 + 3.5 << endl;

	//now to increment the number by one
	int number = 23;
	number++;
	cout << number << endl;

	//increment number by n digits
	number += 2;
	cout << number << endl; //should return 26


	//now to decrement the number by one
	number = 7;
	number--;
	cout << number << endl;

	//decrement number by n digits
	number = 6;
	number -= 2;
	cout << number << endl; //should return 4

	//for actual division of two numbers
	cout << 10 / 3.0; //any one of the operands must be float,returns 3.3333

	return 0;
}