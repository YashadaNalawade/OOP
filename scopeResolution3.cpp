// C++ program to show that :: can be used to access static
// members when there is a local variable with same name
#include<iostream>
using namespace std;

class base
{
    static int x; 
public:
    static int y; 

    void func(int x) 
    { 
    // We can access class's static variableceven if there is a local variable
    cout << "Value of static x is " << base::x;

    cout << "\nValue of local x is " << x; 
    }
};

// In C++, static members must be explicitly defined like this
int base::x = 1;
int base::y = 2;

int main()
{
    base obj;
    int x = 3 ;
    obj.func(x);

    cout << "\n y = " << base::y;

    return 0;
}
