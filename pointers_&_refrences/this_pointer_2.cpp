//When a reference to a local object is returned ,
//the returned reference can be used to "chain function calls"
// on a single object

/*
Notes:
0. This pointer is used to hold the address of current object
1.this pointer is the const pointer.
2.this pointer is passed as hidden argument to non-static member fuctions.
3.Compilers automatically changes all data member access with this pointer.
4.It is not passed in static member function.
*/

#include<iostream>
using namespace std;

class Test
{
private:
  int x;
  int y;
public:
  Test(int x=0,int y=0) {this->x=x;this->y=y;}
  Test &setx(int a){this->x=a;std::cout << "first" << '\n';return *this;}
  Test &setY(int b){this->y=b;std::cout << "second" << '\n';return *this;}  //just try with static function
  void print(){std::cout << "X="<< x <<" Y="<< y << '\n';}
};

int main()
{
  Test obj1(5,5);

  //Chained function calls. All calls modify the same object
  //as the same object is returned by reference
  obj1.setx(10).setY(20);

  obj1.print();
  return 0;
}
