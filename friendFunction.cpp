// C++ program to create a global function as a friend
// function of some class
#include <iostream>
using namespace std;

class base {
private:
    int private_variable=2;

protected:
    int protected_variable=1;

public:
      
    // friend function declaration
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
