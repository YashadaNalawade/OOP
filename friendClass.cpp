#include <iostream>
using namespace std;

class base {
private:
	int private_variable;

protected:
	int protected_variable;

public:
	base()
	{
		private_variable = 10;
		protected_variable = 99;
	}

	// friend class declaration
	friend class F;
};

// Here, class F is declared as a friend inside class GFG. Therefore, F is a friend of class GFG. 
// Class F can access the private members of class GFG.

class F {
public:
	void display(base& t) // reference to an object of type GFG i.e g 
	{
		cout << "The value of Private Variable = " << t.private_variable << endl;
		cout << "The value of Protected Variable = " << t.protected_variable;
	}
};

int main()
{
	base b;
	F fri;
	fri.display(b);
	return 0;
}
