/*
Member functions in classes
> Inside class definition
> outside class defination

To define a member function outsid the class definition
we have to use the scope resolution :: operator
along with the- class name and function name.
*/

//C++ program to demonstrate function declaration outside class

#include<bits/stdc++.h>
using namespace std;

class laptop
{
public:
  unsigned int Pc_no;
  string pc_name;

  void set_pc_name(string);

  void set_pc_no(unsigned int num)
  {
    Pc_no=num;
    std::cout << "PC NO :" << Pc_no << '\n';
  }
};

void laptop::set_pc_name(string name){
  pc_name=name;
  std::cout << "PC_name :" << pc_name << '\n';
}

int main(){
  laptop dell;

  dell.set_pc_no(3468736);
  dell.set_pc_name("Workstation_1");

  std::cout << '\n';

  dell.set_pc_no(43942);
  dell.set_pc_name("Work_station_2");

  return 0;
}
