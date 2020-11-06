/*
Encapsulation is defined as wrapping up of data and information
under a single unit.
*/

//C++ program to explain Encapsulation

#include<iostream>
using namespace std;

class Encapsulation
{
private:
  //data hidden from outside world
  int x;
public:
  //Function to set value of variable x
  void set(int data)
  {
    x = data;
  }
  //Function to return value of variable x
  int get()
  {
    return x;
  }
};

int main()
{
  Encapsulation obj;

  obj.set(1000);

  std::cout << "encapsulated data ="<< obj.get() << '\n';

return 0;
}
