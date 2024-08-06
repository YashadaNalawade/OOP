// The same function name can be used with different parameters (different type or number of parameters) 
// within the same scope. The compiler determines which function to call based on the function signature.

#include <iostream>
using namespace std;

class Print {
public:
    void show(int i) {
        cout << "Integer: " << i << endl;
    }

    void show(double f) {
        cout << "Double: " << f << endl;
    }

    void show(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Print p;
    p.show(10);       // Calls show(int)
    p.show(10.5);     // Calls show(double)
    p.show("Hello");  // Calls show(string)
    return 0;
}
