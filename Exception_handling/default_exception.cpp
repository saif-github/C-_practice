/*
Ex:
An int is thrown as an exception,but there is no catch block for int,
so catch(...) block will be executed.
*/

#include<iostream>
using namespace std;

int main()
{
  try {
    throw 10;
  }
  //There is no implicit conversion of type
  catch(char *excp){
    std::cout << "Cought" << '\n';
  }
  catch(...){
    std::cout << "Default Exception" << '\n';
  }
  return 0;
}
