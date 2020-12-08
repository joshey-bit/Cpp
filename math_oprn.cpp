#include <iostream>
#include <cmath> // always use the cmath module for math operns
using namespace std;

int main()
{
	// get the power of number
	cout << pow(2, 3) << endl;

	// get the sqrt of whole number
	cout << sqrt(36) << endl;

	// get the sqrt of decimal number
	cout << sqrt(28.5) << endl;

	// to get the round of the number
	cout << round(4.8) << endl; //should retrun 5

	// to get the ceiling of decimal number
	cout << ceil(4.1) << endl; //should return 5

	// to get the floor of decimal number
	cout << floor(4.8) << endl; //should return 4


	// maximum of two numbers
	cout << fmax(3,10) << endl; //should return 10

	// minimum of two numbers
	cout << fmin(3,10) << endl; // should return 3



	return 0;
}