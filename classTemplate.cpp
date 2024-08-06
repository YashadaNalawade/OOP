#include <iostream>
using namespace std;

template <typename T>
class base 
{
private:
    T first;
    T second;

public:
    // Constructor
    base(T f, T s) {
        first = f;
        second = s;
    }

    // Method to get the first element
    T getFirst() {
        return first;
    }

    // Method to get the second element
    T getSecond() {
        return second;
    }
};

int main() 
{
    // Create an instance of Pair for integers - ooooooooobject!
    base<int> intPair(5, 10);

    cout << "First: " << intPair.getFirst() 
         << ", Second: " << intPair.getSecond() 
         << endl;

    base<double> doublePair(3.5, 7.2);

    cout << "First: " << doublePair.getFirst() 
         << ", Second: " << doublePair.getSecond() 
         << endl;

    return 0;
}
