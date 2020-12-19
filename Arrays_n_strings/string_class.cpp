//C++ code to demonstrate the working of getline(), push_back() and pop_back()
//to exectute program : g++ -std=c++11 string_class.cpp -o exe
#include<iostream>
#include<string>  // For string class

using namespace std;

int main(){

  // Declaring the string
  string str;

  getline(cin,str);

  std::cout << "The initial string is : ";
  std::cout << str << '\n';

//To inser a charecter at the end
  str.push_back('s');

  std::cout << "The string after push back : ";
  std::cout << str << '\n';

//Using the pop_back() to deleate a character
  str.pop_back();
  str.pop_back();

  std::cout << "The string after push back : ";
  std::cout << str << '\n';

  return 0;
}
