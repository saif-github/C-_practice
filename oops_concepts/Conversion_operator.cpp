/*
Conversion operator : we can also write convrsion operator that can be used to convert
from one type to another type.

Overloading conversion operator must be a member method.
other operator overloadings can be member methos or global method.
*/

#include<iostream>
using namespace std;

class Fraction
{
private:
  int num,den;
public:
  Fraction(int x,int y){num=x;den=y;}

  //Conversion operator : return float value of Fraction
  operator float() const{
    return float(num)/float(den);
  }
};

int main()
{
  Fraction f(2,5);
  float result = f;

  std::cout << "float conversion is "<< result << '\n';

return 0;
}
