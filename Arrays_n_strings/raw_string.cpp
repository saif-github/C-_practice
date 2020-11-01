//C++ program to demonstrate working of RAW stings
#include <iostream>
using namespace std;

int main()
{
  //A Normal string
  string string1 = "Hello \n world \n saif here\n";

  //A Raw string
  string string2 =R"(Hello \n world \n saif here\n)";

  std::cout << string1 << '\n';
  
  std::cout << string2 << '\n';

  return 0;
}
