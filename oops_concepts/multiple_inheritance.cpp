/*
Multiple inheritance is a feature in C++ where a class can inherit from othere class

*/
#include<iostream>
using namespace std;

//first base class
class vehicle{
public:
  vehicle()
  {
    std::cout << "This is a Vehicle" << '\n';
  }
};

class four_wheeler{
public:
  four_wheeler()
  {
    std::cout << "This is a four four_wheeler" << '\n';
  }
};

class cars : public vehicle,public four_wheeler
{

};


int main(){

  cars scarpio;

  return 0;
}
