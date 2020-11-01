/*
C++ program to demonstrate public access modifiers

The class members declared as private can only be accessed
by member functions inside the class.

*/

#include<iostream>
using namespace std;

//class defination
class Circle
{
private:
  double radius;

public:
  double compute_area(double r)
  {
    radius =r;

    double area = 3.14*radius*radius;

    std::cout << "Radius is :" << radius << '\n';
    std::cout << "Area is :"<< area << '\n';
  }
};

int main(){
  Circle obj;

//trying to access private data members
//directly outside the classes
  obj.compute_area(4.5);

  return 0;
}
