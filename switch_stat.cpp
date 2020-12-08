#include <iostream>
#include <cmath> // module for math
using namespace std;

//program to return dayname accordin to number

string getDayname(int day_num)
{
	string dayname;
	//use switch statement for ease
	switch (day_num)
	{
		case 0:
			dayname = "Sunday";
			break;
		case 1:
			dayname = "Monday";
			break;
		case 2:
			dayname = "Tuesday";
			break;
		case 3:
			dayname = "Wednesday";
			break;
		case 4:
			dayname = "Thursday";
			break;
		case 5:
			dayname = "Friday";
			break;
		case 6:
			dayname = "Saturday";
			break;
		default: // default value,value other than 0-6
			dayname = "Invalid Day number";
	}
	return dayname;
}


int main()
{
	int day_num;
	cout<< "enter the Day number: ";
	cin >> day_num;
	cout << endl;
	cout << getDayname(day_num);
	cout << endl;
	return 0;
}