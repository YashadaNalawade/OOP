// C++ program to implement the above approach
#include<iostream>
using namespace std;

class Employee
{
  int id;
  char name[30];
  public:
  
  void getdata()
  {
    cout << "Enter Id : ";
    cin >> id;
    cout << "Enter Name : ";
    cin >> name;
  }
  
  void putdata()
  {
    cout << id << " ";
    cout << name << " ";
    cout << endl;
  }
};


int main()
{
  // This is an array of objects having maximum limit of 30 Employees
  Employee emp[2]; 
  int n, i;
  cout << "Enter Number of Employees - ";
  cin >> n;
  
  // Accessing the function
  for(i = 0; i < n; i++) 
    emp[i].getdata();
  
  cout << "Employee Data - " << endl;
  
  // Accessing the function
  for(i = 0; i < n; i++) 
    emp[i].putdata();
}
