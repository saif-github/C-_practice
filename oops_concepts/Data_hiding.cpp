//Data Hiding in c++

/*
DATA Hiding

Data hiding is about data members in classes, we keep the data member as private(generally) and this
is consider as data hiding.

It is not about hacking or something ,
It is about correctness of data nd preventing the accedential manipulation.
Ex : Audio player volume increase
*/

#include <iostream>
using namespace std;

class Audioplayer
{
  int volume;
public:
  void set_volume(int x)
  {
    if(x>=0 && x<= 100){
      volume = x;
      std::cout << "Set" << '\n';
    }else{
      std::cout << "can't set" << '\n';
    }
  }
};

int main()
{

  Audioplayer ipod;

  ipod.set_volume(15);
  ipod.set_volume(101);
  ipod.set_volume(-30);

  return 0;
}
