#include <iostream>
#include <cmath> // module for math
using namespace std;

int main()
{
	//while loop program

	int num = 0;
	int numero = 0;

	while (num <= 5) 
	{
		cout << num << endl;
		num++; //incrementing num by 1
	}

	cout << endl;

	//using do while loop,

	do
	 {
	 	cout << numero << endl;
	 	numero++; //incrementing num by 1
	 } while (numero <= 5); 

	return 0;
}