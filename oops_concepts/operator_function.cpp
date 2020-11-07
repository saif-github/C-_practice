//C++ program to demonstrate the use of global operator functiom
#include<iostream>
using namespace std;

class Complex
{
private:
  int real,imag;

public:
  Complex(int r=0,int i=0)
  {
    real = r;
    imag = i;
  }

  void print(void){
    std::cout << real << "+i"<< imag << '\n';
  }

//Global operator function is made as freind of this class so that it can access private numbers.
  friend Complex operator + (Complex const &,Complex const &);
};

Complex operator + (Complex const &c1,Complex const &c2)
{
return Complex(c1.real + c2.real , c1.imag + c2.imag);
}

int main()
{
  Complex p1(12,5),p2(6,3);
  Complex p3 = p1 + p2;

  p1.print();
  std::cout << " + " << '\n';
  p2.print();

  p3.print();

  return 0;
}
