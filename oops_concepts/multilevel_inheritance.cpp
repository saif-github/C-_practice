/*
Multilevel inheritance : a derived class is created from another derived clas

*/
#include<iostream>
using namespace std;

//first base class
class personal_pc{
public:
  personal_pc()
  {
    std::cout << "This is a my personal PC" << '\n';
  }
};

class laptop : public personal_pc
{
public:
  laptop()
  {
    std::cout << "This laptop is my personal PC" << '\n';
  }
};

class Dell : public laptop
{
public:
  Dell(){
    std::cout << "Dell is my personal laptop" << '\n';
  }
};

int main(){

  Dell inspiron;

  return 0;
}
