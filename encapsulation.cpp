#include<iostream>
using namespace std;

class demo{
    int a = 2;
    int b = 3;
    
    public:
    void add()
    {
        cout<< a + b;
    }
};

int main()
{
    demo d;
    d.add();
    
}