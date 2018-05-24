#include <iostream> // includes functions for input output streams
#include <string> // includes functions for using strings
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
	private:
		// Properties
		string getName()
		{
			return name;
		}

		void setName(string given_name)
		{
			name = given_name;
		}

};

