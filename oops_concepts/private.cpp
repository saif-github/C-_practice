/*
C++ program to demonstrate public access modifiers

The class members declared as private can only be accessed
by member functions inside the class.


check private_2.cpp for private use.
*/

#include<iostream>
using namespace std;

//class defination
class Circle
{
private:
  double radius;

public:
  double compute_area()
  {
    return 3.14*radius*radius;
  }
};

int main(){
  Circle obj;

  //trying to access private data member outside the class
  obj.radius = 3;

  std::cout <<"Radius is ="<< obj.radius << '\n';

  std::cout << "Area is ="<<obj.compute_area() << '\n';

  return 0;
}
