#include <iostream>
using namespace std;

//creating class for Identification(ID)

class Identification
{
public:
	//here we create a template identification with attributes
	string name;
	char gender;
	int age;
	string nationality;

	// basically constructor is like __init__ method in python
	Identification (){
		name = "no name";
		gender = 'N';
		age = 0;
		nationality = "not defined";
	} //this is default construction of Identification class

	// specifing attribute/arguements
	Identification (string aName, char aGender, int aAge, string aNationality){
		name = aName;
		gender = aGender;
		age = aAge;
		nationality = aNationality;
	}
		
};


int main()
{
	
	//instantiating a identification class instance

	Identification person1("rahul joshi", 'M', 23, "Indian");

	Identification person2; //instantiating person2


	cout << person1.name << endl;

	cout << person2.age; //should return 0

	return 0;
}