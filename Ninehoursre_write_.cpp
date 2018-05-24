#include <iostream> // includes functions for input output streams
#include <string> // includes functions for using strings
#include <cmath>
using namespace std;

class AClass 
{
	public:
		void coolSaying()
		{
			cout << "pprprrprrpr" << endl;
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
			cout << name << endl;
			return name;
		}

		void setName(string given_name)
		{
			name = given_name;
		}
	// Constructors
	BClass (string bclass_name)
	{
		setName	(bclass_name);
	}

public:
	void Prntfav(string name, string num)
	{
		cout << name << " 's favorite number is " << num << endl;
	}
};

int main()
{
	int x = 5;
	while(x > 0)
	{
		cout << endl;
		x--;
	}
	AClass clz;
	BClass blz("blz");
	clz.coolSaying();
	blz.Prntfav("Tolz", "15");
	blz.getName();


	while(x > -5)
	{
		cout << endl;
		x--;
	}
	int count = 45;
	
	for (int i = 0; i < count; ++i)
	{
		/* code */
		cout << "cout" << i << endl;
	}

	/*
	float a;
	float p = 10000;
	float r = 0.03;

	for (int day = 1; day <= 30; day++)
	{
		
		a = p * pow(1 + r, day);
		cout << day << "-------" << a << endl;
	}
	*/

	int t = 10;

	do
	{
		cout << t << endl;
		t--;
	}
	while(t < 20 && t != 0);



	//cout << ""R.GetSaying"" << endl;
	return 1;

	int age = 21;

	switch(age)
	{
		case 16:
			cout << "16"<< endl;
			break;
		case 18;
			cout << "18" << endl;
			break;
		case 21;
			cout << "21" << endl;
			break;
		default:
			cout << endl;
	}
}