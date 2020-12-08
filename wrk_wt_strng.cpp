#include <iostream>
using namespace std;


int main()
{
	
	string phrase = "Rahul joshi";

	// to return an element using index
	cout << phrase[2] << endl;
	cout << endl; // for empty newline

	// to find character in the phrase
	cout << phrase.find('u',0) << endl;

	// to find string in the phrase
	cout << phrase.find("jos",0) << endl;

	//to return the length of the string
	cout << phrase.length() << endl;

	// to slice the string/ return substring
	cout << phrase.substr(3, 6) << endl;
	//substr(startindex, number of characters/elements from tht index)

	return 0;
}