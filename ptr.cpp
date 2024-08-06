#include <iostream>
using namespace std;

int main() {
    int var = 10;
    int *ptr = &var;  // Pointer ptr holds the address of var

    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << &var << endl;
    cout << "Pointer ptr: " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;

    return 0;
}
