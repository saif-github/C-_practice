/*
Data abstraction means displaying essential information and hidding the details.

*/

#include<iostream>
using namespace std;

class abstract{
private:
  int a,b;
public:
  //method to set values of private members
  void set(int x,int y)
  {
    a = x;
    b = y;
  }

  void display()
  {
    std::cout << "a ="<< a << '\n';
    std::cout << "b ="<< b << '\n';
  }
};

int main()
{
  abstract obj;
  obj.set(10,20);
  obj.display();

  return 0;
}
