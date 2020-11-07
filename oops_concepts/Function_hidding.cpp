//Function hiding in C++

#include <iostream>
using namespace std;
class Base{
  public :
  void fun(){std::cout << "void" << '\n';}
  int fun(int i)
  {
    std::cout << "Base" << '\n';
  }
};

class derived : public Base
{
public:

  //  int fun(int i) is hidden in derived class
  // To unhide this function in derived class we can use scope resolution operator
  //using Base::fun;  //resolving function scope

  int fun(char a)
  {
    std::cout << "derived" << '\n';
  }
};

int main(){
  derived hide_obj;

  //using scope resolution directly
  //hide_obj.Base::fun(1);

  hide_obj.fun(1);
  hide_obj.fun('a');

  //hide_obj.fun(); //void function conflicts with function in derived class

  return 0;
}
