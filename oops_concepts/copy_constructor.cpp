/*
A copy constructor is a member function which initialize an object
using another object of same class.
*/
#include<iostream>
using namespace std;

class point
{
private:
  int x,y;
public:
  point(int x1,int y1){
    x = x1;
    y = y1;
  }

  //copy constructor
  point(const point &p2)
  {
    x = p2.x;
    y = p2.y;
  }

  int getX(){
    return x;
  }
  int gety()
  {
    return y;
  }
};

int main(){
  point p1(10,15);    //Normal constructor is called here
  point p2 = p1;      //copy constructor is called here

  //Let us access values assigned by constructor
  std::cout << "p1.x ="<< p1.getX() << "\t" <<"p1.y = "<< p1.gety() << '\n';
  std::cout << "p2.x ="<< p2.getX() <<"\t" <<"p2.y = "<< p2.gety() << '\n';

  return 0;
}
