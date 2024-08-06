#include <iostream>
using namespace std;

class Parent {
public:
    void display()
    {
        cout << "Base Function" << endl;
    }
};

class Child : public Parent {
public:
    void display()
    {
        cout << "Derived Function" << endl;
    }
};

int main()
{
    Child c;
	Parent p;
	p.display();
    c.display();
    return 0;
}
