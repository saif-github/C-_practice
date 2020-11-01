//An example c++ program to demonstrate the use of wchar_t

#include<iostream>
using namespace std;

int main()
{
  wchar_t w = L'A';
  std::cout << "wide character value::" << w << endl ;
  std::cout << "Size of the wide char is :: " << sizeof(w) << '\n';
  return 0;
}
