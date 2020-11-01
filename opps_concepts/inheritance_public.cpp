//C++ program to demonstrate implementation
//of inheritance

#include<bits/stdc++.h>
using namespace std;

//Base class
class parent
{
public:
  int id_p;
};

//sub class inheriting from Base class
class child : public parent
{
public:
  int id_c;
};

int main(){
  child obj1;

  //An object of class child has all the data members
  //and member functions of the class parent

  obj1.id_c = 7;
  obj1.id_p - 91;

  std::cout << "Child is is :"<< obj1.id_c << '\n';
  std::cout << "parent id is" << obj1.id_p << '\n';

return 0;
}
