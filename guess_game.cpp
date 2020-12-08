#include <iostream>
#include <cmath> // module for math
using namespace std;

int main()
{
	//building a number guessing game using while loop
	// the game has 3 chances to guess number correctly

	int secretnum = 9;
	int guess;
	int guess_count = 0; // the variable to be incremented must be initialized
	int chance_limit = 3;
	bool outofguesses = false; // settin the default boolean

	while (guess != secretnum && !outofguesses) 
	{
		if (guess_count < chance_limit)
		{
			cout << "Enter the number: ";
			cin >> guess;

			guess_count ++; //incremting by 1
		}
		else 
		{
			outofguesses = true;
		}
	}

	if (outofguesses)
	{
		cout << "You loose" <<endl;
	}
	else
	{
		cout << "You Win!!" <<endl;
	}


	return 0;
}