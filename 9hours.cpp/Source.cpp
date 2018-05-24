#include <iostream>
#include <string>
#include "new_man.h"
using namespace std;

class AClass
{
public:
	void coolSaying() {
		cout << "pprprprpprprprp" << endl;
	}
};

class BClass
{
	
	private:
		// Fields
		string name;
	public:
		// Properties
		string getName() 
		{
			return name;
		}
		// Properties
		void setName(string set_Name) 
		{
			name = set_Name;
		}
		// Constructors
		BClass(string bclass_name) 
		{
			setName(bclass_name);
		}	
};


void PrntFav(string name, string num) 
{
	cout << name << "'s favorite number is " << num;
}

int main() 
{
	int x;
	AClass aclass;
	BClass bclass("Sweetie");
	string name, age;
	/*
	cout << "What's your name?" << endl;
	cin  >> name;
	cout << "How old are you?"<< endl;
	cin  >> age;   
	PrntFav(name, age);
	cout << endl;
	*/
	aclass.coolSaying();
	//cout << bclass.getName() << endl;
	cout << bclass.getName();
	bclass.setName("my_love");
	cout << "Press 1 and then Hit 'Enter' to close the program" << endl;
	cout << bclass.getName() << endl;

	x = 10;
	while (x > 0)
	{
		cout << endl;
	}
	new_man nm;
	cout << "END" << endl;
	cin >> x;
	cout << endl;

	
	return 0;
}

