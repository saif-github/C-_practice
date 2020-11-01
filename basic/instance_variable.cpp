//C++ program to demonstrate instance variable
#include<iostream>
using namespace std;

class Marks {
public:
  //These variables are instance variables
  //These variables are in class and are not inside any function like local variables.
  int engmarks;
  int mathmark;
  int phymarks;
};

int main(){

//first object
Marks obj1;
obj1.engmarks = 50;
obj1.mathmark = 90;
obj1.phymarks = 35;

//second object
Marks obj2;
obj2.engmarks = 60;
obj2.mathmark = 70;
obj2.phymarks = 80;

std::cout << "Marks of first object" << '\n';
std::cout <<"engmarks =" << obj1.engmarks << '\n';
std::cout <<"mathmark =" <<obj1.mathmark << '\n';
std::cout <<"phymarks =" <<obj1.phymarks << '\n';
std::cout << "Marks of second object" << '\n';
std::cout <<"engmarks =" << obj2.engmarks << '\n';
std::cout <<"mathmark =" <<obj2.mathmark << '\n';
std::cout <<"phymarks =" <<obj2.phymarks << '\n';

return 0;
}
