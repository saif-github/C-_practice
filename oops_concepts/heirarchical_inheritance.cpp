/*
Heirarchechal inheritance :
more than one subclass is derived from one single base class.
*/

//C++ program to implement heirarchical inheritance
#include<iostream>
using namespace std;

class NAND_memory
{
public:
  NAND_memory()
  {
    std::cout << "This is the 3D NAND memory" << '\n';
  }
};

class BICS5_technology : public NAND_memory
{
public:
  BICS5_technology()
  {
    std::cout << "BICS5_technology is a 3D NAND_memory" << '\n';
  }
};

class BICS4_technology : public NAND_memory
{
public:
  BICS4_technology()
  {
    std::cout << "BICS4_technology is a 3D NAND_memory" << '\n';
  }
};

int main(){
  BICS4_technology product1;
  BICS5_technology product2;

  return 0;
}
