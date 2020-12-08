#include <iostream>
#include <cmath> // module for math
using namespace std;

int main()
{
	//for loop
	for (int i = 1; i <= 5; ++i)
	{
		cout << i << endl;
	}

	cout << endl;

	int nums[] = {1,2,3,4,5,6,7,8}; // array declaration

	//to loop through the array
	for (int i = 0; i < 8; ++i)
	{
		cout << nums[i] << endl;
	}

	return 0;
}