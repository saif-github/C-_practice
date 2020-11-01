/*
C++ program to demonstrate public access modifiers


The data members and member functions declared as public
can be accesses by other classes and functions too.
*/

#include<iostream>
using namespace std;

//class defination
class Circle
{
public:
  double radius;

  double compute_area()
  {
    return 3.14*radius*radius;
  }
};

int main(){
  Circle obj;

  //accessing public data member outside the class
  obj.radius = 3;

  std::cout <<"Radius is ="<< obj.radius << '\n';
  std::cout << "Area is ="<<obj.compute_area() << '\n';

  return 0;
}
