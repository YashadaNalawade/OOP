#include <iostream>
#include <string>
using namespace std;

void demo()
{
	static int count = 0;
	cout << count << " ";

	// value is updated and will be carried to next function calls
	count = count + 1;
}

int main()
{
	demo();
	demo();
	demo();
	demo();
	demo();
	return 0;
}
