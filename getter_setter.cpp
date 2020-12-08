#include <iostream>
using namespace std;

//creating class for Identification(ID)

class Identification
{
private:
	string gender;
public:
	//here we create a template identification with attributes
	string name;
	int age;
	string nationality;

	// specifing attribute/arguements
	Identification (string aName, string aGender, int aAge, string aNationality){
		name = aName;
		set_gender(aGender);
		age = aAge;
		nationality = aNationality;
	}

	//setter object function as gender is either male, female or other(o)
	void set_gender(string aGender){
		if (aGender == "male" || aGender == "female" || aGender == "other")
		{
			gender = aGender;
		}
		else {
			gender = "not defined";
		}
	}

	//getter object function to print the gender on screen
	void get_gender() {
		cout << gender;
	}
		
};


int main()
{
	
	//instantiating a identification class instance

	Identification person1("rahul joshi", "nun", 23, "Indian");


	//cout << person1.gender << endl; gender is private attribute cannot be accesed out of the class
	person1.set_gender("male");

	//get the gender
	person1.get_gender();



	return 0;
}
