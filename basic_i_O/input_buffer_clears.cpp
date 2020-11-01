//C++ code to explain why not clearing the input buffer causes undesired outputs

#include<iostream>

//for <streamsize>
#include<ios>

//for mumeric limits
#include<limits>

using namespace std;

int main()
{
  int a;
  char ch[80];

  //Enter input from user
  // - 4 for example

  cin >> a;

//discards the input buffer
  cin.ignore(numeric_limits<streamsize>::max(),'\n');

  //Get input from user -
  //"Hello folks " for example
  cin.getline(ch,80);

  //prints 4
  cout << a << endl;

  //Printing string : This will print the string now
cout << ch << endl;

return 0;
}
