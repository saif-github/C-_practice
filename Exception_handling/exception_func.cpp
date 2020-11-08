#include<iostream>
using namespace std;

//The function signature should be "void fun(int *ptr,int x)throw(int *,int)"

void fun(int *ptr,int x) throw(int*,int)
{
  if(ptr == NULL){
    throw ptr;
  }
  if(x == 0)
    throw x;
    /*some functionality*/
}

int main()
{
  try{
    fun(NULL,0);
  }
  catch(...){
    std::cout << "caught exception from fun()" << '\n';
  }
  return 0;
}
