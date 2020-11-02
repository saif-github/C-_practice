/*
The main aim of OOP is to bind together the data and the functions that operate on them
so that no other part of the code can access this data except that function.
*/

//Class and object in C++
#include<iostream>
#include<string>

using namespace std;

class Phone{
  //Attributes
  string p_name;
  string p_size;

public:
  Phone(string name,string size){
    p_name = name;
    p_name = size;
  }
  //Functionality
  void makecall(){
    std::cout << "Making call Using" << p_name << '\n';
  }

  void receiveCall(){
    std::cout << "Receiving Call Using" << p_name << '\n';
  }
};

int main(){
  cout<<endl; 
Phone iphone("Iphone_X","1000x500");
  iphone.makecall();
  iphone.receiveCall();

  cout<<endl;

  Phone gPixel("Google pixel 2 XL","2000x700");
  gPixel.makecall();
  gPixel.receiveCall();

  cout<<endl;
  return 0;
}
