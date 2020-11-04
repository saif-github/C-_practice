/*
In single inheritance one sub class is inherited by one base class
*/

//C++ program to explain single inheritance

#include <iostream>
using namespace std;

//Base class
class Vehicle{
public:
  Vehicle(){
    std::cout << "This is a vehicle" << '\n';
  }
};

class Car : public Vehicle{

};

int main(){
  //Creative objects of subclass will invoke
  // the constructor of the base class

  Car i10;

  return 0;
}
