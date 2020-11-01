/*
Notes:
1. unique pointer is a class template.
2. unique pointer is one of the smart pointer providded by C++11 to prevent memory leaks.
3. unique pointer wraps a raw pointer in it , and deallocates the raw pointer,
when unique_ptr object goes out of scope.
4. similar to the actual pointers we can use -> and * on object of unique_ptr,
  because it is overloaded in unique_ptr class.
5.When exceptions comes then also it will deallocates the memory hence no memory leak.
6.Not only objects we can create array of objects of unique_ptr.
*/

//Operations:
//release,reset,swap,get,get_deleter.

#include<iostream>
#include<memory>
using namespace std;

class Foo{
  int x;
public:
  explicit Foo(int x):x{x}{}
  int getX(){return x;}
};

int main()
{
  unique_ptr<Foo> p1 (new Foo(10));
  unique_ptr<Foo> p6 (new Foo(100));
  //unique_ptr<Foo> p2 = make_unique<Foo[]>(20);  //It is Exception safe

  std::cout << p1->getX() <<'\n';
  //std::cout << (*p2).getX() << '\n';
  //p1 =p6;  //FAIL: This will fail becuase you can not copy ownership.
  unique_ptr<Foo> p3 = std::move(p1);  //Pass because moving ownership is allowed

  std::cout << p3->getX() <<'\n';

  Foo*p = p3.get();

  std::cout << p->getX() <<'\n';
  std::cout << p3->getX() <<'\n';

  Foo* p4 = p3.release();

  return 0;
}
