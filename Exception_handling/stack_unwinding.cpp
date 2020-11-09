/*
The process of removing function entries from th function call stack at the runtime
is called stack unwinding.
stack unwinding is generally related to exception Handling.

In C++ ,when exception occurs, the function call stack is linearly searched for
the exception handler, and all the entries before the function with the exception handler
are removed from the function call stack.

So exception handling involves stack unwinding if exception is not handled in the same function.
*/

#include<iostream>
using namespace std;


//A simple function f1() that throws an int exception
void f1() throw(int){
  std::cout << "\nf1() start" << '\n';
  throw 100;
  std::cout << "\nf1() ends" << '\n'; //doesn't excute at all
}

void f2() throw(int){
  std::cout << "\nf2() start" << '\n';
  f1();
  std::cout << "\nf2() ends" << '\n'; //doesn't excute at all
}

void f3(){
  std::cout << "\nf3() start" << '\n';
  try{
    f2();
  }
  catch(int n)
  {
    std::cout << "Cought exception="<< n << '\n';
  }
  std::cout << "\nf3() ends" << '\n';
}

//A fuction to demonstrate the stack unwinding process
int main(int argc, char const *argv[]) {
    f3();

  return 0;
}
