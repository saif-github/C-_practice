/*
When there are multiple functions with the same name
but different numbers of parameters then these functions are said to be overloaded
*/

//C++ program to demonstrate function overloading
#include <iostream>
using namespace std;

class lamp
{
public:

//function with one parameter
  void brightness(int power)
  {
    std::cout << "value of lamp power is "<< power << '\n';
  }

//function with same name but different parameter type
  void brightness(double power)
  {
    std::cout << "value of lamp power is "<< power << '\n';
  }

//function with same name but different number of parameters
  void brightness(int power,int range)
  {
    std::cout << "value of lamp power and range is "<< power << ", "<< range << '\n';
  }
};

int main()
{
lamp syska;

//The first function is called
syska.brightness(50);

//The second function is called
syska.brightness(16.87);

//The third function is called
syska.brightness(50,100);

return 0;
}
