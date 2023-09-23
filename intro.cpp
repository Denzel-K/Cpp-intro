#include <iostream>
#include <cmath>
using namespace std;
 // cout << << '\n';
int main()
{
  //Getting user input and displaying to the console (std::cin & std::cout)
  int  age;
  string name;
 
  cout << "Woza wozaa wozzaaa !!" << '\n';
  cout << "Enter your name" << '\n';
  getline (cin, name);
  cout << "Enter your age" << '\n';
  cin >> age;
  
  cout << "Hello " << name << ", you are " << age << " years old." <<'\n';
  cout << "Welcome to your first steps in learning the C++ Programming language." << '\n';
  
  //Arithmetic operators
  cout << "Lets do some math!" << '\n';
  
  double a, b;
  
  cout << "Enter a number" << '\n';
  cin >> a;
  cout << "Enter another number" << '\n';
  cin >> b;
  
  cout << "Here are some basic operations on the numbers you just entered:" << '\n';
  
  cout << "sum: " << a << " + " << b << "=" << a+b << '\n';
  cout << "Difference: " << a << " - " << b << " = " << a-b << " and " << b << " - " << a << " = " << b-a <<'\n';
  cout << "Product: " << a << "*" << b << "=" << a*b << '\n';
  cout << "Quotient: " << a << " / " << b << " = " << a/b << " and " << b << " / " << a << " = " << b/a <<'\n';
  //cout << "Modulus: " << a << " mod " << b << " = " << a%b << " and " << b << " mod " << a << " = " << b%a <<'\n';
  
  //Calculate hypotenuse 
  cout << "Now let's calculate the hypotenuse of a right angled triangle using the base and the height." << '\n';
  
  double base, height, hyp;
  
  cout << "Enter base value:" << '\n';
  cin >> base;
  cout << "Enter height value:" << '\n'; 
  cin >> height;
  
  hyp = sqrt ( pow(base, 2) + pow(height, 2));
  
  cout << "The hypotenuse is: " << hyp << '\n';
  
  
  return 0;
}