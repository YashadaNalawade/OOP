#include <iostream>
using namespace std;

class Rectangle {
private:
    int width, height;

public:
    // Parameterized constructor
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    int area() {
        return width * height;
    }
};

int main() {
    Rectangle rect(10, 5);

    cout << rect.area();

    return 0;
}
