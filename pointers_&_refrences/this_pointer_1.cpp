//When the local variable name is same as a member's name

#include<iostream>
using namespace std;

class Test
{
private:
  int x;
public:
  void setx (int x)
  {
    //The 'this' pointer is used to retreive the object's x
    //hidden by local variable 'x'
    this->x = x;
  }
  void print(){cout << "x = "<< x << endl;}
};

int main()
{
  Test obj;
  int x= 20;
  obj.setx(x);
  obj.print();
  return 0;
}
