#include <iostream>
#include <cmath> // module for math
using namespace std;

int main()
{
	//A program to create a madlibs game.
	//initialize strings
	string color,pluralNoun,name;
	cout << "Enter color: ";
	//cin.ignore();
	getline(cin, color);

	cout << "Enter pluralNoun: ";
	//cin.ignore();
	getline(cin, pluralNoun);

	cout << "Enter name: ";
	//cin.ignore();
	getline(cin, name);

	cout << "\tRoses are " << color << endl;
	cout << "\t" << pluralNoun << " is Blue, " << endl;
	cout << "\t" << "Fuck my life, Fuck you " << name << endl;

	//note: sometimes cin.ignore() is not required
	return 0;
}