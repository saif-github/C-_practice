#include<iostream>
using namespace std;

int main()
{
  int x=10;

  //ref is a refrence to x
  int& ref = x;

  //Value of x is now changed to 20
  ref=20;
  std::cout << "x="<< x << '\n';

  //Value of x is now changed to 30
  x=30;
  std::cout << "ref = " << x << '\n';

  return 0;
}
