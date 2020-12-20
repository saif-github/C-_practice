/*
If we are using shared_ptr then more than one pointer can point to this
one object at a time and it'll maintain a Reference counter using use_count() method.

C+++11 statndard onwards support shared pointer
g++ -std=c++11  shared_ptr.cpp -o shared

*/

#include<iostream>
#include<memory>

using namespace std;

class Rectangle{
  int lenght;
  int breadth;

public:
  Rectangle(int l,int b){
    lenght = l;
    breadth = b;
  }

  int area(){
    return lenght * breadth;
  }
};

int main()
{
  shared_ptr<Rectangle> p1(new Rectangle(10,5));

  cout << p1->area() << endl;
  std::cout << "Use count =" << p1.use_count() << '\n';

  shared_ptr<Rectangle> p2;
  p2=p1;

  std::cout << p2->area() << '\n';
  std::cout << "Use count =" << p1.use_count() << '\n';

  shared_ptr<Rectangle> p3;
  p3=p1;

  std::cout << p2->area() << '\n';

  std::cout << "Use count =" << p1.use_count() << '\n';
  
  std::cout << p2.use_count() << '\n';
  std::cout << p3.use_count() << '\n';

  return 0;
}
