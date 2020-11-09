//Catching base and derived classes as exceptions
/*
If both base and derived classes are caught as exception then catch block
of derived class must appear before the base class.

if we put base class first then the derived class catch block will never be readced.

*/

#include<iostream>
using namespace std;

class base
{

};

class derived : public base
{

};

int main(){
  derived d;

  //some other stuff
  try{
    //some monitored code
    throw d;
  }
  catch(base b){
    std::cout << "Caught base exception" << '\n';
  }
  catch(derived d){   //This catch block is NEVER executed
    std::cout << "caught derived exception" << '\n';
  }
  return 0;
}
