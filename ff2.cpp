#include <iostream>
using namespace std;

class base {
private:
	int private_variable = 10;

protected:
	int protected_variable = 99;

public:
	friend void friendFunction(base& obj);
};


// friend function definition
void friendFunction(base& obj)
{
	cout << "Private Variable: " << obj.private_variable
		<< endl;
	cout << "Protected Variable: " << obj.protected_variable;
}

// driver code
int main()
{
	base object1;
	friendFunction(object1);
	return 0;
}
