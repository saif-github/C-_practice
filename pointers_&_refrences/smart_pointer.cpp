/*
Notes:
1.Smart pointer is a class which wraps a raw pointer,to manage the lifetime of a pointer
2.The most fundamental job of a smart pointer is to remove the chances of memory leak.
3.It make sure that object is deleted if it is not refrence any more.
*/

#include<iostream>
using namespace std;

class MyInt{
public:
  explicit MyInt(int *p=NULL)
  {
    data = p;
  }

  ~MyInt(){delete data;}

//operator overloading
  int& operator * (){return *data;}
  
private:
  int *data;
};

int main()
{
  int *p = new int(10);
  MyInt myint = MyInt(p);
  std::cout << *myint << '\n';
  return 0;
}
