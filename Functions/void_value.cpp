//C++ code to demonstrate void() returning a void value

#include<iostream>
using namespace std;

//Driver void() returning a void value
void test()
{
  std::cout << "HELL-O" << '\n';

//Returning a void value
  return (void)"Doesn't print";
}
int main()
{
  test();
  return 0;
}
