#include <iostream>
using namespace std;

//create a class 

class Chef
{
public:
	void make_dosa(){
		cout << "chef makes dosa" << endl;
	}
	void make_idli(){
		cout << "chef makes idli" << endl;
	}
	void make_paneer(){
		cout << "chef makes paneer" << endl;
	}
	void make_specialdish(){
		cout << "chef makes macroni" << endl;
	}
	
};

//inheriting the functions of chef class to butler with addon functions

class Buttler : public Chef
{
public:
	void make_holige(){
		cout << "chef makes holige" << endl;
	}

	//to overwrite the special dish
	void make_specialdish(){
		cout << "chef makes biriyani" << endl;
	}
	
};


int main()
{
	// instantiating chef and buttler class
	Chef philippe;
	Buttler vinod;


	vinod.make_paneer(); //vinod instance inherits from chef

	//also vinod has his own recipe
	vinod.make_holige(); //prints chef makes holige


	//special dish of philippe and vinod

	philippe.make_specialdish();

	vinod.make_specialdish();


	return 0;
}