#include <iostream>
using namespace std;

//creating class for Identification(ID)

class Identification
{
public:
	string name;
	char gender;
	int age;
	string nationality;
	//here we create a template identification with attributes	
};


int main()
{
	Identification person1;
	person1.name = "Rahul joshi";
	person1.gender = 'M';
	person1.age = 23;
	person1.nationality = "Indian";

	Identification person2;
	person2.name = "Rohit joshi";
	person2.gender = 'M';
	person2.age = 21;
	person2.nationality = "Indian";


	cout << "Name of frst person: " <<person1.name <<endl;
	cout << "Age of secnd person: " << person2.age << endl;

	return 0;
}