#include <iostream>
#include <cmath> // module for math
using namespace std;

//program to raise a number to power

int power(int baseNum, int powNum) 
{
	int result = 1;

	for (int i = 0; i < powNum; ++i)
	{
		result = result * baseNum;
	}

	return result;
}


int main()
{
	int baseNum,powNum;
	cout << "Enter base num: ";
	cin >> baseNum;
	cout << "Enter power: ";
	cin >> powNum;

	cout << endl;

	cout << "Solution: " <<power(baseNum,powNum);
	return 0;
}