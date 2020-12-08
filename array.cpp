#include <iostream>
#include <cmath> // module for math
using namespace std;

int main()
{
	//array declaration ,the size is fixed after declation
 	int fav_nums[] = {1,2,3,4,5,6,7};

 	// array declaration where the size is fixed before decclation
 	int numeros[20] = {1,2,3,4,5,6,7,8};

 	//to print the array we should use for loop

 	//to prind individual items of aaray
 	cout << fav_nums[4] <<endl;


 	//for fav nums array the size allowed is 7 u cannot add elemt to it
 	//fav_nums[7] = 8;
 	//cout << fav_nums[7] <<endl; // itcauses problem in the program



 	//for numeros us can add elemets not exceding size 20
 	numeros[11] = 12;
 	cout << numeros[11] << endl;


 	


	return 0;
}