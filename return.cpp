#include <iostream>
using namespace std;
// program to cube a number

double cube(double num) 
{
	double result = num * num * num;
	return result;
}


int main(int argc, char const *argv[])
{
	// ask user for number tobe cubed
	double num;
	cout << "Enter number to be cubed: ";
	cin >> num;

	//return the cube function on screen
	cout << "the cube of " << num << " is : " << cube(num);


	return 0;
}