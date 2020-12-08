#include <iostream>
#include <cmath> // module for math
using namespace std;

int main()
{
	//pointers

	int age = 23;
	double gpa = 3.7;
	string grade = "D";

	cout << "Age pointer: " << &age << endl;
	cout << "Gpa pointer: " << &gpa << endl;
	cout << "Grade pointer: " << &grade << endl;

	//to dereference the pointer/ to call the actual value of variable using pointer
	cout << *&age  << endl;

	cout<<endl;

	//pointer varible
	string name = "Rahul joshi";
	string *pName = &name; //pointer variable
	int weight = 78;
	int *pweight = &weight; //pointer variable
	double height = 5.10;
	double *pheight = &height; //ponter variable

	cout << "name ponter: "<< pName << endl;

	//to dereference the pointer/ to call the actual value of variable using pointer
	cout << *pName;

	return 0;
}