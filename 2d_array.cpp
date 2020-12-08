#include <iostream>
#include <cmath> // module for math
using namespace std;

int main()
{
	//2-d array
	int numberGrid[3][3] = {
						{1,2,3},
						{4,5,6},
						{7,8,9},
						};

	//nested for loop

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout << numberGrid[i][j];
		}
		cout << endl;
	}


	return 0;
}