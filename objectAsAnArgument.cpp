#include <iostream>
using namespace std;

class Example {
public:
	int a;

	// This function will take an object as an argument
	void add(Example E)
	{
		a = a + E.a;
	}
};

int main()
{

	// Create objects
	Example E1, E2;

	// Values are initialized for both objects
	E1.a = 50;
	E2.a = 100;

	cout << "Initial Values \n";
	cout << E1.a << "\n"
		<< E2.a
		<< "\n\n";

	// Passing object as an argument to function add()
	E2.add(E1);

	// Changed values after passing
	// object as argument
	cout << "New values \n";
	cout << E1.a << "\n"
		 << E2.a
		<< "\n\n";

	return 0;
}
