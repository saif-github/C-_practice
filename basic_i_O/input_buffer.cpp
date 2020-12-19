//C++ code to explain why not clearing the input buffer causes undesired outputs

#include<iostream>
#include<vector>

using namespace std;

int main()
{
  int a;
  char ch[80];

  //Enter input from user
  // - 4 for example

  cin >> a;

//discards the input buffer and initial white spaces of the string
//cin>>ws;   //it works after uncommenting this

  //Get input from user -
  //"Hello folks " for example
  cin.getline(ch,80);

  //prints 4
  cout << a << endl;

  //Printing string : This does not print the string
cout << ch << endl;

return 0;
}
