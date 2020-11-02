//C++ program to demonstrate constructors

#include<bits/stdc++.h>
using namespace std;

class employee
{
  public:
    unsigned int id;

//Default constructors
  employee(){
    std::cout << "Default counstructor called" << '\n';
    id=242;
  }

//Parameterized constructors
  employee(unsigned int x){
    std::cout << "Parameterized constructor called" << '\n';
    id=x;
  }
};

int main(){
  std::cout << endl;
  //object sandisk will call default constructor
  employee sandisk;
  std::cout << "employe id is : " << sandisk.id << '\n';

  std::cout << endl;

  //object wipro will call default constructor
  employee wipro(4342);
  std::cout << "employe id is : " << wipro.id <<'\n';

  std::cout << endl;
  return 0;
}
