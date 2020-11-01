#include<iostream>
using namespace std;

class operation
{
  int a,b,add,mul,sub;
  float div;
public:
  void get();
  void sum();
  void difference();
  void division();
  void product();
};

inline void operation::get()
{
  std::cout << "Enter the first value:" << '\n';
  std::cin >> a;
  std::cout << "Enter the second value" << '\n';
  std::cin >> b;
}

inline void operation::sum()
{
  add = a+b;
  std::cout << "Addition of two numbers :" << a+b<<'\n';
}

inline void operation::difference()
{
  sub= a-b;
  std::cout << "difference of two numbers: " << a-b <<'\n';
}

inline void operation::division()
{
  div = a/b;
  std::cout << "Division of two numbers :" <<  a/b <<'\n';
}

inline void operation::product() {
  mul = a*b;
  std::cout << "Product of two numbers : " << a*b << '\n';
}

int main(){
  std::cout << "programming using inline function" << '\n';
  operation s;
  s.get();
  s.sum();
  s.difference();
  s.product();
  s.division();

  return 0;
}
