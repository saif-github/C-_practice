/*
Fucnction overriding on the other hand occurs when a derived calss has a definition of
one of the member function of the base class.

Function overriding is nothing but Runtime polymorphism
*/

//C++ function for function overridding
#include<iostream>
using namespace std;

class base
{
public:
  //Explicit declarationa of member function print();
  //virtual void print();

  virtual void print()
  {
    std::cout << "print base class" << '\n';
  }

  void show()
    {
      std::cout << "show base class" << '\n';
    }
};

class derived : public base
{
public:

  //print is already virtual function in derived class,
  //we could also declared as virtual void print () explicitly
  void print()
  {
    std::cout << "print derived class" << '\n';
  }
  void show()
  {
    std::cout << "show derived class" << '\n';
  }
};

/*
//explicitly defined for print()
void base::print()
{
  std::cout << "print base class" << '\n';
}
*/

int main()
{
  base *bptr;
  derived d;
  bptr  = &d;

  //virtual function , binded at runtime
  bptr->print();

  //NoN-virtual function , binded at compile time
  bptr->show();

return 0;
}

//need to learn Function overriding or runtime polymorphism in detail
