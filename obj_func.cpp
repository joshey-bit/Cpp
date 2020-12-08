#include <iostream>
using namespace std;

//create class

class Student
{
public:
	string name;
	string major;
	double gpa;
	Student(string aName, string aMajor, double aGpa){
		name = aName;
		major = aMajor;
		gpa = aGpa;
	}
	// a Method or Object function to checck for distinction
	bool is_distinction() {
		if (gpa >= 8)
		{
			return true;
		}
		return false;
	}
	
};



int main()
{
	
	//to create student instance

	Student std1("Rahul joshi", "Biology", 6.5);

	cout << std1.is_distinction();
	return 0;
}