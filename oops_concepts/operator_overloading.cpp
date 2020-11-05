//C++ program to illustrate operator overloading
#include<iostream>
using namespace std;

class complex
{
  private:
     int real,imag;

  public:
    complex(int r=0,int i=0){
        real = r;
        imag = i;
    }

    complex operator +(complex const &obj)
    {
      complex res;
      std::cout << "--------inputs--------" << '\n';
      std::cout << "real=" << real << '\n';
      std::cout << "imag=" << imag << '\n';
      std::cout << "obj.real=" << obj.real << '\n';
      std::cout << "obj.imag=" << obj.imag << '\n';
      res.real = real + obj.real;
      res.imag = imag + obj.imag;
      return res;
    }

    void print(){
      std::cout << "-------Result----------" << '\n';
      std::cout << "real=" << real << '\n';
      std::cout << "imag=" << imag << '\n';
      std::cout << real << "+i" << imag << '\n';
    }
};

int main()
{
  complex c1(10,5),c2(2,4);
  complex c3 = c1 + c2; // An example call to "operator +"

  c3.print();
  return 0;
}

//need to learn operator overloading in detail
