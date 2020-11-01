//C++ program to demonstrate vector of strings
#include <bits/stdc++.h>
using namespace std;

int main()
{
  //Declaring vector of string type
  vector<string> colour;

  //Initialize vector with strings using push_back
  colour.push_back("Blue");
  colour.push_back("green");
  colour.push_back("yellow");
  colour.push_back("Red");

  //Print strings stored in vector
  for(int i=0;i < colour.size();i++)
  cout << colour[i] << "\n";
}
