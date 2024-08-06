#include <iostream>
using namespace std;

class Sample {
	int id;

public:
	// parameterized constructor
	Sample(int x) 
    { 
        id = x; 
    }
	void display() 
    { 
        cout << "ID=" << id; 
    }
};

int main()
{
	Sample obj1(10);
	obj1.display();
	cout << endl;

	// creating an object of type Sample from the obj
	Sample obj2(obj1); // or obj2=obj1;
	obj2.display();
	return 0;
}
