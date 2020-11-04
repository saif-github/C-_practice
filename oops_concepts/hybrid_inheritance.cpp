/*

Hybrid inheritance is implemented by combining more than one type of inheritance

Ex : Combining Heirarchical inheritance and Mupltiple inheritance
*/
#include<iostream>
using namespace std;

class RAM
{
public:
  RAM(){
      std::cout << "There is RAM in it" << '\n';
  }
};

class ROM
{
public:
  ROM(){
      std::cout << "There is ROM in it" << '\n';
  }
};

class Microcontroller : public RAM, public ROM
{
public:
  Microcontroller()
  {
    std::cout << "Microcontrollers have both ROM AND RAM inbuilt" << '\n';
  }
};

class Microprocessor : public RAM
{
public:
  Microprocessor(){
    std::cout << "Microprocessor have only RAM inbuilt" << '\n';
  }
};

int main(){
  Microcontroller TMS570;
  Microprocessor intelx86;

  return 0;
}
