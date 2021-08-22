//C++ program to demonstrate working of RAW stings
/*

In C++, to escape characters like “\n” we use an extra “\”.
From C++ 11, we can use raw strings in which escape characters (like \n \t or \” )
are not processed. The syntax of raw string is that the literal starts with R”( and ends in )”.
*/

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
